//check prime or not
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,count=0;
cout<<"enter number:";
cin>>n;
for(int i=2;i<n;i++)
{
	if(n%i==0)
	{
	count++;
	break;
	}
}
if(count==0)
cout<<"prime number:";
else
cout<<"not prime number";
getch();
}