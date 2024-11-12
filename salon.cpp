#include <iostream>
#include <string>
using namespace std;

class Client {
public:
    string nume;
    string telefon;

    Client(const string& nume, const string& telefon)
        : nume(nume), telefon(telefon) {}
};

class Rezervare {
public:
    Client client;
    string pachet;
    string dataEveniment;

    Rezervare(const Client& client, const string& pachet, const string& dataEveniment)
        : client(client), pachet(pachet), dataEveniment(dataEveniment) {}

    void afiseazaRezervare() const {
        cout << "Rezervare pentru clientul: " << client.nume << ", Telefon: " << client.telefon << endl;
        cout << "Pachet ales: " << pachet << endl;
        cout << "Data evenimentului: " << dataEveniment << endl;
    }
};


int main() {
    // Cre?m un client
    Client client("Ion Popescu", "0745123456");

    // Cre?m o rezervare
    Rezervare rezervare(client, "Nunta Standard", "2024-12-10");

    // Afi??m rezervarea
    rezervare.afiseazaRezervare();

    return 0;
}

