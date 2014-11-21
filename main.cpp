#include <QCoreApplication>
#include <QtCore/QDateTime>
#include <QFileInfo>
////////////////////////////////////////////////
bool initialComparison(QString pathF1, QString pathF2){// avec la date de modification

    QFileInfo  info_F1(pathF1);
    QFileInfo  info_F2(pathF2);
    QString Date_creation_F1="",Date_creation_F2="";
    int     size_F1,size_F2;


    Date_creation_F1=info_F1.lastModified().toString();
    Date_creation_F2=info_F2.lastModified().toString();
    size_F1=info_F1.size();
    size_F2=info_F2.size();

    if ((Date_creation_F1==Date_creation_F2)||(size_F1==size_F2)){
        return true;
    }else{
        return false;
    }
}

////////////////////////////////////////////////
bool initialComparison2(QString pathF1, QString pathF2){// avec la date de creation

    QFileInfo  info_F1(pathF1);
    QFileInfo  info_F2(pathF2);
    QString Date_creation_F1="",Date_creation_F2="";
    int     size_F1,size_F2;


    Date_creation_F1=info_F1.created().toString();
    Date_creation_F2=info_F2.created().toString();
    size_F1=info_F1.size();
    size_F2=info_F2.size();

    if ((Date_creation_F1==Date_creation_F2)||(size_F1==size_F2)){
        return true;
    }else{
        return false;
    }
}
////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //faire un petit test si les deux fichier exist avant pour eviter tout bug ^_^
    bool test =initialComparison("C:\\Users\\pc\\Desktop\\statistique\\article_joomla.php",
                                 "C:\\Users\\pc\\Desktop\\statistique\\article_joomla2.php");
    printf("%d",test);
    return a.exec();
}
