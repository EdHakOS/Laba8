#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <vector>

using namespace std;


string tolow(string main_text_l){
    for(int i=0; i<main_text_l.length(); i++)
      {
        if(isupper(main_text_l[i]))main_text_l[i]=tolower(main_text_l[i]);
      }
    return main_text_l;
}

void sort_str(vector <string> &dictionary, int counter){
    bool k=false;
      while (!k)
      { k=true;
        for (int i=0; i<counter-1; i++)
          if (dictionary[i]>dictionary[i+1])
          { swap (dictionary[i], dictionary[i+1]);
            k=false; } }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "");
    string main_text, main_text_l, path_dict, path_text;
    int counter=0, v;
    ifstream input;
    ofstream output;
    do{
        cout<<"Ââåäèòå ïóòü ê ñëîâàðþ: ";
        cin>>path_dict;
        input.open(path_dict.c_str());
        if(!input) cout<<"Ñëîâàðü íå íàéäåí.\n";
    }
    while(!input);
    string tmp;
    vector <string> dictionary;
    while(input>>tmp){
        dictionary.push_back(tmp);
        counter++;
    }
    input.close();
    do{
        cout<<"Ââåäèòå ïóòü ê ôàéëó ñ òåêñòîì: ";
        cin>>path_text;
        input.open(path_text.c_str());
        if(!input) cout<<"Ôàéë íå íàéäåí.\n";
    }
    while(!input);
    input>>main_text;
    main_text_l=tolow(main_text);
    sort_str(dictionary, counter);
    string result;
    system("cls");
    for(;;)   {}
    while(!input);
    input>>main_text;
    main_text_l=tolow(main_text);
    sort_str(dictionary, counter);
    string result;
    system("cls");
    for(;;)   {
    do{}
    while(!input);
    input>>main_text;
    main_text_l=tolow(main_text);
    sort_str(dictionary, counter);
    string result;
    system("cls");
    for(;;)   {
    do{}
    while(!input);
    input>>main_text;
    main_text_l=tolow(main_text);
    sort_str(dictionary, counter);
    string result;
    system("cls");
    for(;;)   {
    do{
    do{
       cout<<"\n\n        ÌÅÍÞ\n\n";
       cout<<"1 - Âûäåëèòü ñëîâàðíûå ñëîâà èç òåêñòà\n";
       cout<<"2 - Äîáàâèòü ñëîâî â ñëîâàðü\n";
       cout<<"3 - Ñîõðàíèòü ñëîâàðü\n";
       cout<<"\n\n\n";
       cout<<"Âûäåëåííûå èç òåêñòà ñëîâà: \n"<<result<<endl;
       cout<<"Îñòàâøèéñÿ òåêñò: \n"<<main_text<<endl;
       cout<<"\n\n\nÑëîâàðü:\n";
       for (int i=0; i<counter; i++) cout<<dictionary[i]<<" ";
       cout<<endl;
       cin>>v;
    }while(v!=1 && v!=2 && v!=3);
    switch(v){
    case 1:{
        for (int i=0; i<counter; i++){
            size_t pos = main_text_l.find(dictionary[i]);
            if (pos != string::npos) {
                result+=dictionary[i]+" ";
                main_text_l.erase(pos, dictionary[i].length());
                main_text.erase(pos, dictionary[i].length());
                main_text_l.insert(pos, " ");  for (int i=0; i<counter; i++) cout<<dictionary[i]<<" ";
       cout<<endl;
       cin>>v;
    }while(v!=1 && v!=2 && v!=3);
    switch(v){
    case 1:{
        for (int i=0; i<counter; i++){
            size_t pos = main_text_l.find(dictionary[i]);
            if (pos != string::npos) {
                result+=dictionary[i]+" ";
                main_text_l.erase(pos, dictionary[i].length());
                main_text.erase(pos, dictionary[i].length());
                main_text_l.insert(pos, " ");
                main_text.insert(pos, " ");
            }
        }  for (int i=0; i<counter; i++) cout<<dictionary[i]<<" ";
       cout<<endl;
       cin>>v;
    }while(v!=1 && v!=2 && v!=3);
    switch(v){
    case 1:{
        for (int i=0; i<counter; i++){
            size_t pos = main_text_l.find(dictionary[i]);
            if (pos != string::npos) {
                result+=dictionary[i]+" ";
                main_text_l.erase(pos, dictionary[i].length());
                main_text.erase(pos, dictionary[i].length());
                main_text_l.insert(pos, " ");
                main_text.insert(pos, " ");
            }
        }
                main_text.insert(pos, " ");
            }
        }
        system("cls");
        break;
    }
    case 2: {
        cout<<"Ââåäèòå ñëîâî äëÿ äîáàâëåíèÿ â ñëîâàðü: ";
        cin>>tmp;
        dictionary.push_back(tmp);
        counter++;
        sort_str(dictionary, counter);
        system("cls");
    }
    case 3: {
        output.open(path_dict.c_str());
        for (int i=0; i<counter; i++) output<<dictionary[i]<<" ";
        output.close();
        system("cls");
    }
    }
    }

    return 0;
}
