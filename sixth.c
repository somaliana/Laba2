#include<stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    int one = x%10;
    int sec = (x/10)%10;
    int third = (x/100)%10;
    int fourth = x/1000;
    if (one!=sec&&one!=fourth &&one!=third && one!=fourth && sec!=third && sec!=fourth && third!=fourth) {
        printf("YEpa");
    }


}
  