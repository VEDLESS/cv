#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int y = 5;
    int z = 0;

    z=x++ - --y;
    cout<<"The value of z is:"<<z<<endl;
    z+=x/y;
    cout<<"The value of z is:"<<z<<endl;
    z*=y--;
    cout<<"The value of z is:"<<z<<endl;

    return 0;
}