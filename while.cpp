//
//  while.cpp
//  While
//
//  Created by Paulo De Souza Jr on 2/22/22.
//  Copyright © 2022 Paulo De Souza Jr. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int i,a;
    i=1;

    cout<< "Entrez avec un valeur:\n";
    cin>> argc;
    cout<<"\n";
    while (i<=argc){
        for (a=1;a<=3;a++){
            cout<< i<<" "<<a<<"\n";

        }
        cout<< "\n";
        i++;
    }
    return 0;
}
