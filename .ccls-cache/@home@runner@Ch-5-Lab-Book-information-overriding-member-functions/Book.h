//
// File: Book.h
// Description: Book Information
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#ifndef BOOKH
#define BOOKH

#include <string>

using namespace std;

class Book {
   public:
      void SetTitle(string userTitle);

      string GetTitle();

      void SetAuthor(string userAuthor);

      string GetAuthor();

      void SetPublisher(string userPublisher);

      string GetPublisher();

      void SetPublicationDate(string userPublicationDate);

      string GetPublicationDate();

      void PrintInfo();

   protected:
      string title;
      string author;
      string publisher;
      string publicationDate;
};

#endif