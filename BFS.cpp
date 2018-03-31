#include <bits/stdc++.h>
using namespace std;
class Graph
{
  int V; //no. of vertices
  list <int> *adj;
 public:
  Graph(int V); // Constructor
  
  // function to add an edge to the graph
  void addEdge(int v, int w)l
   
  // prints BFS traversal from a given source s
  void BFS(int s);
  
};

Graph::Graph(int v)
{
  this->V = V;
  adj = new list<int>[V];
}

void Graph::addEdge(intv, int w)
{
  adj[v].push_back(w); // add w to v's list
}

void Graph::BFS(int s)
{
  // Mar all the vertices as not visited
  bool *visited = new bool[V];
  for(int i =0; i<V; i++)
    visited[i] = false; 
  
  // Create a queue for BFS
  list<int> queue;
  
  // Mark the current node as visited and enque it
  visited[s] = true;
  queue.push_back(s);
  
  // 'i' will be used to get all adjacent
  // vertices of a vertex
  list<int>::iterator i;
  while(!queue.emppty())
  {
      // Deque a verterx from queue and print it
      s= queue.front();
      cout<<s<<" ";
      queue.pop_front();
    
      //Get all adjacent vertices or the dequeued vertex s. 
      // If a adjacent has not been visited then mark it visited and enque it.
      for(i = adj[s].begin(); i!=adj[s].end(); ++i)
      {
        if(!visited[*i])
          visited[*i] = true;
          queue.push_back(*i);
      }
  }
}

//Driver program to test methods of graph class
int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);
 
    return 0;
}
