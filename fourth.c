#include<stdio.h>
#include<math.h>

int main() {
    double x;
    scanf("%lf",&x);

    if (x<=5) {
        printf("%lf \n",log(x*x)+3*x);
    }
    else if (x>3) {
        printf("%lf \n",sqrt(x)+0.5*pow(x,2));
    }

}