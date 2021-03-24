#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int div;
int num;

cout<<"Enter a number: ";
cin>>num;

if(num>=1)
for(div=2; div <= num/2; div++)
if((num%div)==0)
break;

if(num>1 && (!(div<=num/2)))
cout<<"The number "<<num<<" is a prime\n";
else
cout<<"The number "<<num<<" is not a prime\n";





getch();
return 0;
}

