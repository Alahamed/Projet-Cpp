#include "son.h"

void  mettreMusique()
{
    QMediaPlayer * music_bouton=new QMediaPlayer();
    music_bouton->setMedia(QUrl("qrc:C:/Users/HP/Desktop/Association Sportif/Gestion_match/son/2.mp3"));
    music_bouton->play();
}
