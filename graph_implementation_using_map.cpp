/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <list>
#include <unordered_map>
#include <cstring>
using namespace std;

class Graph{
    unordered_map<string,list<pair<string,int>>>l;
    
public:
    void addEdge(string x, string y, bool bidir, int wt){
        l[x].push_back(make_pair(y,wt));
        if(bidir){
            l[y].push_back(make_pair(x,wt));
        }
    }
    
    void printAdjList(){
        for(auto p:l){
            string city = p.first;
            list<pair<string,int>>nbrs = p.second;
            cout<<city<<"->";
            
            for(auto nbr:nbrs){
                string dest = nbr.first;
                int dist = nbr.second;
                cout<<dest<<" "<<dist<<",";
            }
            cout<<endl;
        }
    }

};

int main()
{
    Graph g;
    g.addEdge("A","B",false,20);
    g.addEdge("A","C",true,10);
    g.addEdge("D","C",false,40);
    g.addEdge("B","D",true,30);
    g.printAdjList();

    return 0;
}
