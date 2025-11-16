#pragma once
#define Row 3
#define Col 3
#include<stdio.h>
void menu();
void nih(char arr[Row][Col], int row, int col);
void dis(char arr[Row][Col], int row, int col);
void game(void);
void Player(char arr[Row][Col], int row, int col);
void AI(char arr[Row][Col], int row, int col);
char judge(char arr[Row][Col], int row, int col);