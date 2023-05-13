#include <iostream>
#include <string>
using namespace std;

void push(int *stack, int *size, int num) {
	int j;
	if (*size == 0) {
		stack[0] = num;	
	}
	else {
		for (j = *size; j > 0; j--) {
			stack[j] = stack[j-1];
		}
		stack[0] = num;	
	}
	*size += 1;
	return;
}
void pop(int *stack, int *size) {
	int j;
	if (*size == 0) {
		printf("%d\n", -1);
	} else {
		printf("%d\n", stack[0]);
		for (j = 0; j < *size -1; j++) {
			stack[j] = stack[j+1];
		}
		stack[*size-1] = -1; 
		*size -= 1;	
	}
}
void top(int *stack, int *size);



int main() {
	int N, i, j, stack[10000] = {-1}, size = 0;
	string line, cmd, num_str, separator = " ";
	int num;
	scanf("%d", &N);
//	printf("%d", N);
	int position, end;
	for (i = 0; i < N + 1; i++) {
		getline(cin, line);
//		cout << line << endl;
		position = line.find(separator, 0);
		if (position != -1) {
			end = line.length();
			num_str = line.substr(position, end-position);
			num = stoi(num_str);
			cmd = line.substr(0, position);
		} else {
			cmd = line;
		}
		if (cmd == "push") {
			push(stack, &size, num);
		} else if (cmd == "pop") {
			pop(stack, &size);
		} else if (cmd == "size") {
			printf("%d\n", size);
		} else if (cmd == "empty") {
			if (size == 0) {
				printf("%d\n", 1);
			} else {
				printf("%d\n", 0);
			}
		} else if (cmd == "top") {
			if (size == 0) {
				printf("%d\n", -1);
			} else {
				printf("%d\n", stack[0]);
			}
		}

//		printf("%d stack ", i);
//		for (j = 0; j < size; j++) {
//			printf("%d ", stack[j]);
//		}
//		printf("\n");		
	}
	

	return 0;
}