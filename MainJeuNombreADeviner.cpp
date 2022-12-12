/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: MainJeuNombreAdeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 25/11/2022
// Rôle du fichier: Contient le code jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              stdio.h
// Historique du fichier:
/*************************************************/

#include <stdio.h>
#include "../include/JeuNombreADeviner.h"
#include "../include/couleurs.h"

int main(void)
{

    printf ("%s\n", "Vous allez jouer pour deviner un nombre secret");

    // Appeler la fonction tirerNombreMystere pour tirer aléatoirement le nombre à deviner
int recommencerPartie = 1;
int i = 0; // compteur du nombre de parties
int gagne = 0;
int score = 0;
float coup_moyen = 0; // initialisation du nombre d'essai moyen
while(recommencerPartie == 1){ // boucle pour recommencer une partie
 int nb = tirerNombreMystere(0,10);
 int essai = jouerPartie(nb,0,10,4);
// Afficher le résultat de la partie
    if (essai==-1){
        printf("Vous avez depasser le nombre d'essai\n");
        printf("Vous avez perdu!\n");
        score = score -1;
        essai = essai+4;

    }else{
        printf("vous avez gagne!");
        printf("Le nombre a deviner etait:%d\n",nb);
        printf("vous avez trouver le nombre en:%d\n",essai);
        score = score +1;
        essai = score;
        gagne = gagne+1;
    }
i = i+1;
printf("Voulez vous recommencer une nouvelle partie?(1/0)",recommencerPartie);
scanf("%d",&recommencerPartie);
printf("La partie commence.\n");
printf("Vous avez 4 essais pour deviner le nombre mystére\x8Are compris entre 0 et 10\n");

if (recommencerPartie == 0){
printf("vous avez jouer:%d partie(s)\n",i);
printf("Vous avez gagnes:%d parties\n",gagné);
printf("Votre score est de :%d \n",score);
coup_moyen =  (float) essai/i; //(float) permet de forcer le nombre d'essai en float (méthode cast). Et calcul du nombre d'essais moyens.
printf("Votre nombre d'essais moyen est de:%.1f\n",coup_moyen); // affichage du nombre d'essai moyen: %.1f pour avoir 1 chiffres après la virgule
}


}




    // Appeler la fonction jouerPartie est compris entre 0 et 10
    // Il ya 4 essais pour jouer et trouver le nombre mystère tiré précédemment
    // Le nombre à trous maximum possibles

}
