#include <iostream>
using namespace std;

int num,n, rev = 0;

void Reverse()
{
    int digit;
    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num /= 10;
    }
    while(num!=0);
}

int main()
{
    cin>>num;
    n=num;
    
    Reverse();
    
    cout<<rev<<endl;
    
    if(n == rev)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
        
    return 0;
}
