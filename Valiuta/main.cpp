#include <iostream>
using namespace std;

int main() {
    int choice = 0;
    int EUR;
    EUR = 1;
    int USD;
    USD = 1.1156;
    int GBP;
    GBP = 0.8395;
    int INR;
    INR = 93.3250;


    while(choice !=4) {
        cout<<"----Valiutu kursu skaiciuokle----"<<endl;
        cout<<"1 Palyginti valiuta"<<endl;
        cout<<"2 Pirkti valiuta"<<endl;
        cout<<"3 Parduoti valiuta"<<endl;
        cout<<"4 Baigti darba"<<endl;
        cout<<"Jusu pasirinkimas: "<<endl;
        cin>>choice;
        switch(choice) {
            case 1:
                cout<<"Jus pasirinkote pirma opcija: ";
            cout<<"Jusu pasirinkimas: "<<endl;
            cout<<"1 USD"<<endl;
            cin>>USD;
            cout<<"1 EUR = 1.1156 USD"<<endl;
            cout<<"2 GBP"<<endl;
            cin>>GBP;
            cout<<"1 EUR = 0.8395 GBP"<<endl;
            cout<<"3 INR"<<endl;
            cout<<"1 EUR = 93.3250 INR"<<endl;
            cin>>INR;
            break;
        }
        return 0;
    }
    }


