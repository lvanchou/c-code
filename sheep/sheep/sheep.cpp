#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include"function.h"
#define itemcount 3
#define row 3
#define col 3

#pragma comment(lib, "winmm.lib")

//界面参数
IMAGE img_bk;
IMAGE img_item[itemcount];

const int WIDTH_bk = 400;
const int HEIGHT_bk = 760;
const int WIDTH = 48;
const int HEIGHT = 48;
const int inv = 48;

//加载图像函数
void loadImg()
{
	loadimage(&img_bk, "images/bk.png", WIDTH_bk, HEIGHT_bk);
	loadimage(img_item + 0, "images/tkg11.png", WIDTH, HEIGHT);
	loadimage(img_item + 1, "images/tkg21.png", WIDTH, HEIGHT);
	loadimage(img_item + 2, "images/tkg31.png", WIDTH, HEIGHT);
}

int main()
{
	srand((unsigned int)time(NULL));
	//界面生成
	initgraph(WIDTH_bk, HEIGHT_bk);
	loadImg();
	//音乐播放
	mciSendString(_T("open micc/tkg.mp3"), NULL, 0, NULL);
	mciSendString(_T("play micc/tkg.mp3"), NULL, 0, NULL);

	//初始化数组
	int map[row][col] = {0};
	int plot[7] = {0};

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			map[i][j] = i + 1;
		}
	}

	//打乱数组
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			//随机坐标生成
			int i1 = rand() % 3;
			int j1 = rand() % 3;
			//交换坐标
			int tem = map[i1][j1];
			map[i1][j1] = map[i][j];
			map[i][j] = tem;

		}
	}

	//找位置

	//横坐标
	int offsetx = (WIDTH_bk - (2 * inv + 3 * WIDTH)) / 2;
	//纵坐标
	int offsety = (HEIGHT_bk - (2 * inv + 3 * HEIGHT)) / 2;

	//绘制
	while (true)
	{
		BeginBatchDraw();

		//地图
		putimage(0, 0, &img_bk);
		//渲染游戏界面
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (map[i][j])
				{
					//开始渲染
					putimage(offsetx + j*(WIDTH + inv), offsety + i*(HEIGHT + inv),
						img_item + (map[i][j] - 1));
				}
			}
		}
		//渲染卡槽
		for (int i = 0; i < 7; i++)
		{
			if (plot[i])
			{
				putimage((i * 50) + 26, 620, img_item + (plot[i] - 1));
			}
		}
	
		EndBatchDraw();

		//点击操作
		ExMessage msg = { 0 };
		if (peekmessage(&msg) && msg.message == WM_LBUTTONDOWN)
		{
			//找每一个图标是否被点击
			for (int r = 0; r < row; r++)
			{
				for (int c = 0; c < col; c++)
				{
					int x = offsetx + c*(WIDTH + inv);
					int y = offsety + r*(HEIGHT + inv);

					if (msg.x > x && msg.x < x + WIDTH && msg.y > y && msg.y < y + WIDTH)
					{
						int col1 = (msg.x - offsetx) / (inv + WIDTH);
						int row1 = (msg.y - offsety) / (inv + HEIGHT);

						//添加到槽
						for (int i = 0; i < 7; i++)
						{
							if (plot[i] == 0)
							{
								plot[i] = map[row1][col1];
								break;
							}
						}

						//判断消除
						int count = 0;
						for (int i = 0; i < 7; i++){
							if (plot[i] == map[row1][col1])
							{
								count++;
							}
						}

						if (count == 3)
						{
							for (int i = 0; i < 7; i++)
							{
								if (plot[i] == map[row1][col1])
								{
									plot[i] = 0;
								}
							}
						}
						map[row1][col1] = 0;
					}
				}
			}
		}
	}

	return 0;
}