#include <iostream>
#include "Grafo.cpp"  

int main() {
    
    Grafo<std::string> grafo;

    
    grafo.aggiungiNodo("Roma");
    grafo.aggiungiNodo("Latina");
    grafo.aggiungiNodo("Frosinone");
    grafo.aggiungiNodo("Viterbo");
    grafo.aggiungiNodo("Rieti");

    
    grafo.aggiungiArco("Roma", "Latina", 60);
    grafo.aggiungiArco("Latina", "Frosinone", 55);
    grafo.aggiungiArco("Frosinone", "Viterbo",75);
    grafo.aggiungiArco("Viterbo", "Rieti", 90);
    grafo.aggiungiArco("Rieti", "Roma", 80);
    grafo.aggiungiArco("Roma", "Viterbo", 70);

    
    grafo.stampa();

    std::cout << "\n--- Operazioni di Ricerca e Manipolazione ---\n";

    
    
    if (grafo.verificaNodo("Roma")) {
        std::cout << "Verifichiamo se esiste il nodo 'Roma': Yes\n";
    } else {
        std::cout << "Verifichiamo se esiste il nodo 'Roma': No\n";
    }



    if (grafo.verificaNodo("Latina")) {
        std::cout << "Verifichiamo se esiste il nodo 'Latina': Yes\n";
    } else {
        std::cout << "Verifichiamo se esiste il nodo 'Latina': No\n";
    }

    
   
    if (grafo.verificaArco("Roma", "Latina")) {
        std::cout << "Verifichiamo se esiste un arco tra 'Roma' e 'Latina': Yes\n";
    } else {
        std::cout << "Verifichiamo se esiste un arco tra 'Roma' e 'Latina': No\n";
    }

   
    if (grafo.verificaArco("Roma", "Rieti")) {
        std::cout << "Verifichiamo se esiste un arco tra 'Roma' e 'Rieti': Yes\n";
    } else {
        std::cout << "Verifichiamo se esiste un arco tra 'Roma' e 'Rieti': No\n";
    }

    
    grafo.nodiAdiacenti("Roma");
    grafo.nodiAdiacenti("Latina");

    
    std::cout << "\nAggiungiamo un nuovo nodo 'Rimini' e un arco tra 'Rimini' e 'Roma'...\n";
    grafo.aggiungiNodo("Rimini");
    grafo.aggiungiArco("Rimini", "Roma", 241 );

    
    grafo.stampa();

  
    std::cout << "\nRimuoviamo l'arco tra 'Roma' e 'Latina'    \n";
    grafo.rimuoviArco("Roma", "Latina");

    
    std::cout << "\nRimuoviamo il nodo 'Rieti'     \n";
    grafo.rimuoviNodo("Rieti");

    
    grafo.stampa();

    return 0;
}
