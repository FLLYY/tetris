#include"paihang.h"





void paihanGetMouce()
{
	MOUSEMSG mouse;

	while (1)
	{
		mouse = GetMouseMsg();
		if (mouse.x >= 955 && mouse.x <= 1030 && mouse.y >= 780 && mouse.y <= 804 && mouse.uMsg == WM_LBUTTONDOWN)
		{
			//	closegraph();
			welcome();
			putimage(0, 0, &img[2]);
		}
	}

}

void paihang()
{
	setbkcolor(RGB(228, 236, 243));
	// 用背景色清空屏幕
	cleardevice();
	//	setlinecolor(BLUE);    //圆的填充为蓝色
	rectangle(0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN));


	setlinecolor(BLACK);
	rectangle(627, 207, 936, 815);	//方块降落框外框
	rectangle(629, 209, 934, 813);	//方块降落框内框
	
	settextstyle(20, 0, "DeJaVuFZJZ-Frms");
	settextcolor(YELLOW);    // 设置颜色
	setbkcolor(GREEN);
	setbkmode(OPAQUE);
	outtextxy(955, 780, "返回菜单");

	settextstyle(20, 0, "DeJaVuFZJZ-Frms");         //设置文本的字体样式(高，宽（0表示自适应），字体）
	settextcolor(RED);    // 设置颜色
	setbkmode(TRANSPARENT);
	outtextxy(670, 220, "ID");
	outtextxy(800, 220, "成绩");


	paihanGetMouce();

}