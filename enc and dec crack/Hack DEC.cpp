#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	char s[600],a[200]; long int n=3;
	cout<<"Enter Filename : ";
	cin.getline(a,200);	
	while(1){
	ifstream o;
	o.open(a);
	fstream o1("decrrypt.txt",ios::out|ios::app);
	o1<<n<<"\n";
    while(!o.eof())
    {
    	o.getline(s,400);
	for(int i=0;i<strlen(s);i++)
	{
		s[i]=s[i]-n;
	}
     o1<<n<<s<<"\n";
    } 
    if(n==260)
    {
    	break;
	} n++;
}
 cout<<"\nDECRYPTION HACK DONE!";
}
