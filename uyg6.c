/*2.	Bu program, Dinamik Bellek Ayırma işleminin bir örneğidir. Burada, çalışma zamanında N sayi için malloc() fonksiyonu kullanarak :
•	N dizisi öğelerinin bellekte tanımlıyoruz, 
•	N öğelerini okuyacağız, 
•	Bunları yazdıracağız 
•	ve Ayrıca tüm elemanların toplamını yazdırın.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr,limit,i,toplam = 0;

    printf("Dizi boyutunu giriniz: ");
    scanf("%d",&limit);

    ptr = (int*)malloc(limit*sizeof(int));

    for(i=0;i<limit;i++){
        printf("%d. Elamani Giriniz: ",i+1);
        scanf("%d",(ptr+i));
    }
    printf("\nGirilen Elemanlar:\n");

    for(i=0;i<limit;i++){
        printf("%d\n",*(ptr+i));
    }
    for(i=0;i<limit;i++){
        toplam += *(ptr+i);
    }

    printf("Dizideki Toplam Eleman Sayisi: %d\n",toplam);

    free(ptr);

    return 0;
}