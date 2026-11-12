
#include <stdio.h>

int main() {
    int tanlov, miqdor;
    int jami = 0;

    while (1) {
        printf("\n===== XARIDLAR MENYUSI =====\n");
        printf("1. Olma - 5000 so'm\n");
        printf("2. Banan - 12000 so'm\n");
        printf("3. Apelsin - 10000 so'm\n");
        printf("4. Hisobni ko'rish\n");
        printf("5. Xaridni yakunlash\n");

        printf("Tanlovingiz: ");
        scanf("%d", &tanlov);

        switch (tanlov) {
            case 1:
                printf("Olma miqdorini kiriting: ");
                scanf("%d", &miqdor);
                jami += miqdor * 5000;
                printf("Olma hisobga qo'shildi!\n");
                break;

            case 2:
                printf("Banan miqdorini kiriting: ");
                scanf("%d", &miqdor);
                jami += miqdor * 12000;
                printf("Banan hisobga qo'shildi!\n");
                break;

            case 3:
                printf("Apelsin miqdorini kiriting: ");
                scanf("%d", &miqdor);
                jami += miqdor * 10000;
                printf("Apelsin hisobga qo'shildi!\n");
                break;

            case 4:
                printf("Joriy hisob: %d so'm\n", jami);
                break;

            case 5:
                printf("\nXarid yakunlandi!\n");
                printf("Yakuniy hisob: %d so'm\n", jami);
                return 0;

            default:
                printf("Noto'g'ri tanlov!\n");
        }
    }

    return 0;
}
