#include <bits/stdc++.h>
using namespace std;

//สมมุติฐานว่าเป็น sensitive case ตัวใหญ่กับตัวเล็กนับเป็นคนละตัวกัน

void kangaroo(std::string w1, std::string w2){
    int count = 0;
    int long1 = w1.length();
    int long2 = w2.length();
    for(int i = 0; i < long1; i++){
        if(w2[count] == w1[i]){
            count++;
            continue;
        }
    }
    if(count == long2){
        cout << w2 << " is in " << w1 << endl;
    }
    else{
        cout << w2 << " not in " << w1 << endl;
    }
}

int main(){
    string word1 = "AffeCT";
    string check_w1 = "ACT";
    string word2 = "AREnA";
    string check_w2 = "AREA";
    string word3 = "BLOssOM";
    string check_w3 = "BLOOM";
    kangaroo(word1,check_w1);
    kangaroo(word2,check_w2);
    kangaroo(word3,check_w3);
}