#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fstream>


using namespace std;

void lectura_Archivo();


int main(){
	
     lectura_Archivo();
     
system("pause");	
}

void lectura_Archivo(){
	ifstream archivo("documento.txt");
	string linea;
    string texto;
    
	
  if ( archivo.fail() ) {
		printf ( "El archivo no ha sido encontrado. \n" ) ;
     	exit(1);
   	}
    printf( "Leyendo Archivo de Texto....\n" ) ;
	printf( "Leido Exitosamente.\n" ) ;
	printf("\n");
	
	while(getline(archivo,linea)){
		
		texto=texto+linea+"\n";		
	}
	cout<< texto <<endl;
	
	

}

