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
	// �ñ���ɫ�����Ļ
	cleardevice();
	//	setlinecolor(BLUE);    //Բ�����Ϊ��ɫ
	rectangle(0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN));


	setlinecolor(BLACK);
	rectangle(627, 207, 936, 815);	//���齵������
	rectangle(629, 209, 934, 813);	//���齵����ڿ�
	
	settextstyle(20, 0, "DeJaVuFZJZ-Frms");
	settextcolor(YELLOW);    // ������ɫ
	setbkcolor(GREEN);
	setbkmode(OPAQUE);
	outtextxy(955, 780, "���ز˵�");

	settextstyle(20, 0, "DeJaVuFZJZ-Frms");         //�����ı���������ʽ(�ߣ���0��ʾ����Ӧ�������壩
	settextcolor(RED);    // ������ɫ
	setbkmode(TRANSPARENT);
	outtextxy(670, 220, "ID");
	outtextxy(800, 220, "�ɼ�");


	paihanGetMouce();

}