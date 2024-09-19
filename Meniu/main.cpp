#include <iostream>
using namespace std;
int nubmer3;

int main()
{
    int choice = 0;
    int number1;
    int number2;
    int sum;
    int number3 = 0;


    while(choice !=4) {
        cout<<"paprastas meniu"<<endl;
        cout<<"1 Pirma operacija"<<endl;
        cout<<"2 Antra operacija"<<endl;
        cout<<"3 Trecia operacija"<<endl;
        cout<<"4 Baigti darba"<<endl;
        cout<<"jusu pasirinkimas"<<endl;
        cin>>choice;
        switch(choice) {
            case 1:
                cout<<"Jus pasirinkote pirma opcija";
                cout<<"Iveskyte pirma skaiciu:";
                cin>>number1;
                cout<<"Iveskyte antra skaiciu:";
                cin>>number2;
                sum = number1 + number2;
                cout<<"Summa = "<<sum<<endl;
                break;
            case 2:
                cout<<"Jus pasirinkote antra opcija";
                while (number3 <= 20) {
                    if(nubmer3 % 2 ==0 ) {
                        cout<<"Skaiucius"<<nubmer3<<"yra lyginis"<<endl;
                    } else
                        cout<<"skaicius"<<number3<<"yra nelyginis"<<endl;
                    cout<<"skaicius"<<number3<<endl;
                    //number3 = number 3 +1;
                    nubmer3++; 
                }
                break;
            case 3:
                cout<<"jus pasinkote tecia opcija";
                for(int i = 0; i=20; i++) {
                    cout<<"skaicius yra"<<i<<endl;
                }
                break;
            case 4:
                cout<<"jus baigiate darba";
                break;
            default:
                cout<<"Tokios opcijos nera. Bandikite dar karta";
        }
    }


    return 0;
}
