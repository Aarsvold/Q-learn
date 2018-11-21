#include "qlearning.h"
using namespace std;

QLearning::QLearning()
{

}

void QLearning::qLearningSort(int array[])
{
    for(int i=0; i<=4; i++){
    points[i]=array[i];
    }

    cout << "q" << q << endl;
    cout << "w" << w << endl;
    cout << "e" << e << endl;
    cout << "r" << r << endl;
    cout << "t" << t << endl;

}

int QLearning::getNextState(int s, int a){


    switch (a) {
    case 1:
        s=2;
        break;
    case 2:
        s=3;
        break;
    case 3:
        s=4;
        break;
    case 4:
        s=5;
        break;
    case 5:
        s=1;
        break;
    default:
        return 0;
        break;
    }
    return s;
}

float QLearning::getReward(int s, int a){

    int n = getNextState(s,a);
    //cout <<"n" << n << endl;

    //Få svar tilbage fra miljø om rewarden.

    switch (n) {
    case 1:
        if(used1){
            return 0;
        }
        return q;
        break;
    case 2:
        if(used2){
            return 0;
        }
        return w;
        break;
    case 3:
        if(used3){
            return 0;
        }
        return e;
        break;
    case 4:
        if(used4){
            return 0;
        }
        return r;
        break;
    case 5:
        if(used5){
            return 0;
        }
        return t;
        break;
    default:
        return 0;
        break;
    }
}

void QLearning::banAction(int a){
    switch (a) {
    case 1:
        used2=true;
        break;
    case 2:
        used3=true;
        break;
    case 3:
        used4=true;
        break;
    case 4:
        used5=true;
        break;
    case 5:
        used1=true;
        break;
    default:
        break;
    }
}

int QLearning::getNextAction(int s){
    float current_max_value = 0;
    int bestAction;


    for(int j=1; j<6; j++){

        float reward = getReward(s,j);
        //cout <<"reward:" << reward << endl;

        if(reward>current_max_value){

            //cout << "hej" << endl;
            bestAction=j;
            current_max_value=reward;
        }
    }
    banAction(bestAction);
    //cout << "best Action:" << bestAction << endl;
    return bestAction;
}
























