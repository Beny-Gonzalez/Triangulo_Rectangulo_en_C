#include<stdio.h>

void main(){

    //se definen las variables para el tamaño de la matriz
    int renglon,columna;
    
    //se ingresa el tamaño de la matriz por consola
    printf("Ingrese el tamaño de la matriz:\n");
    scanf("%d",&renglon);
    
    columna=renglon; //se asigna el mismo valor de renglon a la columna para una matriz cuadrada
    
    int cont=1;     //se define el contador
    
    int tmp;        //se define un temporal
    tmp=columna;    //se iguala el tmp con el tamaño de la matriz esto para despues ir decrementadolo para formar
                    //un triangulo
    
    //se definen los dos ciclos para la matriz
    for(int i=0;i<renglon;i++){
        for(int j=0;j<columna;j++){
            
            //condicion que permitira imprimir solo la primera fila con todos los numeros
            if(cont <= renglon){
                printf("%d\t",cont);    
            }
            
            /*condicion que permitira imprimir la segunda fila en adelante para formar el
              triangulo, quitando la ultima posicion hasta quedar un solo valor en la ultima fila */            
            else if( j < tmp ){
                printf("%d\t",cont);    
            }
            
            //variable para incrementar el valor
            cont++;
            
        }
        
        //variable temporal que permite que se vaya decrementando
        tmp--;
        
        printf("\n");
    }
    
    
    
    
    
    
    
    
}