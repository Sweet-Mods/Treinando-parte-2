 
//code by sweet mods

//inclusoes
#include <iostream>
//inclusao principal
#include "recurses.h"
#include "config.h"

using namespace std;

//variaveis
string resp="764";
string name;
int num1;
int num2;
string term;




int main(){
	//Carregamentos
    Feminino *p1=new Feminino();
    Masculino *p2=new Masculino();
    Player *neltro=new Player();
    info check;
    system("cls");

    inicio:
    check.security(p1->vida,p1->dinheiro);
    p1->print();
    cout << endl;
    p2->print();
    cout << "\n>";
    cin >> resp; 
    if(resp == "ms.down.money"){
        p2->downMoney();
        system("cls");
        goto inicio;
    }else if(resp == "ms.up.money"){
        p2->upMoney();
        system("cls");
        goto inicio;
    }else if(resp == "ms.down.life"){
        p2->downLife();
        system("cls");
        goto inicio;
    }else if(resp == "ms.up.life"){
        p2->upLife();
        system("cls");
        goto inicio;
    }else if(resp == "fm.down.money"){
        p1->downMoney();
        system("cls");
        goto inicio;
    }else if(resp == "fm.up.money"){
        p1->upMoney();
        system("cls");
        goto inicio;
    }else if(resp == "fm.down.life"){
        p1->downLife();
        system("cls");
        goto inicio;
    }else if(resp == "fm.up.life"){
        p1->upLife();
        system("cls");
        goto inicio;
    }else if(resp == "new.class"){
    	system("cls");
        cout << "Digite o sexo da classe: ";
        cin >> name;
        system("cls");
        cout << "Digite a Vida da classe: ";
        cin >> num1;
        system("cls");
        cout << "Digite o Dinheiro da classe: ";
        cin >> num2;
        Player *neltro=new Player();
        neltro->newclass(name,num1,num2);
        system("cls");
        while(resp != "sair"){
        	inicio2:
        	check.security(neltro->vida,neltro->dinheiro);
        	neltro->print();
        	cout << "\n>";
        	cin >> resp;
            if(resp == "c.down.money"){
        neltro->downMoney();
        system("cls");
        goto inicio2;
    }else if(resp == "c.up.money"){
        neltro->upMoney();
        system("cls");
        goto inicio2;
    }else if(resp == "c.down.life"){
        neltro->downLife();
        system("cls");
        goto inicio2;
    }else if(resp == "c.up.life"){
        neltro->upLife();
        system("cls");
        goto inicio2;
        }else if(resp == "sair"){
        	system("cls");
        	return 0;
        }
       }
    }
    return 0;
}