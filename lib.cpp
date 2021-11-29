//
// Created by Abram on 29/11/2021.
//

#include "lib.h"

bool primi(long &n){
    bool flag=false;
    if((n!=1)&(n!=2)){
        for(long i=n-1; (i<n)&(i>1); i--){
            if((n%i)==0){
                flag=false;
                break;
            } else{
                flag=true;
            }
        }
    } else{
        flag=true;
    }
    return flag;
}