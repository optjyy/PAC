#include <iostream>
using namespace std;

int main(void) {
    int n, p, max_price, price;
    
    //char name[20], min_name[21];
    string name, max_name;
    cin >> n;
    for (int i = 0; i < n; i++) {
    	cin >> p;
    	max_price = 0;
    	for (int j = 0; j < p; j++) {
    		cin >> price >> name;
    		if (price > max_price) {
    			max_price = price;
    			max_name = name;
    		}
		}
		cout << max_name << endl;
	}
    
    return 0;
}
