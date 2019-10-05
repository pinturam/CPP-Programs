//check alphabet or not
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char ch;
cout<<"enter a character:";
cin>>ch;
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{
cout<<"alphabet";
}
else
{
cout<<"not alphabet";
}
getch();
}