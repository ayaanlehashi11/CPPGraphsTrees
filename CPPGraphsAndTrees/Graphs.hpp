#include <iostream>

#ifndef GRAPHS_H
#define GRAPHS_H
#endif
template <class T>
struct adjListNode {
	int value;
	adjNode* next;
};
struct graphEdge {
	int startV, endV, weight;
};
struct adjList {
	struct adjListNode* node;
};
class Graphs {
public:
	Graph();

protected:
	int left;
	int rigth;
};