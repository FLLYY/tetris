#include"welcome.h"




int getMouce()
{
	while (1)
	{
		MOUSEMSG mouse;
		mouse = GetMouseMsg();
		//单人游戏
		if (mouse.x >= 670 && mouse.x <= 910 && mouse.y >= 200 && mouse.y <= 260 && mouse.uMsg == WM_LBUTTONDOWN)
		{
			initGameSceen1();
		}
		//多人游戏
		if (mouse.x >= 670 && mouse.x <= 910 && mouse.y >= 300 && mouse.y <= 360 && mouse.uMsg == WM_LBUTTONDOWN)
		{
			initGameSceen2();
		}
		//排行榜
		if (mouse.x >= 700 && mouse.x <= 880 && mouse.y >= 400 && mouse.y <= 460 && mouse.uMsg == WM_LBUTTONDOWN)
		{
			paihang();
		}
		//帮助
		if (mouse.x >= 730 && mouse.x <= 850 && mouse.y >= 500 && mouse.y <= 560 && mouse.uMsg == WM_LBUTTONDOWN)
		{

		}
		//退出
		if (mouse.x >= 730 && mouse.x <= 850 && mouse.y >= 600 && mouse.y <= 660 && mouse.uMsg == WM_LBUTTONDOWN)
		{
			closegraph();
		}


	}
}


/***************************
 * 功能：欢迎页面
 * 输入：
 *		无
 * 返回：
 *		无
 **************************/
void welcome() {
	//1.初始化画布
	initgraph(1920, 1080);
	//2.设置窗口标题
	HWND window = GetHWnd();//获得窗口，获得当前窗口
	//SetWindowText(window, "Tetris");	//设置标题
	SetWindowLong(window, GWL_STYLE, GetWindowLong(window, GWL_STYLE) - WS_CAPTION);

	SetWindowPos(window, HWND_TOP, 0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN), SWP_SHOWWINDOW);

	setbkcolor(RGB(228, 236, 243));
	// 用背景色清空屏幕
	cleardevice();
	//	setlinecolor(BLUE);    //圆的填充为蓝色
	rectangle(0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN));

	for (int i = 0; i < 8; i++)
	{
		char fileName[20] = "";
		sprintf(fileName, "%d.png", imgIndex[i]);
		loadimage(img + i, fileName);
	}
	//	putimage(0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN) , &img[1], 0, 0, SRCPAINT);

		//3.设置游戏菜单
	settextstyle(60, 0, "DeJaVuFZJZ-Frms");         //设置文本的字体样式(高，宽（0表示自适应），字体）
	settextcolor(YELLOW);    // 设置颜色
	setbkcolor(GREEN);
	setbkmode(OPAQUE);
	outtextxy(670, 200, "单人游戏");
	outtextxy(670, 300, "多人游戏");
	outtextxy(700, 400, "排行榜");
	outtextxy(730, 500, "帮助");
	outtextxy(730, 600, "退出");

	getMouce();
	Sleep(3000);

}