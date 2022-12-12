/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: JeuNombreADeviner.h
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 25/11/2022
// Rôle du fichier: Contient la déclaration des fonctions concernant le jeu
// Nom des composants utilises:
// Historique du fichier:
/*************************************************/
// Nom du programmeur: Daignan Martin
// modification: ajout de la déclaration de la fonction jouerPartie

// Nom :tirerNombreMystere
// Rôle : Tire aléatoirement un nombre à deviner entre nbMin et nbMAx
// Paramètres d'entrée: nbMin, nbMAx : limites du nombre à deviner
// Valeur de retour : nombre à deviner

int tirerNombreMystere(int nbMin, int nbMax);
int jouerPartie(int number,int nb_min,  int nb_max , int nb_essai);




// Nom :jouerPartie
// Rôle : Fait jouer une partie à un joueur
// Paramètres d'entrée: le nombre à deviner,
//                      les limites min et max du nombre à deviner,
//                      le nombre maximal d'essais possibles
// Valeur de retour :   si la partie est perdue, la valeur de retour est -1
//                      si la partie est gagnée, la valeur de retour est le nombre d'essais utilisés pour trouver le nombre


// Ajouter la DECLARATION de la fonction
