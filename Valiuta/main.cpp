#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int pasirinkimas;
    int suma;
    int choice = 0;
    double GBP_Bendras = 0.8593;
    double GBP_Pirkti = 0.8450;
    double GBP_Parduoti = 0.9060;
    double USD_Bendras = 1.0713;
    double USD_Pirkti = 1.0547;
    double USD_Parduoti = 1.1309;
    double INR_Bendras = 88.8260;
    double INR_Pirkti = 85.2614;
    double INR_Parduoti = 92.8334;

    while (true) {
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
                    cout<<"Pasirinkite valiuta palyginimui: "<<endl;
                cout<<"1 USD"<<endl;
                cout<<"2 GBP"<<endl;
                cout<<"3 INR"<<endl;
                cin>>pasirinkimas;
                cout<<"Iveskite suma eurais: "<<endl;
                cin>>suma;
                switch (pasirinkimas) {
                    case 1:
                        cout<<fixed<<setprecision(2)<<suma<<" EUR = "<<USD_Bendras*suma<<" USD"<<endl;
                    break;
                    case 2:
                        cout<<fixed<<setprecision(2)<<suma<<" EUR = "<<GBP_Bendras*suma<<" GBP"<<endl;
                    break;
                    case 3:
                        cout<<fixed<<setprecision(2)<<suma<<" EUR = "<<INR_Bendras*suma<<" INR"<<endl;
                    break;
                    default:
                        cout<<"Tokios opcijos nera. Bandikite dar karta"<<endl;
                    break;
                }
                break;
                case 2:
                    cout<<"Pasirinkite valiuta pirkimui: "<<endl;
                cout<<"1 USD"<<endl;
                cout<<"2 GBP"<<endl;
                cout<<"3 INR"<<endl;
                cin>>pasirinkimas;
                cout<<"Iveskite suma eurais: "<<endl;
                cin>>suma;
                switch (pasirinkimas) {
                    case 1:
                        cout<<fixed<<setprecision(2)<<suma<<" EUR = "<<USD_Pirkti*suma<<" USD"<<endl;
                    break;
                    case 2:
                        cout<<fixed<<setprecision(2)<<suma<<" EUR = "<<GBP_Pirkti*suma<<" GBP"<<endl;
                    break;
                    case 3:
                        cout<<fixed<<setprecision(2)<<suma<<" EUR = "<<INR_Pirkti*suma<<" INR"<<endl;
                    break;
                    default:
                        cout<<"Tokios opcijos nera. Bandikite dar karta"<<endl;
                    break;
                }
                break;
                case 3:
                    cout<<"Pasirinkite valiuta pardavimui: "<<endl;
                cout<<"1 USD"<<endl;
                cout<<"2 GBP"<<endl;
                cout<<"3 INR"<<endl;
                cin>>pasirinkimas;
                cout<<"Iveskite suma eurais: "<<endl;
                cin>>suma;
                switch (pasirinkimas) {
                    case 1:
                        cout<<fixed<<setprecision(2)<<suma<<" EUR = "<<USD_Parduoti*suma<<" USD"<<endl;
                    break;
                    case 2:
                        cout<<fixed<<setprecision(2)<<suma<<" EUR = "<<GBP_Parduoti*suma<<" GBP"<<endl;
                    break;
                    case 3:
                        cout<<fixed<<setprecision(2)<<suma<<" EUR = "<<INR_Parduoti*suma<<" INR"<<endl;
                    break;
                    default:
                        cout<<"Tokios opcijos nera. Bandikite dar karta"<<endl;
                    break;
                }
                break;
                case 4:
                    return 0;
                default: cout<<"Tokios opcijos nera."<<endl;
                break;

            }
    }

        return 0;
    }
    }


