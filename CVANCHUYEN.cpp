#include <bits/stdc++.h>

using namespace std;
FILE *fi=freopen("CVANCHUYEN.INP", "r", stdin);
FILE *fo=freopen("CVANCHUYEN.OUT", "w", stdout);
long long a[100001],s=0,p; int n,k1;
void nhap()
{
    scanf("%d%d", &n, &k1);
    for(int i=1;i<=n;i++)
    {
        scanf("%d", &a[i]);
        s=s+a[i];
    }
}
bool check(long long p)
{
    long long sum=0,k2=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+a[i];
        while(sum>p)
        {
            k2++;
            sum=a[i];
            if(k2==k1) return false;
        }

    }
    if(sum>p) return false;
        else k2++;
    if(k2>k1) return false;
        else return true;
}
void bs()
{
    long long l=1,r=s,mid,s,p;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(check(mid))
        {
            r=mid-1;
            p=mid;
        }

        else l=mid+1;
    }
    printf("%lld", p);
}

int main()
{
    nhap();
    bs();
    return 0;
}
