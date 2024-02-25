#include<iostream>
using namespace std;
class Production {
    public:

    int rollno;
    string name ;

    void accept(int a,string b){
        rollno=a;
        name=b;

    }
    void display(){
        cout<<"Roll no is:"<<rollno<<endl;
        cout<<"Name of student is:"<<name<<endl;
        cout << endl;
    }
};
int main(){
    int  i = 0;
    Production arr[4];
    while(i < 4)
    {
        int rollno;
        string name;
        cout << "Enter your name: ";
        cin >> name;
        cout << endl;
        cout << "Enter your roll no: ";
        cin >> rollno ;
        cout << endl;
        arr[i].accept(rollno,name);
        i++;
    }
    
       for (int i = 0; i < 4; i++)
    {
        arr[i].display();
    }

}