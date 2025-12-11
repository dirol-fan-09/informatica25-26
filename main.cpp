#include <iostream>
#include <algorithm>

using namespace std;

void calc1(){
    char op;
    int a, b;
    cout<<"A - adunare; S - scadere; M - inmultire"<<endl;
    cin >> op;
    cout<<"Introduceti doua numere intregi: ";
    cin >> a >> b;

    switch(op) {
        case 'A':
            cout << a + b;
            break;
        case 'S':
            cout << a - b;
            break;
        case 'M':
            cout << a * b;
            break;
        default:
            cout << "Caracter invalid"<<endl;
    }
}
void comp(){
    int comp1, comp2, comp3;

    cout<<endl<<"Introduceti trei numere: ";
    cin>>comp1>>comp2>>comp3;
    int maxcomp1 = max(comp1,comp2);
    int maxcomp2 = max(comp2,comp3);

    if(maxcomp1 > maxcomp2){
        cout<<"Cel mai mare nr este "<<maxcomp1;
    } else if (maxcomp2 > maxcomp1) {
        cout<<"Cel mai mare nr este "<<maxcomp2;
    }
}

void arraything(){          ///note: this shit does NOT work :sob:
    int tab[10];
    cout<<"Introduceti elementele: ";
    for(int i = 0; i < 10; i++){
        cin>>tab[i];
    }

    for(int i = 0; i < 10; i++){
        if(tab[1] % 2 == 0){
            cout<<tab[i]<<" ";
        }
    }
}


int main() {
    calc1();
    comp();
    return 0;
}
