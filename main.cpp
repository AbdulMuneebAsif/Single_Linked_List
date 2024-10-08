#include <iostream>
#include "List.h"
using namespace std;
int main() {
    List list;

    list.insertAtHead(1);
    list.insertAtTail(32);
    list.insertAtTail(45);
    list.print();
    cout << "\n\n";
    cout << "Search For 45 : " << list.search(45) << endl;
    cout << "Search For 55 : " << list.search(55) << endl;

    list.remove(32);
    list.print();
    return 0;
}
