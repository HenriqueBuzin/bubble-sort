#include <stdio.h>
#include <stdlib.h>

#include "bubble_sort.h"

void bubble_sort(dado_t ** dados, int n_linhas){
	dado_t * dado = NULL;
	for(int i = n_linhas; i > 1; i--){
		for(int j = 0; j < i - 1; j++){
			if(retornar_temperatura(dados[j]) > retornar_temperatura(dados[j + 1])){
				dado = dados[j];
				dados[j] = dados[j + 1];
				dados[j + 1] = dado;
			}
		}
	}
}
