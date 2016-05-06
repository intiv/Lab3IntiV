#include<iostream>

using std::cout;
using std::cin;
using std::endl;

//bool ganador(int,int,int[][]);
//void imprimir(int**);
int input();
//
bool Move(int);

int main(int argc,char* argv[]){
	const int columnas=7;
	const int lineas=6;
	int column;
	int tablero[lineas][columnas];
	for(int i=0;i<lineas;i++){
		for(int j=0;j<columnas;j++){
			tablero[i][j]=0;
		}
	}
	int turno=1;
	bool ganado=false;
	//imprimir(tablero);
	while(!ganado){
		for(int i=0;i<lineas;i++){
			for(int j=0;j<columnas;j++){
				cout<<tablero[i][j]<<"\t";
			}
			cout<<endl;
		}
		column=input();
		
		if(turno){
			/*while(1){
				for(int i=lineas;i>=0;i--){
					for(int j=columnas;j>=0;j--){
						//if
					}
				}	
			}*/
			//Move(1);
				
		}else{
			//Move(0);
		}
	}
	return 0;

}

int input(){
	int n;
	cout<<"Ingrese columna:"<<endl;
	while(1){
		
		cout<<"Ingrese columna:"<<endl;
		cin>>n;
		if(n<0||n>6){
			cout<<"Numero de columna debe ser del 0 al 6!"<<endl;
		}else{
			break;
		}
	}
	return n;

}

/*
void imprimir(int tablero**){
	for(int i=0;i<6;i++){
		for(int j=0;j<7;j++){
			cout<<*tablero[i][j]<<"\t";
		}
		cout<<endl;
	}

}

bool Move(int index){
	for(int i=6;i>=0;i++){
		
	}
}


bool ganador(int linea, int columna, int[6][7]tablero){
	
	

}

*/
