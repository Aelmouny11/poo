#include <iostream>
using namespace std;
int add(int a,int b){
    return a + b;
}
float add(float a,float b){
    return a + b;
}


int main(){
    printf("int : %d\n",add(1,1));
    printf("float : %f\n",add(5.0,2.01));
    return 0;
}