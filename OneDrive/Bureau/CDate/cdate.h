#ifndef CDATE_H
#define CDATE_H


class CDate
{
    public:
        CDate();
        CDate(int un_mois,int une_annee,int un_jour,int une_minute,int une_seconde,int une_heure);
        void ajouter_une_seconde();
        void recuperer_valeur(int &un_mois,int &une_annee,int &un_jour,int &une_minute,int &une_seconde,int &une_heure);
        bool operator >(CDate date);
        bool operator <(CDate date);
        bool operator ==(CDate date);


    private:
        int mois;
        int annee;
        int jour;
        int minute;
        int seconde;
        int heure;
};

#endif // CDATE_H
