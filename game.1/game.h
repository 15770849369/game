#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1
#define hang 3
#define lie 3
//玩家赢---a
//电脑赢---b
//平局-----c
//继续-----d

//声明
void spaceboard(char board[hang][lie], int Hang, int Lie);
void prtboard(char board[hang][lie], int Hang, int Lie);
void player(char board[hang][lie], int Hang, int Lie);
void computer(char board[hang][lie], int Hang, int Lie);
char iswin(char board[hang][lie], int Hang, int Lie);