

#include <stdio.h>

int main() {
 int son, raqam;
    int raqamlar = 0;
    int juft = 0;
    int toq = 0;
    int yigindi = 0;

    printf("Musbat butun son kiriting: ");
    scanf("%d", &son);

    while (son > 0) {
        raqam = son % 10;

        raqamlar++;
        yigindi += raqam;

        if (raqam % 2 == 0) {
            juft++;
        } else {
            toq++;
        }

        son = son / 10;
    }

    printf("Raqamlar soni: %d\n", raqamlar);
    printf("Juft raqamlar: %d ta\n", juft);
    printf("Toq raqamlar: %d ta\n", toq);
    printf("Raqamlar yig'indisi: %d\n", yigindi);



    return 0;
}