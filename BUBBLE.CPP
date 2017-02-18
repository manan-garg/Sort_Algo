#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,n,a[100],temp=0,j;
 cout<<"\nEnter the size of array=";
 cin>>n;
 cout<<"\nEnter the elements of array=";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-1-i;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 cout<<"\nBubble sorted array is:";
 for(i=0;i<n;i++)
 {
  cout<<a[i]<<" ";
 }
 getch();
}