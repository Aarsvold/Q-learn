#include <QCoreApplication>
#include "qlearning.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
QCoreApplication a(argc, argv);
    srand(time(NULL));
    int s=1;
    int balance[5] = {1, 2, 3, 4, 5};
    QLearning hej;
    hej.qLearningSort(balance);

    for(int i=0; i<5; i++){
        int a = hej.getNextAction(s);
        //float reward = hej.getReward(s,a);
        s = hej.getNextState(s,a);
        cout << "outputtet: " << balance[s-1] << endl << endl;

    }

    return 0;
}
