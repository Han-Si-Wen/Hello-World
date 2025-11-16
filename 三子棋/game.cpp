#include"game.h"
#include <cstdlib>
#include<time.h>
void menu() {
	printf("********************************************\n");
	printf("********1.开始游戏 0.退出游戏  *************\n");
	printf("********************************************\n");
}
void nih(char arr[Row][Col], int row, int col) {
	int i, j ;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			arr[i][j] = ' ';
		}


	}
}
void dis(char arr[Row][Col], int row, int col) {
	int i = 0, j = 0, k = 0;
	for (k = 0; k < row; k++) {
		for (j = 0; j < col; j++) {
			printf(" %c ", arr[k][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (k < row - 1) {
			for (i = 0; i < col; i++) {
				printf("---");
				if (i < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void Player(char arr[Row][Col], int row, int col) {
	int x = 0, y = 0;
	printf("玩家下棋>\n");
	while (1) {
		printf("请输入坐标>");
		scanf_s("%d %d",&x,&y);
		if (x <=row && x>=1 && y >=1 && y <= col) {
			if (arr[x-1][y-1] == ' ') {
				arr[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("坐标已被占用");
			}
		}
		else {
			printf("非法输入,请重新输入\n");
		}

	}

}
void AI(char arr[Row][Col], int row, int col) {
	int x = 0, y = 0;
	printf("电脑下棋>\n");
	while (1) {
		x = rand() % row;
		y = rand() % col;
		if (arr[x][y] == ' ') {
			arr[x][y] = '#';
			break;
		}
	}
}
char judge(char arr[Row][Col], int row, int col) {
	int i = 0;
	int j = 0;
	int cc = 0;
	for (i = 0; i < row; i++) {
		if (arr[i][0] == arr[i][1]&& arr[i][1] == arr[i][2]&&arr[i][1]!=' ') {
			cc = 1;
			break;
		}
	}
	for (j = 0; j < col; j++) {
		if (arr[0][j] == arr[1][j]&& arr[1][j] == arr[2][j]&&arr[0][j]!=' ') {
			cc = 1;
			break;
		}
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]&&arr[0][0]!=' ' || arr[2][0] == arr[1][1]&& arr[1][1] == arr[0][2]&&arr[2][0]!=' ') {
		cc = 1;
	}
	return cc;
}
void game(void) {
	srand((unsigned int)time(NULL));
	//游戏开始
	char arr[Row][Col] = { 0 };
    //初始化数组
	nih(arr, Row, Col);
	//打印棋盘
	dis(arr, Row, Col);
	while (1) {
		int flag = 0;
		int ret = 0;
		 Player(arr, Row, Col);
		 dis(arr, Row, Col);
		 ret = judge(arr,Row,Col);
		 if (ret == 1 && flag == 0) {
			 printf("玩家胜利");
			 break;
		 }
		 flag = 1;
		 AI( arr, Row, Col);
		 dis(arr, Row, Col);
		 ret = judge(arr, Row, Col);
		 if (ret == 1 && flag == 1) {
			 printf("电脑胜利");
			 break;
		 }
	}
}