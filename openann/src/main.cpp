#include<iostream>
#include<vector>
#include "../include/Neuron.hpp"
#include "../include/Layer.hpp"
#include "../include/Matrix.hpp"
#include "../include/NeuralNetwork.hpp"
using namespace std;
int main(int argc, char **argv){
    //cout<<"MY name is MK";
    // 1. Neuron
    //Neuron *n = new Neuron(1.5);

    //cout << "Val:" << n->getVal() << endl;
    //cout << "Activated Val:" << n->getActivatedVal() << endl;
    //cout << "Derived Val:" << n->getDerivedVal() << endl;
    
    // 2. Matrix
    //Matrix *m = new Matrix(3,2,true);
    //m->printToConsole();

    //cout<< "----------"<<endl;

    //Matrix *mT = m->transpose();
    //mT->printToConsole();
    
    vector <int> topology;
    topology.push_back(3);
    topology.push_back(2);
    topology.push_back(3);

    vector<double>input;
    input.push_back(1.0);
    input.push_back(0.0);
    input.push_back(1.0);

    NeuralNetwork *nn = new NeuralNetwork(topology);
    nn->setCurrentInput(input);

    nn->printToConsole();
    
    return 0;
}