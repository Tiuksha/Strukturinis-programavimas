#include <iostream>
#include <iomanip>
using namespace std;
const int EILUTES =3;
const int STULPELIAI =2;

int main() {
    int masyvas[EILUTES][STULPELIAI];

    //Duomenu ivedimas
    cout<<"Iveskite "<<EILUTES<<" ir "<<STULPELIAI<<" stulpeliu masyvo elementus \n";
    for(int i=0; i<EILUTES; i++) {
        for(int j=0; j<STULPELIAI; j++) {
            cout<<"Masyvo ["<<i+1<<"] ["<<j+1<<"] elementas \n";
            cin>>masyvas[i][j];
        }
    }
    for(int i=0; i<EILUTES; i++) {
        for(int j=0; j<STULPELIAI; j++) {
            cout<<setw(5)<<masyvas[i][j];
        }
        cout<<endl;
    }
    cout<<"Masyvo eilutes elementu sudetis \n";
    for(int i=0; i<EILUTES; i++) {
        int eilutesSuma=0;
        for(int j=0; j<STULPELIAI; j++) {
            cout<<setw(5)<<masyvas[i][j];
        }
        cout<<setw(5)<<eilutesSuma<<endl;
        cout<<endl;
    }
    cout<<"Masyvo stulpeliu elementu sudetis \n";
    for(int j=0; j<STULPELIAI; j++) {
        int stulpeliuSuma=0;
        for(int i=0; i<EILUTES; i++) {
            cout<<setw(5)<<masyvas[i][j];
            stulpeliuSuma+=masyvas[i][j];
        }
        cout<<" Stulpelio "<<j+1<<" elementu suma "<<stulpeliuSuma;
    }
}