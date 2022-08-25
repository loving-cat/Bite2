#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<easyx.h>


//Flappy Bird
//窗口
#define width 288
#define height 608 //定义窗口的数据

unsigned long t1, t2;//定义2个时间 的他t = t2-t1;
//背景
IMAGE	backimg; //定义背景数据

struct Land //定义地面的数据
{
	int x, y;
	int vx;
	IMAGE img;
}land;

//小鸟
struct Bird {
	int x, y;
	int vy;//速度
	int g;//加速度
	int frame;//帧数

	IMAGE img[2];
}bird;

//管道

//分数

//初始化函数：初始化各种数据 图片 音乐
void GameInit()
{
	//初始化窗口
	initgraph(width, height);

	//初始化背景图片（加载图片）
	loadimage(&backimg, "D:/BiteC.CPP/Flyappbird/images/background.bmp");

	//初始化地面数据
	loadimage(&land.img, "D:/BiteC.CPP/Flyappbird/images/land.png");
	land.x = 0;
	land.y = 510;
	land.vx = 5;
	land.img;

	//初始化定时器
	t1 = GetTickCount();
	t2 = GetTickCount();

	//初始化小鸟·
	loadimage(&bird.img[0], "D: / BiteC.CPP / Flyappbird / images / bird.bmp");
	loadimage(&bird.img[1], "D: / BiteC.CPP / Flyappbird / images / birdy.bmp");
	bird.x = 20;
	bird.y = 200;
	bird.vy = 0;
	bird.g = 1;//1s 单位时间内的加速度
	bird.frame = 0;
	

}

//界面绘制：画图 绘制界面
void GameDraw()
{
	BeginBatchDraw();//开始绘制
	//绘制背景图片
	putimage(0, 0, &backimg);
	//绘制地面
	putimage(land.x, land.y, &land.img);
	
	//绘制小鸟
	putimage(bird.x, bird.y, &bird.img[0],SRCPAINT);
	putimage(bird.x, bird.y, &bird.img[1],SRCAND);
	EndBatchDraw();//结束绘制
}

//数据更新：
void GameUpdate()
{	
	t2 = GetTickCount();
	if (t2 - t1 > 15)//30ms
	{
		//地面要往左移动 x - 某一个值
		land.x -= land.vx;//程序本身很快
		if (land.x < -20)
			land.x = 0;
		t1 = t2;
	}
	
}
int main()
{
	GameInit();//初始化
	while (1)
	{
		GameDraw();//不断绘制界面
		GameUpdate();//数据不断更新
	}
	return 0;
}
/*
* 组合拳
	1.定义
	2.初始化
	3.绘制
	4.更新
*/