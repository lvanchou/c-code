#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include<stdlib.h>
#include<time.h>

void iniboard(char arr[row][col],int ROW,int COL)
{
	for (int i = 0; i <ROW;i++)
	{
		for (int j = 0; j < COL;j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void displayboard(char arr[row][col], int ROW, int COL)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (j != COL - 1)
			{
				printf(" %c |", arr[i][j]);
			}
			else{
				printf(" %c \n", arr[i][j]);
			}
		}
		if (i != ROW - 1)
		{
		for (int j = 0; j < COL; j++)
		{
			if (j != COL - 1)
			{
				printf("---|");
			}
			else
			{
				printf("---\n");
			}
		}
	}
	}
}

void player(char arr[row][col], int ROW, int COL, char sign)
{
	int x1 = 0;
	int y1 = 0;
	int x;
	int y;
	while (1)
	{
		scanf("%d%d", &x1, &y1);
		x = x1 - 1;
		y = y1 - 1;
		if (x >= 0 && x <= ROW-1 && y >= 0 && y <= COL-1){
			if (arr[x][y] == ' '){
				arr[x][y] = sign;
				break;
			}
			else
			{
				printf("该子已占用，请重新落子！\n");
			}
		}
		else
		{
			printf("非法坐标，请重新输入\n");
		}
	}
}

void computer(char arr[row][col], int ROW, int COL, char sign)
{
	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;
		if (arr[x][y] == ' '){
			arr[x][y] = sign;
			break;
		}
	}
}

char iswin(char arr[row][col], int ROW, int COL,int *count)
{
	(*count)++;
	for (int i = 0,j=0; i < row; i++,j++){
		if (arr[i][0] == arr[i][1] && arr[i][1]==arr[i][2]){
			return arr[i][0];
		}
		//else if ((*count) >= ROW*COL && (arr[0][j] != arr[1][j] || arr[1][j] != arr[2][j] || arr[0][j] != arr[2][j]) && (arr[i][0] != arr[i][1] || arr[i][1] != arr[i][2] || arr[i][0] != arr[i][2]) && ((arr[1][1] != arr[0][0] || arr[1][1] != arr[2][2] || arr[0][0] != arr[2][2]) && (arr[1][1] != arr[0][2] || arr[1][1] != arr[2][0] || arr[0][2] != arr[2][0])))
		//{
		//	return '=';
		//}
}
	for (int j = 0; j < row; j++){
		if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j]){
			return arr[0][j];
		}
	}
	if (arr[1][1] == arr[0][0] && arr[1][1] == arr[2][2]){
		return arr[1][1];
	}else if (arr[1][1] == arr[0][2] && arr[1][1] == arr[2][0]){
		return arr[1][1];
	}
	for (int i = 0, j = 0; i < row; i++, j++){
	if ((*count) >= ROW*COL && (arr[0][j] != arr[1][j] || arr[1][j] != arr[2][j] || arr[0][j] != arr[2][j]) && (arr[i][0] != arr[i][1] || arr[i][1] != arr[i][2] || arr[i][0] != arr[i][2]) && ((arr[1][1] != arr[0][0] || arr[1][1] != arr[2][2] || arr[0][0] != arr[2][2]) && (arr[1][1] != arr[0][2] || arr[1][1] != arr[2][0] || arr[0][2] != arr[2][0])))
	{
		return '=';
	}
	else{
		return ' ';
	}
	}
}

void game()
{
	int *count = &count;
	count = 0;
	char win = ' ';
	char arr[3][3];
	iniboard(arr,row,col);
	displayboard(arr, row, col);
	do{
		player(arr, row, col, playersign);
		win = iswin(arr, row, col,&count);
		
		if (win != ' '){
			printf("%c\n\n", win);
			displayboard(arr, row, col);
			printf("\n\n");
			break;
		}
		computer(arr, row, col, computersign);
		win = iswin(arr, row, col,&count);
		
		if (win != ' '){
			printf("%c\n\n", win);
			displayboard(arr, row, col);
			printf("\n\n");
			break;
		}
		displayboard(arr, row, col);
		printf("\n\n");
	} while (win == ' ');
	if (win == playersign){
		printf("玩家获胜\n\n");
	}
	else if (win == computersign){
		printf("电脑获胜\n\n");
	}
	else if (win == '='){
		printf("平局\n\n");
	}
}