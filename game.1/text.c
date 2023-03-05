//测试三子棋
#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
#include<stdio.h>
void menu()//开始界面
{
	printf("                                            \n");
	printf("                 1.PLAY    2.EXIT           \n");
	printf("                                            \n");
}
void game()
{
	char who;
	char board[hang][lie] = { 0 };//存储棋子信息
	spaceboard(board,hang,lie);//初始化棋盘
	prtboard(board, hang, lie);//打印棋盘
	while (1)//下棋
	{
		printf("\n玩家回合：");
		player(board,hang,lie);//玩家下棋
		prtboard(board, hang, lie);
		who = iswin(board, hang, lie);
			if (who != 'd')
			{
				break;
			}
		printf("\n");
		printf("电脑回合：\n");
		computer(board, hang, lie);//电脑下棋
		prtboard(board, hang, lie);
		who = iswin(board, hang, lie);
			if (who != 'd')
			{
				break;
			}
	}
	if (who == 'a')
	{
		printf("玩家赢");
	}
	else if (who == 'b')
	{
		printf("电脑赢");
	}
	else
	{
		printf("平局");
	}
}
void text()
{
	int input=1;
	while (input)
	{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		if (input == 1)
		{
			printf("开始游戏\n");
			game();
		}
		else if (input == 2)
		{
			printf("退出游戏");
			break;
		}
		else
		{
			printf("输入错误，请重新选择");
		}
	}
}
int main()
{
	text();
	return 0;
}
