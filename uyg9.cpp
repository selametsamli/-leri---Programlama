#include <iostream>


using namespace std;


*int genislet(int* eskialan,int eskiboyut,int eklenecek)
{
    int *yenialan=new int[eskiboyut+eklenecek];
    
    for(int i=0;i<eskiboyut;i++)
        yenialan[i]=eskialan[i];
    
    delete[] eskialan;
    
    eskialan=yenialan;
    return yenialan;
    
}


*int kucult(int* eskialan,int tasinacak)
{
    int* yeni=new int[tasinacak];
    
    for(int i=0;i<tasinacak;i++)
        yeni[i]=eskialan[i];
    delete [] eskialan;
    return yeni;
}

void olustur()
{
    int*p=new int[20];
    
    for(int i=0;i<20;i++)
        p[i]=i;
    
    //delete çağırılmadan *p ye erişilemez.
    delete[]p;
}

int main()

{
    int *p=new int[10];
    
    for(int i=0;i<10;i++)
        p[i]=i;
    
    p=genislet(p,10,10);
    
    p=kucut(p,5);
    
    for int(i=10;i<20;i++)
        p[i]=i;
    
    
}

