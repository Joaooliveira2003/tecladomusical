#include <iostream>
#include <conio.h>
#include <windows.h>
#include <vector>

using namespace std;

// Vetor para salvar as notas tocadas
vector<char> notasTocadas;

void tocarNota(float frequencia, int duracao) {
    if (frequencia > 0) {
        Beep(frequencia, duracao);
    }
}

void Violao() {
    cout << "Começa a tocar." << endl;
    cout << "Tecle 'q' para encerrar e voltar ao menu principal." << endl;

    while (true) {
        char tecla = getch();
        switch (tecla) {
        case 'a':
            notasTocadas.push_back('a');
            tocarNota(82, 440); // Mi
            break;
        case 's':
            notasTocadas.push_back('s');
            tocarNota(110, 440); // Lá
            break;
        case 'd':
            notasTocadas.push_back('d');
            tocarNota(146, 440); // Ré
            break;
        case 'f':
            notasTocadas.push_back('f');
            tocarNota(196, 440); // Sol
            break;
        case 'g':
            notasTocadas.push_back('g');
            tocarNota(246, 440); // Si
            break;
        case 'h':
            notasTocadas.push_back('h');
            tocarNota(329, 440); // Mi
            break;
        case 'q':
            cout << "Encerrando o Violão virtual." << endl;
            return;
        default:
            break;
        }
    }
}

void Guitarra() {
    cout << "Começa a tocar." << endl;
    cout << "Tecle 'q' para encerrar e voltar ao menu principal." << endl;

    while (true) {
        char tecla = getch();
        switch (tecla) {
        case 'a':
            notasTocadas.push_back('a');
            tocarNota(82, 407); // Dó
            break;
        case 's':
            notasTocadas.push_back('s');
            tocarNota(110, 307); // Ré
            break;
        case 'd':
            notasTocadas.push_back('d');
            tocarNota(146, 832); // Mi
            break;
        case 'f':
            notasTocadas.push_back('f');
            tocarNota(195, 998); // Fá
            break;
        case 'g':
            notasTocadas.push_back('g');
            tocarNota(246, 942); // Sol
            break;
        case 'h':
            notasTocadas.push_back('h');
            tocarNota(329, 628); // Lá
            break;
        case 'q':
            cout << "Encerrando a Guitarra virtual..." << endl;
            return;
        default:
            break;
        }
    }
}

void Reproduzir() {
    if (notasTocadas.empty()) {
        cout << "Nenhuma nota foi tocada ainda!" << endl;
        return;
    }

    cout << "Reproduzindo as notas..." << endl;
    for (char tecla : notasTocadas) {
        switch (tecla) {
        case 'a':
            tocarNota(82, 440); // Mi
            break;
        case 's':
            tocarNota(110, 440); // Lá
            break;
        case 'd':
            tocarNota(146, 440); // Ré
            break;
        case 'f':
            tocarNota(196, 440); // Sol
            break;
        case 'g':
            tocarNota(246, 440); // Si
            break;
        case 'h':
            tocarNota(329, 440); // Mi
            break;
        default:
            break;
        }
    }
    cout << "Fim da reprodução." << endl;
}

int main() {
    int option;
    while (true) {
        system("cls");
        cout << "Bem-vindo ao criador de trilhas sonoras!" << endl;
        cout << "VAMOS ESCOLHER!!!" << endl;
        cout << "1. Violão" << endl;
        cout << "2. Guitarra" << endl;
        cout << "3. Reproduzir" << endl;
        cout << "4. Sair" << endl;
        cout << "Informe o instrumento desejado: ";
        cin >> option;

        system("cls");

        switch (option) {
        case 1:
            Violao();
            break;
        case 2:
            Guitarra();
            break;
        case 3:
            Reproduzir();
            system("pause");
            break;
        case 4:
            cout << "Até mais!!" << endl;
            return 0;
        default:
            cout << "Opção inválida. Tente novamente!" << endl;
            system("pause");
            break;
        }
    }

    return 0;
}