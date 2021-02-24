#include <iostream>
using namespace std;

//Thomas Barrella BCS370 Test 1

class Measurement {
  private: int foot, inch;

  public:
  //default constructor with parameters
  Measurement(int foot=0, int inch=0) {
    this -> foot = foot;
    this -> inch = inch;
  }

  //member methods
  //overloaded Measurement operator++, no parameters so empty ()
    Measurement operator++() {
        //incrementally increase foot and inch
        foot++;
        inch++;

        //object right operand
        Measurement x(foot, inch);

        return x;
    }

  //returns true or false so bool type
    bool operator>(Measurement &x) {
      //if foot 1 is greater then foot 2
      
      if (foot > x.foot) {
        
        return true;
      }
      //if foot 1 is less than foot 2
      else if (foot < x.foot) {
        
        return false;
      }
      //if inch 1 is greater then inch 2
      else if (inch > x.inch) {
        
        return true;
      }
      //if inch 1 is lesss than inch 2
      else if (inch < x.inch) {
        
        return false;
      }
      
      //needs a return value so default is false
      return false;

    }

    //friend function
    friend ostream &operator<<(ostream &out, const Measurement &x) {
      //output the foot value and inch value
      out << "Foot value: " << x.foot << "\nInch value: " << x.inch << endl;
      return out;
    }
};

template<class A>

A checkIfInArray(A x[], A element, A size)
{
  //create universal boolean and variable
  bool retValue = 0;
  int uniVar;

  for (int i = 0; i < size; i++)
  {
    //if the element is in the array, change the bool value dn return it
    if (x[i] == element) {
      retValue = 1;
      
      return retValue;

    }
    //update the suniversal variable
    uniVar = i;
  
  }
  //if the universal variable equals size, the whole array has been serahced and return 0
  if (uniVar == size) {
    return retValue;
  }
   
}

//create swap function using dynamic variables
void swap(int* x, int* y) {
  //create placeholder dynamic variables
  int* z;
  //swap values
  *z = *x;
  *x = *y;
  *y = *z;
}


int main() {
  //int*  a = new int, *b = new int;

    //  *a =  10, *b = 20;
   //   swap(*a,*b);
    //  cout << *a << " " << *b << endl;

    //created a few measurements to run the functions using
  //Measurement test1(2,2), test2(3,3), test3(1,1), test4(10,10);
  //test if the first method works to increment the numbers, test of friend function with changes
  //cout << test1;
  //++test1;
 // cout << test1;

  //comparison test, 1 = true, 0 = false
  //Measurement test6(1,30), test7(1,20);
  //specifed function test on our exam
  //cout << (test6>test7) << endl;
  //cout << (test2>test3) << endl;
  //cout << (test1>test4) << endl;

  //testing friend function
  //Measurement test5(4,5);
  //cout << test5;

  return 0;

}