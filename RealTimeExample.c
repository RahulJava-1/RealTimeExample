Ques2-
(a)Check whether a given year is a leap year or not.
Program:-

#include <stdio.h>
void main()
{
    int chk_year;
 
    printf("Input a year :");
    scanf("%d", &chk_year);
    if ((chk_year % 400) == 0)
        printf("%d is a leap year.\n", chk_year);
    else if ((chk_year % 100) == 0)
        printf("%d is a not leap year.\n", chk_year);
    else if ((chk_year % 4) == 0)
        printf("%d is a leap year.\n", chk_year);
    else
        printf("%d is not a leap year \n", chk_year);
}

(b)Check whether a number is positive or negative.

#include <stdio.h>
void main()
{
    int num;
 
    printf("Input a number :");
    scanf("%d", &num);
    if (num >= 0)
        printf("%d is a positive number \n", num);
    else
        printf("%d is a negative number \n", num);
}

(c)Accept a temperature in centigrade and display a suitable message

Program:-
#include <stdio.h>
void main()
{
     int tmp;

    printf("Input days temperature : ");
    scanf("%d",&tmp);
   if(tmp<0)
             printf("Freezing weather.\n");
   else if(tmp<10)
            printf("Very cold weather.\n");
            else if(tmp<20)
                        printf("Cold weather.\n");
                    else if(tmp<30)
                               printf("Normal in temp.\n");
                            else if(tmp<40)
                                         printf("Its Hot.\n");
                                    else
                                           printf("Its very hot.\n");

}

(d)Switch case statement.
Program:-

#include<stdio.h>
int main()
{
  int a,b;
  printf("1.School of Computer Science\n");
  printf("2.School of Business\n");
  printf("3.School of Engineering\n");
  printf("make your selection\n");
  scanf("%d",&a);
  switch (a)
  {
    case 1: 
      //code to be executed 
      //if school of computer science is chosen;
      break;
    case 2: 
      //code to be executed 
      //if school of business is chosen;
      printf("Available Departments\n"
      printf("1.Department of commerce\n");
      printf("2.Department of purchasing\n");
      printf("Make your selection.\n");
      scanf("%d",&b);
 
      switch(b) 
      { 
        case 1:
        printf("You chose Department of commerce\n" );
        break;
        case 2: 
        printf("You chose Department of purchasing" );
        break;
      }   
      break;
  }
}

(e) If statement:-
Program:-

#include <stdio.h>
int main()
{
    int x = 20;
    int y = 22;
    if (x<y)
    {
        printf("Variable x is less than y");
    }
    return 0;
}
