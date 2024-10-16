#include <iostream>
using namespace std;

int main() {
int n,i; 
string nome;
float voto,somma,media;
cout<<"quanti sono gli alunni?"<<endl;
cin>>n;
i=1;
somma=0;
while(i<=n)
{ 
i=i+1; 
cout<<"inserisci il nome degli alunni"<<endl;
cin>>nome;
cout<<"inserisci il voto per ogni alunno"<<endl;
cin>>voto;
if(voto>=6)
{ 
 cout<<"l'alunno e stato promosso"<<endl; 
    } 
    else 
    { 
    cout<<"l'alunno non e stato promosso"<<endl;
    }  
    somma=somma+voto;
    cout<<"la somma e "  somma<<endl;

} 

}
//LEGGERE LE ISTRUZIONI NEL FILE README.md
