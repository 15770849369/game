#include "game.h"
#define _CRT_SECURE_NO_WARNINGS 1
void spaceboard(char board[hang][lie], int Hang, int Lie)//棋盘初始化
{
	int i, j;
	for (i = 0; i < Hang; i++)
	{
		for (j = 0; j < Lie; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void prtboard(char board[hang][lie], int Hang, int Lie)//打印棋盘
{
	int i;
	for (i = 0; i < Hang; i++)
	{
		int j = 0;
		for (j = 0; j < Lie; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < Lie - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i != Hang - 1)
		{
			for (j = 0; j < Lie; j++)
			{
				printf("___");
				if (j < Lie - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
		else
		{
			for (j = 0; j < Lie; j++)
			{
				printf("   ");
				if (j < Lie - 1)
				{
					printf("|");
				}
			}
		}
	}
}
void player(char board[hang][lie], int Hang, int Lie)//玩家下棋
{
	printf("\n请输入要下的坐标：");	
	while (1)
	{
	    int x, y;
	    scanf_s("%d%d",&x,&y);
        if (x > 0 && x <= Hang && y>0 && y <= lie)
		{
			if (board[x - 1][y - 1] == ' ')
			{
             board[x - 1][y - 1] = '*';
	         break;
			}
			else
			{
				printf("坐标已被占用，请重新输入！\n");
			}
		}
		else
		{
		    printf("输入值不合法，请重新输入!\n");
		}
	}
}
void computer(char board[hang][lie], int Hang, int Lie)//电脑下棋
{
	
	while (1)
	{
	    int x, y;
		srand((unsigned)time(NULL));
		x = rand() % 3;
		y = rand() % 3;
	    if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

char iswin(char board[hang][lie], int Hang, int Lie)
{
	int i,j,temp=1;
	for (i = 0; i < Hang; i++)//判断行
	{
		for (j = 0; j < Lie - 1; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] == '*')
			{
				temp++;
			}
			if (board[i][j] == board[i][j + 1] && board[i][j] == '#')
			{
				temp--;
			}
		}
		if (temp == 3)
		{
			return 'a';
		}
		else if (temp == -1)
		{
			return 'b';
		}
		else 
			return 'd';
	}
	for (j = 0; j < Lie; j++)//判断列
	{
		for (i = 0; i < Hang - 1; i++)
		{
			if (board[i][j] == board[i + 1][j] && board[i][j] == '*')
			{
				temp++;
			}
			if (board[i][j] == board[i + 1][j] && board[i][j] == '#')
			{
				temp--;
			}
		}
		if (temp == 3)
		{
			return 'a';
		}
		else if (temp == -1)
		{
			return 'b';
		}
		else 
			return 'd';
	}
	
}
