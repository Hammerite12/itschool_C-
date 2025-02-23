#include <iostream>
#include <string>

using namespace std;

// Exercitiul 1:
void ex1() {
    double voturi[5] = { 0, 0, 0, 0, 0 };
    int vot;
    cout << "Introduceti numarul candidatului: ";
    cin >> vot;
    while (vot != 0){
        switch(vot) {
            case 1:
                voturi[0]++;
                break;
            case 2:
                voturi[1]++;
                break;
            case 3:
                voturi[2]++;
                break;
            case 4:
                voturi[3]++;
                break;
            case 5:
                voturi[4]++;
                break;
        }
        cout << "Introduceti numarul candidatului: ";
        cin >> vot;
    }
    int sv = 0;
    for (int i = 0; i < 5; i++) {
        sv += voturi[i];
    }
    double procent[5] = { 0, 0, 0, 0, 0 };
    for (int i = 0; i < 5; i++) {
        procent[i] = (voturi[i] / sv) * 100;
    }
    cout << endl;
    cout << "Candidatul 1: " << procent[0] << "%" << endl;
    cout << "Candidatul 2: " << procent[1] << "%" << endl;
    cout << "Candidatul 3: " << procent[2] << "%" << endl;
    cout << "Candidatul 4: " << procent[3] << "%" << endl;
    cout << "Candidatul 5: " << procent[4] << "%" << endl;
}

// Exercitiul 2:
string fantasy[4] = { "Stapanul inelelor", "Calea regilor", "Asasinul din umbra", "Dansul dragonilor"};
string programare[4] = { "Limbajul C++", "Limbajul Python", "Limbajul Java", "Limbajul C#"};

bool fan[4] = { false, true, true, true };
bool pro[4] = { true, true, true, true };

int rand_fan[4] = { 1, 1, 2, 2 };
int rand_pro[4] = { 3, 3, 4, 4 };

int raft_fan[4] = { 1, 2, 1, 2 };
int raft_pro[4] = { 1, 2, 1, 2 };

void returnare() {

    cout << "Introduceti numele cartii pe care vreti sa o returnati: ";
    string carte;
    cin >> carte;
    string aux_f1;
    string aux_p1;
    bool aux_f2;
    bool aux_p2;

    for (int i = 0; i < 4; i++) {
        aux_f1 = fantasy[i];
        aux_p1 = programare[i];
        aux_f2 = fan[i];
        aux_p2 = pro[i];

        if (aux_f1 == carte && aux_f2 == false) {
            fan[i] = true;
            cout << "Puneti cartea pe randul " << rand_fan[i] << " raftul " << raft_fan[i] << ". Multumim!" << endl;
        }
        else if (aux_p1 == carte && aux_p2 == false) {
            pro[i] = true;
            cout << "Puneti cartea pe randul " << rand_pro[i] << " raftul " << raft_pro[i] << ". Multumim!" << endl;
        }
        else {
            cout << "Nume invalid." << endl;
        } 
    }
}

void imprumut() {
    cout << "Introduceti numele cartii pe care vreti sa o imprumutati: ";
    string carte;
    cin >> carte;

    for (int i = 0; i < 4; i++) {
        if (fantasy[i] == carte && fan[i] == true) {
            fan[i] = false;
            cout << "Luati cartea de pe randul " << rand_fan[i] << " raftul " << raft_fan[i] << ". Lectura placuta!" << endl;
        }
        else if (programare[i] == carte && pro[i] == true) {
            pro[i] = false;
            cout << "Luati cartea de pe randul " << rand_pro[i] << " raftul " << raft_pro[i] << ". Spor la invatat!" << endl;
        }
        else if ((fantasy[i] == carte && fan[i] == false) || (programare[i] == carte && pro[i] == false)) {
            cout << "Ne pare rau, dar cartea este deja imprumutata." << endl;
        }
        else {
            cout << "Nume invalid." << endl;
        }
    }
}

int main()
{
    //cout << "Exercitiul 1: " << endl;
    //ex1();

    cout << "Exercitiul 2: " << endl;
    char a;
    cout << "Buna ziua! Doriti sa returnati sau sa imprumutati o carte? (r/i): ";
    cin >> a;
    if (a == 'r') {
        returnare();
    }
    else if (a == 'i') {
        imprumut();
    }

    return 0;
}
