#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define RANK 9
#define ROWS 11
#define RANKS 11
#define aim 80

void init_board(char str[ROWS][RANKS], int rows, int ranks,char s);
void show_board(char str[ROWS][RANKS], int row, int rank);
void set_mine(char str[ROWS][RANKS], int row, int rank);
void sweep_mine(char mine[ROWS][RANKS], char show[ROWS][RANKS],  int row, int rank);
