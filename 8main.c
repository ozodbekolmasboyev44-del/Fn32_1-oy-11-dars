

#include <stdio.h>

int main() {
  int baho;
    int alo = 0;
    int yaxshi = 0;
    int qoniqarli = 0;
    int qoniqarsiz = 0;

    for (int i = 1; i <= 15; i++) {
        printf("%d-o'quvchi bahosini kiriting: ", i);
        scanf("%d", &baho);

        if (baho < 0 || baho > 100) {
            printf("Noto'g'ri baho! Qayta kiriting.\n");
            i--;
            continue;
        }
        else if (baho >= 90){
            printf("Alo\n");
            alo++;
        }
        else if (baho >= 75){
            printf("Yahshi\n");
            yaxshi++;
        }
            else if (baho >= 60){
            printf("Qoniqarli\n");
            qoniqarli++;
            }
        else {
            printf("Qoniqarsiz\n");
            qoniqarsiz++;
        }
    }
    printf("\n--- Imtihon natijalari ---\n");
    printf("Alo; %d ta\n",alo);
    printf("Yaxshi; %d ta\n",yaxshi);
    printf("Qoniqarli; %d ta\n",qoniqarli);
    printf("Qoniqarsiz; %d ta\n",qoniqarsiz);

    return 0;
}