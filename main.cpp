#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n , m ;
    cin >> n >> m ;
    long long t = n+m;
    long long a[t];
    for(long long i = 0 ; i < t ; i++)
    {
        cin >> a[i];
    }
    sort(a,a+t);
    long long c[t+1];
    long long sum = 0 ;
    c[0] = {0};
    for(long long i = 0 , j = t - 1 ; i < t ,j >=0 ; i++ ,j--)
    {


            sum = sum + a[j];
            c[i+1] = sum ;

    }
    long long q ;
    cin >> q ;
    while(q--)
    {
        long long y ;
        cin >> y ;
        cout << c[y]<< endl ;
    }


    return 0;
}
