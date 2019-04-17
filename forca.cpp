#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstring>

using namespace std;

void scan();
	

int main(){
	
	int modoDeJogo;
	string letras;
	char c[101], b[101], e[101], d[101], f[101], m[101], n[101], v[101], r[101], g[101];
	char p[101] = {'\0'}, jog[101] = {'\0'};
	char q[101], letra;
	int x=0, acerto=0, vida=5, comp=0, j=0, i=0;
	srand(time(NULL));
	x = rand() % 10;
	
	cout << "DIGITE O MODO DE JOGO" << '\n' << "1 PARA SORTEAR 10 PALAVRAS" << '\n' << "2 PARA APENAS UMA PALAVRA" << endl;
	cout << "MODO DE JOGO: ";
	cin >> modoDeJogo;
	
	if(modoDeJogo == 1){
	system("cls");
	cout << "DIGITE 10 PALAVRAS: " << endl;
	cin >> c >> b >> e >> d >> f >> m >> n >> v >> r >> g;
	system("cls");
	
	if(x==0) strcpy(p, c);
	else if(x==1) strcpy(p, b);
	else if(x==2) strcpy(p, e);
	else if(x==3) strcpy(p, d);
	else if(x==4) strcpy(p, f);
	else if(x==5) strcpy(p, m);
	else if(x==6) strcpy(p, n);
	else if(x==7) strcpy(p, v);
	else if(x==8) strcpy(p, r);
	else if(x==9) strcpy(p, g);
}else if(modoDeJogo == 2){
	system("cls");
	cout << "DIGITE A PALAVRA: ";
	cin >> p;
	system("cls");
}
	
	strcpy(jog, p);
	memset(jog, '#', strlen(jog));
	
	for(; vida > 0;){
		cout << "VIDA: " << vida<< endl;
		cout << "PALAVRA: " << jog << "               LETRAS UTILIZADAS: " << letras << endl;
		cin >> q;
		if(strlen(q) == 1){
			letra = q[0];
		}
		letras.push_back(letra);
		letras.push_back(' ');
		if(strcmp(q, p) == 0){
			cout << "VOCE GANHOU, A PALAVRA EH: " << p << endl;
			break;
		}
		if(q[1] != '\0' && strcmp(q, p) != 0){
			cout << "VOCE PERDEU, A PALAVRA ERA: " << p << endl;
			break;
		}
		for(i=0; i<strlen(jog); ++i){
			if(q[0] == p[i]){
				jog[i] = q[0];
				acerto = 1;
			
		}
			
	}
	if(acerto == 0){
			--vida;
			cout << "ERRADO" << endl;
		}
	if(vida == 0){
		cout << "VOCE PERDEU, A PALAVRA ERA: " << p << endl;
		break;
	}	
		acerto = 0;
	for(j = 0; j<strlen(jog); ++j){
		if(jog[j] == '#'){
			comp = 1;
		}
	}
	if(comp == 0){
		cout << "VOCE GANHOU, A PALAVRA EH: " << jog << endl;
			break;
		}
		comp = 0;
		system("cls");
		
	}
	
	return 0;
}


