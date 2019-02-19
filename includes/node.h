#pragma once
#include <iostream>

class Literal;

class Node {
public:
  Node() {}
  virtual ~Node() {}
  virtual const Literal* eval() const = 0;
  virtual void print() const { 
  	// default method
    std::cout << "NODE" << std::endl; 
  }
};

