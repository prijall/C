#include<stdio.h>

//predefined functions:
int sum(int a, int b){
    return a+b;
}

int main(){
    int add_value=sum(2, 3);
    printf("the value of addition is %d", add_value);
    return 0;
}


//predefined function with void

void sum(int a, int b){
    int c =a+b;
    printf("the value of the sum value is : %d", c);
}

int main(){
    sum(2, 3);

}


// Pass by Value:
void swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int a=1, b=2;
    printf("Before Swapping: %d %d\n", a, b);
    swap(a, b);
    printf("After Swapping: %d %d", a, b);
    return 0;
}

//pass by reference:
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=3, b=2;
     printf("Before Swapping: %d %d\n", a, b);
     swap(&a, &b);
     printf("After Swapping: %d %d", a, b);
     return 0;
}