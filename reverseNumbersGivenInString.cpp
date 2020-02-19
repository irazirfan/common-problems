/// Reverse the number while input given in a string
#include <iostream>
using namespace std;

int Reverse(int num)
{
    int digit,rev = 0;
    
    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num /= 10;
    }
    while(num != 0);
    
    return rev;
    
}

int main()
{
    string input;
    cin>>input;
    
    int number = stoi(input);
    
    int rev = Reverse(number);
    
    cout<<rev<<endl;

    return 0;
}
