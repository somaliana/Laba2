#include<stdio.h>
#include<string.h>

int main() {
    double x,y; 
    int sign;
    
    printf("1=+,2=-,3=*,4=/ \n");
    scanf("%lf %lf",&x,&y);
    scanf("%d",&sign);
    switch(sign) {
        case 1:
            printf("%lf",x+y);
            break;
        case 2:
            printf("%lf",x-y);
            break;
        case 3:
            printf("%lf",x*y);
            break;
        case 4:
            printf("%lf",x/y);
            break;
        default:
            printf("yoreadog \n");
            break;
        
    }
    

}