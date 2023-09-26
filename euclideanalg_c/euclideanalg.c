#include <stdio.h>
int gcd(int a, int b){
    if (a < 0){
        a = -a;
    }
    if (a < 0){
        a = -a;
    }
    while (a&&b){
        if(a>b){
            a = a%b;
        }
        else{
            b = b%a;
        }
    }
    return a+b;
}
int main(void){
    int a;
    int b;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("%d",gcd(a,b));  
}