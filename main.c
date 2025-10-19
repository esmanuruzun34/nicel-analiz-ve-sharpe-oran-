#include <stdio.h>

int main() {
    float yatirimGetirisi, risksizFaiz, standartSapma, sharpeOrani;

    printf("--- Sharpe Orani Hesaplayici ---\n\n");

    printf("Yatirimin getirisi (%% cinsinden): ");
    scanf("%f", &yatirimGetirisi);

    printf("Risksiz faiz orani (%% cinsinden): ");
    scanf("%f", &risksizFaiz);

    printf("Portfoyun standart sapmasi (%% cinsinden): ");
    scanf("%f", &standartSapma);

    //  Hata kontrolü: standart sapma 0 olamaz
    if (standartSapma == 0) {
        printf("\nHATA: Standart sapma (risk) 0 olamaz. Hesaplama yapilamadi.\n");
    } else {
        // Sharpe oraný hesaplama formülü
        sharpeOrani = (yatirimGetirisi - risksizFaiz) / standartSapma;

        printf("\nSharpe Orani: %.2f\n", sharpeOrani);

        // Oran yorumlama kýsmý
        if (sharpeOrani < 0)
            printf("Yorum: Kotu. Risksiz faizin bile altinda bir performans.\n");
        else if (sharpeOrani < 1)
            printf("Yorum: Zayif. Risk basina az getiri.\n");
        else if (sharpeOrani < 2)
            printf("Yorum: Iyi. Dengeli bir risk-getiri orani.\n");
        else if (sharpeOrani < 3)
            printf("Yorum: Cok iyi! Yuksek performans.\n");
        else
            printf("Yorum: Mukemmel! Risk basina cok yuksek getiri elde ediliyor.\n");
    }

    return 0;
}
