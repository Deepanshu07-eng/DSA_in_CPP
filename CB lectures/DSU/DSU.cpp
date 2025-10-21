#include <iostream>
using namespace std;

class DSU {
public:

int* parent ;
int n;
DSU(int N){
    n = N +1;
    parent = new int (N+1);
    for(int i =0; i<=N; i++){

        parent[i]= i;
    }
}
int get_leader(int u){
    if(u == parent[u] ) return u;
    return get_leader(parent[u]);
}

int union_leader(int u, int v){
    int leader_u = get_leader(u);
    int leader_v = get_leader(v);

    if(leader_u != leader_v){
        parent[leader_v] = leader_u;

    }
}
};



int main() {

    return 0;
}