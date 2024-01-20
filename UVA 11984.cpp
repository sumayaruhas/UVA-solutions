#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vlli vector<long long int>
int main()
{
    ll n , x = 0;
    float f , c , d , r;
    cin >> n;
    while(n--){
        cin >> c >> d;
        x++;
        f = (9.0 / 5.0 * c) + 32.00 + d;
        r = (f - 32.00) * 5.0 / 9.0;
        cout << "Case " << x << ": " << fixed << setprecision(2) <<  r << endl;
    }
}
