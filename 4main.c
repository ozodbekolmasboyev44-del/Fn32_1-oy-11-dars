

#include <stdio.h>

int main() {
  int kun;

    while (1) {
        printf("\nHafta kunini kiriting (1-7), chiqish uchun 0: ");
        scanf("%d", &kun);

        if (kun == 0) {
            break;
        }

        switch (kun) {
            case 1:
                printf("Dushanba\n");
                break;
            case 2:
                printf("Seshanba\n");
                break;
            case 3:
                printf("Chorshanba\n");
                break;
            case 4:
                printf("Payshanba\n");
                break;
            case 5:
                printf("Juma\n");
                break;
            case 6:
                printf("Shanba\n");
                break;
            case 7:
                printf("Yakshanba\n");
                break;
            default:
                printf("Bunday hafta kuni mavjud emas\n");
        }
    }
    return 0;
}