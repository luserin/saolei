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