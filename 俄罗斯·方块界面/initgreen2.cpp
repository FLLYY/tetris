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
 * ���ܣ����ƶ�����Ϸ����
 * ���룺
 *		��
 * ���أ�
 *		��
 **************************/
void initGameSceen2() {
	char str[16];	//��ŷ���
	//1.����
	cleardevice();
	setbkcolor(RGB(228, 236, 243));
	// �ñ���ɫ�����Ļ
	cleardevice();
	//	setlinecolor(BLUE);    //Բ�����Ϊ��ɫ

	//2.������
//	setbkcolor(BLACK);
	setlinecolor(BLACK);
	rectangle(27, 27, 336, 635);	//���齵������
	rectangle(29, 29, 334, 633);	//���齵����ڿ�
	rectangle(370, 50, 515, 195);	//������ʾ���
	rectangle(372, 52, 513, 193);   //������ʾ�ڿ�

	setbkmode(TRANSPARENT);
	setfont(24, 0, "����");		//д����һ����
	settextcolor(LIGHTGRAY);	//��ɫ
	outtextxy(405, 215, "��һ����");

	settextcolor(RED);					//д����
	outtextxy(405, 280, "������");


	//��ָ����ʽ����scoreд��str
	sprintf_s(str, 16, "%d", score);

	//���������ַ���Ϊ���ַ�����֤outtextxy����д������str
//	outtextxy(415, 310, str);

	outtextxy(405, 375, "�ȼ���");	//�ȼ�

	//��ָ����ʽ����rankд��str
	sprintf_s(str, 16, "%d", rank);
	//���������ַ���Ϊ���ַ�����֤outtextxy����д������str
//	outtextxy(415, 405, str);

	settextcolor(BLUE);	//����˵��
	outtextxy(390, 475, "����˵��:");
	outtextxy(390, 500, "��: ��ת");
	outtextxy(390, 525, "��: �½�");
	outtextxy(390, 550, "��: ����");
	outtextxy(390, 575, "��: ����");
	settextcolor(YELLOW);    // ������ɫ
	setbkcolor(GREEN);
	setbkmode(OPAQUE);
	outtextxy(390, 600, "���ز˵�");



	//˫���ұ�
	setlinecolor(BLACK);
	rectangle(27 + R, 27, 336 + R, 635);	//���齵������
	rectangle(29 + R, 29, 334 + R, 633);	//���齵����ڿ�
	rectangle(370 + R, 50, 515 + R, 195);	//������ʾ���
	rectangle(372 + R, 52, 513 + R, 193);   //������ʾ�ڿ�

	setbkmode(TRANSPARENT);
	setfont(24, 0, "����");		//д����һ����
	settextcolor(LIGHTGRAY);	//��ɫ
	outtextxy(405 + R, 215, "��һ����");

	settextcolor(RED);					//д����
	outtextxy(405 + R, 280, "������");


	//��ָ����ʽ����scoreд��str
	sprintf_s(str, 16, "%d", score);

	//���������ַ���Ϊ���ַ�����֤outtextxy����д������str
//	outtextxy(415, 310, str);

	outtextxy(405 + R, 375, "�ȼ���");	//�ȼ�

	//��ָ����ʽ����rankд��str
	sprintf_s(str, 16, "%d", rank);
	//���������ַ���Ϊ���ַ�����֤outtextxy����д������str
//	outtextxy(415, 405, str);

	settextcolor(BLUE);	//����˵��
	outtextxy(390 + R, 475, "����˵��:");
	outtextxy(390 + R, 500, "��: ��ת");
	outtextxy(390 + R, 525, "��: �½�");
	outtextxy(390 + R, 550, "��: ����");
	outtextxy(390 + R, 575, "��: ����");
	settextcolor(YELLOW);    // ������ɫ
	setbkcolor(GREEN);
	setbkmode(OPAQUE);
	outtextxy(390 + R, 600, "���ز˵�");

	//�����·���
	nextblock();

	shuangrenGetMouce();

	Sleep(3000);
}


