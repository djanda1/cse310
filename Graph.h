//********************************************************************
// ASU CSE310 Assignment #8 Spring 2024
// ASU ID: 1225300869
// Name: David Janda
// Description: This is the header file that defines an undirected graph
//              with an array of vertice and edges
//********************************************************************

//include necessary header file here
//----

using namespace std;

class Graph
{
   private:
      int V, E;         //number of vertice and edges in the graph
      City* cityArr;    //an array of City objects
      Edge* edgeArr;    //an array of Edge objects

   public:
      Graph(int numOfCities, int numOfEdges, City* cityArray, Edge* edgeArray);
      void destructor();
      void make_set(City* aCity);
      City* find_set(City* aCity);
      void link(City* aCity, City* bCity);
      void Union(City* aCity, City* bCity);
      void sortEdges();

      void MST_Kruskal();

      //add any auxiliary functions in case you need them
      //----
};

Graph::Graph(int numOfCities, int numOfEdges, City* cityArray, Edge* edgeArray)
{
    V = numOfCities;
    E = numOfEdges;
    cityArr = cityArray;
    edgeArr = edgeArray;
}

void Graph::destructor()
{

}

void Graph::make_set(City* aCity)
{

}

City* Graph::find_set(City* aCity)
{

}

void Graph::link(City* aCity, City* bCity)
{

}

void Graph::Union(City* aCity, City* bCity)
{

}

void Graph::sortEdges()
{

}
//*******************************************************************
//This function performs the Kruskal algorithm on the graph.
void Graph::MST_Kruskal()
{
   cout << "MST Kruskal Algorithm Result\n" << endl;
   double totalDistance = 0.0;

   //----
   //----
   //----

   cout << "=================================================" << endl;
   cout << "Total Price: " << totalDistance << endl;
}