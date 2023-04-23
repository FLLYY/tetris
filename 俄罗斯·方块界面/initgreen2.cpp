#include"initgreen2.h"







void shuangrenGetMouce()
{
	MOUSEMSG mouse;

	while (1)
	{
		mouse = GetMouseMsg();
		if (mouse.x >= 390 && mouse.x <= 490 && mouse.y >= 600 && mouse.y <= 624 && mouse.uMsg == WM_LBUTTONDOWN)
		{
			//	closegraph();
			welcome();
			//putimage(0, 0, &img[2]);
		}
		else if (mouse.x >= 390+R && mouse.x <= 490+R && mouse.y >= 600 && mouse.y <= 624 && mouse.uMsg == WM_LBUTTONDOWN)
		{
			//	closegraph();
			welcome();
		//	putimage(0, 0, &img[2]);
		}
	}

}





/***************************
 * 功能：绘制多人游戏界面
 * 输入：
 *		无
 * 返回：
 *		无
 **************************/
void initGameSceen2() {
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
	rectangle(27, 27, 336, 635);	//方块降落框外框
	rectangle(29, 29, 334, 633);	//方块降落框内框
	rectangle(370, 50, 515, 195);	//方块提示外框
	rectangle(372, 52, 513, 193);   //方块提示内框

	setbkmode(TRANSPARENT);
	setfont(24, 0, "楷体");		//写“下一个”
	settextcolor(LIGHTGRAY);	//灰色
	outtextxy(405, 215, "下一个：");

	settextcolor(RED);					//写分数
	outtextxy(405, 280, "分数：");


	//按指定格式，将score写入str
	sprintf_s(str, 16, "%d", score);

	//这里设置字符集为多字符，保证outtextxy可以写出变量str
//	outtextxy(415, 310, str);

	outtextxy(405, 375, "等级：");	//等级

	//按指定格式，将rank写入str
	sprintf_s(str, 16, "%d", rank);
	//这里设置字符集为多字符，保证outtextxy可以写出变量str
//	outtextxy(415, 405, str);

	settextcolor(BLUE);	//操作说明
	outtextxy(390, 475, "操作说明:");
	outtextxy(390, 500, "↑: 旋转");
	outtextxy(390, 525, "↓: 下降");
	outtextxy(390, 550, "←: 左移");
	outtextxy(390, 575, "→: 右移");
	settextcolor(YELLOW);    // 设置颜色
	setbkcolor(GREEN);
	setbkmode(OPAQUE);
	outtextxy(390, 600, "返回菜单");



	//双人右边
	setlinecolor(BLACK);
	rectangle(27 + R, 27, 336 + R, 635);	//方块降落框外框
	rectangle(29 + R, 29, 334 + R, 633);	//方块降落框内框
	rectangle(370 + R, 50, 515 + R, 195);	//方块提示外框
	rectangle(372 + R, 52, 513 + R, 193);   //方块提示内框

	setbkmode(TRANSPARENT);
	setfont(24, 0, "楷体");		//写“下一个”
	settextcolor(LIGHTGRAY);	//灰色
	outtextxy(405 + R, 215, "下一个：");

	settextcolor(RED);					//写分数
	outtextxy(405 + R, 280, "分数：");


	//按指定格式，将score写入str
	sprintf_s(str, 16, "%d", score);

	//这里设置字符集为多字符，保证outtextxy可以写出变量str
//	outtextxy(415, 310, str);

	outtextxy(405 + R, 375, "等级：");	//等级

	//按指定格式，将rank写入str
	sprintf_s(str, 16, "%d", rank);
	//这里设置字符集为多字符，保证outtextxy可以写出变量str
//	outtextxy(415, 405, str);

	settextcolor(BLUE);	//操作说明
	outtextxy(390 + R, 475, "操作说明:");
	outtextxy(390 + R, 500, "↑: 旋转");
	outtextxy(390 + R, 525, "↓: 下降");
	outtextxy(390 + R, 550, "←: 左移");
	outtextxy(390 + R, 575, "→: 右移");
	settextcolor(YELLOW);    // 设置颜色
	setbkcolor(GREEN);
	setbkmode(OPAQUE);
	outtextxy(390 + R, 600, "返回菜单");

	//产生新方块
	nextblock();

	shuangrenGetMouce();

	Sleep(3000);
}


