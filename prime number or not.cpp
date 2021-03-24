#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	  int P,count=0;
   cout<<"Enter a number:\n"; /*Asks for user input*/
   cin>>P; 
   int a=1;                   /* User input P*/
  // for(int a=1;a<=P;a++)
   {
   if(P%a==0)
   {
   count++;
   }
   if(count==2)
         {
        cout<<"Prime number.\n";  /* Provided option when the number is prime number*/
         }
       else
        {
          cout<<" Not prime number \n"; /* This is where I am supposed to provide the               numbers input is divisible with*/
      }
  }
getch();
return 0;
}

