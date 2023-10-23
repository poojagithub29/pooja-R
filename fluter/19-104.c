#include<stdio.h>
int main(){
    int P,R,T;
    printf("principal amount");
    scanf("%d\n",&P);
    printf("rate per annum");
    scanf("%d\n",&R);
    printf("time");
    scanf("%d\n",&T);
    printf("simple interst=%d",P*R*T/100);
    return 0;
}


