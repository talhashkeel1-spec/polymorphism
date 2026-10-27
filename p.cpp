#include <iostream>
#include<string>
using namespace std;
class over{
    public:
    void print(int a,int b){
        cout<<a+b;
    }
     void print(int a,int b,int c){
        cout<<a+b+c;
    }
     void print(int a){
        cout<<a;
    }
};
int main(){
    over s1;
    s1.print(3,4);

};