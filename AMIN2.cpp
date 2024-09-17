#include <bits/stdc++.h>

using namespace std;
FILE *fi = freopen("AMin2.inp", "r", stdin);
FILE *fo = freopen("AMin2.out", "w", stdout);
int a[5];
void sx()
{
    for(int i=1;i<=3;i++)
        for(int j=i+1;j<=4;j++)
            if(a[i]>a[j]) swap(a[i],a[j]);

}
void nhap()
{
    for(int i=1;i<=4;i++)
    cin>>a[i];

}
void xuly()
{
    cout<<a[1]<<" "<<a[2];
}
int main()
{
    nhap();
    sx();
    xuly();
    return 0;
}
