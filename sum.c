// C program for practicing Git and GitHub
#include<stdio.h>

int sumofdigits(int num);

int main(){
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    int result = sumofdigits(num);
    printf("the sum of digits of the number is : %d",result);
    return 0;
}

int sum = 0;
int sumofdigits(int num){
    while(num!=0){
        sum = sum + (num%10);
        num = num/10;
    }
    return sum;
}
