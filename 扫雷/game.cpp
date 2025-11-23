#include"game.h"
void menu() {
	printf("********************************************\n");
	printf("********1.开始游戏 0.退出游戏  *************\n");
	printf("********************************************\n");
}
void in(char arr[Rows][Cols], int row, int col,char flag) {
	int j = 0;
	int i = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			arr[i][j] = flag;
		}
	}
}
void dis(char arr[Rows][Cols], int row, int col) {
	int j = 0;
	int i = 0;
	printf("--------------------\n");
	for (i = 0; i <= row; i++) {
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <=row; i++) {
		printf("%d ", i);
		for (j = 1; j <=col; j++) {
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("--------------------\n");
}
void setmine(char arr[Rows][Cols],int row,int col){
	int count = easy_cout;
	int x = 0, y = 0;
	while (count) {
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (arr[x][y] == '0') {
			arr[x][y] = '1';
			count--;
		}
	}

}
int get_mine(char mine[Rows][Cols], int x, int y) {
	return(mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] + 
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] -
		8 * '0');
}
void Findmine(char mine[Rows][Cols],char show[Rows][Cols], int row, int col) {
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<Row*Col-easy_cout) {
		printf("请输入坐标>");
		scanf_s("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col) {
			if (show[x][y] != '*') {
				printf("重复输入\n");
			}
			else {
				if (mine[x][y] == '1') {
					printf("游戏失败\n");
					dis(mine, Row, Col);
					break;
				}
				else {
					//统计雷的个数
					int cout = get_mine(mine, x, y);
					show[x][y] = cout + '0';
					dis(show, Row, Col);
					win++;
				}

			}
		}
		else {
			printf("输入非法\n");
		}
	}
	if (win == Row * Col - easy_cout) {
		printf("WIN\n");
		dis(mine, Row, Col);
	}

}
void game()
{//初始化
	char mine[Rows][Cols] = { '0' };
	char show[Rows][Cols] = { '*' };
	in(mine, Rows, Cols,'0');
	in(show, Rows, Cols, '*');
	dis(show, Row, Col);
	//布雷
	setmine(mine, Row, Col);
//	dis(mine, Row, Col);
	//排雷
	Findmine(mine, show, Row, Col);

}
