#include "args-strings.h"

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Function that the auto-grader uses to reset getopt()
// Don't worry about it
//   (I mean, feel free to mess with it, but you'll fail the auto-grader tests.)
void reset_getopt() { optind = 1; }

// Process command line arguments for a wc-like program
// @param argc: number of command line arguments, including the program name
// @param argv: array of pointers to strings, one for each argument
// @param cflag: address of a 0/1 integer variable - an output of the function
// @param wflag: address of a 0/1 integer variable - an output of the function
// @param nflag: address of a 0/1 integer variable - an output of the function
// @param lflag: address of a 0/1 integer variable - an output of the function
// @param outfile: address of a FILE * variable - an output of the function
// @param name_len:  address of an int variable - an output of the function
void parse_args(int argc, char *argv[], int *cflag, int *wflag, int *nflag,
                int *lflag, FILE **outfile, int *name_len) {
  // using the getopt library routine, process the command line
  // arguments given by argc and argv, looking for these options:
  // -c, -w, -n, -l: set the corresponding flag's int variable to 1
  // -o name: try to open for output a FILE with the given name; if that
  //    fails, print to stderr "Error opening output file: xxx\n" where
  //    xxx is the name of the file, then exit (not return)
  // -f nnn: set the name_len's int to the integer value given by nnn;
  //    you may use the atoi library function to do the necessary conversion
  // Default values:
  //   If none of -c, -w, -n, and -l are given, set cflag, wflag, and lflag
  //     (i.e., set the int variable to 1), and unset lflag (value 0).  It is
  //     probably easiest to (1) set all the flags' ints to 0 at the beginning;
  //     (2) set individual flags as they are encountered, also remembering if
  //     any have been set; and (3) check for the default case after the
  //     argument processing loop.
  //   If -o is not given, the default output FILE * is for outfile is stdout.
  //   If -f is not given, the default value for name_len is 20.
  // For outfile and name_len, it is probably easiest to set their default at
  // the beginning.  That way no later check is required.
  return;
}

// Suppose we wish to count maximum length contiguous
// sequences of vowels in a string.  This pattern of
// code can do that.  Make sure you understand it before
// applying it in the two functions below.  In at least
// one of the cases it will need adaptation beyond changing
// just the string of characters to match against.
// Note how it succinctly checks for the "s is NULL" case.
// Note also that experienced C programmers often omit
// != 0 from a test, since it is redundant ...
int count_vowel_seqs(const char *s) {
  int count = 0;
  const char *vowels = "aeiouy";
  int temp;
  while (s && *s) {                   // skip if null, and stop at end of string
    s += (temp = strspn(s, vowels));  // temp gets match length
    s += strcspn(s, vowels);
    count += (temp != 0);
  }
  return count;
}

// Count words in a string.  A "word" is a maximum length
// contiguous sequence of characters that does not include
// any of the delimiters space, tab, or newline.
// @param s: The string for which the word count is desired
// @result: The number of words in s; returns 0 if s is NULL
int count_words(const char *s) {
  //int count = -1;
  if (s == NULL){
    return 0;
  }

  

  int count = 0;
  //int tempMaxWord = 0;
  int WordCount = 0;
  //int newMaxWord = 0;
  for (int i = 0; i < strlen(s); i++){
    //if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
    if (isalpha(s[i]) || isdigit(s[i])){
      count = 1;
      if (i == strlen(s) - 1){
        return count;
      }
    } else {
      if (count == 1){
        WordCount+=1;
      }
      count = 0;
      }
    }
   if (count == 1){
     WordCount+=1;
     count = 0;
   } 
  
  return WordCount;

}







// Count numbers in a string.  A "number" is a maximum length
// contiguous sequence of the digits 0 through 9.
// @param s: The string for which the word count is desired
// @result: The number of words in s; returns 0 if s is NULL
int count_numbers(const char *s) {
  if (s == NULL){
    return 0;
  }
  int count = 0;
  int numberCount = 0;
  //int newMaxNumber = 0;
  for (int i = 0; i < strlen(s); i++){
    //int maxNumber = 0;
    if (isdigit(s[i])){
      count = 1;
      // if (i == strlen(s)){
      //   return count;
      // }
      // maxNumber = count;
      // if (tempMaxNumber < count){
      //   tempMaxNumber++;
      //   count = -1;
      //   //maxNumber = 0;
      } else {
        if (count == 1){
          numberCount+=1;
          count = 0;
        }
        
        // if (tempMaxNumber < count){
        //   tempMaxNumber++;
        //   count = 0;
        // }
      }
    }
   if (count == 1){
     numberCount+=1;
     count = 0;
   } 
  return numberCount;
  //return newMaxNumber;
  // int totalCount = 0;
  // int number = 0;
  // //int i = 0;
  // for (int i = 0; i < strlen(s); i++){
  //   if(s[i] >= '0' && s[i] <= '9') {
  //     number++;
  //   } else {
  //     i++;
  //   }
  // }
  // return count;
}
