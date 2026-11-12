

#include <stdio.h>

int main() {
    int harorat;
    int issiq=0;
    
   for ( int i = 1; i <= 7; i++) {
       printf("%d-harorat kiritin:",i);
       scanf("%d", & harorat);
       if (harorat > 30){
           printf("Issiq\n");
           issiq++;
       }else if (harorat >= 15 && harorat <= 30){
           printf("Iliq\n");
       }else {
           printf("Sovuq\n");
       }
       }
    printf("30 dan yuqori bo'lgan kunlar soni: %d\n",issiq);
    return 0;
}