#include <iostream>
#include <string>
using namespace std;

bool ValidCard(string cardNum){
    int Sum = 0 ;
    bool isSecond = false ;
    for (int i = 0; i < cardNum.length() ; i++)
    {
        int digit = cardNum[i]-'0';
        if (isSecond = true)
        {
            digit=digit+1 ;
            Sum+= digit/10 ;
            Sum += digit%10;
            isSecond = !isSecond ;
        }
        
    }
    return Sum%10 == 0 ;
}

int main()
{
    string cardNum ;
    cout<<"Card Number : "<<cardNum<<endl;
    cin>>cardNum;
    if (ValidCard(cardNum)){
        cout<<"the credit card number is valid";
    }else{
        cout<<"the credit card number is not valid";
    }
    return 0;
}