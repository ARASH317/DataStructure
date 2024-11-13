#include <iostream>
using namespace std;
class arraye {
private:
    int arraye[120];
    int size = 0;
public:
    void insert(int index, int value) {
        for (int i = 0; i <100; i++) {
            if (arraye[i] == arraye[index]) {
                for (int j = i; j<100; j++)
                {
                    arraye[j + 1] = arraye[j];
                }
                arraye[index] = value;
            }
        }
        size++;
    }
    int delete_by_value(int value) {
       /* for ( int i = 0; i < size; i++) {
            if (arraye[i] == value) {
                for (int j = i; j<=size; j++) {
                    arraye[j] = arraye[j + 1];
                }
                return i;
                break;
            }
        }
        
                size--;*/
        int k = search_by_value(value);
        for (int i = k; i < size; i++) {
            arraye[i] = arraye[i + 1];
        }
        size--;
        return k;

    }
    void delete_by_index(int input) {
        for (int i = input; i <size-1; i++) {
            arraye[i] = arraye[i + 1];
        }
        
        size--;
    }
     void display()
     {
         for (int i = 0; i<size; i++) {
            cout << arraye[i];  
            cout << endl;
         }
        
     }
    void append(int value) {
        
        arraye[size] = value;
        size++;
    }
    void reverse(){
        int arrraye[100];
        int j = 0;
        for (int i = size-1; i >= 0; i--) {
            arrraye[i] = arraye[j];
            j++;
        }
        for (int x = 0; x < size; x++) {
            arraye[x] = arrraye[x];
        }
    }
    int search_by_value(int value) {
        int k;
        for (int i = 0; i < size; i++) {
            if (arraye[i] == value)
                    k = i;
        }
        return k;
    }



 };
using namespace std;
int main()
{
    

   /* arraye obj;
    obj.insert(0, 30);
    obj.insert(1, 20);
    obj.insert(2, 40);
    obj.display();
    cout << endl;
    obj.reverse();
    obj.display();
    cout << obj.search_by_value(20);
    cout << endl;
    cout << obj.delete_by_value(20)<<endl;
    obj.display();*/
}