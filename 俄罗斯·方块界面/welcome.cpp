#include"welcome.h"




int getMouce()
{
	while (1)
	{
		MOUSEMSG mouse;
		mouse = GetMouseMsg();
		//������Ϸ
		if (mouse.x >= 670 && mouse.x <= 910 && mouse.y >= 200 && mouse.y <= 260 && mouse.uMsg == WM_LBUTTONDOWN)
		{
			initGameSceen1();
		}
		//������Ϸ
		if (mouse.x >= 670 && mouse.x <= 910 && mouse.y >= 300 && mouse.y <= 360 && mouse.uMsg == WM_LBUTTONDOWN)
		{
			initGameSceen2();
		}
		//���а�
		if (mouse.x >= 700 && mouse.x <= 880 && mouse.y >= 400 && mouse.y <= 460 && mouse.uMsg == WM_LBUTTONDOWN)
		{
			paihang();
		}
		//����
		if (mouse.x >= 730 && mouse.x <= 850 && mouse.y >= 500 && mouse.y <= 560 && mouse.uMsg == WM_LBUTTONDOWN)
		{

		}
		//�˳�
		if (mouse.x >= 730 && mouse.x <= 850 && mouse.y >= 600 && mouse.y <= 660 && mouse.uMsg == WM_LBUTTONDOWN)
		{
			closegraph();
		}


	}
}


/***************************
 * ���ܣ���ӭҳ��
 * ���룺
 *		��
 * ���أ�
 *		��
 **************************/
void welcome() {
	//1.��ʼ������
	initgraph(1920, 1080);
	//2.���ô��ڱ���
	HWND window = GetHWnd();//��ô��ڣ���õ�ǰ����
	//SetWindowText(window, "Tetris");	//���ñ���
	SetWindowLong(window, GWL_STYLE, GetWindowLong(window, GWL_STYLE) - WS_CAPTION);

	SetWindowPos(window, HWND_TOP, 0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN), SWP_SHOWWINDOW);

	setbkcolor(RGB(228, 236, 243));
	// �ñ���ɫ�����Ļ
	cleardevice();
	//	setlinecolor(BLUE);    //Բ�����Ϊ��ɫ
	rectangle(0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN));

	for (int i = 0; i < 8; i++)
	{
		char fileName[20] = "";
		sprintf(fileName, "%d.png", imgIndex[i]);
		loadimage(img + i, fileName);
	}
	//	putimage(0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN) , &img[1], 0, 0, SRCPAINT);

		//3.������Ϸ�˵�
	settextstyle(60, 0, "DeJaVuFZJZ-Frms");         //�����ı���������ʽ(�ߣ���0��ʾ����Ӧ�������壩
	settextcolor(YELLOW);    // ������ɫ
	setbkcolor(GREEN);
	setbkmode(OPAQUE);
	outtextxy(670, 200, "������Ϸ");
	outtextxy(670, 300, "������Ϸ");
	outtextxy(700, 400, "���а�");
	outtextxy(730, 500, "����");
	outtextxy(730, 600, "�˳�");

	getMouce();
	Sleep(3000);

}