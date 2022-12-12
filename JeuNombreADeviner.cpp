/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: JeuNombreADeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 25/11/2022
// Rôle du fichier: Contient le code des fonctions du jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              stdio
//                              ctime, cstdlib
// Historique du fichier:
/*************************************************/
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include "../include/JeuNombreAdeviner.h"



// Nom :tirerNombreMystere
// Rôle : Tire aléatoirement un nombre à deviner entre nbMin et nbMAx
// Paramètres d'entrée: nbMin, nbMAx : limites du nombre à deviner
// Valeur de retour : nombre à deviner

int tirerNombreMystere(int nbMin, int nbMax)
{
    int nb = 0; // Nombre aleatoire
    // Initialisation du générateur aléatoire avec l'heure
    // pour obtenir une série de nombres differents à chaque execution
    srand((int)time(NULL));
    nb = rand()%(nbMax - nbMin+1) + nbMin; // compris entre nbMin et nbMax inclus
    return nb;
}


// Nom :jouerPartie
// Rôle : Fait jouer une partie à un joueur
// Paramètres d'entrée: le nombre à deviner,
//                      les limites min et max du nombre à deviner,
//                      le nombre maximal d'essais possibles
// Valeur de retour :   si la partie est perdue, la valeur de retour est -1
//                      si la partie est gagnée, la valeur de retour est le nombre d'essais utilisés pour trouver le nombre

// Ajouter le CODE de  la fonction

int jouerPartie(int number,int nb_min,  int nb_max, int nb_essai_max)
{
    int number_saisie;
    int nb_essai = 1;
    while (nb_essai <= nb_essai_max)
    {

        do
        {
            printf("saisiser un nombre entre 0 et 10:\n");
            scanf("%d",&number_saisie);
        }while (number_saisie < nb_min || number_saisie > nb_max);

        if(number_saisie>number){
            printf("Le nombre saisie est trop grand\n");
        }
        if(number_saisie<number){
            printf("Le nombre saisie est trop petit\n");
        }
        if(number_saisie==number){
            return nb_essai;
        }

    nb_essai++;
    }

return -1;

}









