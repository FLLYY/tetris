#ifndef _GAME_H_
#define _GAME_H_
#define _CRT_SECURE_NO_WARNINGS

#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

#include"welcome.h"
#include"initgreen1.h"
#include"initgreen2.h"
#include"paihang.h"
#include"draw.h"

#define BLOCK_COUNT 5
#define BLOCK_WIDTH 5
#define BLOCK_HEIGHT 5
#define UNIT_SIZE 20

#define START_X 130		//方块降落框，方块降落起始位置
#define START_Y 30


#define	BLOCK_UP 0;
#define	BLOCK_RIGHT 1;
#define	BLOCK_LEFT 2;
#define	BLOCK_DOWN 3;


extern int imgIndex[8]; //用于读取文件
extern IMAGE img[8];
extern int rank ;
extern int score ;
extern int R ;
extern int color[5];
extern int NextIndex ;		//下一个方块
extern int BlockIndex ;
extern int block[BLOCK_COUNT * 4][BLOCK_WIDTH][BLOCK_HEIGHT];

#endif#pragma once
