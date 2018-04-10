#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
 float z=1;
 float y_old=0;
 float y_new;
 float x=0;
 float h=0.1;
 float N=10/h;
 for(int i=0;i<N;i++){
  y_new=y_old+h*z;
  z=z-h*y_old;
  x=x+h;
  cout<<x<<" "<<y_new<<" "<<z<<endl;
  y_old=y_new;
  
  
 }
return(0);
}
