#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
#include <set>
using namespace std;

template<typename T>
class Graph {
public:
	unordered_map<T, list<T>> adj;

	void addEdge(T u, T v, bool bidir = false) {
		adj[u].push_back(v);
		if (bidir) {
			adj[v].push_back(u);
		}
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << " : ";
			for (auto child_pair : p.second) {
				cout << "( " << child_pair.first << ", " << child_pair.second << " ) ";
			}
			cout << endl;
		}
	}

    bool isCyclicHelper(T src, unordered_map<T, bool>& inPath, unordered_map<T, bool>& visited) {
        visited[src] = inPath[src] = true;

        for(auto ch: adj[src]) {
            if(visited[ch] == true and inPath[ch] == true) return true;
            if(!visited[ch]) {
                bool ans = isCyclicHelper(ch, inPath, visited);
                if(ans) return true;
            }
        }
        inPath[src] = false;
        return false;
    }
    bool isCyclic() {
        unordered_map<T, bool> visited, inPath;

        for(auto p : adj) {
            if(!visited[p.first]) {
                bool inCycle = isCyclicHelper(p.first, inPath, visited);
                if(inCycle) return true;
            }
        }

        return false;
    }
};


int main() {
	Graph <string> g;

	g.addEdge("C++", "WebDev");
	g.addEdge("C++", "Android");
    g.addEdge("Java", "Android");
    g.addEdge("WebDev", "CP");
    g.addEdge("WebDev", "DS");
    g.addEdge("CP", "Web3");
    g.addEdge("DS", "Web3");
    g.addEdge("Android", "CS");

	cout<<g.isCyclic();

	return 0;
}