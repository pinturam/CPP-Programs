// program to print any no
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
cout<<"enter no that u want to print table:";
cin>>n;
cout<<"your table is:\n";
for(int i=1;i<=10;i++)
{
cout<<i*n<<"\n";
}
getch();
}