//Nguyen Ngoc Sang
#include <bits/stdc++.h>

using namespace std;
long long h, w;
void xuly()
{
    long long s=0, MIN=1000;
    scanf("%lld%lld", &h, &w);
    for(int i=1; i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            long long a;
            scanf("%lld", &a);
            MIN=min(MIN, a);
            s+=a;
        }
    }
    cout<< s - h*w*MIN;
}
int main()
{
    xuly();
    return 0;
}
