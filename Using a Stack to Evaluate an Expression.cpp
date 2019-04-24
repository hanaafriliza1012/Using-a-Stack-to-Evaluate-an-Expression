#include<iostream>
using namespace std;
int main(){
  class node
{
 public:
    int data;
    node* next;
};
  int priority(char a) {
    int temp;
    if (a == '^')
        temp = 1;
    else if (a == '*' || a == '/')
        temp = 2;
    else if (a == '+' || a == '-')
