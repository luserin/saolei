#define _CRT_SECURE_NO_WARNINGS
<<<<<<< HEAD
=======

>>>>>>> 7234f0589197f54a0a6440681c2585df75eddbd8
#include"game.h"

void menu() 
{
<<<<<<< HEAD
	printf("************************\n");
	printf("******* 1.play *********\n");
	printf("******* 0.exit *********\n");
	printf("************************\n");
}
void game()
{
	char mine[ROWS][RANKS];
	char show[ROWS][RANKS];
	init_board(mine,ROWS,RANKS,'0');
	init_board(show, ROWS, RANKS, '*');
	set_mine(mine, ROW, RANK);
	show_board(mine, ROW, RANK);
	sweep_mine(mine, show, ROW, RANK);
}
int main() 
{
	srand((unsigned)time(NULL));
	menu();
	printf("请选择：");
	int i = 0;
	scanf("%d", &i);
	if (i == 1)
		game();
	else
		printf("游戏结束\n");
	return 0;
}
=======
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
>>>>>>> 7234f0589197f54a0a6440681c2585df75eddbd8
