#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
    int X,T;
    scanf("%d %d",&X,&T);
    if (X*T<0) {
        int temp = X;
        X = X*T;
        T = abs(T-temp);
    }
    else {
        int temp = X;
        X = abs(T-temp);
        T = T*temp;

    }
    printf("%d %d",X,T);

}