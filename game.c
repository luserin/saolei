#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void init_board(char str[ROWS][RANKS], int rows, int ranks,char s)
{
	int i = 0; int j = 0;
	for(i=0;i<rows;i++)
		for (j = 0; j < ranks; j++)
		{
			str[i][j] = s;
		}
}
void show_board(char str[ROWS][RANKS], int row, int rank)
{
	int i = 0; int j = 0;
	printf("---------ɨ��-----------\n");
	for (i = 0; i <= row; i++)
		printf("%d ", i);
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= rank; j++)
		{
			printf("%c ", str[i][j]);
		}
		printf("\n");
	}
	printf("---------ɨ��-----------\n");
}
void set_mine(char str[ROWS][RANKS], int row, int rank)
{
	int x = 0; int y = 0;
	int count = 0;
	while (count<aim)
	{
		x = rand() % row+1; y = rand() % rank+1;
		if (str[x][y]=='0')
		{
			str[x][y] = '1';
			count++;
		}
	}

}
void sweep_mine(char mine[ROWS][RANKS], char show[ROWS][RANKS], int row, int rank)
{
	int x = 0; int y = 0;
	printf("���������꣺");
	int count = 0;
	while (count<row*rank-aim)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= rank)
		{
			if (mine[x][y] == '1')
			{
				printf("�Ѳ��ף���ը���ˣ�\n");
				break;
			}
			if (mine[x][y] == '0')
				//�Ų����������Χ�м�����
			{
				show[x][y] = find_mine(mine, x, y) + '0';
				count++;
				show_board(show, ROW, RANK);

			}
		}
		if (x<1 || x>row || y<1 || y>rank)
			printf("���������������������룺");
	}
	if (count == row * rank - aim)
		printf("��ϲͨ�أ�");
}
int find_mine(char str[ROWS][RANKS], int x, int y)
{
	return str[x - 1][y - 1] + str[x - 1][y] + str[x - 1][y + 1] + str[x][y - 1] + str[x][y + 1] + str[x + 1][y - 1] + str[x + 1][y] + str[x + 1][y + 1]-8*'0';
}
