#include <bits/stdc++.h>
using namespace std;

void areAnagram(string str1, string str2)
{   
    string n1 = str1;
    string n2 = str2;
    int count = 1;
	int long1 = str1.length();
	int long2 = str2.length();
    char temp;

    //sort first string
    for (int i = 0; i < long1; i++){
        for (int j = 0; j < long1 - 1; j++){
            if (str1[j] > str1[j + 1]){ 
                temp = str1[j];
                str1[j] = str1[j + 1];
                str1[j + 1] = temp;
            }
        }
    }

    //sort second string
    for (int i = 0; i < long1; i++){
        for (int j = 0; j < long1 - 1; j++){
            if (str2[j] > str2[j + 1]){ 
                temp = str2[j];
                str2[j] = str2[j + 1];
                str2[j + 1] = temp;
            }
        }
    }

	if (long1 != long2){
        	count = 0;
            cout <<"not long"<<endl;

    }
    else{ 
	    for (int i = 0; i < long1; i++)
		    if (str1[i] != str2[i]){
                count = 0;
                cout << str1[i]<< " not correct " << str2[i] << endl;
                cout << str1 << "  " << str2 << endl;
            }
			   
    }
    if(count == 0){
        cout << n1 << " and " << n2 << " The two strings are not anagram of each other" << endl;
        cout <<" " << endl;
    }
    else{
        cout << n1 << " and " << n2 << " The two strings are anagram of each other" << endl;
        cout << " " << endl;
    }
}

// Driver code
int main()
{
	string word1 = "CARE";
	string check_w1 = "RACE";
    string word2 = "PART";
    string check_w2 = "TRAP";
    string word3 = "LISTEN";
    string check_w3 = "ENLIST";
    
	areAnagram(word1,check_w1);
    areAnagram(word2,check_w2);
    areAnagram(word3,check_w3);
    
}

