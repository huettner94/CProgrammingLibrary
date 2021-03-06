#ifndef PROJECT_FUNC_H
#define PROJECT_FUNC_H
#include "../include/main.h"
#include <sys/param.h>
#include <stdbool.h>

int isNumber();
off_t fsize(const char *filename);
const char *stringCut(char *buffer);
const char *isString(char *string);
const char *isbnNumber(char *isbn);
bool validISBN(char *isbn);
book *newBook(char *newtitle, char *newauthor, char *newisbn, int newnob);
void saveBooks();
void loadBooks();
void deleteBook(book *helpPtr);
void show(lib help);
void showByIsbn(lib help);
void showByTitle(lib help);
void moveBooks(int i);
void addBookSorted();
void mainMenu();
void rentBook(book *help);
void deleteMenu();
void searchMenu();
void showMenu();
void goOn();
void bookMenu(book *helpPtr);
void searchByTitle(lib help);
#endif //PROJECT_FUNC_H
