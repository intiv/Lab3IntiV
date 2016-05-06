#include<iostream>

using std::cout;
using std::cin;
using std::endl;


int input();
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
		int x=1;
		if(turno){
			while(x==1){
				column=input();
				int validar=6,currColumn;
				for(int i=lineas-1;i>=0;i--){
					if(tablero[i][column]==0){
						tablero[i][column]=1;
						currColumn=i;
						i=0;
						x=2;
					}else{
						validar--;
					}
				}
				cout<<validar<<endl;
				if(validar==0){
					cout<<"Esa columna esta llena, ingrese una columna diferente"<<endl;
				}else{
					/*bool derecha=false,izquiera=false,arriba=false,abajo=false,diag1=false,diag2=false;
					if((7-column)>=3){

					}*/
	
				}	
			}
			
				
		}else{
			
		}
		if(turno==1){ turno=2; }else{ turno=1; }
	}
	return 0;

}


int input(){
	int n;
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
