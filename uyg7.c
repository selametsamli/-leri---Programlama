//3.	Kullanıcıdan n sayıda öğrencinin ismini ve notlarını okuyup ve bir dosyada kayd eden C programı yazın.

#include <stdio.h>

int main(){

    char isim[50];
    int not,i,ogrNo;

    printf("Ogrenci Sayisini Giriniz: ");
    scanf("%drm",&ogrNo);

    FILE *fptr;
    fptr = fopen("ogr.txt","w");
    if(fptr == NULL){
        printf("DOSYA OLUSTURULAMADI!!!");
        return 0;
    }

    for(i = 0; i < ogrNo; i++ ){
        printf("%d. Ogrecinin Adini Giriniz:",i+1);
        scanf("%s",isim);

        printf("%d. Ongrencinin Notunu Giriniz:",i+1);
        scanf("%d",&not);

        fprintf(fptr,"\n Adi: %s \n Notu = %d \n",isim,not);
    }

    fclose(fptr);
    return 0;
}