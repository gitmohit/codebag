#include<iostream>
#include<stack>
#include<list>
#include<map>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<set>
using namespace std;

//in macros # fro stringifying ## for tokenizing
#define DEBUG(x) cout<< '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<n;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>b;i--)

const int INF = INT_MAX;
typedef long long ll;
inline int two(int n) { return 1 << n; }
inline int set_bit(int &n, int b) { return (n |= two(b)); }
inline int unset_bit(int &n, int b) { return (n &= ~two(b)); }
inline int last_bit(int n) { return n & -n;}

template<class T> void chmax(T & a, const T & b) { a = max(a,b); }
template<class T> void chmin(T & a, const T & b) { a = min(a,b); }
template<class T> T MAX(T const & a, T const & b) { return max(a,b); }
template<class T> T MIN(T const & a, T const & b) { return max(a,b); }
int main(){
    
    return 0;
}
