#include<stdio.h>
void bin(int num);
void binf(float frac, int precision);

int main(){
    int num, precision;
    printf("Enter integer part: ");
    scanf("%d",&num);
    float frac;
    printf("Enter fractional part: ");
    scanf("%f",&frac);
    printf("The binary number is: ");
    bin(num);
    printf(".");
    binf(frac,precision);
    printf("\n");
    return 0;
}

void bin(int num){
    if(num==0)
        printf("%d",0);
    else if(num==1)
        printf("%d",1);
    else{
        bin(num/2);
        printf("%d",num%2);
    }
}

void binf(float frac, int precision){
    if(frac==0 || precision==0){
        return;
    }
    frac *= 2;
    int bit= (int)frac;
    printf("%d",bit);
    frac -= bit;
    binf(frac,precision-1);
}