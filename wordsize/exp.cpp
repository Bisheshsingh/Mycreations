#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	for(int k2=0;k2<100;k2++)
	{
	
	int m,i,j,n;
	
	 char b[800][800],s;
	 char a[100];
	cout<<"\nEnter the Word:";
	cin>>a;
	for(int k1=0;k1<100;k1++)
	{
	   int u=3;
	cout<<"\nEnter the size:";
	cin>>m;
	n=m;
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
		  b[i][j]='\0';
		}
	}
	for(int k=0;k<sizeof(a);k++)
	{
	   
	for(i=0;i<m;i++)
	{
		for(j=0;j<=2*n-1;j++)
		{
			if(a[k]=='A')
			{
				b[i+2][u]='|';
				b[1][j+u]='_';
			   if(j<2*n-1)
			   {
			   	b[m/2+1][j+u+1]='_';
			   }
				
				b[i+2][2*n+u]='|';
			}
			if(a[k]=='B')
			{
				b[i+2][u]='|';
				b[1][j+u]='_';
					b[m+1][j+u]='_';
			   if(j<2*n-1)
			   {
			   	b[m/2+1][j+u+1]='_';
			   }
				
				b[i+2][2*n+u]=')';
			}
			if(a[k]=='C')
			{
				
				b[i+2][u]='(';
				b[1][j+u]='_';
					b[m+1][j+u]='_';
			}
			if(a[k]=='D')
			{
					b[i+2][u]='|';
				b[1][j+u]='_';
					b[m+1][j+u]='_';
					b[i+2][2*n+u]=')';
			}
			if(a[k]=='E')
			{
					b[i+2][u]='|';
						b[1][j+u]='_';
						b[m+1][j+u]='_';
						 if(j<2*n-1)
			   {                                      
			   	b[m/2+1][j+u+1]='_';                   
			   }
			}
			if(a[k]=='F')
			{
					b[i+2][u]='|';
						b[1][j+u]='_';
					
						 if(j<2*n-1)
			   {
			   	b[m/2+1][j+u+1]='_';
			   }
			}
			if(a[k]=='G')
			{
					b[i+2][u]='(';
						b[1][j+u]='_';
						b[m+1][j+u]='_';
						 if(j<2*n-2)
			   {
			   	b[m/2+1][j+u+3]='_';
			   }
			   if(i!=0){
			   
			   	b[i+2][2*n+u]='|';
			   }
		}
			if(a[k]=='H')
			{
					b[i+2][u]='|';
					 	b[i+2][2*n+u]='|';
					  if(j<2*n-1)
			   {
			   	b[m/2+1][j+u+1]='_';
			   }
			}
			
				if(a[k]=='I')
			{
					b[i+2][u+m]='|';
						b[1][j+u]='_';
					b[m+1][j+u]='_';
					 	
					  
			}
				if(a[k]=='J')
			{
					b[i+2][u+m]='|';
							b[1][j+u]='_';
					if(j<2){
						b[m+1][j+u]='_';
				}
				if(i>m-2)
				{
						b[i+2][u]='|';
				}
			}
				if(a[k]=='K')
			{
			
					if(i<m/2){
					b[i+m/2+2][u+m/2]='|';
				}
				if(i>0&&i<m/2+1)
				{
						b[i+1][n-i+u+1]='/';
				}
						b[i+2][u]='|';
					b[m/2+1][u+m/2-1]='_';
				
				
					  
			}                                  
				if(a[k]=='L')                 
			{
					b[i+2][u]='|';
			
					b[m+1][j+u+1]='_';
					 	
					  
			}
				if(a[k]=='M')
			{
					b[i+2][u]='|';
					if(i<m/2){
						b[i+2][u+m]='|';
					}
						b[1][j+u]='_';
							b[i+2][2*n+u]='|';
				
					 	
					  
			}
				if(a[k]=='N')
			{
					b[i+2][u]='|';
						b[i+2][u+m]='|';
					if(j<n){
						b[1][j+u]='_';
					}else if(j>=n){
						b[m+1][u+j]='_';
					}
					
							b[i+2][2*n+u]='|';
					  
			}
				if(a[k]=='O')
			{
					b[i+2][u]='|';
				b[1][j+u]='_';
					b[m+1][j+u]='_';
					b[i+2][2*n+u]='|';
					 	
					  
			}
				if(a[k]=='P')
			{
				
						b[1][j+u]='_';
						if(j!=0&&j!=2*n){
						
					b[m/2+1][j+u]='_';
				}
						b[i+2][u]='|';
					if(i<m/2)
					{
					
						b[i+2][2*n+u]=')';
					}
					 	
					  
			}
				if(a[k]=='Q')
			{
				
						b[1][j+u]='_';
						if(j!=0&&j!=2*n){
						
					b[m/2+1][j+u]='_';
				}
				if(i<m/2){
						b[i+2][u]='(';
					}else{
						b[i+2][u+2]='(';
					}
					if(i<m/2)
					{
					
						b[i+2][2*n+u]=')';
					}
					 	
					  
			}
				if(a[k]=='R')
			{
				
				b[i+2][u]='|';
				b[1][j+u]='_';
			   if(j<2*n-1)
			   {
			   	b[m/2+1][j+u+1]='_';
			   }
				if(i<m/2){
				
				b[i+2][2*n+u]=')';
			}else{
					b[i+2][2*n+u-2]='|';
			}
					  
			}
				if(a[k]=='S')
			{
					b[1][j+u]='_';
					b[m+1][j+u]='_';
					 	
					  
				    if(i<m/2){
					b[i+2][u]='|';
				}else
				{
					b[i+2][u+2*n]='|';
								}	
								if(j<2*n-1)
			   {
			   	b[m/2+1][j+u+1]='_';
			   }			
							
			}
				if(a[k]=='T')
			{
					b[i+2][u+m]='|';
						b[1][j+u]='_';
					 	
					  
			}
				if(a[k]=='U')
			{
					b[i+2][u]='|';
						b[i+2][u+2*n]='|';
						if(j!=2*n){
						
					b[m+1][j+u]='_';
					 }
					  
			}
				if(a[k]=='V')
			{
					b[i+2][u]='|';
				
						b[i+2][n-i+u+1]='/';
					
					 	
					  
			}
				if(a[k]=='W')
			{
					b[i+2][u]='|';
						b[i+2][u+2*n]='|';
						if(j!=2*n){
						
					b[m+1][j+u]='_';
					 }
					 	if(i>=m/2){
						b[i+2][u+m]='|';
					}
					  
					 	
					  
			}
				if(a[k]=='X')
			{
					b[i+2][u+2]='|';
						b[1][j+u]='_';
					b[m+1][j+u]='_';
					 	
					  
			}
				if(a[k]=='Y')
			{     if(i>=m/2){
				b[i+2][u+m]='|';
			}
					
				if(i<m/2)
				{
				
							b[i+2][u]='|';
								b[i+2][u+2*n]='|';
			          }
			if(j!=2*m-1&&j!=2*m+1){
					b[m/2+1][j+u+1]='_';
				
			}
		}
		if(a[k]==' '){
				if(j<2*n-1)
			   {
			   	b[m/2+1][j+u+1]='\0';
			   }			
		}
}
	}
	u=u+2*n+2;
}
for(i=0;i<m+2;i++)
	{
		for(j=0;j<200;j++)
		{
		  cout<<b[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n\n\nPress   'r'   resize and   'w'   for re-enter:";
	cin>>s;
		if(s!='r')
	{
		break;
	}
	cout<<"\n\n__________________________________________________________________________\n\n";
	

}
if(s!='w')
{
	break;
}
	cout<<"\n\n__________________________________________________________________________\n\n";
}
}
