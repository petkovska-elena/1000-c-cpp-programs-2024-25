//
// Created by Elena Petkovska on 14.8.25.
//

/* Потребно е да се имплементираат класи File (датотека) и Folder (директориум) за работа со едноставен датотечен систем.

Во класата File треба да се чуваат следниве податоци:

Име на датотеката (динамички алоцирана низа од знаци)
Екстензија на датотеката (енумерација со можни вредности: txt, pdf, exe)
Име на сопственикот на датотеката (динамички алоцирана низа од знаци)
Големина на датотеката (цел број на мегабајти)
Дополнително, во класата потребно е да се напишат и:

Конструктор без параметри
Конструктор со параметри
Конструктор за копирање
Деструктор
Преоптоварување на операторот =
Метод за печатење на информациите за една датотека (видете го излезот од тест примерите за структурата на печатење) - print()
Метод за проверка на еднаквост помеѓу две датотеки со потпис bool equals(const File & that) кој ќе враќа true ако датотеките имаат исто име, екстензија и сопственик
Метод за споредба на типот помеѓу две датотеки со потпис bool equalsType(const File & that) кој ќе враќа true ако датотеките се од ист тип, т.е. имаат исто име и екстензија
Во класата Folder треба да се чуваат следниве податоци:

Име на директориумот (динамички алоцирана низа од знаци)
Број на датотеки во него (на почеток директориумот е празен)
Динамички алоцирана низа од датотеки, објекти од класата File
Дополнително, во класата потребно е да се напишат и:

Конструктор со потпис Folder(const char* name)
Деструктор
Метод за печатење на информациите за еден директориум (видете го излезот од тест примерите за структурата на печатење) - print()
Метод за бришење на датотека од директориумот со потпис void remove(const File & file) кој ќе ја избрише првата датотека од директориумот која е еднаква според equals методот
Метод за додавање на датотека во директориумот со потпис void add(const File & file) кој ќе додава датотеката во директориумот

Влез:
1
oop
Ecode
2
0
Излез:
======= FILE CONSTRUCTORS AND = OPERATOR =======
======= CREATED =======
File name: oop.pdf
File owner: Ecode
File size: 2

======= COPIED =======
File name: oop.pdf
File owner: Ecode
File size: 2

======= ASSIGNED =======
File name: oop.pdf
File owner: Ecode
File size: 2

Влез:
2
oop
Ecode
2
0
oop
Ecode
3
0
oop
Ecode
1
1
Излез:
======= FILE EQUALS AND EQUALS TYPE =======
File name: oop.pdf
File owner: Ecode
File size: 2
File name: oop.pdf
File owner: Ecode
File size: 3
File name: oop.txt
File owner: Ecode
File size: 1
FIRST EQUALS SECOND: TRUE
FIRST EQUALS THIRD: FALSE
FIRST EQUALS TYPE SECOND: TRUE
SECOND EQUALS TYPE THIRD: FALSE */

#include <iostream>
using namespace std;

enum Extension {
  txt,
  pdf,
  exe
};

class File {
private:
  char *ime;
  Extension ex;
  char *sopstvenik;
  int golemina;

public:
  File() {
    ime = new char[0];
    sopstvenik = new char[0];
  }

  File(char *ime, char *sopstvenik, int golemina, Extension ex) {
    this->ime = new char[strlen(ime) + 1];
    strcpy(this->ime, ime);
    this->sopstvenik(this->sopstvenik, sopstvenik);
    this->golemina = golemina;
    this->ex = ex;
  }

  File(const File &file) {
    ime = new char[strlen(file.ime) + 1];
    strcpy(ime, file.ime);
    sopstvenik = new char[strlen(file.sopstvenik) + 1];
    strcpy(sopstvenik, file.sopstvenik);
    golemina = file.golemina;
    ex = file.ex;
  }

  File &operator=(const File &file) {
    if (this != &file) {
      delete[] ime;
      delete[] sopstvenik;

      ime = new char[strlen(file.ime) + 1];
      strcpy(ime, file.ime);
      sopstvenik = new char[strlen(file.sopstvenik) + 1];
      strcpy(sopstvenik, file.sopstvenik);
      golemina = file.golemina;
      ex = file.ex;
    }

    return *this;
  }

  ~File() {
    delete[] ime;
    delete[] sopstvenik;
  }



  void print() {
    cout << "File name: " << ime << ".";
    if (ex == pdf) cout << "pdf" << endl;
    else if (ex == exe) cout << "exe" << endl;
    else if (ex == txt) cout << "txt" << endl;

    cout << "File owner: " << sopstvenik << endl;
    cout << "File size: " << golemina << endl;
  }

  bool equals(const File &that) {
    if (!strcmp(ime, that.ime) && ex == that.ex && !strcmp(sopstvenik, that.sopstvenik)) {
      return true;
    }

    return false;
  }

  bool equalsType(const File &that) {
    return !strcmp(ime, that.ime) && ex == that.ex;
  }
};

class Folder {
private:
  char *ime;
  int brFiles;
  File *files;

public:
  Folder() {
    ime = new char[0];
    brFiles = 0;
    files = new File[0];
  }

  Folder(char *ime) {
    this->ime = new char[strlen(ime) + 1];
    strcpy(this-> ime, ime);
    brFiles = 0;
    files = new File[0];
  }

