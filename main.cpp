#include <iostream>

using namespace std;

string saisirChaine()
{
    string k;
    cout<<"saisir votre chaine : ";
    cin>>k;
    return k;
}
void verifierAnagramme(string chaine)
{
    int i,x,compteur=0,taille = chaine.size();
    if(taille%2 == 0)
    {
        x=taille/2;
        for(i=0;i<x;i++)
        {
            if(chaine[x-1-i] == chaine[x+i])
            {
                compteur++;
            }
        }
    }else
    {
        x=(taille-1)/2;
        for(i=0;i<x;i++)
        {
            if(chaine[x-i] == chaine[x+i])
            {
                compteur++;
            }
        }
    }
    if(compteur == x)
    {
        cout<<chaine<<" est un anagramme \n\n";
    }else
    {
        cout<<chaine<<" n'est pas un anagrammme \n\n";
    }
}
int main()
{
    string chaine;
    chaine=saisirChaine();
    verifierAnagramme(chaine);
    return 0;
}
