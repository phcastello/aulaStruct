#include<iostream>
#include<string>
#define nl std::cout<<std::endl;

typedef struct{
    std::string hora;
    int dia;
    int mes;
    int ano;
    std::string tarefa;
}Agenda;

int main(){
    Agenda Compromisso[10];
    int qtdCadastros = 0;

    std::cout << "digite quantos compromissos são precisos anotar: ";
    int qtdCompromissos;
    std::cin >> qtdCompromissos;
    for(int i=0; i < qtdCompromissos; i++){
        std::cout << "digite o horario: ";
        std::string hora;
        std::cin >> hora;
        Compromisso[i].hora = hora;
        std::cin.ignore();

        std::cout << "digite o dia: ";
        int dia;
        std::cin >> dia;
        Compromisso[i].dia = dia;
        std::cin.ignore();

        std::cout << "digite o mes: ";
        int mes;
        std::cin >> mes;
        Compromisso[i].mes = mes;
        std::cin.ignore();

        std::cout << "digite o ano: ";
        int ano;
        std::cin >> ano;
        Compromisso[i].ano = ano;
        std::cin.ignore();

        std::string tarefa;
        std::cout << "Digite o seu compromisso:";nl
        std::getline(std::cin, tarefa);
        Compromisso[i].tarefa = tarefa;

        qtdCadastros++;
    }
    
    for(int i=0; i < qtdCadastros; i++){
        std::cout << "------------------------------------------------------------------";nl
        std::cout << "Cadastro de numero " << i << ":";nl
        std::cout << "Horario " << Compromisso[i].hora;nl
        std::cout << "Data " << Compromisso[i].dia << "/" << Compromisso[i].mes << "/" << Compromisso[i].ano;nl
        std::cout << "Compromisso: " << Compromisso[i].tarefa;nl
    }
    


}