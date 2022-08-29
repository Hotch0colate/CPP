#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

struct students
    {
        char name[30];
        int score;
    };
struct students student[10];

void printStdent(struct students student){
    cout<<"Name  : "<<student.name<<endl;
    cout<<"Score : "<<student.score<<endl;
}

void max_student(){
    int max = 0;
    int maxx = 0;
    for(int i=0;i<10;i++){
        if (student[i].score >= max){
            max = student[i].score;
            maxx = i;
        }
    }
    cout<<" Max score student is "<<student[maxx].name<<endl;
    cout<<" score "<<student[maxx].score<<endl;
}

void min_student(){
    int min = 100;
    int minn = 0;
    for(int i=0;i<10;i++){
        if (student[i].score <= min){
            min = student[i].score;
            minn = i;
        }
    }
    cout<<" Min score student is "<<student[minn].name<<endl;
    cout<<" score "<<student[minn].score<<endl;
}   

void avg_score(){
    float summ = 0;
    for(int i=0;i<10;i++){
        summ += student[i].score;
    }
    cout<<"Average score :"<<summ/10<<endl;
}

void median_score(){
    char namee[30];
    int point;
    float med;
    for(int i=0;i<10;i++){
        int min = 100;
        int minn = 0;
        for(int j=i;j<10;j++){
            if (student[j].score <= min){
                min = student[j].score;
                minn = j;
            }
        }
        strcpy(namee,student[i].name);
        point = student[i].score;
        strcpy(student[i].name,student[minn].name);
        student[i].score = student[minn].score;
        strcpy(student[minn].name,namee);
        student[minn].score = point;
    }
    cout<<"MedianScore : "<< (student[4].score+student[5].score)/2 << endl;
}

void mode_score(){
    char namee[30];
    int point;
    for(int i=0;i<10;i++){
        int min = 100;
        int minn = 0;
        for(int j=i;j<10;j++){
            if (student[j].score <= min){
                min = student[j].score;
                minn = j;
            }
        }
        strcpy(namee,student[i].name);
        point = student[i].score;
        strcpy(student[i].name,student[minn].name);
        student[i].score = student[minn].score;
        strcpy(student[minn].name,namee);
        student[minn].score = point;
    }
    int counter = 0;
    int count_max = 0;
    int mode = 0;
    for(int l=1;l<10;l++){
        if(student[l].score == student[l-1].score){
            counter++;
            if(counter > count_max){
                count_max = counter;
                mode = student[l].score;
            }
        }
        else{
            counter = 0;
        }
    }
    cout<<"Mode score : "<<mode;
}

void sd_score(){
    float summ = 0;
    float mean,standardDeviation,sd;
    for(int i=0;i<10;i++){
        summ += student[i].score;
    }
    mean = summ/10;
    for(int j=0;j<10;j++) {
    standardDeviation += pow(student[j].score - mean, 2);
  }
   cout<<"SD score : "<< sqrt(standardDeviation / 10);
}

void show_grade(){
    float summ = 0;
    float mean,standardDeviation,sd;
    for(int i=0;i<10;i++){
        summ += student[i].score;
    }
    mean = summ/10;
    for(int j=0;j<10;j++) {
    standardDeviation += pow(student[j].score - mean, 2);
     }
    sd = sqrt(standardDeviation / 10);
    for(int l=1;l<10;l++){
        if(student[l].score >= mean + (2 * sd)){
            cout<<"Name : "<<student[l].name<<endl;
            cout<<"Grade A"<<endl;
        }
        else if(student[l].score >= mean + sd){
            cout<<"Name : "<<student[l].name<<endl;
            cout<<"Grade B"<<endl;
        }
        else if(student[l].score >= mean){
            cout<<"Name : "<<student[l].name<<endl;
            cout<<"Grade C"<<endl;
        }
        else if(student[l].score >= mean - sd){
            cout<<"Name : "<<student[l].name<<endl;
            cout<<"Grade D"<<endl;
        }
        else{
            cout<<"Name : "<<student[l].name<<endl;
            cout<<"Grade F"<<endl;
        }
    }
}

int main(){
    strcpy(student[0].name,"John");
    student[0].score = 25;
    strcpy(student[1].name,"Max");
    student[1].score = 35;
    strcpy(student[2].name,"Bob");
    student[2].score = 72;
    strcpy(student[3].name,"Judy");
    student[3].score = 60;
    strcpy(student[4].name,"Syndra");
    student[4].score = 35;
    strcpy(student[5].name,"Bruno");
    student[5].score = 40;
    strcpy(student[6].name,"Charlie");
    student[6].score = 35;
    strcpy(student[7].name,"Mark");
    student[7].score = 54;
    strcpy(student[8].name,"Chris");
    student[8].score = 65;
    strcpy(student[9].name,"Laura");
    student[9].score = 100;
    max_student();
    min_student();
    avg_score();
    median_score();
    mode_score;
    sd_score();
    show_grade();
}
