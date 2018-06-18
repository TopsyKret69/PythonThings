#pragma once
#include <iostream>
#include <vector>

using namespace std;

struct SomeObject{
    int a;
    double x;
    string name;
};

int main(){
    SomeObject* ptrSomeObject;
    ptrSomeObject->a = 1;
    ptrSomeObject->x = 3.14;
    ptrSomeObject->name = "SomeObject";
    SomeObject* refSomeObject = ptrSomeObject;

    cout<<"Hello Word!"<<endl;
    cout<<refSomeObject->a<<endl;
}
