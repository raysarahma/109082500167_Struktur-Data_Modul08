// #include "queue.h"
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "Hello World" << endl;

//     Queue Q;
//     createQueue(Q);

//     cout << "----------------------" << endl;
//     cout << " H - T \t | info" << endl;
//     cout << "----------------------" << endl;

//     printInfo(Q);
//     enqueue(Q, 5); printInfo(Q);
//     enqueue(Q, 2); printInfo(Q);
//     enqueue(Q, 7); printInfo(Q);
//     dequeue(Q);    printInfo(Q);
//     enqueue(Q, 4); printInfo(Q);
//     dequeue(Q);    printInfo(Q);
//     dequeue(Q);    printInfo(Q);

//     return 0;
// }
// Alternatif 3
#include "queue.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "Latihan Queue - Alternatif 3 (Circular Queue)" << endl;

    Queue Q;
    createQueue(Q);

    cout << "----------------------" << endl;
    cout << " H - T \t | Queue info" << endl;
    cout << "----------------------" << endl;

    printInfo(Q);
    enqueue(Q, 5); printInfo(Q);
    enqueue(Q, 2); printInfo(Q);
    enqueue(Q, 7); printInfo(Q);
    enqueue(Q, 4); printInfo(Q);
    dequeue(Q);    printInfo(Q);
    enqueue(Q, 9); printInfo(Q);
    enqueue(Q, 6); printInfo(Q);   // tail muter ke indeks 0
    dequeue(Q);    printInfo(Q);

    return 0;
}