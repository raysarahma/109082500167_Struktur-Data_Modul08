#include "queue.h"
#include <iostream>
using namespace std;

int main(){
    queue Q;
    CreateQueue (Q);

    enQueue(Q, "Zahwa ");
    enQueue(Q, "Raysa ");
    enQueue(Q, "Diva ");
    enQueue(Q, "Irahim ");
    enQueue(Q, "Zirly ");
    enQueue(Q, "Zahrah ");
    cout<<endl;

    cout<<"---Isi Queue Setelah enQueue---"<<endl;
    viewQueue(Q);

    deQueue(Q);
    deQueue(Q);
    deQueue(Q);
    deQueue(Q);
    cout<<endl;

    cout<<"--- Isi Queue Setelah Dequeue---"<<endl;
    viewQueue(Q);

    clearQueue(Q);
    return 0; 
}