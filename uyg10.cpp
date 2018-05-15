#include <iostream>


using namespace std;

class Date {

    int m_nMonth;
    int m_nDay; 
    int m_nYear;

    public:

        int getMonth(){
            return m_nMonth;
        }
        int getDay(){
            return m_nDay;
        }
        int getYear(){
            return m_nYear;
        }
        void setMonth(int month){
            m_nMonth = month;
        }
        void setDay(int day){
            m_nDay = day;
        }
        void setYear (int year){
            m_nYear = year;
        }
};

int main(){

    Date d1;
    d1.setDay(12);
    d1.setMonth(3);
    d1.setYear(1996);
    cout<<d1.getDay()<<d1.getMonth()<<d1.getYear()<<endl;

    return 0;

}