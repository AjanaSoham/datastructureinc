#include<stdio.h>
int fact(int n);

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Factorial is: %d\n",fact(n));
    return 0;
}

int fact(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        n= n*fact(n-1);
        return n;
}