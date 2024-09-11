#include<stdio.h>

int main(void) {
    int num, i, sum, t,q, palindrome;

    printf("Input num: ");
    scanf("%d",&num);

    sum = 0;
    i = 1;
    palindrome = num;

    while(num != 0) {
        q = num % 10;
        t=q*i
        sum=sum+t;
        num = num / 10;
        i=i*10;
    }

    if(palindrome == sum)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}



