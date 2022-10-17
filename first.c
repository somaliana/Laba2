#include<stdio.h>
#include<math.h>

int main() {
    double x;
    scanf("%lf",&x); 
    if (x<0) {
        printf("%lf", pow(x,2)+1);
    }
    else if ((x >=0)&& (x<1)) {
        printf("%lf",x+1);
    }
    else {
        printf("%d",0);
    }
}