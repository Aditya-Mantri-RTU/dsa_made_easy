#include <iostream>

using namespace std;

int main()
{
    int num;
    int reverse=0;
    int rem; //rem-->remainder
    
    cout<<"Enter the number you want to reverse:"<<endl;
    cin>>num;
    
    while(num!=0)
    {
     rem=num % 10;
     reverse=reverse*10+rem;     
     num=num/10;
    }
    cout<<"The reversed value is:"<<reverse;

    return 0;
}
