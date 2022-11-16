#include <iostream>
#include <math.h>
using namespace std;

int findGCD(int n1,int n2);

int main(){

    int n1,n2;
    cout<<findGCD(60,34);
    return 0;
}

int findGCD(int n1,int n2){

    if(n2!=0){
        return findGCD(n2,n1%n2);
    }

    else{
        return n1;
    }

}
    