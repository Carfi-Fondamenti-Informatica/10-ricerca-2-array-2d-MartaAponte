#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char lista[10][20];
    char a[20];
    int pos = 0;

    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++) {
            a[j] = ' ';
            lista[i][j] = ' ';
        }
    }

    for(int i=0;i<10;i++){
        cin >> lista[i];
    }

    cin >> a;
    if(cerca(lista,pos,a)){
        cout << "trovato in posizione "<< pos;
    }else{
        cout << "non trovato";
    }

    return 0;
}



//cpp


#include "lib.h"

bool cerca(char listanome[10][20], int &pos, char a[]){
    for(int i=0;i<10;i++){

        for(int j=0;j<20;j++){
            if(listanome[i][j] != a[j]){
                  j = 20;
            }else{

                    if(j==19){
                          pos = (i)/2;

                           return true;

                    }}}
    }
    return false;
}




//h

bool cerca(char[10][20], int &, char[])
