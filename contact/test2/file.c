#include<stdio.h>

int main(void){
	//��������
	int rad;
	double cir;
	double squ;

	//��ʾ
	printf("�뾶>");

	//��ʽ������
	scanf("%d",&rad);

	//����
	cir=2*3.14*rad;
	squ=3.14*rad*rad;

	//��ʽ�����

	printf("��Բ�ܳ�Ϊ>%.2e\n��Բ���Ϊ>%.2e\n",cir,squ);

	return 0;
}