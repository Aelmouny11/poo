#include <iostream>
using namespace std;
int add(int a,int b){
    return a + b;
}
float add(double a,double b,int c=5){
    return a + b + c;
}


int main(){
    printf("int : %d\n",add(1,1));
    printf("float : %f\n",add(5.1,2.1,12));
    return 0;
}






