#include <stdio.h>
#include <stdlib.h>


typedef struct pilha{
	int numero;
	struct pilha * proximo;
}pilha;

void inserir(pilha **top){
	pilha * c;
	
	c = (pilha *)malloc(sizeof(pilha));
	if(c==NULL){
		
		printf("Sem espaço na memoria ");
		exit(1);
		
	}else{
		scanf("%d",&c->numero);
		if(*top==NULL){
			c->proximo = NULL;
		}else{
			c->proximo = *top;
		}
		*top = c;
	}
}

void listar(pilha *top){
	pilha *aux;
	if(top==NULL){
		printf("FOME\n");
	}else {
		aux=top;
		printf("%d\n",aux->numero);
		aux = aux->proximo;
	}
}

void excluir(pilha **top){
	pilha *aux;
	
	if (*top == NULL){
		void listar();
	}
	else
	{
		aux = *top;
		*top= aux->proximo;		
	}
}

int main(){
	
	pilha * topo = NULL;
	int Q, opc;
	scanf("%d", &Q);
	if(Q<= (10 ^7)){
		
		do{
			scanf("%d", &opc);
			switch(opc){
				case 1:
					listar(topo);
					excluir(&topo);
					break;
				case 2:
					inserir(&topo);
					break;
			}
			Q= Q-1;
			
		}while(Q > 0);
	}
	return 0;	
}
