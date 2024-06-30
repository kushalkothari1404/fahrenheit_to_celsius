#include<iostream>
using namespace std;
int convert(float in)
{
    float ans;
    ans = 0.56 * (in - 32);
    return ans;
}
int main()
{
    float in;
    cout<<"Enter the Temperature to be converted:";
    cin>>in;
    cout<<"The converted temperature is:"<<convert(in)<<endl;
    return 0;
}
