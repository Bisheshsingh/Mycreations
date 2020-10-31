#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	char s[600],a[200]; int n,m;
	cout<<"Enter Filename : ";
	cin.getline(a,200);
	cout<<"1. Decryption\n\n2. Encryption \n\n ENTER : ";
	cin>>m;
	cout<<"\nEnter key : ";  cin>>n;	
	ifstream o;
	o.open(a);
	fstream o1("as.txt",ios::out);
	if(m==1){
    while(!o.eof())
    {
    	o.getline(s,400);
	for(int i=0;i<strlen(s);i++)
	{
		s[i]=s[i]-n;
	}
	o1<<s<<"\n";
    } cout<<"\nDECRYPTION DONE!";
     }
     if(m==2){
 while(!o.eof())
    {
    	o.getline(s,400);
	for(int i=0;i<strlen(s);i++)
	{
		s[i]=s[i]+n;
	}
	o1<<s<<"\n";
    } cout<<"\nENCRYPTION DONE!";
       }
    o1.close();
	o.close();
	remove(a);
	rename("as.txt",a);
}
