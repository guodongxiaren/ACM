#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
int a[1005],w[1005];
int main()
{
    int n;
    while(cin>>n,n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            w[i]=a[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]<a[j])
                    w[j]=max(w[j],w[i]+a[j]);
            }
        }
        cout<<*max_element(w,w+n)<<endl;
    }
}
