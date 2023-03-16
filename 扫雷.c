#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu() 
{
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
	printf("«Î—°‘Ò£∫");
	int i = 0;
	scanf("%d", &i);
	if (i == 1)
		game();
	else
		printf("”Œœ∑Ω· ¯\n");
	return 0;
}
