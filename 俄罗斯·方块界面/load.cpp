#include"load.h"


/***************************
 * 功能：欢迎页面
 * 输入：
 *		无
 * 返回：
 *		无
 **************************/
void welcome() {
	//1.初始化画布
	initgraph(550, 660);
	//2.设置窗口标题
	HWND window = GetHWnd();//获得窗口，获得当前窗口
	SetWindowText(window, _T("俄罗斯方块  小明来喽"));	//设置标题

	//3.设置游戏初始页面
	setfont(40, 0, _T("微软雅黑"));		//设置文本的字体样式(高，宽（0表示自适应），字体）
	setcolor(WHITE);	// 设置颜色
	outtextxy(205, 200, _T("俄罗斯方法"));

	setfont(20, 0, _T("楷体"));
	setcolor(WHITE);	// 设置颜色
	outtextxy(175, 300, _T("编程，从俄罗斯方块开始"));

	Sleep(3000);
}


