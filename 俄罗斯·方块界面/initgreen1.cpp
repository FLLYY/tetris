#include"initgreen1.h"








/***************************
 * ���ܣ���ʼ��������Ϸ����
 * ���룺
 *		��
 * ���أ�
 *		��
 **************************/
void initGameSceen1() {
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
	rectangle(627, 207, 936, 815);	//���齵������
	rectangle(629, 209, 934, 813);	//���齵����ڿ�
	rectangle(970, 230, 1115, 375);	//������ʾ���
	rectangle(972, 232, 1113, 373);   //������ʾ�ڿ�

	setbkmode(TRANSPARENT);
	setfont(24, 0, "����");		//д����һ����
	settextcolor(LIGHTGRAY);	//��ɫ
	outtextxy(955, 395, "��һ����");

	settextcolor(RED);					//д����
	outtextxy(955, 460, "������");


	//��ָ����ʽ����scoreд��str
	sprintf_s(str, 16, "%d", score);

	//���������ַ���Ϊ���ַ�����֤outtextxy����д������str
//	outtextxy(955, 490, str);

	outtextxy(955, 555, "�ȼ���");	//�ȼ�

	//��ָ����ʽ����rankд��str
	sprintf_s(str, 16, "%d", rank);
	//���������ַ���Ϊ���ַ�����֤outtextxy����д������str
//	outtextxy(955, 585, str);

	settextcolor(BLUE);	//����˵��
	outtextxy(955, 655, "����˵��:");
	outtextxy(955, 680, "��: ��ת");
	outtextxy(955, 705, "��: �½�");
	outtextxy(955, 730, "��: ����");
	outtextxy(955, 755, "��: ����");
	settextcolor(YELLOW);    // ������ɫ
	setbkcolor(GREEN);
	setbkmode(OPAQUE);
	outtextxy(955, 780, "���ز˵�");

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
