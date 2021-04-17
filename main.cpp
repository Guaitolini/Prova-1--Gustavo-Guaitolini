#include <iostream> 
#include <string>
using namespace std;

int letras, x1, x2;
char alfabeto[8][4]={{'a','b','c','-'},{'d','e','f','-'},{'g','h','i','-'},{'j','k','l','-'},{'m','n','o','-'},{'p','q','r','s'},{'t','u','v','-'},{'w','x','y','z'}};


int main(){
	string Letras[letras];
  cout << "TUTORIAL:\n\nReviva o passado, aqui você terá que digitar como se estivesse em  um celular antigo!!! \nDigite da seguinte forma:\n• 2: a, b, c\n• 3: d, e, f\n• 4: g, h, i\n• 5: j, k, l\n• 6: m, n, o\n• 7: p, q, r, s\n• 8: t, u, v\n• 9: w, x, y, z\n\n•Então para digitar a letra 'C' é #2=3\n\nTutorial encerrado.\n\n "<<endl;
  
  cout << "Agora digite o número de letras que sua palavra possui, e depois digite cada letra da forma em que foi ensinado no tutorial.\n" << endl;
	cin >>letras;
	 
	for (int i=0; i<letras; i++){
		cin >> Letras[i];
	} 
  for (int x=0; x<letras; x++){
    x1=int(Letras[x][1])-50;
		x2=int(Letras[x][3])-49;	
    cout << alfabeto[x1][x2];
	}
  
  
  
}