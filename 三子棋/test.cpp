#include"game.h"
int main(){
	int input = 0;
do {
	//打印菜单
	menu();
	printf("请选择>>");
	scanf_s("%d",&input);
	switch (input) {
	case 1:
		game();
		break;
	case 0:
		//退出游戏
		printf("退出游戏");
		break;
	}
} while (input);
return 0;
}