#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED

using namespace std;

struct info{
	int security(int num1,int num2){
		if(num1 > 999 or num2 > 999){
			system("cls");
			cout << "Valor Auto Detectado!\n\n";
			cout << "Não insira valores altos para o bem da sua memoria.\n\n";
			return num1,num2=0;
		}else{
			return 0;
		}
	}
};



#endif