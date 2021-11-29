//
// Created by Abram on 29/11/2021.
//

#include "lib.h"

bool primi(int &n){
    bool flag=false;
    for(int i=n-1; (i<n)&(i>1); i--){
        if((n%i)==0){
            flag=false;
            break;
        } else{
            flag=true;
        }
    }

    return flag;
}