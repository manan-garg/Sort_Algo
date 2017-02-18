#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,i,a[100],k=0,j,small,temp,pos;
 cout<<"\nEnter the no: of elements=";
 cin>>n;
 cout<<"\n\nEnter array elements=";
 for(i=0;i<n;++i)
 {
  cin>>a[i];
 }
 while(k<n)
 {i=k;
  small=a[i];
  for(;i<n;++i)
  {
    if(small>=a[i])
    {
     small=a[i];
     pos=i;
   }
  }
  temp=a[k];
  a[k]=small;
  a[pos]=temp;
  ++k;
 }
  cout<<"\nThe sorted array=";
 for(i=0;i<n;++i)
 cout<<a[i]<<"\t";
 getch();
}