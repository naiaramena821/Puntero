#include <iostream>

using namespace std;

//1
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

//2
//iterativa
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

//recursiva
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

//invertir
//iterativa
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
void swap(int *ptr1,int *ptr2){
    ptr1= x;
    ptr2= y;

}
int main()
{
    int x[5]={2,3,4,5,6};
    int tam = 5;
    int *ptr1;
    int *ptr2;
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}

//insertion
void imprimir(int *ptr, int tm)
{
    int j;
    for (j = 0; j < tm; j++)
    {
        cout <<" "<< *(ptr+j);
    }
    cout << endl;
}
void insertion(int *arr, int tam)
{
    int i, j, aux;
    for (i = 1; i < tam; i++)
    {
        aux = *(arr+i);
        j = i-1;

        while (j >= 0 && *(arr+j) >aux)
        {
            *(arr+j+1) = *(arr+j);
            j--;
        }
        arr[j +1] = aux;

    }
        imprimir(arr, tam);
}

int main()
{
    int ar[6] = {5, 1, 6, 2, 4, 3};
    insertion(ar, 6);
    return 0;

}

//burbuja
void imprimir(int *ptr, int tm)
{
    int j;
    for (j = 0; j < tm; j++)
    {
        cout <<" "<< *(ptr+j);
    }
    cout << endl;
}
void burbuja(int *arr,int tam){
    int i,j;
    for (i=1;i<tam;i++){
        for(j=tam-1;j>=i;j--){
            if(*(arr+j-1) > *(arr+j)){
                int aux=arr[j-1];
                *(arr+j-1)=*(arr+j);
                *(arr+j)=aux;
            }
        }
    }
    imprimir(arr,tam);
}
int main(){
    int arr[]={99,3,21,45,0};
    int tam=5;
        burbuja(arr,5);
    }
