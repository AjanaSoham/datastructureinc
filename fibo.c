#include<stdio.h>
int fibo(int n);

int main(){
    int n;
    printf("Enter how many terms: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("%d\t",fibo(i));
    }
    fibo(n);
    printf("\n");
    return 0;
}

int fibo(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        n = fibo(n-1)+fibo(n-2);
        return n;
}