#include <stdio.h>

int main()
{
    int sayi1,sayi2,sonuc;
    char oprt;
    
    printf("lütfen birinci sayıyı giriniz\n");
    scanf("%d", &sayi1);
    
    printf("lütfen ikinci sayıyı giriniz\n");
    scanf("%d", &sayi2);
    
    denetim1:
    
    printf("lütfen bir operatör seçiniz(+, -, *, /)\n");
    scanf(" %c", &oprt);
    
    if (oprt == '+') {
        sonuc = sayi1 + sayi2;
        printf("sonucunuz: %d\n",sonuc);
        
    }
    else if (oprt =='-'){
            sonuc = sayi1 - sayi2;
            printf("sonucunuz: %d\n", sonuc);
    }
    else if (oprt =='*'){
            sonuc = sayi1 * sayi2;
            printf("sonucunuz: %d\n", sonuc);
    }
    else if (oprt == '/'){
            sonuc = sayi1 / sayi2;
            printf("sonucunuz: %d\n", sonuc);
    }
    else {
        printf("girdiğiniz operatör hatalı lutfen başka bir operatör seçiniz: \n");
    
        goto denetim1;
    }
    

    return 0;
}
