

#include <stdio.h>

int main() {
int son, raqam, yigindi = 0;
    printf("Son kiriting:");
    scanf("%d",&son);
    while(son>0){
        raqam = son % 10;
        yigindi += raqam;
        son = son /10;
    }
    printf("Yigindi: %d\n",yigindi);
    return 0;
}