  Folder(const Folder &folder) {
    ime = new char[strlen(folder.ime) + 1];
    strcpy(ime, folder.ime);
    brFiles = folder.brFiles;
    files = new File[brFiles];

    for (int i = 0; i < brFiles; i++) {
      files[i]=folder.files[i];
    }
  }

  Folder &operator=(const Folder &folder) {
    if (this != &folder) {
      delete[] ime;
      delete[] files;

      ime = new char[strlen(folder.ime) + 1];
      strcpy(ime, folder.ime);
      brFiles = folder.brFiles;
      files = new File[brFiles];

      for (int i = 0; i < brFiles; i++) {
        files[i]=folder.files[i];
      }
    }

    return *this;
  }

  void add(const File &file) {
    File *temp = new File[brFiles + 1];
    for (int i = 0; i < brFiles; i++) {
      temp[i] = files[i];
    }

    temp[brFiles] = file;
    delete[] files;
    ++brFiles;
    files = new File[brFiles];

    for (int i = 0; i < brFiles; i++) {
      files[i] = temp[i];
    }
  }


  void remove(const File &file) {
    bool flag = false;

    for (int i = 0; i < brFiles; i++) {
      if (files[i].equals(file)) {
        flag = true;
        break;
      }
    }

    if (flag == false) return;
    // if (!flag) return;

    File *temp = new File[brFiles - 1];
    int k = 0;

    for (int i = 0; i < brFiles; i++) {
      if (!files[i].equals(file)) {
        temp[k] = files[i];
        ++k;
      }
    }

    brFiles--;
    delete[] files;
    files = new File[brFiles];

    for (int i = 0; i < brFiles; i++) {
      files[i] = temp[i];
    }
  }

  void print() {
    cout << "Folder name: " << ime << endl;

    for (int i = 0; i < brFiles; i++) {
      files[i].print();
    }
  }
};

int main() {
  char fileName[20];
  char fileOwner[20];
  int ext;
  int fileSize;

  int testCase;
  cin >> testCase;

  if (testCase == 1) {
    cout << "======= FILE CONSTRUCTORS AND = OPERATOR =======" << endl;
    cin >> fileName;
    cin >> fileOwner;
    cin >> fileSize;
    cin >> ext;

    File created = File(fileName, fileOwner, fileSize, (Extension) ext);
    File copied = File(created);
    File assigned = created;

    cout << "======= CREATED =======" << endl;
    created.print();
    cout << endl;

    cout << "======= COPIED =======" << endl;
    copied.print();
    cout << endl;

    cout << "======= ASSIGNED =======" << endl;
    assigned.print();
  } else if (testCase == 2) {
    cout << "======= FILE EQUALS AND EQUALS TYPE =======" << endl;
    cin >> fileName;
    cin >> fileOwner;
    cin >> fileSize;
    cin >> ext;

    File first(fileName, fileOwner, fileSize, (Extension) ext);
    first.print();

    cin >> fileName;
    cin >> fileOwner;
    cin >> fileSize;
    cin >> ext;

    File second(fileName, fileOwner, fileSize, (Extension) ext);
    second.print();

    File third(fileName, fileOwner, fileSize, (Extension) ext);
    third.print();

    bool equals = first.equals(second);
    cout << "FIRST EQUALS SECOND: ";
    if (equals) {
      cout << "TRUE" << endl;
    } else {
      cout << "FALSE" << endl;
    }

    equals = first.equals(third);
    cout << "FIRST EQUALS THIRD: ";
    if (equals) {
      cout << "TRUE" << endl;
    } else {
      cout << "FALSE" << endl;
    }

    bool equalsType = first.equalsType(second);
    cout << "FIRST EQUALS TYPE SECOND: ";
    if (equalsType) {
      cout << "TRUE" << endl;
    } else {
      cout << "FALSE" << endl;
    }

    equalsType = first.equalsType(third);
    cout << "FIRST EQUALS TYPE THIRD: ";
    if (equalsType) {
      cout << "TRUE" << endl;
    } else {
      cout << "FALSE" << endl;
    }
  } else if (testCase == 3) {
    cout << "======= FOLDER CONSTRUCTOR =======" << endl;
    cin >> fileName;
    Folder folder(fileName);
    folder.print();
  } else if (testCase == 4) {
    cout << "======= ADD FILE IN FOLDER =======" << endl;
    char name[20];
    cin >> name;
    Folder folder(name);

    int iter;
    cin >> iter;

    while (iter > 0) {
      cin >> fileName;
      cin >> fileOwner;
      cin >> fileSize;
      cin >> ext;

      File file(fileName, fileOwner, fileSize, (Extension) ext);
      folder.add(file);
      iter--;
    }
    folder.print();
  } else {
    cout << "======= REMOVE FILE FROM FOLDER =======" << endl;
    char name[20];
    cin >> name;
    Folder folder(name);

    int iter;
    cin >> iter;

    while (iter > 0) {
      cin >> fileName;
      cin >> fileOwner;
      cin >> fileSize;
      cin >> ext;

      File file(fileName, fileOwner, fileSize, (Extension) ext);
      folder.add(file);
      iter--;
    }
    cin >> fileName;
    cin >> fileOwner;
    cin >> fileSize;
    cin >> ext;

    File file(fileName, fileOwner, fileSize, (Extension) ext);
    folder.remove(file);
    folder.print();
  }

  return 0;
}
