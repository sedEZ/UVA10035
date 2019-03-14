#include<iostream>

using namespace std;

int main(){

    long num1,num2;

    while(cin>>num1>>num2){
        if(num1==0&&num2==0)
            break;
        int carry=0,temp=0;

        while(num1>0||num2>0){
            temp = num1%10+num2%10+temp;
            temp/=10;
            num1/=10;
            num2/=10;
            if(temp){
                carry++;
            }
        }

        if(carry==0)
            cout<<"No carry operation."<<endl;
        else if(carry==1)
            cout<<carry<<" carry operation."<<endl;
        else
            cout<<carry<<" carry operations."<<endl;

    }


    return 0;
}

