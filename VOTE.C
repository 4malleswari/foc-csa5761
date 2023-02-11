#include<stdio.h>
int main()
{
 int age;
 printf("entr age: ");
 scanf("%d", &age);
 if (age >= 18)
  printf("you canvote!");
 else
  printf("you cant vote!");
 return 0;
}