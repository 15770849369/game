//����������
#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
#include<stdio.h>
void menu()//��ʼ����
{
	printf("                                            \n");
	printf("                 1.PLAY    2.EXIT           \n");
	printf("                                            \n");
}
void game()
{
	char who;
	char board[hang][lie] = { 0 };//�洢������Ϣ
	spaceboard(board,hang,lie);//��ʼ������
	prtboard(board, hang, lie);//��ӡ����
	while (1)//����
	{
		printf("\n��һغϣ�");
		player(board,hang,lie);//�������
		prtboard(board, hang, lie);
		who = iswin(board, hang, lie);
			if (who != 'd')
			{
				break;
			}
		printf("\n");
		printf("���Իغϣ�\n");
		computer(board, hang, lie);//��������
		prtboard(board, hang, lie);
		who = iswin(board, hang, lie);
			if (who != 'd')
			{
				break;
			}
	}
	if (who == 'a')
	{
		printf("���Ӯ");
	}
	else if (who == 'b')
	{
		printf("����Ӯ");
	}
	else
	{
		printf("ƽ��");
	}
}
void text()
{
	int input=1;
	while (input)
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		if (input == 1)
		{
			printf("��ʼ��Ϸ\n");
			game();
		}
		else if (input == 2)
		{
			printf("�˳���Ϸ");
			break;
		}
		else
		{
			printf("�������������ѡ��");
		}
	}
}
int main()
{
	text();
	return 0;
}
