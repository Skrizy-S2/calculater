#include <stdio.h>

int soma(int num_a,int num_b,int num_c){
    int res=0;
    res=num_a+num_b;
    return res;
}
int sub(int num_a,int num_b,int num_c){
    int res=0;
    res=num_a-num_b;
    return res;
}
int mult(int num_a,int num_b,int num_c){
    int res=0;
    res=num_a*num_b;
    return res;
}
 float div(int num_a,int num_b,int num_c){
    int res=0;
    res=num_a/num_b;
    return res;
}
int main(){
    int a; 
    int b;
    int c;
    scanf("%i", & a);
    scanf("%i", & b);
    printf("Resultado:%i",soma(a,b,c),sub(a,b,c),mult(a,b,c),div,(a,b,c));
    return 0;
}
