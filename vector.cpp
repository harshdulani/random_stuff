#include <vector>
#include <algorithm>
using namespace std;

int main()
{
		//1D vector
		vector<int> v();			//constructor creates empty vector

		cout<<v.size();				//initially 0
		v.assign(5, 100);			//assign(n, val) n − Size of vector. val − Value for each element.
		v.resize(10);				//resize to n elements
		v.push_back(2);
		v.push_back(5);
		v.push_back(1);
		v.push_back(3);
		v.push_back(4);
		//PRINT
		v.pop_back();
		//PRINT
		v.erase(v.begin());
		//v.begin() & v.end()		//point to the containers beginning.
		//v.first();				//points to first element
							//diff is that begin() in an empty vector points to null & first() doesnt exist
		v.empty();					//returns whether empty
		v.shrink_to_fit();			//shrinks to contained elements and destroys unused elements
		v.reserve(25);				//Requests that the vector capacity be at least enough to contain n elements.

		//sorts require #include<algorithm>
		v.sort(v.begin(), v.end()); //asc
		v.sort(v.begin(), v.end(), greater<int>()); //desc
		desc_sort(v);
		v.clear();					//remove all elements

		//2D Vector
		vector<vector<int>> v1();	//2d vector/ vector of vector
		v1.resize(no_of_rows, vector<int>(no_of_columns, initial value));
		
		int value = v1[1][2];	//Read from v1.

		v1[3][1] = 5;			//Save to v1.
		}
void desc_sort(vector<int> &v) { //reference
 		sort(v.begin(), v.end(), greater<int>());
}
void desc_sort(vector<int> *v) { //ptr
	sort(v->begin(), v->end(), greater<int>());
}