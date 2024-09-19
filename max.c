#include<stdio.h>
int maxi=0;
void max(int n, int a[n]);

int main(){
    int n;
    printf("Enter no. of terms: ");
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("The array is: ");
    for(int i=1;i<=n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nThe maximum number is: ");max(n,a);printf("\n");
    return 0;
}

void max(int n,int a[n]){
    if(n==0){
        printf("%d",maxi);
        return;
    }

    if(a[n]>maxi){
        maxi=a[n];
    }
max(n-1,a);
}