#ifndef _NEURON_HPP_
#define _NEURON_HPP_

#include<iostream>
#include<math.h>
using namespace std;

class Neuron{
public:
    Neuron(double val);

    void setVal(double v);

    //Fast sigmoid act fn
    void activate();

    //derivative for fast sigmoid fn
    void derive();

    //Getter
    double getVal(){return this->val;}
    double getActivatedVal(){return this->activatedVal;}
    double getDerivedVal(){return this->derivedVal;}


private:
    double val;
    double activatedVal;
    double derivedVal;


};

#endif