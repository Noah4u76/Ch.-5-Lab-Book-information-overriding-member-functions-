//
// File: Encyclopedia.h
// Description: Book Information
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#ifndef ENCYCLOPEDIAH
#define ENCYCLOPEDIAH

#include "Book.h"

class Encyclopedia : public Book {
   // DONE: Declare mutator functions -
   //       SetEdition(), SetNumPages()
public:
void SetEdition(string editionSet);
void SetNumPages(int pagesSet);
   // DONE: Declare accessor functions -
   //       GetEdition(), GetNumPages()
string GetEdition() const;
int GetNumPages() const;
   // DONE: Declare a PrintInfo() function that overrides
   //       the PrintInfo() in Book class
void PrintInfo();
   // DONE: Declare private data members
private:
string edition;
int numPages;
};

#endif