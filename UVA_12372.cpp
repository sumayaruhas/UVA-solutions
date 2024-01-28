#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define fd double
#define fl float
#define ld long double
#define PI 3.141592653
#define ch char
#define str string
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vi vector<long long int>
#define vc vector<char>
/* 
I hope you don’t forget that giving up decisively also counts as courage.
Life is tough, and things don’t always work out well, but we should be brave and go on with our lives.
Dream, you will fully bloom after all the hardships.
         ~ Suga
*/
/*
void bibaleovli()
{
    
}
*/

int main()
{
   ll t , a , b , c , d = 0;
   cin >> t;
   for(ll i = 1 ; i <= t ; i++)
   {
    d++;
    cin >> a >> b >> c;
    if(a <= 20 && b <= 20 && c <= 20){
        cout << "Case " << d << ": " << "good" << endl;
    }else{
        cout << "Case " << d << ": " << "bad" << endl;
    }
   }
}


// bibaleovli()
/*
4
5
01110
10 5 8 9 6
6
011011
20 10 9 30 20 19
4
0000
100 100 100 100
4
0111
5 4 5 1


27
80
0
14


*/
