#include <iostream>
#include <cmath>
using namespace std;


int linear_search(int q,int array[],int sz);
void insertion_sort (int array2[], int sz2);
int binary_search(int q, int array3[], int sz3);


int main() {

    int array[] = {3,5,7,9,4,1};
    int q = 9;
    int sz = 6;
    cout<<linear_search(q, array,sz)<<endl;


    int array2[] = {2,5,6,7,4};
    int sz2 = 5;
    cout <<insertion_sort(array2, sz2);


    int array3[] = {3,4,7,8,9,21,42};
    int sz3 = 8;
    int m = 7;
    cout<<binary_search(m, array3, sz3)<<endl;

    return 0;
}

//Pseudocode 1:
int linear_search(int q, int array[], int sz){

    int g = 0;
    int place;
    while(g<=sz && array[g]!=q){
        g+=1;
    }
    if(g<=sz){
        place = g;
    }
    else{
        place = 0;
    }
    return place;
}

void insertion_sort(int array2[], int sz2){

    int y = 0;
    for(int n =1; n<sz2; n++){
        y = 0;
        while(array2[n] > array2[i]){
            y =+ 1;
        }
        double m = array2[n];
        for(int k = 0; k<(n-y); k++){
            array2[n-k] = array2[n-k-1];
        }
        array2[y]= m;
    }
    cout<<"{";
    for(int i = 0;i<sz2; i++){
        cout<<array2[i]<<",";
    }
    cout<<"}";
    cout<<endl;
}

/
int binary_search(int q, int array3[], int sz3){

    int g = 0;
    int n = sz3;
    int result;
    while(i<n){
        int m = floor((g+n)/2);
        if(q>array3[m]){
            g = m + 1;
        }
        else{
            n = m;
        }
    }
    if (q == array3[g]){
        result = g;
    }
    else{
        result = 0;
    }
    return result;
}
