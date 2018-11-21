#ifndef QLEARNING_H
#define QLEARNING_H
#include <iostream>


class QLearning
{
public:
    QLearning();
    void qLearningSort( int arr[]);
    int getNextState(int s, int a);
    float getReward(int s, int a);
    int getNextAction(int s);
    void banAction(int a);



private:

   int points[5];
   int q = rand()%100;
   int w = rand()%100;
   int e = rand()%100;
   int r = rand()%100;
   int t = rand()%100;

   bool used1=false;
   bool used2=false;
   bool used3=false;
   bool used4=false;
   bool used5=false;

};

#endif // QLEARNING_H
