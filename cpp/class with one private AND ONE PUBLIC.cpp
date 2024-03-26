#include <iostream>
using namespace std;
 
class bakery{
private:
    int items;
 
public:
    bakery() { items = 0; }
    int getData()
	 { return items; }
	 
	
	 void bill(){
	 	
	 	cout<<"this is a public function"<<endl;;
	 }
};
 
int main()
{
    bakery t;
    int* ptr = (int*)&t;
    *ptr = 10;
    cout << t.getData();
    t.bill();
    return 0;
}
