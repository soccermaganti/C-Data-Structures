#include "llist.h"

// goal: creates a Cred struct given the username, password, and next credential
// param username: char* representing the username
// param password: char* representing the password
// param next: Cred struct pointer representing the next credential
// return: a Cred struct pointer to a credential with the specified fields
//
// TODO: complete the function


struct Cred* cred(char* username, char* password, struct Cred* next) {
  struct Cred* newCred = (struct Cred*)malloc(sizeof(struct Cred));
  if (newCred != NULL){
    //newCred->username = (char*)malloc(sizeof(username)+1);
    //newCred->password = (char*)malloc(sizeof(password)+1);
    newCred->username = username;
    newCred->password = password;
    newCred->next = next;
  }
  return newCred;
}


// goal: frees a list of credentials
// param head: pointer to first credential in the list
//
// TODO: complete the function
void cred_free(struct Cred* head) {
  while (head != NULL){
    struct Cred* newHead = head;
    head = head->next;
    //free(newHead->username);
    //free(newHead->password);
    free(newHead);
    
    // free(newHead->username);
    // free(newHead->password);
    // free(newHead);
    
    
  }
}

// goal: gets the username from a Cred struct
// param head: pointer to a Cred struct
// return: a char* representing the username of the credential
//
// TODO: complete the function
char* get_username(struct Cred* head) {
  // if (head != NULL){
  //   return head->username;
  // } else {
  //   return NULL;
  // }
  return head->username;
}

// goal: gets the password from a Cred struct
// param head: pointer to a Cred struct
// return: a char* representing the password of the credential
//
// TODO: complete the function
char* get_password(struct Cred* head) {
  // if (head != NULL){
  //   return head->password;
  // } else {
  //   return NULL;
  // }
  return head->password;
}

// goal: gets the pointer to the next credential in a list
// param head: pointer to a Cred struct at the head of a list
// return: a pointer to the next Cred struct in the list
//
// TODO: complete the function
struct Cred* get_next(struct Cred* head) {
  // if (head != NULL){
  //   return head->next;
  // } else {
  // return NULL;
  // }
  return head->next;
}

// goal: sets the username of a Cred struct
// param head: pointer to Cred struct to change username of
// param username: char* representing new username
//
// TODO: complete the function
void set_username(struct Cred* head, char* username) {
  // if (head != NULL) {
    //free(head->username);
    //head->username = (char*)malloc(sizeof(username)+1);
    head->username = username;
    //strcpy(head->username, username);

}

// goal: sets the password of a Cred struct
// param head: pointer to Cred struct to change password of
// param password: char* representing new password
//
// TODO: complete the function
void set_password(struct Cred* head, char* password) {
  //free(head->password);
    //head->password = (char*)malloc(sizeof(password)+1);
    //strcpy(head->password, password);
   head->password = password;
  
}
// goal: sets the next credential in a list of credentials
// param head: pointer to Cred struct to change successor of
// param next: pointer to new successor credential
//
// TODO: complete the function
void set_next(struct Cred* head, struct Cred* next) {
  if (head != NULL){
    // next = head->next;
    head->next = next;
  } else {
  head->next = NULL;
  }
  
  //head->next = next;
  // next = head->next;
}
