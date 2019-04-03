#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void Counter(string s,string q,int &counter1,int &counter2,int &counter3,int &counter4){
    ifstream file("text.txt");
    getline(file,s);
    getline(file,q);
    cout<<s<<endl;
    cout<<q<<endl;
    for(size_t i=0;i<sizeof(s);i++){
        if(s[i]==q[0])counter1++;
        if(s[i]==q[1])counter2++;
    }
    for(size_t i=0;i<sizeof(s);i++){
        if(s[i]==q[2])counter3++;
        if(s[i]==q[3])counter4++;
    }
    cout<<"кількість відкритих дужок:"<<counter1<<endl;
    cout<<"кількість закритих дужок:"<<counter2<<endl;
    cout<<"кількість інших відкритих символів:"<<counter3<<endl;
    cout<<"кількість інших закритих символів:"<<counter4<<endl;
}
int main() {
    ofstream test1("test1.txt");
    string s;
    string q;
    int counter1=0;//лічильник відкритих дужок
    int counter2=0;//лічильник закритих дужок
    int counter3=0;//лічильник інших відкритих символів
    int counter4=0;//лічильник інших закритих символів
    Counter(s,q,counter1,counter2,counter3,counter4);
    if(counter1==counter2&&counter3==counter4){
        test1<<"Дужки збалансовані";
        cout<<"Дужки збалансовані"<<endl;
    }
    else{
        test1<<"Дужки не збалансовані";
        cout<<"Дужки не збалансовані"<<endl;
    }
    return 0;
}
