 /* 4.	fwrite() fonksiyonu kullanarak bir structure dizisinin 
 (char name[50] ve int height elemanli) tüm üyelerini bir dosyaya kaydetmek 
 için bir C programı yazın. Daha sonra diziyi dosyadan okuyun ve ekranda görüntüleyin.*/


 #include <stdio.h>

 struct ogr {

     char name[50];
     int boy;
 };
 int main (){
     struct ogr ogr1[5],ogr2[5];
     FILE *fptr;
     int i;

     fptr = fopen("ogr.txt","w");

     for(i = 0 ;i < 5;i++){
         printf("Isim Giriniz: ");
         scanf("%s",ogr1[i].name);

         printf("Boy Giriniz: ");
         scanf("%d" , &ogr1[i].boy);
     }

     fwrite(ogr1,sizeof(ogr1),1,fptr);
     fclose(fptr);

     fptr = fopen("ogr.txt","rb");
     fread(ogr2,sizeof(ogr2),1,fptr);

     for(i = 0; i<5; i++){
         printf(" Isim: %s Boy: %d\n",ogr2[i].name,ogr2[i].boy);
     }
    fclose(fptr);
     return 0;
 }