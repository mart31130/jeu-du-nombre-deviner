/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: JeuNombreADeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de cr�ation : 25/11/2022
// R�le du fichier: Contient le code des fonctions du jeu
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
// R�le : Tire al�atoirement un nombre � deviner entre nbMin et nbMAx
// Param�tres d'entr�e: nbMin, nbMAx : limites du nombre � deviner
// Valeur de retour : nombre � deviner

int tirerNombreMystere(int nbMin, int nbMax)
{
    int nb = 0; // Nombre aleatoire
    // Initialisation du g�n�rateur al�atoire avec l'heure
    // pour obtenir une s�rie de nombres differents � chaque execution
    srand((int)time(NULL));
    nb = rand()%(nbMax - nbMin+1) + nbMin; // compris entre nbMin et nbMax inclus
    return nb;
}


// Nom :jouerPartie
// R�le : Fait jouer une partie � un joueur
// Param�tres d'entr�e: le nombre � deviner,
//                      les limites min et max du nombre � deviner,
//                      le nombre maximal d'essais possibles
// Valeur de retour :   si la partie est perdue, la valeur de retour est -1
//                      si la partie est gagn�e, la valeur de retour est le nombre d'essais utilis�s pour trouver le nombre

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









