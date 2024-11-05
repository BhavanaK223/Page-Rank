#include <iostream>

#include "AdjacencyList.h"

using namespace std;

int main() {
    int no_of_lines, power_iterations;
    string from, to;
    //string = OG NODE
    // vector = the node that OG links to

    AdjacencyList list;
    map<string, vector<string>> graph;

    cin >> no_of_lines;
    cin >> power_iterations; //r(1-p)
    //iterate based on num of lines
    for (int i = 0; i < no_of_lines; i++) {
        //get user input
        cin >> from >> to;

        //pushing to map
        graph[from].push_back(to);
        //something?
        if(graph.find(to)==graph.end())
            graph[to]={};
    }

    //rank functions
    //take from val in r(t-1) multiply that by number in row.r(t)= to row  values  multiply by the from val in r(t-1) . till t = p-1
    for(int i = 0; i < power_iterations; i++){
        if(power_iterations==1) {
            //rank = 1/num of unque pages
        }
        if(power_iterations>1){
            //rank = sum of in
        }

        //i = t
        //preform r functions
        // update graph
        //graph[from][to] * r(i).[to]
    }
    //Create a graph object
    // Created_Graph.PageRank(power_iterations);}
}
