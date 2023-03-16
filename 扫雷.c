#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu() 
{
	printf("**********************\n");
	printf("*******0.exit ********\n");
	printf("*******1.play ********\n");
	printf("**********************\n");
}
void game() 
{
	printf("游戏开始\n");

	
}
int main()
{//创建菜单
	menu();
	int input = 0;
	printf("请选择：\n");
	scanf("%d", &input);
	while (input) 
	{
		game();
		break;
	}
	printf("游戏结束！");
	return 0;
}