#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS 1
#define hang 3
#define lie 3
//���Ӯ---a
//����Ӯ---b
//ƽ��-----c
//����-----d

//����
void spaceboard(char board[hang][lie], int Hang, int Lie);
void prtboard(char board[hang][lie], int Hang, int Lie);
void player(char board[hang][lie], int Hang, int Lie);
void computer(char board[hang][lie], int Hang, int Lie);
char iswin(char board[hang][lie], int Hang, int Lie);