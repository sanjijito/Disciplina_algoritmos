//Autor: Joao Victor Dantas
//Funcao do programa: calculo do preço de um automovel 0km de uma fabrica

#include<iostream>
#include<locale>

using namespace std;

int main(){
	
			setlocale(LC_ALL,"ptb");
			
			float valorFabrica, valorTotal=0;
			int opcase,contadortrio=0,contadorac=0,contadordir=0,contadorcomp=0;
			
			cout<<"*******Calculadora de preços*******\n\npor favor insira o valor do automóvel a seguir: ";
			cin>>valorFabrica;
			cout<<"\n\nO cliente deseja adicionais?";
			do{
				
				cout<<"\n0.Não deseja adicionais \n1.Trio elétrico \n2.Ar-condicionado \n3.Direção Hidráulica \n4.Completo\n\n\n";	
				cin>>opcase;
				system("cls or clear");								
				
				switch(opcase){
					case 0:
						//nenhum opcional
						cout<<"o cliente não deseja opcional. total do pedido: R$"<<valorTotal+valorFabrica<<"\n";
						break;
					
					case 1:
						//trio elétrico 2% do valor de fábrica com IPI
						valorTotal+=valorFabrica*0.10;
						contadortrio++;											
						cout<<"o cliente escolheu o adicional trio elétrico\nsubtotal do pedido: R$"<<valorTotal+valorFabrica<<"\ndeseja adicionar opcionais?\n";
						break;
					
				
					case 2:
						//ar-condicionado 2% do valor de fábrica sem IPI
						valorTotal+=valorFabrica*0.02;
						contadorac++;												
						cout<<"o cliente escolheu o adicional ar-condicionado\nsubtotal do pedido: R$"<<valorTotal+valorFabrica<<"\ndeseja adicionar opcionais?\n";
						break;
						
					
					case 3:
						//direção hidráulica 2% do valor de fábrica sem IPI
						valorTotal+=valorFabrica*0.02;
						contadordir++;												
						cout<<"o cliente escolheu o adicional direção hidráulica\nsubtotal do pedido: R$"<<valorTotal+valorFabrica<<"\ndeseja adicionar opcionais?\n";
						break;
						
					
					case 4:
						//completo soma de todos os acrescimos 												
						valorTotal=valorFabrica;
						valorTotal+=valorFabrica*0.06+valorFabrica*0.08;	
						contadorcomp++;												
						cout<<"o cliente escolheu o pacote completo\ntotal do pedido: R$"<<valorTotal-(valorTotal*0.035)<<"\n";					
						break;
						
						
					default:
						cout<<"opção inválida, digite uma das opções disponíveis.";
					}
					
																																		
			}while(opcase>=1 and opcase<=3 or opcase>4);
			
			cout<<contadortrio<<"x trio elétrico\n";
			cout<<contadorac<<"x ar-condicionado\n";
			cout<<contadordir<<"x direção hidráulica\n";
			cout<<contadorcomp<<"x completo\n";
				
				
			
			
			
			
			
			
			
			
			
			
			
			
			
}
