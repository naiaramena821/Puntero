#include <iostream>

using namespace std;
/*
void imprimir(int *arr, int tam){
    while(tam--){
        cout << *arr <<" ";
        arr++;
    }
    cout << endl;
}
int  main(){

    imprimir(x,tam);
}

int sumi(int *arr,int tam)
{
    int sum=0;
    while(tam--){
    sum+=*arr;
    arr++;
        }
        return sum;
}

int main()
{
    int x[5]={2,3,4,5,6};
    int tam = 5;
    cout << sumi (x,tam);
}

int sumar(int *arr,int tam)
{
    if (tam==1){
        return *arr;
    }
    else{
    return *arr+sumar(arr+1,tam-1);
}
}
int main()
{
    int x[5]={2,3,4,5,6};
    int tam = 5;
    cout << sumar (x,tam) << endl;
}
*/
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
void swap(int &ptr1,int &ptr2){
    ptr1=x;
    ptr2=y;

}
int main(){

}
