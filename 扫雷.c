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
	printf("��ѡ��");
	int i = 0;
	scanf("%d", &i);
	if (i == 1)
		game();
	else
		printf("��Ϸ����\n");
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
	printf("��Ϸ��ʼ\n");

	
}
int main()
{//�����˵�
	menu();
	int input = 0;
	printf("��ѡ��\n");
	scanf("%d", &input);
	while (input) 
	{
		game();
		break;
	}
	printf("��Ϸ������");
	return 0;
}
>>>>>>> 7234f0589197f54a0a6440681c2585df75eddbd8
