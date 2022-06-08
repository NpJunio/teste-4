#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	setlocale (LC_ALL,"");
	//Heyllon Júnio
	float altura,MM=0,MH=0,MAXH=-1,MAXM=-1,MINM=10,MINH=10;//MM e MH=media ,MAXH e MAXM=maior altura, MINM e MINH=menor altura
	int C,CM=0,CH=0,N; //CM e CH=contagem de pessoas
	string Sexo, Repetir="S";
	
	while(Repetir=="S"||Repetir=="s"){//verificar ser quer repetir o programa
		cout<<"Quantas pessoas quer ler: ";
			cin>>N;//quantas pessoas vão ser lidas
	MM=0,MH=0,MAXH=-1,MAXM=-1,MINM=10,MINH=10,CM=0,CH=0;//zera os valores
	
	
	for(C=1;C<=N;C++)//cria a repetição
{
	cout<<"\nDigite M para Sexo Masculino";
	cout<<"\nDigite F para Sexo Feminino\n";
		cin>>Sexo;//entra com o sexo da pessoa em formato string
	if(Sexo=="F" || Sexo=="f" || Sexo == "M" || Sexo=="m")//verifica se escreveu o correto
	{
	}else{
		cout<<"\nValor invalido";//valor colacado incorreto
			C--;//anula essa tentativa
	}
	if(Sexo=="M"|| Sexo =="m")
	{
		CH++;//soma 1 homem
			cout<<"\nentre com altura: ";//entra com altura
				cin>>altura;

		if(altura>MAXH)
		{
			MAXH=altura;//atribui maior altura masculina
		}
		if(altura<MINH)
		{
			MINH=altura;//atribui menor altura masculina
			system("cls");
		}
	}
	else if(Sexo=="F" || Sexo=="f")
	{
		CM++;//soma 1 mulher
			cout<<"\nentre com altura : ";
				cin>>altura;
			MM=MM+altura;//media de altura feminina
		if(altura>MAXM)
		{
			MAXM=altura;//atribui maior altura feminina
		}
		if(altura<MINM)
		{
			MINM=altura;//atribui menor altura feminina
			system("cls");
		}
	}
}
			MM=MM/CM;//media feminina
			if(MINH<MINM)//verifica qual sexo tem menor altura
		{
			cout<<"\nA menor altura do grupo é: "<<MINH;
		}else{
		cout<<"\nA menor altura do grupo é:"<<MINM;
			}
				
				cout<<"\n\nMedia de altura das mulher:"<<MM;//media de altura das mulheres
				cout<<"\n\nTem "<<CH<<" homens";//quantos homens foram atribuidos 
		
		if(MAXH>MAXM)//verifica qual sexo tem maior altura
		{
			cout<<"\n\nO maior do grupo é um homem";
		}else{
			cout<<"\n\nO maior do grupo é um mulher";
		}
			
	cout<<"\n\n\n\nDeseja continuar S para sim e N para não : ";//pergunta se deseja repetir o programa
		cin>>Repetir;
		system("cls");//para limpar a tela
	}
	
}
