#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string win;
    cin>>win;

    int countA=0;
    int countD=0;

    for(char c:win)
    {
        if(c=='A')
        {
            countA++;
        }
        else
        {
            countD++;
        }
    }
    if(countA>countD)
    {
        cout<<"Anton";
    }
    else if(countD>countA)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
}
