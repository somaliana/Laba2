#include<stdio.h>
#include<string.h>

int main() {
    int x,y,sign;
    
    printf("1=+,2=-,3=*,4=/ \n");
    scanf("%d %d",&x,&y);
    scanf("%d",&sign);
    switch(sign) {
        case 1:
            printf("%d",x+y);
            break;
        case 2:
            printf("%d",x-y);
            break;
        case 3:
            printf("%d",x*y);
            break;
        case 4:
            printf("%d",x/y);
            break;
        default:
            printf("yoreadog \n");
            break;
        
    }
    

}