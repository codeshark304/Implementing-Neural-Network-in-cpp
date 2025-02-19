#ifndef _NEURAL_NETWORK_HPP_
#define _NEURAL_NETWORK_HPP_

#include<iostream>
#include<vector>
#include "Matrix.hpp"
#include "Layer.hpp"
using namespace std;

class NeuralNetwork{
public:
    NeuralNetwork(vector<int> topology);
    void setCurrentInput(vector<double> input);
    void printToConsole();
private:
    int topologySize;
    vector<double> input;  // Add this line if missing
    vector<int> topology;
    vector<Layer *> layers;
    vector<Matrix *> weightMatrices;
    vector<double> currentInput;
};

#endif