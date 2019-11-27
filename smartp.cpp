#include <iostream>
#include <cmath>

using namespace std;

class Ball{
  int x, y;
public:
  Ball(){
    x = 0;
    y = 0;
  }
  void set_coordinates(){
    cin>>x;
    cin>>y;
  }
  void show(){
    cout<<"X = "<<x<<", Y = "<<y<<endl;
   }
};

template <typename T>

class smartp{
  T *object;
  smartp<T> & operator= (smartp <T> & obj){
  }
  public:

    smartp(T *obj)
  {
    cout<<"Объект создан."<<endl;
    object = obj;
  }
  ~smartp(){
    cout<<"Объект удален"<<endl;
    delete object;
  }
  T* operator-> (){
    return object;
  }
  T& operator* (){
    return *object;
  }
};

void foo()
{
  smartp <Ball> myball(new Ball);
  myball->set_coordinates();
  myball->show();
}

int main(){
  foo();
  cout<<"Hello world!"<<endl;
  return 0;
}
