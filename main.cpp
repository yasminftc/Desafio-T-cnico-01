#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
  int temp, views;
  char variavel2, variavel;
  float mod1 = 0.2, mod2 = 0.1, mod3 = 0.5;
  bool N = false, S = false;
  double I = mod1*mod2, total;
  string Analizado = "Post Analizado", NomeP;
  
  cout <<"A IA deseja calcular quantas curtidas seu post pegaria aproximadamente em determinadas situações."<< endl;
  cout <<"Você deixará ela usar seus dados para uma pesquisa?"<< endl;
  cout <<"Digite S para sim e N para não: ";
  cin >> variavel2;
  if (variavel2 == 'S'){
    S = true;
  }
  else {
    N = true;
  }
  cout <<"\n\n Digite uma palavra chave para o título do seu post: ";
  cin >> NomeP;
  
  cout <<"Digite o tempo que seu post estaria no ar (em minutos): ";
  cin >> temp;

  cout <<"Digite a quantia de pessoas que seguem a sua conta: ";
  cin >> views;
  
  if (temp >= 10 && views >= 2000 && S==true){

    total = temp*views*I;
    cout <<"\nA IA disse que você aproximadamente pegaria em média de likes: " << int(total) << endl;
    
  }

  else{
    total = temp*views*mod3;
    cout <<"A IA disse que você aproximadamente pegaria em média de deslikes: " << setprecision(1) << int(total) << endl;
  }

  cout <<"Deseja concluir a análise?"<< endl;
  cout <<"Digite S para sim e N para não: ";
  cin >> variavel;
  if (variavel == 'S'){
    cout << "\nA ANÁLISE FOI CONCLUITA...\n\n" << NomeP<< " - " << Analizado << "\nLikes: " << int(total) << "\nDeslikes: "<< setprecision(1) << int(temp*views*mod3) << endl;
  }
  else {
    cout << "\nA ANÁLISE NÃO FOI CONCLUITA...\n\n" << NomeP << "\nLikes: ???" << "\nDeslikes: ???" << endl;
  }
  
  return 0;
}