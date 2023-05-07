#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string now_time, start_time, res1, res2, res3;
	int hour1, hour2, min1, min2, sec1, sec2, now_tim, start_tim, dif;
	cin >> now_time;
	cin >> start_time;
	
	hour1 = stoi(now_time.substr(0,2));
	min1 = stoi(now_time.substr(3,2));
	sec1 = stoi(now_time.substr(6,2));
	
	hour2 = stoi(start_time.substr(0,2));
	min2 = stoi(start_time.substr(3,2));
	sec2 = stoi(start_time.substr(6,2));
	
	now_tim = 3600*hour1 + 60*min1 + sec1;
	start_tim = 3600*hour2 + 60*min2 + sec2;
	
	dif = start_tim - now_tim;
	
	if (dif < 0) {
		dif += 24*3600;
	}
	
	hour1 = dif / 3600;
	min1 = (dif-hour1*3600)/60;
	sec1 = (dif-hour1*3600-min1*60);
//	cout << sec1 << endl;
	
//	cout << hour1 << ":" << min1 << ":" << sec1;
	
	res1 = to_string(hour1);
	res2 = to_string(min1);
	res3 = to_string(sec1);
	
	if (hour1 < 10) {
		res1 = "0" + res1;
	} 
	if (min1 < 10) {
		res2 = "0" + res2;
	}
	if (sec1 < 10) {
		res3 = "0" + res3;
	}
	
//	printf("%2d:%2d:%2d", hour1, min1, sec1);
	cout << res1 << ":" << res2 << ":" << res3 << endl; 
	return 0;
}
