#include <iostream>

using namespace std;

int main(){
// Arithmetic operator
    cout<<"These are the list of Arithmetic operators: "<<endl;

    int num1= 5;
    int num2 = 9; 
    cout<<num1 - num2<<endl; 
    cout<<num1 * num2<<endl; 
    cout<<num1 / num2<<endl; 
    cout<<num1 % num2<<endl;

//Relational/ comparison operator
    cout<<"These are the list of Relational operators: "<<endl;

    cout<<(num1==num2)<<endl; //False
    cout<<(num1!=num2)<<endl; //True
    cout<<(num1<num2)<<endl; //True
    cout<<(num1>num2)<<endl; //False

//Logical operators

    cout<<"These are the list of logical operators: "<<endl;
    bool exp1 = true;
    bool exp2 = false;
    
    cout<<(exp1 && exp2)<<endl;
    cout<<(exp1 || exp2)<<endl;
    cout<<(!exp1)<<endl;

//Assignment Operators

    cout<<"These are the list of some Assignment Operators: "<<endl;
    num1 += 3;
    cout<<num1<<endl;
    num2 -= 2;
    cout<<num2<<endl;

//Bitwise Operators

    cout<<"There are the list of some Bitwitse Operators: "<<endl;
    int num3 = 5; //0101

    cout<<"The left shift of "<<num3<<" is: ";
    cout<<(num3<<1)<<endl;
    cout<<"The right shift of "<<num3<< " is: ";
    cout<<(num3>>1)<<endl;

    int num4 = 8; //1000
    cout<<(num3&num4)<<endl;
    cout<<(num3||num4)<<endl;
    
//Miscellaneous Operators
    cout<<"These are some miscellaneous Operators: "<<endl;
    int a = 4;
    cout<<sizeof(a)<<endl;

    char name='a';
    cout<<sizeof(name)<<endl;

    //ternary operator
    bool flag;
    a == name? flag=true : flag=false;
    cout<<flag<<endl; //


    cout<<(&a)<<endl;


// Unary Operators
    //pre/post increment opeartor
    int o = 6;
    cout<<(o++)<<endl;
    cout<<(++o)<<endl;
    int bee = 5;
    cout<<(--bee)<<endl;

//Associativity 
    cout<<"These are some associativity operators: "<<endl;
    cout<<(4 + 2 + "A")<<endl;
    cout<<("M" + 2 + 4);    

    //exercise

    bool p =  false;
    bool q = false;
    bool r = true;

    cout<<(p==q==r);

    return 0;

}