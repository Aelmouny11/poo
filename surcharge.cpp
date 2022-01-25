#include <iostream>
using namespace std;
int add(int a,int b){
    return a + b;
}
float add(double a,double b){
    return a + b;
}


int main(){
    printf("int : %d\n",add(1,1));
    printf("float : %f\n",add(5.1,2.1));
    return 0;
}