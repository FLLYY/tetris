#include"draw.h"










/*****************************************
 * ���ܣ�����ʾ�� �� ��������ʼλ�û�����
 * ���룺
 *		x,y - ��������꣨��ά�������Ͻ�λ�ã�
 * ���أ�
 *		��
 ****************************************/
void drawBlock(int x, int y) {
	setcolor(color[NextIndex]);
	setfont(23, 0, "����");
	for (int i = 0; i < BLOCK_HEIGHT; ++i) {
		for (int j = 0; j < BLOCK_WIDTH; ++j) {
			if (block[NextIndex * 4][i][j] == 1) {
				int x2 = x + j * UNIT_SIZE;
				int y2 = y + i * UNIT_SIZE;
				outtextxy(x2, y2, "��");
			}
		}
	}
}



/*****************************************
 *���ܣ������½������еķ���
 *���룺
 *		x,y - ��������꣨��ά�������Ͻ�λ�ã�
 *		block_dir_t - ���鷽��
 * ���أ�
 *		��
 ****************************************/
void drawBlock(int x, int y, block_dir_t dir) {
	setcolor(color[BlockIndex]);
	setfont(23, 0, "����");
	int id = BlockIndex * 4 + dir;
	for (int i = 0; i < BLOCK_HEIGHT; ++i) {
		for (int j = 0; j < BLOCK_WIDTH; ++j) {
			if (block[id][i][j] == 1) {
				//�����÷���ĵ�i�е�j��
				outtextxy(x + j * UNIT_SIZE, y + i * UNIT_SIZE, "��");
			}
		}
	}
}

/*****************************************
 * ���ܣ������������еķ���
 * ���룺
 *		x,y - ��������꣨��ά�������Ͻ�λ�ã�
 *		block_dir_t - ���鷽��
 * ���أ�
 *		��
 ****************************************/
void clearBlock(int x, int y, block_dir_t blockDir) {
	setcolor(BLACK);
	//	setfont(23, 0, "����");
	int id = BlockIndex * 4 + blockDir;
	for (int i = 0; i < BLOCK_HEIGHT; ++i) {
		for (int j = 0; j < BLOCK_WIDTH; ++j) {
			if (block[id][i][j] == 1) {
				int x2 = x + j * UNIT_SIZE;
				int y2 = y + i * UNIT_SIZE;
				outtextxy(x2, y2, "��");
			}
		}
	}
}


/*****************************************
 * ���ܣ���շ�����ʾ����ķ���
 * ���룺
 *		��
 * ���أ�
 *		��
 ****************************************/
void clearBlock() {
	setcolor(BLACK);
	setfont(23, 0, "����");
	for (int i = 0; i < BLOCK_HEIGHT; ++i) {
		for (int j = 0; j < BLOCK_WIDTH; ++j) {
			int x = 391 + j * UNIT_SIZE;
			int y = 71 + i * UNIT_SIZE;
			outtextxy(x, y, "��");
		}
	}
}


/*****************************************
 *���ܣ�������ʾ���в����·���
 *���룺
 *		��
 *���أ�
 *		��
 ****************************************/
void nextblock() {
	clearBlock();
	//��������������ѡ�񷽿�
	srand((unsigned)time(NULL));	//ʹ��ʱ�亯���ķ���ֵ������Ϊ�������
	NextIndex = rand() % BLOCK_COUNT;	//����0~5�������
	drawBlock(391, 71);
}

/*****************************************
 *���ܣ����ƸմӶ�������ķ��飬������ʾ���ڵķ��飬���÷��齵�亯��move()
 *���룺
 *		��
 * ���أ�
 *		��
 ****************************************/
void newblock() {
	BlockIndex = NextIndex;
	//���ƸմӶ����½��ķ���
	drawBlock(START_X, START_Y);
	//���³��ַ�����ͣһ��
	Sleep(200);
	//���Ͻ����������һ������
	nextblock();
	//���齵��
//	move();
}