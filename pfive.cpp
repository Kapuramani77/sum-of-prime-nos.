#include<iostream>
using namespace std;
int function(int num)
{
    int i;
    int put=1;
    for(i=2;i<=num/2;++i){
            if(num%i==0){
                put=0;
                break;
            }
    }
        return put;
}

int main()
{
    int num,i;
    cout<<"Enter a positive integer:";
    cin>>num;
    for(i=2;i<=num/2;++i){
        if(function(i)){
            if(function(num-i)){
                cout<<num<<"="<<i<<"+"<<num-i<<endl;
            }
        }
    }
    return 0;
}
