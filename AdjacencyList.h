#ifndef SIMPLIFIED_PAGERANK_ADJACENCYLIST_H
#define SIMPLIFIED_PAGERANK_ADJACENCYLIST_H

#pragma once
#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include <string>

using namespace std;

class AdjacencyList {
private:
    //Think about what member variables you need to initialize
    map<string, vector<string>> graph;
    int p;
public:
    //Think about what helper functions you will need in the algorithm
    AdjacencyList();
    map<string, vector<string>> getList();
    string PageRank(int n);
};

// This class and method are optional.

#endif //SIMPLIFIED_PAGERANK_ADJACENCYLIST_H
