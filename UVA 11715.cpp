#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vlli vector<long long int>
// sumaya rahman 
int main()
{
    ll n , c = 0;
    float u , v , a , s , t ;
   while(1){
    cin >> n;
    if(n == 0){
        break;
    }else if(n == 1){
        c++;
        cin >> u >> v >> t;
        a = (v - u) / t;
        s = ((v * v) - (u * u)) / (2 * a);
        cout << fixed << setprecision(3) << "Case " << c << ": " << s << " " << a << endl;
    }else if(n == 2){
        c++;
        cin >> u >> v >> a;
        t = (v - u) / a;
        s = ((v * v) - (u * u)) / (2 * a);
        cout << fixed << setprecision(3) << "Case " << c << ": " << s << " " << t << endl;
    }else if(n == 3){
        c++;
        cin >> u >> a >> s;
        v = sqrt((u * u) + (2 * a * s));
        t = (v - u) / a;
        cout << fixed << setprecision(3) << "Case " << c << ": " << v << " " << t << endl;
    }else if(n == 4){
        c++;
        cin >> v >> a >> s;
        u = sqrt((v * v) - (2 * a * s));
        t = (v - u) / a;
        cout << fixed << setprecision(3) << "Case " << c << ": " << u << " " << t << endl;
    }
   }
}
