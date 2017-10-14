#include<stdio.h>
#include<stdlib.h>

//structure to represent an adjacency list node

struct AdjListNode
{
  int destination;
  struct AdjListNode* link;
};

// structure  to represent an adjacency list

struct AdjList
{
  struct AdjListNode *head; // pointer to head node
};

//structure to represent a graph, an array of adjacency list. size of array will
//be number of vertices

struct Graph
{
  int V;
  struct AdjList *array;
}

//5to create new adjacency list node

struct AdjListNode * newAdjListNode(int destination)
{
  struct AdjListNode* newNode = (struct AdjListNode*)malloc(sizeof(struct AdjListNode ));
  newNode -> destination = destination;
  newNode -> link = NULL;
  return newNode;
}

//function to create graph of v vertices

struct Graph* createGraph(int V)
struct Graph
