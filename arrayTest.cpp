#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int birthday = 5;
    int last_student_number = 1;
    int the_second_one_form_last = 4;



    int map[10][10] = {};
    map[rand() % 9][rand() % 9] = 1;
    map[birthday][last_student_number] = 2;
    map[10-birthday][the_second_one_form_last] = 3;




    for(int i = 9; i >= 0;i--)
    {
        for(int j = 0 ; j < 10 ; j++){ 
                cout << map[j][i];
        }
        cout << '\n';
    }





cout <<"Euclidean distance " << sqrt(pow(birthday - (10-birthday),2) + pow(last_student_number - the_second_one_form_last,2)) << endl;
cout <<"Manhattan distance " << abs(birthday - (10-birthday)) + abs(last_student_number - the_second_one_form_last) <<  endl;
cout <<"Chebychev distance " << max(abs(birthday - (10-birthday)),abs(last_student_number - the_second_one_form_last));
}
