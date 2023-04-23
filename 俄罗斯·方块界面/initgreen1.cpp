#include"initgreen1.h"








/***************************
 * 功能：初始化单人游戏场景
 * 输入：
 *		无
 * 返回：
 *		无
 **************************/
void initGameSceen1() {
	char str[16];	//存放分数
	//1.清屏
	cleardevice();
	setbkcolor(RGB(228, 236, 243));
	// 用背景色清空屏幕
	cleardevice();
	//	setlinecolor(BLUE);    //圆的填充为蓝色

	//2.画场景
//	setbkcolor(BLACK);
	setlinecolor(BLACK);
	rectangle(627, 207, 936, 815);	//方块降落框外框
	rectangle(629, 209, 934, 813);	//方块降落框内框
	rectangle(970, 230, 1115, 375);	//方块提示外框
	rectangle(972, 232, 1113, 373);   //方块提示内框

	setbkmode(TRANSPARENT);
	setfont(24, 0, "楷体");		//写“下一个”
	settextcolor(LIGHTGRAY);	//灰色
	outtextxy(955, 395, "下一个：");

	settextcolor(RED);					//写分数
	outtextxy(955, 460, "分数：");


	//按指定格式，将score写入str
	sprintf_s(str, 16, "%d", score);

	//这里设置字符集为多字符，保证outtextxy可以写出变量str
//	outtextxy(955, 490, str);

	outtextxy(955, 555, "等级：");	//等级

	//按指定格式，将rank写入str
	sprintf_s(str, 16, "%d", rank);
	//这里设置字符集为多字符，保证outtextxy可以写出变量str
//	outtextxy(955, 585, str);

	settextcolor(BLUE);	//操作说明
	outtextxy(955, 655, "操作说明:");
	outtextxy(955, 680, "↑: 旋转");
	outtextxy(955, 705, "↓: 下降");
	outtextxy(955, 730, "←: 左移");
	outtextxy(955, 755, "→: 右移");
	settextcolor(YELLOW);    // 设置颜色
	setbkcolor(GREEN);
	setbkmode(OPAQUE);
	outtextxy(955, 780, "返回菜单");

	danrenGetMouce();
	Sleep(3000);
}



void danrenGetMouce()
{
	MOUSEMSG mouse;

	while (1)
	{
		mouse = GetMouseMsg();
		if (mouse.x >= 955 && mouse.x <= 1055 && mouse.y >= 780 && mouse.y <= 804 && mouse.uMsg == WM_LBUTTONDOWN)
		{
			//	closegraph();
				welcome();
			putimage(0, 0, &img[2]);
		}
	}

}
