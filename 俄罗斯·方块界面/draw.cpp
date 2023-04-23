#include"draw.h"










/*****************************************
 * 功能：在提示框 与 降落框的起始位置画方块
 * 输入：
 *		x,y - 方块的坐标（二维数组左上角位置）
 * 返回：
 *		无
 ****************************************/
void drawBlock(int x, int y) {
	setcolor(color[NextIndex]);
	setfont(23, 0, "楷体");
	for (int i = 0; i < BLOCK_HEIGHT; ++i) {
		for (int j = 0; j < BLOCK_WIDTH; ++j) {
			if (block[NextIndex * 4][i][j] == 1) {
				int x2 = x + j * UNIT_SIZE;
				int y2 = y + i * UNIT_SIZE;
				outtextxy(x2, y2, "■");
			}
		}
	}
}



/*****************************************
 *功能：绘制下降过程中的方块
 *输入：
 *		x,y - 方块的坐标（二维数组左上角位置）
 *		block_dir_t - 方块方向
 * 返回：
 *		无
 ****************************************/
void drawBlock(int x, int y, block_dir_t dir) {
	setcolor(color[BlockIndex]);
	setfont(23, 0, "楷体");
	int id = BlockIndex * 4 + dir;
	for (int i = 0; i < BLOCK_HEIGHT; ++i) {
		for (int j = 0; j < BLOCK_WIDTH; ++j) {
			if (block[id][i][j] == 1) {
				//擦除该方块的第i行第j列
				outtextxy(x + j * UNIT_SIZE, y + i * UNIT_SIZE, "■");
			}
		}
	}
}

/*****************************************
 * 功能：清除降落过程中的方块
 * 输入：
 *		x,y - 方块的坐标（二维数组左上角位置）
 *		block_dir_t - 方块方向
 * 返回：
 *		无
 ****************************************/
void clearBlock(int x, int y, block_dir_t blockDir) {
	setcolor(BLACK);
	//	setfont(23, 0, "楷体");
	int id = BlockIndex * 4 + blockDir;
	for (int i = 0; i < BLOCK_HEIGHT; ++i) {
		for (int j = 0; j < BLOCK_WIDTH; ++j) {
			if (block[id][i][j] == 1) {
				int x2 = x + j * UNIT_SIZE;
				int y2 = y + i * UNIT_SIZE;
				outtextxy(x2, y2, "■");
			}
		}
	}
}


/*****************************************
 * 功能：清空方块提示框里的方块
 * 输入：
 *		无
 * 返回：
 *		无
 ****************************************/
void clearBlock() {
	setcolor(BLACK);
	setfont(23, 0, "楷体");
	for (int i = 0; i < BLOCK_HEIGHT; ++i) {
		for (int j = 0; j < BLOCK_WIDTH; ++j) {
			int x = 391 + j * UNIT_SIZE;
			int y = 71 + i * UNIT_SIZE;
			outtextxy(x, y, "■");
		}
	}
}


/*****************************************
 *功能：方块提示框中产生新方块
 *输入：
 *		无
 *返回：
 *		无
 ****************************************/
void nextblock() {
	clearBlock();
	//产生随机数，随机选择方块
	srand((unsigned)time(NULL));	//使用时间函数的返回值，来作为随机种子
	NextIndex = rand() % BLOCK_COUNT;	//产生0~5的随机数
	drawBlock(391, 71);
}

/*****************************************
 *功能：绘制刚从顶部降落的方块，更新提示框内的方块，调用方块降落函数move()
 *输入：
 *		无
 * 返回：
 *		无
 ****************************************/
void newblock() {
	BlockIndex = NextIndex;
	//绘制刚从顶部下降的方块
	drawBlock(START_X, START_Y);
	//让新出现方块暂停一会
	Sleep(200);
	//右上角区域绘制下一个方块
	nextblock();
	//方块降落
//	move();
}