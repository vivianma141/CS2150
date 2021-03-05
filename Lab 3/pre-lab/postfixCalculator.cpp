// Vivian Ma, vm8ufh, 3/2, postfixCalculator.cpp

#include "postfixCalculator.h"
#include <iostream>
#include <stack>
#include <cstdlib>

using namespace std;

postfixCalculator::postfixCalculator() {
  exp = stack<int>();
}

void postfixCalculator::pushNum(int value){
  exp.push(value);
}

int postfixCalculator::topValue(){
  if(exp.empty()){
    cout << "The stack is empty" << endl;
    exit(-1);
  }
  else 
    return exp.top();   
}

void postfixCalculator::removeTop(){
  if(exp.empty()){
    cout << "The stack is empty" << endl;
    exit(-1);
  }
  else
    exp.pop();
}

void postfixCalculator::add(){
  int first = topValue();
  removeTop();
  int second = topValue();
  removeTop();
  int sum = first + second;
  pushNum(sum);
}

void postfixCalculator::sub(){
  int first = topValue();
  removeTop();
  int second = topValue();
  removeTop();
  int sum = second - first;
  pushNum(sum);
}

void postfixCalculator::div(){
    int first = topValue();
    removeTop();
    int second = topValue();
    removeTop();
    if(second == 0){
      cout << "invalid division" << endl;
      pushNum(0);
    }
    else {
      int sum = second / first;
      pushNum(sum);
    }

}

void postfixCalculator::mult(){
    int first = topValue();
    removeTop();
    int second = topValue();
    removeTop();
    int sum = first *  second;
    pushNum(sum);

}

void postfixCalculator::neg(){
    int value = topValue();
    removeTop();
    exp.push(value*-1);

}
