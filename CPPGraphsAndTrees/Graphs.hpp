#include <iostream>

#ifndef GRAPHS_H
#define GRAPHS_H
#endif
template <class T>
class Graphs {
public:
	Graphs();
	void insert();
	void delete();
	int search(T data);
	void moveLeft(T&& data);
	void moveLeft(T&& data);
protected:
	int left;
	int rigth;
};