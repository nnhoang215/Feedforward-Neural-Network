#include <iostream>
#include "MLP.h"

int main() {
  // srand() sets the starting point for producing a set of pseudo-random interges   
  // if srand() isn't called, the rand() seed is set as if srand(1) were called at program start
  // any other value for seed sets the generator to a different starting point 
  srand(time(NULL));

  rand();


  cout << "\n\n---------Logic Gate Example----------\n\n";
  Perceptron* p = new Perceptron(2);

  // p->set_weights({10,10,-15}); // this performs like the AND gate 

  //TODO: set weights so that it performs like the OR Gate 
  p->set_weights({50,50,-25}); 

  cout << "Gate: " << endl;
  cout << p->run({0,0}) << endl; //e-07 means times 10 to the power of -7
  cout << p->run({0,1}) << endl;
  cout << p->run({1,0}) << endl;
  cout << p->run({1,1}) << endl;



  cout << "\n\n---------XOR Example----------\n\n";

  MultiLayerPerceptron mlp = MultiLayerPerceptron({2,2,1}); // mlp 
  mlp.set_weights({{{-10,-10,15},{15,15,-10}}, {{10,10,-15}}});
  cout << "Hard-coded weights: \n";
  mlp.print_weights();

  cout << "XOR:" << endl;
  cout << "0 0 = " << mlp.run({0,0})[0] << endl;
  cout << "0 1 = " << mlp.run({0,1})[0] << endl;
  cout << "1 0 = " << mlp.run({1,0})[0] << endl;
  cout << "1 1 = " << mlp.run({1,1})[0] << endl;

}