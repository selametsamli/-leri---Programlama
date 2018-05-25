#include <iostream>


using namespace std;


void state()  {
    cout << cin.bad() << cin.fail() << cin.eof() << cin.good() << '\n';
}

int main(){

    string line;
    int x;
    cin >> x;		// omid 
    state();		 // 0100
    cin.clear();
    cin >> line;		 // omid
    state();		 // 0001
    getline(cin, line);	//  
    state();		 // 0001




    return 0;
}