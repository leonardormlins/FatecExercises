#include <stdio.h>

void heapInsere(int n, int v[]){
  int f = n+1;
  while(f > 1 && v[f/2] < v[f]) {
    int t = v[f/2]; v[f/2] = v[f]; v[f] = t;
    f /= 2;
   }
}

void heapMexe(int n, int v[]){
  int t, f = 2;
  while (f <= n){
    if (f < n && v[f] < v[f+1] ) ++f;
    if (v[f/2] >= v[f]){
      break;
    }
    t = v[f/2]; v[f/2] = v[f]; v[f] = t;
    f *= 2;
  }
}

void heapsort (int n, int v[]) {
  int m;
  for (m = 1; m < n; m++){
    heapInsere(m, v);
  }
  for (m = n; m > 1; m--) {
    int t = v[1]; v[1] = v[m]; v[m] = t;
    heapMexe(m-1, v);
  }
}

int main(){
  int vetorQualquer[10] = {2,7,4,6,0,1,10,60,8,3};
  
  heapsort(vetorQualquer);
}
