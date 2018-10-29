#include<bits/stdc++.h>

using namespace std;
#define REP(i, n)  for(int i=0;i<(int)(n);++i)
#define FOR(i, b, n)  for(int i=b;i<(n);++i)
#define ALL(c) (c).begin(),(c).end()
#define PB(c) push_back(c)
#define SS size()
#define ST first
#define ND second
typedef long long ll;
typedef vector<int> vi;
typedef set<int> si;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
template<typename T, typename U> static void amin(T &x, U y) { if (y < x) x = y; }
template<typename T, typename U> static void amax(T &x, U y) { if (x < y) x = y; }
template<typename T> void sout(T &w) { for(auto x : w) cout << x << ", "; cout << endl;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}


int i,j;

int main() {
    int N = 100;
    for(int a = 1; a<N; a++) {
        for(int b=a; b<N; b++) {
            for(int c=b; c<N; c++) {
                if (a*a+b*b==c*c) {
                    cout << "a=" << a << " b=" << b << " c=" << c << endl;
                }
            }
        }
    }
}

