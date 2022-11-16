#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2,1,3,5,4};
    int *ptr;
    int maxi = 0;
    for(int i=0;i<5;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            ptr = &arr[i]; }}
        cout << "max value of arr : " << *ptr << endl;
        *ptr = 6;
        for(int j = 0; j < 5;j++){
            cout << "Array of index : " << j << "=" << arr[j] <<  endl; }
    return 0;
}