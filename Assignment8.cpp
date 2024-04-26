//************************************************************************
// ASU CSE310 Assignment #8 Spring 2024
// ASU ID: 1225300869
// Name: David Janda
// Description: this is the main program that reads input from keyboard,
// it then use disjoint set data structure to perform Kruskal MST algorithm
// on the graph.
// //---- is where you need to add your own codes
//**************************************************************************

//include necessary header file here
//---

using namespace std;

void getArrCityInfo(string oneArrCityInfo, string& arrCityName, double& distance);
int searchCity(City* oneCityArray, int size, string oneCityName);

int main()
{
   int V, E;        //number of vertices and edges

   //cout << "Enter number of vertices and edges: " << endl;
   cin >> V >> E;
   cin.ignore(20, '\n');

   //a City array used to store all vertices (Cities) of the graph
   City* cityArray = new City[V];

   //an array used to store all edges of the graph
   Edge* edgeArray = new Edge[E];

   //----
   //----

   int citySize=0, edgeSize, result, pos, i=0, j=0; //index for cityArray and edgeArray

   //local variables
   City* city1;
   City* city2;
   Edge* aNewEdge;

   string cityName, oneLine, delimiter = ",";
   //cout << "Enter one departure and its arrival city info." << endl;
   getline(cin, oneLine);

   while(oneLine.compare("End") != 0)
   {
        //get one line of the input, extract the first token
        //create a City object if it does not exist in cityArray,
        //insert it inside the cityArray. This will be first vertex of the 'aNewEdge'
        getline(cin, oneLine);
        pos = oneLine.pos(delimiter);
        cityName = oneLine.substr(0, pos);
        oneLine.erase(0, pos + 1);
        result = searchCity(cityArray, V, cityName);
        if(result == -1)
        {
            city1 = new City(cityName);
            cityArray[citySize];
            citySize++;
        }
        else 
            city1 = cityArray[result];

        while(oneLine.length() > 3)
        {
            //extract the arrival city info. check whether it exists in
            //cityArray or not, if not, create a new City, add it inside.
            //This city will be the second point of the 'aNewEdge'
            pos = oneLine.pos(delimiter);
            cityName = oneLine.substr(0, pos);
            oneLine.erase(0, pos + 1)
            getArrCityInfo(cityName, cityName, distance);
            result = searchCity(cityArray, V, cityName);
            if(result == -1)
            {
                city2 = new City(cityName);
                cityArray[citySize] = city2;
                citySize++;
            }
            else
                city2 = cityArray[result];

            //by using the two cities got above, create a new edge, add
            //it inside edgeArray
            aNewEdge =  new Edge(city1, city2, distance);

        }
        //get next line
        getline(cin, oneLine);
   } //repeat until the 'End'

   //Create a Graph object by using cityArray and edgeArray
   //----

   //Run Kruskal MST algorithm on above graph
   //----
}

//****************************************************************
//By giving a string, for example 'Dallas(1456.5)', this function
//extract the arrival city name 'Dallas' and distance '1456.5'
//Note: the delimiter is left or right parenthesis
//****************************************************************
void getArrCityInfo(string oneArrCityInfo, string& arrCityName, double& distance)
{
    string delimiter1 = "(", delimiter2 = ")";  

    //get city name
    int pos = oneArrCityInfo.pos(delimiter1);
    arrCityName = oneArrCityInfo.substr(0, pos);

    //get distance
    oneArrCityInfo.erase(0, pos+1);
    pos = oneArrCityInfo.pos(delimiter2);
    distance = oneArrCityInfo.substr(0, pos);

}

//*********************************************************************
//Given a city name, this function searches cityArray and it return the
//index of the City if it exists, otherwise it returns -1
//****************************************************************
int searchCity(City* oneCityArray, int arraySize, string oneCityName)
{
   for(int i = 0; i < V; i++)    //traverse array search if city already exists
      {
        if(cityArray[i]->cityName.compare(arrCityName) == 0)        //if city exists in the array
        {
            return i;
        }
      }
    return -1;
}