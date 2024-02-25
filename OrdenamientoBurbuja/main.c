#include <stdio.h>
#include <stdlib.h>


void print_vector(int v[], int n)
{
	int index;
	printf("[");
	for(index=0;index<n-1;index++)
	{
		printf("%d,",v[index]);
	}
	printf("%d]\n",v[index]);
}

void ordBurbuja2(int a[], int n)
{
	int i, j;
	int indiceIntercambio;
	int aux;
	int step = 1;
	
	i = n-1 ;
	
	while( i > 0) // Itera hasta N-1 Pasadas 
	{
		indiceIntercambio = 0;
		// Explorar la sublista a[0] to a[i]
		for(j=0;j<i;j++)
		{
			if(a[j+1] < a[j] )
			{
				aux = a[j] ;
				a[j] = a[j+1] ; 
				a[j+1] = aux ;
				indiceIntercambio = j ;
			}
		}
		// i se pone al valor del indice del último intercambio
		i = indiceIntercambio ;

		printf("Vector Ordenado STEP[%d]: ", step++);
		print_vector(a,n) ;
	}
}

int main(void)
{
	//int a[5] = {50,20,40,80,30};
	int a[10] = {19,1,9,7,3,10,13,15,8,12};
	int sizeVector =10 ;
	
	printf("Vector Original STEP[0]: ");
	print_vector(a,sizeVector);
	ordBurbuja2(a,sizeVector);
	
	return 0;
}




