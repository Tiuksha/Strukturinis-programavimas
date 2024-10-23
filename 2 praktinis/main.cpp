#include <iostream>
#include <cstdlib>
using namespace std;

bool arBalse(char raide) {
    char balses[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < 10; i++) {
        if (raide == balses[i]) {
            return true;
        }
    }
    return false;
}


int didziausiasBendrasDaliklis(int skaicius1, int skaicius2) {
    while (skaicius2 != 0) {
        int laikinas = skaicius2;
        skaicius2 = skaicius1 % skaicius2;
        skaicius1 = laikinas;
    }
    return skaicius1;
}

void zaidimas() {
    srand(time(nullptr));
    int randmSkaicius;
    randmSkaicius = rand() % 100;
    int spejimas;
    cout << "Spekite skaiciu nuo 1 iki 100: "<<endl;
    while (true) {
        cin >> spejimas;
        if (spejimas < randmSkaicius) {
            cout <<"Per mazas, bandykite dar karta: "<<endl;
        } else if (spejimas > randmSkaicius) {
            cout <<"Per didelis, bandykite dar karta: "<<endl;
        } else {
            cout <<"Pavyko! Teisingas atsakymas." << endl;
            break;
        }
    }
}
void void_fizzbuzz(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
}

int main() {
    int choice = 0;
    while(choice != 5)
    do {
        cout << "Pasirinkite funkcija:"<<endl;
        cout << "1. Patikrinti ar raide yra balse"<<endl;
        cout << "2. Rasti didziausia bendra dalikli"<<endl;
        cout << "3. Mini zaidimas"<<endl;
        cout << "4. FizzBuzz"<<endl;
        cout << "5. Baigti darba"<<endl;
        cout << "Jusu pasirinkimas: "<<endl;
        cin >> choice;
        switch (choice) {
            case 1: {
                char raide;
                cout << "Iveskite raide: "<<endl;
                cin >> raide;
                if (arBalse(raide)) {
                    cout << "Ivesta raide yra balse." << endl;
                } else {
                    cout << "Ivesta raide nera balse." << endl;
                }
                break;
            }
            case 2: {
                int skaicius1, skaicius2;
                cout << "Iveskite du skaicius: ";
                cin >> skaicius1 >> skaicius2;
                int d = didziausiasBendrasDaliklis(skaicius1, skaicius2);
                cout << "Didziausias bendras daliklis: " << d << endl;
                break;
            }
            case 3:
                zaidimas();
                break;
            case 4: {
                int n;
                cout << "Iveskite teigiama sveikaji skaiciu n: ";
                cin >> n;
                if (n > 0) {
                    void_fizzbuzz(n);
                } else {
                    cout << "Įvestas skaičius turi būti teigiamas." << endl;
                }

                break;
            }
            case 5:
                cout << "Darbas baigtas." << endl;
                break;
            default:
                cout << "Tokio pasirinkimo nera, bandykite dar karta." << endl;
            break;

        }
    }while(choice != 5);

    return 0;
}