#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,n,values[100];
 cout<<"\nEnter the size of array=";
 cin>>n;
 cout<<"\nEnter the elements of array(each less than 100)=";
 for(i=0;i<n;i++)
 {
  cin>>values[i];
 }
    int val[100],a;
    for(i=0;i<100;++i)
    val[i]=0;
    for(i=0;i<n;++i)
    {
	a=values[i];
	++val[a];
    }
    int k=0;
    for(a=0;a<100;++a)
    {
	if(val[a]>0)
	{
	    for(i=val[a];i>0;--i)
	    {
	       values[k]=a;
	       ++k;
	    }
	}

    }
    cout<<"\nCounting sorted array is:";
 for(i=0;i<n;i++)
 {
  cout<<values[i]<<" ";
 }
 getch();
}
