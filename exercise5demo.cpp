#include <iostream>
using namespace std;
int main(){
    int tab[4][3];

    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 3; k++){
            cin>>tab[i][k];
        }
    }

    for(int i = 0; i < 4; i++){
        for(int k = 0; k < 3; k++){
            cout<<tab[i][k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// short and concise! can be squeezed down further by disregarding spaces
