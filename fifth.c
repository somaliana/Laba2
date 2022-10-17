#include<stdio.h>

int main() {
    int x;
    scanf("%d",&x);

    switch(x) {
        case 1:
            printf("December 31 January 31 Feburary 28");
            break;
        case 2:
            printf("March 31 May 31 April 30");
            break;
        case 3:
            printf("June 30 July 31 August 31");
            break;
        case 4:
            printf("September 30 October 31 November 30");
            break;
        defalut:
            printf("Segmentation Fault");
            break;
            
    }

}