// Folder Protector.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>

int lock() 
{

    system("ren Private Keeper.ans");
    system("attrib +h +s Keeper.ans");
    return 0;
}

int unlock()
{
    system("attrib -s -h Keeper.ans");
    system("ren Keeper.ans Private");
    return 0;
}

int main()
{
    
    int choose;
    std::cout << "1) Lock your folder\n2) Unlock your folder\nChoose: ";
    std::cin >> choose;
    if (choose != 1 && choose != 2)
    {
        std::cout << "what a dumbass lmao";
        return 0;
    }
  
    if (choose == 1) lock();

    if (choose == 2) {
        std::string password;
        std::cout << "Insert your password: ";
        std::cin >> password;
        if (password == "password") {
            unlock();
        }
        else std::cout << "wrong password"; return 0;

    }
}

// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug

// Suggerimenti per iniziare: 
//   1. Usare la finestra Esplora soluzioni per aggiungere/gestire i file
//   2. Usare la finestra Team Explorer per connettersi al controllo del codice sorgente
//   3. Usare la finestra di output per visualizzare l'output di compilazione e altri messaggi
//   4. Usare la finestra Elenco errori per visualizzare gli errori
//   5. Passare a Progetto > Aggiungi nuovo elemento per creare nuovi file di codice oppure a Progetto > Aggiungi elemento esistente per aggiungere file di codice esistenti al progetto
//   6. Per aprire di nuovo questo progetto in futuro, passare a File > Apri > Progetto e selezionare il file con estensione sln
