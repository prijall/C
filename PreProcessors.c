#include<stdio.h>
// Micros are the pieces of code in a program that is given some name.

//define macro
#define value 4

int main()
{
     for (int i =0; i<=value; i++)
     {
        printf("the values are :%d\n", i);
     }

  return 0;
}


// macro with argument
#define func1(a, b) a+b
#define func2(r) r*r

int main()
{
    int x=2, y=4;
    int sum , mul;

    sum=func1(x, y);
    printf("the value of sum is: %d\n", sum);

    mul=func2(x);
    printf("the value of square is: %d\n", mul);
    return 0;
}