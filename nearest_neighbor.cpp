#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

struct students
    {
        char name[30];
        float Ne;
        float Ni;
        float Te;
        float Ti;
        float Se;
        float Si;
        float Fe;
        float Fi;
        char type[10];
        float distance;
    };
struct students student[11];

int main(){
    float dt[10] = {};
    strcpy(student[0].name,"tonliw");
    strcpy(student[1].name,"pond");
    strcpy(student[2].name,"riw");
    strcpy(student[3].name,"jane");
    strcpy(student[4].name,"gap");
    strcpy(student[5].name,"erik");
    strcpy(student[6].name,"gun");
    strcpy(student[7].name,"fern");
    strcpy(student[8].name,"tuang");
    strcpy(student[9].name,"meen");

    strcpy(student[10].name,"pong");
    
    strcpy(student[0].type,"ENFJ");
    strcpy(student[1].type,"ENFP");
    strcpy(student[2].type,"INTP");
    strcpy(student[3].type,"ESTJ");
    strcpy(student[4].type,"ESFJ");
    strcpy(student[5].type,"INFP");
    strcpy(student[6].type,"INTP");
    strcpy(student[7].type,"INTP");
    strcpy(student[8].type,"ISFJ");
    strcpy(student[9].type,"INTP");

    strcpy(student[10].type,"ISTJ");

    student[0].Ne,student[0].Ni,student[0].Te,student[0].Ti,student[0].Se,student[0].Si,student[0].Fe,student[0].Fi = 28.2,22,20,30,27,27,27,20;
    student[1].Ne,student[1].Ni,student[1].Te,student[1].Ti,student[1].Se,student[1].Si,student[1].Fe,student[1].Fi = 40.2,30,31,30,32,36,37,40;
    student[2].Ne,student[2].Ni,student[2].Te,student[2].Ti,student[2].Se,student[2].Si,student[2].Fe,student[2].Fi = 41.6,36.6,25,18,27,32,32,40;
    student[3].Ne,student[3].Ni,student[3].Te,student[3].Ti,student[3].Se,student[3].Si,student[3].Fe,student[3].Fi = 26,25,24,36,33,33,26,21;
    student[4].Ne,student[4].Ni,student[4].Te,student[4].Ti,student[4].Se,student[4].Si,student[4].Fe,student[4].Fi = 37.4,31.427,38,22,30,43,28;
    student[5].Ne,student[5].Ni,student[5].Te,student[5].Ti,student[5].Se,student[5].Si,student[5].Fe,student[5].Fi = 28.4,31.2,18,25,21,24,22,18;
    student[6].Ne,student[6].Ni,student[6].Te,student[6].Ti,student[6].Se,student[6].Si,student[6].Fe,student[6].Fi = 39.4,34,26,24,30,37,30,32;
    student[7].Ne,student[7].Ni,student[7].Te,student[7].Ti,student[7].Se,student[7].Si,student[7].Fe,student[7].Fi = 29.6,28.6,27,23,28,27,23,30;
    student[8].Ne,student[8].Ni,student[8].Te,student[8].Ti,student[8].Se,student[8].Si,student[8].Fe,student[8].Fi = 25,25,21,27,21,27,23,24;
    student[9].Ne,student[9].Ni,student[9].Te,student[9].Ti,student[9].Se,student[9].Si,student[9].Fe,student[9].Fi = 24.8,21.8,27,35,2836,27,22;

    student[10].Ne,student[10].Ni,student[10].Te,student[10].Ti,student[10].Se,student[10].Si,student[10].Fe,student[10].Fi = 35,27.8,27,40,39,38,41,33;
    for(int i = 0;i<10;i++){
        student[i].distance = sqrt(pow((student[i].Ne-student[10].Ne),2)+
                                   pow((student[i].Ni-student[10].Ni),2)+
                                   pow((student[i].Te-student[10].Te),2)+
                                   pow((student[i].Ti-student[10].Ti),2)+
                                   pow((student[i].Se-student[10].Se),2)+
                                   pow((student[i].Si-student[10].Si),2)+
                                   pow((student[i].Fe-student[10].Fe),2)+
                                   pow((student[i].Fi-student[10].Fi),2));
        dt[i] = student[i].distance;
    }
    float min1 = 1000;
    float min2 = 1000;
    float min3 = 1000;
    float min4 = 1000;
    float min5 = 1000;
    int index_min1 = 0;
    int index_min2 = 0;
    int index_min3 = 0;
    int index_min4 = 0;
    int index_min5 = 0;
    char Type1[6];
    char Type2[6];
    char Type3[6];
    char Type4[6];
    string myType = "";
    char char_max;
    for(int i = 0; i < 10; i++){
        if(dt[i] < min1){
            min1 = dt[0];
            dt[0] = dt[i];
            index_min1 = i;
        }
    }
    for(int i = 0; i < 10; i++){
        if(dt[i] < min2 and dt[i] != min1){
            min2 = dt[i];
            index_min2 = i;
        }
    }
    for(int i = 0; i < 10; i++){
        if(dt[i] < min3 and dt[i] != min1 and dt[i] != min2){
            min3 = dt[i];
            index_min3 = i;
        }
    }
    for(int i = 0; i < 10; i++){
        if(dt[i] < min4 and dt[i] != min1 and dt[i] != min2 and dt[i] != min3){
            min4 = dt[i];
            index_min4 = i;
        }
    }
    for(int i = 0; i < 10; i++){
        if(dt[i] < min5 and dt[i] != min1 and dt[i] != min2 and dt[i] != min3 and dt[i] != min4){
            min5 = dt[i];
            index_min5 = i;
        }
    }
    cout << student[index_min1].name << " has distance form me " << min1 << endl;
    cout << student[index_min2].name << " has distance form me " << min2 << endl;
    cout << student[index_min3].name << " has distance form me " << min3 << endl;
    cout << student[index_min4].name << " has distance form me " << min4 << endl;
    cout << student[index_min5].name << " has distance form me " << min5 << endl;
    cout << student[index_min1].name << " has type " << student[index_min1].type << " " << endl;
    cout << student[index_min2].name << " has type " << student[index_min2].type << " " << endl;
    cout << student[index_min3].name << " has type " << student[index_min3].type << " " <<endl;
    cout << student[index_min4].name << " has type " << student[index_min4].type << " " <<endl;
    cout << student[index_min5].name << " has type " << student[index_min5].type << " " <<endl;

    Type1[0] = student[index_min1].type[0];
    Type1[1] = student[index_min2].type[0];
    Type1[2] = student[index_min3].type[0];
    Type1[3] = student[index_min4].type[0];
    Type1[4] = student[index_min5].type[0];
    size_t arraySize1 = sizeof(Type1)/sizeof(*Type1);
    std::sort(Type1, Type1+arraySize1);
    myType += Type1[3];

    Type2[0] = student[index_min1].type[1];
    Type2[1] = student[index_min2].type[1];
    Type2[2] = student[index_min3].type[1];
    Type2[3] = student[index_min4].type[1];
    Type2[4] = student[index_min5].type[1];
    size_t arraySize2 = sizeof(Type2)/sizeof(*Type2);
    std::sort(Type2, Type2+arraySize2);
    myType += Type2[3];

    Type3[0] = student[index_min1].type[2];
    Type3[1] = student[index_min2].type[2];
    Type3[2] = student[index_min3].type[2];
    Type3[3] = student[index_min4].type[2];
    Type3[4] = student[index_min5].type[2];
    size_t arraySize3 = sizeof(Type3)/sizeof(*Type3);
    std::sort(Type3, Type3+arraySize3);
    myType += Type3[3];

    Type4[0] = student[index_min1].type[3];
    Type4[1] = student[index_min2].type[3];
    Type4[2] = student[index_min3].type[3];
    Type4[3] = student[index_min4].type[3];
    Type4[4] = student[index_min5].type[3];
    size_t arraySize4 = sizeof(Type4)/sizeof(*Type4);
    std::sort(Type4, Type4+arraySize4);
    myType += Type4[3];
    
   cout << "My type should be " << myType << endl;
   cout << "My real type is " << student[10].type << endl;
}