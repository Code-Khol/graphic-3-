#include <iostream>
#include <graphics.h>
#include <conio.h>

using namespace std;

main()
{
	initwindow(610,610);
	
	cout<<"hi"<<endl;
	
	for(int i=0 ; i<=300 ; i+=10)
	{
		setcolor(3);
		line(300-i,0+i,0+i,300+i);
		setcolor(12);
		line(300-i,0+i,600-i,300-i);
		setcolor(10);
		line(0+i,300+i,300+i,600-i);
		setcolor(5);
		line(300+i,600-i,600-i,300-i);
		delay(50);
	}


	
	
	
	getch();
}
