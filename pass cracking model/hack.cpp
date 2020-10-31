#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
	char a[100],q[100]="abcdefghijklmnopqrstuvwxyz1234567890";
	char s[100]; long int m=5,n=0,k=0,k1=0,k2=0,k3=0,k4=0,k5=0;
	for(int i=0;i<100;i++)
	{
		s[i]='\0';
		a[i]='\0';
	}
	cout<<"Enter password you want to crack:";
		cin>>a;
		if(strlen(a)>8){cout<<"::||CANNOT BE CRACKED||::";}
		else{
	for(int l=0;l<=36;l++)
	{
			s[1]=q[l];
		
		for(int j=0;j<36;j++)
		{
			s[0]=q[j];   
			n++;  
			fstream o("pass.txt",ios::out|ios::app);
			o<<s<<"\n";
			o.close();
			if(strcmp(s,a)==0){m=1; break;}                              
		}
		cout<<s<<"   ";
	if(m==1){break;}
		if(l==36)
			{
				l=0; 
				s[2]=q[k];
				k++;
			}
			if(k==36)
			{
				k=0; l=0;
				s[3]=q[k1];
				k1++;
			}
				if(k1==36)
			{
				k=0; k1=0; l=0;
				s[4]=q[k2];
				k2++;
			}
				if(k2==36)
			{
				k=0; k1=0; l=0; k2=0;
				s[5]=q[k3];
				k3++;
			}
				if(k3==36)
			{
				k=0; k1=0; l=0; k2=0; k3=0;
				s[6]=q[k4];
				k4++;
			}
				if(k4==36)
			{
				k=0; k1=0; l=0; k2=0; k3=0; k4=0;
				s[7]=q[k5];
				k5++;
			}
	}
  cout<<"\n\n________________________________\n\n::||CRACKED PASSWORD||::\n\n   Password: "<<s<<"\n\n   Attempts: "<<n<<"\n\n________________________________";
}
}
