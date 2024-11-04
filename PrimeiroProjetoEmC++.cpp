#include <iostream>
#include <stdio.h>
#include <string.h>
#include  <stdlib.h>
#include <cstring>
using namespace std;
int main (){
	string cidade,bairro,tipo;
	char nome[50];
	int opcao;
	string email,emailv,senhav;
	char numero[15],cpf[13],senha[30];
	int cont1,cont2,cont3;
	double adicsaldo,retsaldo,emprestimo,juros;
	int idade,Nmconta,tentativas,tentativas2,tentativas3,voltar,voltar2,escolher;
	
	        
	cout << "                          Seja Bem Vindo a pagina de criacao de conta bancaria" << "\n\n";
	cout << "===========================================================" << "\n\n";
	cout <<"Aperte enter para comecar" << "\n";
	system("pause");
	cout << "Carregando..." << "\n";
	cout << "Crie ou use  um email valido: " << "\n\n";
	cin>>email;
	fflush(stdin);
	voltar2 :
	cout << "Crie uma senha com o minimo de 6 caracteres :" << "\n\n";
	cin>>senha;
	fflush(stdin);
	cont1 = strlen(senha);
	cout << "Aguarde verificando" << "\n\n";
	system("pause");
	if(cont1 >= 6 and cont1 <=30){
		cout << "senha valida" << "\n";
	}else{
	     cout << "Erro A sua senha nao contem o exigido, a sua senha contem " << strlen(senha) << " caracteres invalidos " << endl;
	    goto voltar2;
	}   
	cout << "Insira seu nome completo : " << endl;
	cin>>nome;
	fflush(stdin);
	tentativa :
	cout << "Insira seu CPF No formato Sem o - (XXXXXXXXX):" << "\n\n";
	cin>>cpf;
	fflush(stdin);
	cont2 = strlen(cpf);
    if (cont2 == 11){
    	
    	cout << "Verficando o CPF..." << "\n\n";
    	cout << " O CPF foi verficado com sucesso" << "\n\n";
    	
    }   else{
    	    cout << "cpf invalido" << "\n" << "tente novamente" << "\n";
            goto tentativa;
		}
	cout <<"insira o nome da sua cidade: " << "\n\n";
	getline(cin,cidade);
	fflush(stdin);
	cout << "Insira seu bairro: " << "\n\n";
	getline(cin,bairro);
	fflush(stdin);
	cout << "Insira a sua idade: " << "\n\n";
	cin>>idade;
	fflush(stdin);
	iniciar :
	cout << "Insira seu numero de telefone: "<< "\n\n";
	cin>>numero;
	cont3 = strlen(numero);
	if(cont3 <= 13){
	    cout << " Numero verificado..." << "\n\n";
        }else{
            cout << "Numero Invalido, Digite novamente " << "\n";
                goto iniciar;
   	}
    system("pause");
    cout << "===========================================================" << "\nn";
    cout << "                               Finalizando o cadastro..." << "\n\n";
    system("pause");
    cout << "                               Cadastro finalizado!" << "\n\n";
    cout << "=================================================================" << "\n\n";
	cout << "                               Fazer login                        " << "\n\n";
	voltar :
	system("cls");
	cout << "Logar conta" << endl;
    cout << "Email: " << "\n";
    cin>>emailv;
    fflush(stdin);
    cout << "Senha: " << "\n";
    cin>>senhav;
    fflush(stdin);
   if (senha == senhav && email == emailv){
   	         cout << "seja bem vindo, " << nome << endl;
   	     }else
			{
   	     	 cout << " o login falhou!" << "\n";
   	     	 goto voltar;
			}
	cout<< "ola " << nome[0,6] << "qual o tipo de conta que deseja escolher? Digite [1]Conta poupanca "<< "\n" << "[2] para conta corrente" << endl;
	cin>>escolher;
	switch(escolher){
	case 1:
		tipo= "Conta poupanca";
		cout << "voce escolheu o seu tipo de conta como " << tipo << endl;
		break;
	case 2 :
		tipo = "Conta corrente ";
		cout << "voce escolheu o seu tipo de conta como " << tipo << endl;
	}
	cout << " Deseja Adicionar saldo em sua " << tipo << " ? "<<endl;
	cout << "digite [1] para adicionar " << endl;
	cout << "digite [2] para pedir emprestimo" << endl;
	cout << "digite [3] para sair " << endl;
	cin>>opcao;
		switch(opcao){
		case 1:
			cout << "quanto deseja adicionar R$? :" << endl;
			cin>>adicsaldo;
			cout << " voce adicionou R$ " << adicsaldo;
			break;
		case 2: 
			tentativas3 :
			cout << "quantos R$ que voce precisa? obs:(Limite:1000000,00) " << endl;
			cin>>emprestimo;
			if (emprestimo <=1000000){
			
			juros = emprestimo +(emprestimo * 0.39);
			cout << "voce fez um emprestimo de :" << emprestimo << " A taxa do emprestimo sera de: " << juros << " R$" << endl;
		}else{
			cout << "Erro, o valor foi maior do que o limite de emprestimo, tente novamente" << endl;
			goto tentativas3 ;
		}
			break;
		case 3:
			   cout << "saindo das opcoes..." << endl;

		}
		
 		
    return 0;
}