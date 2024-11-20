
#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int n,t,o,p,count=0,i,j;
    cin>> n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        vector<int> m(t);
        for(int j=0;j<t;j++)
        {
            cin>>m[j];
            o=sqrt(m[j]);
            p=o*o;
            if(p==m[j])
            {
                count++;
            }

        }
        cout<<t-count<<endl;
        count=0;
    }


}
