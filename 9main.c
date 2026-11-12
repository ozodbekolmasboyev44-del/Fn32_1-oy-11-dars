

#include <stdio.h>

int main() {
 int joy = 20;
    int tanlov;

    while (1) {

        printf("\n===== AVTOTURARGOH =====\n");
        printf("1. Avtomobil kiritish\n");
        printf("2. Avtomobil chiqarish\n");
        printf("3. Bo'sh joylarni ko'rish\n");
        printf("4. Dasturdan chiqish\n");

        printf("Tanlovingizni kiriting: ");
        scanf("%d", &tanlov);

        switch (tanlov) {

            case 1:
                if (joy > 0) {
                    joy--;
                    printf("Avtomobil kiritildi!\n");
                }
                else {
                    printf("Bo'sh joy qolmagan!\n");
                }
                break;

            case 2:
                if (joy < 20) {
                    joy++;
                    printf("Avtomobil chiqarildi!\n");
                }
                else {
                    printf("Avtoturargoh bo'sh!\n");
                }
                break;

            case 3:
                printf("Bo'sh joylar: %d ta\n", joy);
                break;

            case 4:
                printf("Dastur tugadi!\n");
                return 0;

            default:
                printf("Noto'g'ri tanlov!\n");
        }
    }
          



                 
    return 0;
}