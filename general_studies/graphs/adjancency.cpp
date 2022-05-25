#include <iostream>

class Graph
{
  private:
    bool ** adjMatrix;
    int numVertice;

  public:
    Graph(int);
    ~Graph();
    void addEdge(int, int);
    void rmEdge(int, int);
    void printMatrix();
};

Graph::Graph(int numVertice)
{
 this->numVertice = numVertice;
 Graph::adjMatrix = new bool*[numVertice];
for (int i = 0; i < numVertice; i++)
  {
   adjMatrix[i] = new bool[numVertice];
    for (int j = 0; j < numVertice; j++)
      Graph::adjMatrix[i][j] = false;
  }
}

Graph::~Graph()
{
for (int i = 0; i < numVertice; i++)
  delete[] adjMatrix[i];
delete[] adjMatrix;
}

void Graph::addEdge(int index1, int index2)
{
  adjMatrix[index1][index2] = true;
  adjMatrix[index2][index1] = true;
}

void Graph::rmEdge(int index1, int index2)
{
  adjMatrix[index1][index2] = false;
  adjMatrix[index2][index1] = false;
}

void Graph::printMatrix()
{
std::cout << "*   ";
  for ( int k = 0; k < numVertice; k++)
    std::cout << k  << " ~ ";
  std::cout << std::endl;
  for ( int i = 0; i < numVertice; i++)
  {
    std::cout << i  << " : ";
    for ( int j = 0; j < numVertice; j++)
      std::cout << adjMatrix[i][j] << " : ";
    std::cout << std::endl;
  }
  printf("\n");
};


int main(){
Graph grafo(5);

grafo.addEdge(1,1); 
//grafo.addEdge(3,1); 
grafo.printMatrix();
return (0);
}
