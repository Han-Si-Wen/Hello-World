#include"game.h"
int main() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		//打印菜单
		menu();
		printf("请选择>>");
		scanf_s("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			//退出游戏
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请输入0 OR 1\n");
		}
	} while (input);
	return 0;
}