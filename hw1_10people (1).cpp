#include <iostream>
#include <math.h>

using namespace std;

struct TypeAllFriend
{
	int id;
	float NeFriend; 
	float NiFriend;
	float TeFriend;
	float TiFriend;
	float SeFriend;
	float SiFriend;
	float FeFriend;
	float FiFriend;
	float Distance;
	string FriendName;
	string Ptype;
}types[10];

int main()
{
	float arr[10] = {};
    int id[10] = {401,402,403,404,405,406,407,408,409,410};
	float NeF[10] = {28.2,26.4,24.4,41,24.2,28,22.4,26,31,19.8};
	float NiF[10] = {22,24,14,26.4,21.4,23.8,22,17.6,29.8,19};
	float TeF[10] = {20,30,30,44,27,34,31,23,38,34};
	float TiF[10] = {30,28,26,38,28,34,29,29,19,25};
	float SeF[10] = {27,32,31,43,31,36,34,21,27,21};
	float SiF[10] = {27,31,31,36,30,37,38,21,31,29};
    float FeF[10] = {27,24,24,34,33,36,35,30,25,26};
    float FiF[10] = {20,26,17,32,25,30,19,17,32,22};
	string FriendName[10] = {"Chanunya Srathongtha","Nattapon Pongkao","Thanachote Wattanakhantijarone","Thanyapisit Buaprakhong","Punnapa Thianchai","Pakawat Kulchot","Varintorn SIthisint","Sirawit Pongsawet","Awirut Pusansa-ad","Kantapon Hiranchatchawal"};
    string Ptype[10] = {"ENFJ","ISTP","ESTP","ENTJ","ISFJ","ESTP","ESTP","ESFP","ESFP","ESTP"};
	float MyNe = 29.6;
    float MyNi = 25.6;
    float MyTe = 44.0;
    float MyTi = 30.0;
    float MySe = 38.0;
    float MySi = 42.0;
    float MyFe = 32.0;
    float MyFi = 33.0;
    for(int i = 0; i < 10; i++)
    {
    	types[i].id = id[i];
    	types[i].NeFriend = NeF[i];
    	types[i].NiFriend = NiF[i];
    	types[i].TeFriend = TeF[i];
    	types[i].TiFriend = TiF[i];
    	types[i].SeFriend = SeF[i];
    	types[i].SiFriend = SiF[i];
    	types[i].FeFriend = FeF[i];
    	types[i].FiFriend = FiF[i];
		types[i].FriendName = FriendName[i];
    	types[i].Ptype = Ptype[i];
    }
	cout << "ID\tDistance" << endl;
	for(int i = 0; i < 10 ; i++)
    {  
        arr[i] = sqrt(pow(MyNe - types[i].NeFriend, 2) + pow(MyNi - types[i].NiFriend, 2) + pow(MyTe - types[i].TeFriend, 2) + pow(MyTi - types[i].TiFriend, 2) + pow(MySe - types[i].SeFriend, 2) + pow(MySi - types[i].SiFriend, 2) + pow(MyFe - types[i].FeFriend, 2) + pow(MyFi - types[i].FiFriend, 2));
		types[i].Distance = arr[i];
		cout << types[i].id << "\t" << types[i].Distance << endl;
    }
	float min0 = arr[0];
	float min1 = arr[0];
	float min2 = arr[0];
	int index0 = 0;
	int index1 = 0;
	int index2 = 0;

	for(int i = 0; i < 10; i++)
	{
		if(arr[i] < min0)
		{
			min0 = arr[i];
			index0 = i;
		}
	}
	cout << "The First closest friend is " << types[index0].id << " with type " << types[index0].Ptype << " FriendName " << types[index0].FriendName << endl;
	// Find second closest friend
	for(int i = 0; i < 10; i++)
	{
		if(arr[i] < min1 && arr[i] != min0)
		{
			min1 = arr[i];
			index1 = i;
		}
	}
	cout << "The Second closest friend is " << types[index1].id << " with type " << types[index1].Ptype << " FriendName " << types[index1].FriendName << endl;
	// Find third closest friend
	for(int i = 0; i < 10; i++)
	{
		if(arr[i] < min2 && arr[i] != min0 && arr[i] != min1)
		{
			min2 = arr[i];
			index2 = i;
		}
	}
	cout << "The Third closest friend is " << types[index2].id << " with type " << types[index2].Ptype << " FriendName " << types[index2].FriendName << endl;

	string findMyType0 = types[index0].Ptype;
	string findMyType1 = types[index1].Ptype;
	string findMyType2 = types[index2].Ptype;

	if(findMyType0 == findMyType1 && findMyType1 == findMyType2)
	{
		cout << "Your friend have type : " << findMyType0 << endl;
	}
	else if(findMyType0 == findMyType1)
	{
		cout << "Your friend have type : " << findMyType0 << " and " << findMyType2 << endl;
	}
	else if(findMyType0 == findMyType2)
	{
		cout << "Your friend have type : " << findMyType0 << " and " << findMyType1 << endl;
	}
	else if(findMyType1 == findMyType2)
	{
		cout << "Your friend have type : " << findMyType1 << " and " << findMyType0 << endl;
	}
	else
	{
		cout << "Your friend have type : " << findMyType0 << ", " << findMyType1 << " and " << findMyType2 << endl;
	}

	char firstChar0 = findMyType0[0];
	char firstChar1 = findMyType1[0];
	char firstChar2 = findMyType2[0];
	char secondChar0 = findMyType0[1];
	char secondChar1 = findMyType1[1];
	char secondChar2 = findMyType2[1];
	char thirdChar0 = findMyType0[2];
	char thirdChar1 = findMyType1[2];
	char thirdChar2 = findMyType2[2];
	char fourthChar0 = findMyType0[3];
	char fourthChar1 = findMyType1[3];
	char fourthChar2 = findMyType2[3];

	if(firstChar0 == firstChar1 && firstChar1 == firstChar2)
	{
		cout <<  firstChar0 << endl;
	}
	else if(firstChar0 == firstChar1)
	{
		cout <<  firstChar0 << endl;
	}
	else if(firstChar1 == firstChar2)
	{
		cout <<  firstChar1 << endl;
	}
	else if(firstChar0 == firstChar2)
	{
		cout <<  firstChar0 << endl;
	}

	if(secondChar0 == secondChar1 && secondChar1 == secondChar2)
	{
		cout <<  secondChar0 << endl;
	}
	else if(secondChar0 == secondChar1)
	{
		cout <<  secondChar0 << endl;
	}
	else if(secondChar1 == secondChar2)
	{
		cout <<  secondChar1 << endl;
	}
	else if(secondChar0 == secondChar2)
	{
		cout <<  secondChar0 << endl;
	}

	if(thirdChar0 == thirdChar1 && thirdChar1 == thirdChar2)
	{
		cout <<  thirdChar0 << endl;
	}
	else if(thirdChar0 == thirdChar1)
	{
		cout <<  thirdChar0 << endl;
	}
	else if(thirdChar1 == thirdChar2)
	{
		cout <<  thirdChar1 << endl;
	}
	else if(thirdChar0 == thirdChar2)
	{
		cout <<  thirdChar0 << endl;
	}

	if(fourthChar0 == fourthChar1 && fourthChar1 == fourthChar2)
	{
		cout <<  fourthChar0 << endl;
	}
	else if(fourthChar0 == fourthChar1)
	{
		cout <<  fourthChar0 << endl;
	}
	else if(fourthChar1 == fourthChar2)
	{
		cout <<  fourthChar1 << endl;
	}
	else if(fourthChar0 == fourthChar2)
	{
		cout <<  fourthChar0 << endl;
	}
}