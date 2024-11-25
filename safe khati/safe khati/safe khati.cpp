#include<iostream>
using namespace std;
class sfekhati {
private:
	int size;
	int front = 0;
	int rear = 0;
	int saf[100];
public:
	void enqueue(int object) {
		if (isfull()) {
			cout << "pore";
		}
		else
		{
			saf[rear] = object;
			rear++;
		}
	
	}
	int dequeue() {
		int a = saf[0];
		for (int i = 0; i <rear; i++) {
			saf[i] = saf[i + 1];
		}
		rear--;
		return a;
		
	}
	int peek() {
		return saf[0];
	}
	int reversequeue() {
		int a;
		int y = 1;
		for (int i = 0; i <=rear; i++) {
			a = saf[i];
			saf[i] = saf[rear - y];
			saf[rear - y] = a;
			if (i > rear / 2-1) {
				break;
			}
			y++;
		}
		return 0;
	}
	bool isfull() {
		if (rear==100) {
			return true;
		}
		else {
			return false;
		}
	}
	bool empty() {
		if (rear == front) {
			return true;
		}
		else {
			return false;
		}

	}
	void display() {
		for (int i = 0; i < rear; i++) {
			cout << saf[i] << endl;
		}
	}
};
int main() {
	sfekhati a1;
	a1.enqueue(10);
	a1.enqueue(11);
	a1.enqueue(12);
	a1.display();
	cout << endl;
	a1.reversequeue();
	a1.display();
	cout << endl;
	a1.dequeue();
	a1.display();
	cout << endl;
	cout<<a1.peek();
}