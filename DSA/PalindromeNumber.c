#include<stdio.h>

int main()
{
    while(1){
    int x;  //initializing the variable
    printf("Enter the value of X:");
    scanf("%d", &x);

    if (x<0){
        printf("The value can't be calculated for palindrome due to it (-ve) sign!");
        break;
    }

   int reverse_val=0; 
   int temp = x;

   do{
     int digit = temp % 10;
     reverse_val = reverse_val * 10 + digit;
     temp /= 10;
    }
    while(temp!= 0);

    if (reverse_val == x){
        printf("The value is Palindrome:)");
    }
    else{
        printf("The value is not palindrome:(");
    }
    return -1;  
    } 
}
