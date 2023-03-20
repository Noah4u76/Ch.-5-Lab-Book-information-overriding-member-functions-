//
// File: Encyclopedia.cpp
// Description: Book Information
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include "Encyclopedia.h"
#include <iostream>

// Define functions declared in Encyclopedia.h
void Encyclopedia::SetEdition(string editionSet){
  edition = editionSet;
}
void Encyclopedia::SetNumPages(int pagesSet){
  numPages = pagesSet;
}
string Encyclopedia::GetEdition() const{
  return edition;
}
int Encyclopedia::GetNumPages() const{
  return numPages;
}

void Encyclopedia::PrintInfo(){
  cout << "Book Information: " << endl;
  cout << "   Book Title: " << title << endl;
  cout << "   Author: " << author << endl;
  cout << "   Publisher: " << publisher << endl;
  cout << "   Publication Date: " << publicationDate << endl;
  cout << "   Edition: " << edition << endl;
  cout << "   Number of Pages: " << numPages << endl;
}

