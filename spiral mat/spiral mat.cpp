#include<iostream>
using namespace std;
int main()
{
   	int k=1,d,m,n;
   	cout<<"Row and column : ";
   	cin>>m>>n;
   	for(int j=0;j<n;j++)
	   {
   		if(j%2!=0){k=k+m-1; d=k; k++;}
   	for(int i=0;i<m;i++)
   	{
   	   if(j%2==0){cout<<k<<"  "; k++;}
   	   if(j%2!=0){cout<<d<<"  "; d--;}
	} cout<<"\n";
       }
}
