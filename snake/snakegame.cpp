#include<graphics.h>
#include<iostream>
#include<windows.h>
using namespace std;
main()
{
	int x[100],y[100],k1=0,m,d=1,l=4,o[10]={355,75,95,125,255,185,45,295,100,220},p[10]={100,105,335,55,85,75,250,255,85,355},x1=400,y1=400;
	x[0]=10;y[0]=10;
	initwindow(x1,y1,"",50,50);
   while(1)
	{
		if(x[0]>=x1-19||x[0]<=9||y[0]<=9||y[0]>=y1-19)
		{
			m=1;
		}
		for(int j=3;j<l;j++)
		{
			if(x[0]==x[j]&&y[0]==y[j])
			{
			m=1;
			break;
			}
		}
		setfillstyle(1,2);
		bar(0,0,x1,10);
			bar(0,0,10,y1);
			bar(0,y1-20,x1,y1);
			bar(x1-20,0,x1,y1);
			setfillstyle(1,4);
		bar(o[k1],p[k1],o[k1]+5,p[k1]+5);
		if(o[k1]==x[0]&&p[k1]==y[0])
		{
			l+=2;
		if(k1==9)
		{
			k1=0;
		}
	     	k1++;
	     	cout<<k1;
		}
		if(GetAsyncKeyState(VK_RIGHT)){d=1;}
			else if(GetAsyncKeyState(VK_DOWN)){d=2;}
			else if(GetAsyncKeyState(VK_LEFT)){d=3;}
			else if(GetAsyncKeyState(VK_UP)){d=4;}
			setfillstyle(1,1);
		bar(x[0],y[0],x[0]+5,y[0]+5);
		if(d==1)
		{
			x[0]=x[0]+5;
		
		}
		else if(d==2)
		{
			y[0]=y[0]+5;
		}
		else if(d==3)
		{
			x[0]=x[0]-5;
		}
		else if(d==4)
		{
			y[0]=y[0]-5;
		}
		for(int j=99;j>0;j--)
		{
			x[j]=x[j-1];
			y[j]=y[j-1];
		}
			for(int j=0;j<l;j++)
		{
				bar(x[j],y[j],x[j]+5,y[j]+5);
		}
		delay(100);
		cleardevice();
		if(m==1)
		{
			break;
		}
	}
	cout<<"GAME OVER!"<<"\n\n"<<"POINTS = "<<(l-4)*5;
   getch();
   closegraph();
}
