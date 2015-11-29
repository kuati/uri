#include <bits/stdc++.h>
  
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair< int,int > pii;
typedef vector< int > vi;
typedef vector< pii > vii;

const int MAX = 100;

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pf push_front
#define pq priority_queue
#define IOFAST() ios_base::sync_with_stdio(0);cin.tie(0)
#define EPS 1e-7
#define PI  3.1415926535897932384626433832795028841971693993

vector< ll > fib, trib;

bool hasthree( ll num ) {
    while ( num ) {
        if ( num % 10 == 3 ) return true;
        num /= 10;
    }
    return false;
}

int main() {
    
    IOFAST();
    fib = vector< ll >(2, 1);
    
    short n, size;
    ll num;
    while ( trib.size() != 60 ) {
        size = fib.size();
        num = fib[ size - 1 ] + fib[ size - 2 ];
        if ( hasthree( num ) || num % 3 == 0 ) 
            trib.pb( num );
        fib.pb( num );
    }
    
    while ( cin >> n ) {
        cout << trib[ n - 1 ] << endl;
    }
    
    return ( 0 );
}