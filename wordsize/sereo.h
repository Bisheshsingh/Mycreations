#include<bits/stdc++.h>
# define MAX 100000
using namespace std;

template <typename T>
int deletion(T arr[],int n,int pos)
{
	if(pos==n+1){ return (n-1); }
	swap(arr[pos-1],arr[n]);
    return deletion(arr,n-1,pos);
}

template <typename T>
int insert(T a[],int n,int pos,int val)
{
	if(pos==n+1){ return (n+1); }
    swap(a[pos-1],a[n]);
    return insert(a,n,pos+1,val);
}

template <class T>
class ULDS{
	 T f[MAX];
	 int s;
	 public:
	 	ULDS(){ s=0; }
		void uinput(int n)
		{
            int i=s;
            s+=n;
			while(n--)
			{
				cin>>f[i];
				i++;
			}
		}
		void minput(T a[],int n)
		{
            int i=s,j=0;
            s+=n;
			while(n--)
			{
				f[i]=a[j];
				i++; j++;
			}
		}
	 	void show()
	 	{
			for(int i=0;i<s;i++)
	 		{
	 			cout<<f[i]<<"\n";
			}
		}
		void push_back(T k)
		{
			f[s]=k;
			s++;
		}
		void push_front(T k)
		{
			add(1,k);
		}
		
		void pop()
		{
			remove(s);
		}
		
		void pop_front()
		{
			remove(1);
		}
		
		void remove(int p)
        {
	     deletion(f,s,p);
	     s--;
        }
        
        void add(int pos,T val)
        {
        	f[s]=val;
            insert(f,s,pos,val);
            s++;
		}
		
	    T get(int p)
	    {
	    	return f[p];
		}
		
		void rev()
		{
			reverse(f,f+s);
		}
		
		void ascsort()
		{
			sort(f,f+s);
		}
		
		void descsort()
		{
			sort(f,f+s);
			reverse(f,f+s);
		}
		
		int count(int k)
		{
			int c=0;
			for(int i=0;i<s;i++)
			{
				if(f[i]==k)
				{
					c++;
				}
			}
			return c;
		}
		
		int count_if(string a,int n)
		{
			int c=0;
			if(a=="div")
			{
				for(int i=0;i<s;i++)
				{
					if(f[i]%n==0)
					{
						c++;
					}
				}
			}
			else if(a=="diff")
			{
				int i=0,j=1;
				while(i<=s)
				{
					if(abs(f[j]-f[i])==n)
					{
						j++; c++;
					}
					else if(abs(f[j]-f[i])>n)
					{
						j++;
					}
					else{
						i++;
					}
				}
			}
			return c;
		}
		
		int find(int k,int i=0)
		{
			for(i;i<s;i++)
			{
				if(f[i]==k)
				{
					return i;
				}
			}
			return -1;
		}
		
		bool binsearch(int x,int s,int e)
         {
	       int mid=(s+e)/2;
	       if(s>e){ return false; }
	       if(f[mid]==x){ return true; }
	       else if(f[mid]<x){ return binsearch(x,mid+1,e); }
	       else{ return binsearch(x,s,mid-1); }
         }
		
		int operator=(ULDS o1)
		{
			for(int i=0;i<o1.s;i++)
			{
				f[i]=o1.f[i];
			}
			s=o1.s;
		}
		
		bool operator==(ULDS o1)
		{
			if(s!=o1.s)
			{
				return false;
			}
			for(int i=0;i<s;i++)
			{
				if(f[i]!=o1.f[i])
				{
					return false;
				}
			}
			return true;
		}
		
		bool operator!=(ULDS o1)
		{
			if(s!=o1.s)
			{
				return true;
			}
			for(int i=0;i<s;i++)
			{
				if(f[i]!=o1.f[i])
				{
					return true;
				}
			}
			return false;
		}
		
		bool palindrome()
		{
			int st=0,e=s-1;
			while(st<=e)
			{
				if(f[st]!=f[e])
				{
					return false;
				}
				st++; e--;
			}
			return true;
		}
		
		T sum()
		{
			int k=0;
			for(int i=0;i<s;i++)
			{
			  	k+=f[i];
			}
			return k;
		}
		
		T cirtrav(int k)
		{
			return f[k%s];
		}
		
		int len()
		{
		  return s;	
	    }	
	    
	    T min(int s1=0)
        {
         	int p=f[s1];
	        for(int i=s1;i<s;i++)
	        {
		      if(f[i]<p)
		      {
			    p=f[i];
		      }
		    }
		      return p;
	    }
	   
        T max(int s1=0)
        {
	        int p=f[s1];
	        for(int i=s1;i<s;i++)
	        {
		      if(f[i]>p)
		      {
			    p=f[i];
		      }
		    }
		      return p;
        }
        
        void arrange(int st,int n,int k)
        {
        	int i=0;
        	while(k--)
        	{
        		f[i]=st;
        		st+=n;
        		i++; s++;
			}
		}
		
		ULDS slice(int m,int n)
		{
			ULDS k;
			if(n>s)
			{
				n=s;
			}
			for(int i=m;i<n;i++)
			{
				k.push_front(f[i]);
			}
			return k;
		}		
		
		int dup()
        {
	      int b[MAX]={0};
	       int l=0,k=1; 
	       for(int i=0,j;i<s;i++) {
	      j=f[i]; 
	      if(b[j]==0){
	   	  b[j]=k;
	   	  f[b[j]-1]=j;
	   	  k++;
	      }
	     else{ l++; }
     	    } 	
        	s-=l;
        }   	
};




