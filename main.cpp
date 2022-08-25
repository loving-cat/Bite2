#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<easyx.h>


//Flappy Bird
//����
#define width 288
#define height 608 //���崰�ڵ�����

unsigned long t1, t2;//����2��ʱ�� ����t = t2-t1;
//����
IMAGE	backimg; //���屳������

struct Land //������������
{
	int x, y;
	int vx;
	IMAGE img;
}land;

//С��
struct Bird {
	int x, y;
	int vy;//�ٶ�
	int g;//���ٶ�
	int frame;//֡��

	IMAGE img[2];
}bird;

//�ܵ�

//����

//��ʼ����������ʼ���������� ͼƬ ����
void GameInit()
{
	//��ʼ������
	initgraph(width, height);

	//��ʼ������ͼƬ������ͼƬ��
	loadimage(&backimg, "D:/BiteC.CPP/Flyappbird/images/background.bmp");

	//��ʼ����������
	loadimage(&land.img, "D:/BiteC.CPP/Flyappbird/images/land.png");
	land.x = 0;
	land.y = 510;
	land.vx = 5;
	land.img;

	//��ʼ����ʱ��
	t1 = GetTickCount();
	t2 = GetTickCount();

	//��ʼ��С��
	loadimage(&bird.img[0], "D: / BiteC.CPP / Flyappbird / images / bird.bmp");
	loadimage(&bird.img[1], "D: / BiteC.CPP / Flyappbird / images / birdy.bmp");
	bird.x = 20;
	bird.y = 200;
	bird.vy = 0;
	bird.g = 1;//1s ��λʱ���ڵļ��ٶ�
	bird.frame = 0;
	

}

//������ƣ���ͼ ���ƽ���
void GameDraw()
{
	BeginBatchDraw();//��ʼ����
	//���Ʊ���ͼƬ
	putimage(0, 0, &backimg);
	//���Ƶ���
	putimage(land.x, land.y, &land.img);
	
	//����С��
	putimage(bird.x, bird.y, &bird.img[0],SRCPAINT);
	putimage(bird.x, bird.y, &bird.img[1],SRCAND);
	EndBatchDraw();//��������
}

//���ݸ��£�
void GameUpdate()
{	
	t2 = GetTickCount();
	if (t2 - t1 > 15)//30ms
	{
		//����Ҫ�����ƶ� x - ĳһ��ֵ
		land.x -= land.vx;//������ܿ�
		if (land.x < -20)
			land.x = 0;
		t1 = t2;
	}
	
}
int main()
{
	GameInit();//��ʼ��
	while (1)
	{
		GameDraw();//���ϻ��ƽ���
		GameUpdate();//���ݲ��ϸ���
	}
	return 0;
}
/*
* ���ȭ
	1.����
	2.��ʼ��
	3.����
	4.����
*/