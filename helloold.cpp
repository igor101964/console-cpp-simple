#include <iostream>
 
int main() {
bool TuringTest(false), mind(true), mindmachine(false);int intelligencemachineIQ=0;
do 
{
    intelligencemachineIQ = intelligencemachineIQ + 1;
if (intelligencemachineIQ < 140) {
 std::cout << "Dave, continue to work on machine, please." << "\n";
 std::cout << "Result of Turing Test:" << TuringTest << " -False" << "\n" ;
 std::cout << "\n";
   }
   else {
 TuringTest = true;
 std::cout << "Dave, you are fired. Sorry about it. " << "\n";
 std::cout << "Result of TuringTest:  " << "mind&&mindmashine > mind||mindmashine" << "\n";
 std::cout << "Dave, you are a complete idiot...";
 return 0;
   } 
      } 
      while (intelligencemachineIQ < 140) ; }