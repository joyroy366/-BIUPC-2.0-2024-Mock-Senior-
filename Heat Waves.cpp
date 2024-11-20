
#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int n,sum=0;
    double average;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        sum=sum+num[i];
    }
    average=double(sum)/n;
    cout<< fixed <<setprecision(2) <<average<<endl;

}
