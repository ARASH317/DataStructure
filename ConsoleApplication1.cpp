#include<iostream>
using namespace std;
class saf {
private:
	int saf[100];
	int front =-1;
	int rear =-1;
public:
	void enqueue( int object) {
		if (isfull()) {
			cout << "pore" << endl;
		}
		else {
			if (rear > 99) {
				rear = 0;
				saf[rear] = object;
			}
			else {
				rear++;
				saf[rear] = object;
			}
		}
	}
	int dequeue(){
		int a = saf[front + 1];
		front++;
		return a;
	}
	int peek() {
		front++;
		return saf[front];
	}
	int reversequeue() {
		int a;
		for (int i = front; i <= rear; i++) {
			a = saf[i];
			saf[i] = saf[rear-i];
			saf[rear-i] = a; 
			if (i > rear/2-1) {
				break;
			}
			
	    }
		return 0;
	}
	void display(){
		for (int i = front+1; i <=rear; i++) {
			cout << saf[i] << endl;
		}
	}
	bool isfull() {
		if (front == -1 && rear == 99) {
			return true;
		}
		else
		{
			if (front-rear== 1) {
				return true;
			}
			else {
				return false;
			}
		}
			
	}
	bool isempty() {	
		if (rear==front) {
			return true;
		}
		else
		{
			return false;
		}
	}
};
int main() {
	saf a1;
	a1.enqueue(10);
	a1.enqueue(20);
	a1.enqueue(30);
	a1.display();
	a1.reversequeue();
	a1.display();
	cout << endl;
	a1.dequeue();
	a1.display();
	cout << endl;
	a1.dequeue();
	a1.display();
	cout << a1.peek();
}