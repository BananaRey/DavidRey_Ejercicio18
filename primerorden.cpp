#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
 float y=1;
 float x=0;
 float h=0.1;
 float N=3/h;
 for(int i=0;i<N;i++){
  y=y-h*y;
  x=x+h;
  cout<<x<<" "<<y<<endl;
  
 }
return(0);
}
