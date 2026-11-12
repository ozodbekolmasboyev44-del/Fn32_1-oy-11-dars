#include <stdio.h>

int main() {
    int boshlanish, tugash;
    int faqat3 = 0, faqat5 = 0, ikkalasi = 0;

    printf("Boshlang'ich sonni kiriting: ");
    scanf("%d", &boshlanish);

    printf("Oxirgi sonni kiriting: ");
    scanf("%d", &tugash);

    printf("\n3 ga ham, 5 ga ham bo'linadigan sonlar:\n");

    for (int i = boshlanish; i <= tugash; i++) {

        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            ikkalasi++;
        }
        else if (i % 3 == 0) {
            faqat3++;
        }
        else if (i % 5 == 0) {
            faqat5++;
        }
    }

    printf("\n\nFaqat 3 ga bo'linadigan sonlar: %d", faqat3);
    printf("\nFaqat 5 ga bo'linadigan sonlar: %d", faqat5);
    printf("\nIkkalasiga ham bo'linadigan sonlar: %d\n", ikkalasi);

    return 0;
}