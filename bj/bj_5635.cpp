#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int n, year, month, date, max_year = 1989, max_month = 0, max_date = 0, min_year = 2011, min_month = 13, min_date = 32;
	string name, min_name, max_name;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name >> date >> month >> year;
		if (year > max_year) {
			max_year = year;
			max_month = month;
			max_date = date;
			max_name = name;
		} else if (year == max_year) {
			if (month > max_month) {
				max_month = month;
				max_date = date;
				max_name = name;
			} else if (month == max_month) {
				if (date > max_date) {
					max_date = date;
					max_name = name;
				}
			}
		}
		
		if (year < min_year) {
			min_year = year;
			min_month = month;
			min_date = date;
			min_name = name;
		} else if (year == min_year) {
			if (month < min_month) {
				min_month = month;
				min_date = date;
				min_name = name;
			} else if (month == min_month) {
				if (date < min_date) {
					min_date = date;
					min_name = name;
				}
			}
		}
		 
	}
	cout << max_name << endl;
	cout << min_name;
	return 0;
}
