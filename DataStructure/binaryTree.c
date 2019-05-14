#include <stdio.h>

typedef struct no{
  int valor;
  struct no *direita;
  struct no *esquerda;
}No;

int alturaArvore(No *raiz){
	if(raiz==NULL){
		return 0;
	}
	else{
		he = 1 + alturaArvore(raiz->esquerda); 
		hd = 1 + alturaArvore(raiz->direita);
		if(he>hd) return he;
		else return hd;
	}
}

No* buscaPai(No *raiz, int alvo){
	if(raiz->valor < alvo){
		raiz->direita->valor == x ? return raiz: return buscaPai(raiz->direita, alvo);
	}
	else{
		raiz->esquerda->valor == x ? return raiz : return buscaPai(raiz->esquerda, valor);
	}
}


int main(){

}
