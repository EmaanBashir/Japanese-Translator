#include<iostream>
#include<fstream>
#include<string>
using namespace std;
/* Look for all **'s and complete them */
//=====================================================
// File scanner.cpp written by: Group Number: ** 
//=====================================================
// --------- Two DFAs ---------------------------------
// WORD DFA
// Done by: **Emaan Bashir
// RE: (vowel | vowel n | consonant vowel | consonant vowel n | consonant - pair vowel | consonant -
pair vowel n) ^ +
bool word(string s)
{
 string state = "q0";
 int charpos = 0;
 /* replace the following todo the word dfa ** */
 while (s[charpos] != '\0')
 {
 if (state == "q0" && s[charpos] == 'c')
 state = "qc";
 else
 if (state == "q0" && s[charpos] == 's')
 state = "qs";
 else
 if (state == "q0" && (s[charpos] == 'a' || s[charpos] == 'e' || s[charpos] == 'i' || s[charpos] == 'o' 
|| s[charpos] == 'u' || s[charpos] == 'I' || s[charpos] == 'E'))
 state = "q0q1";
 else
 if (state == "q0" && (s[charpos] == 'd' || s[charpos] == 'w' || s[charpos] == 'z' || s[charpos] 
== 'y' || s[charpos] == 'j'))
 state = "qsa";
 else
 if (state == "q0" && s[charpos] == 't')
 state = "qt";
 else
 if (state == "q0" && (s[charpos] == 'b' || s[charpos] == 'g' || s[charpos] == 'h' || 
s[charpos] == 'k' || s[charpos] == 'm' || s[charpos] == 'n' || s[charpos] == 'p' || s[charpos] \
 == 'r'))
 state = "qy";
 else
 if (state == "q1" && s[charpos] == 'n')
 state = "q0";
 else
 if (state == "qc" && s[charpos] == 'h')
 state = "qsa";
 else
 if (state == "qs" && s[charpos] == 'h')
 state = "qsa";
 else
 if (state == "qs" && (s[charpos] == 'a' || s[charpos] == 'e' || s[charpos] == 'i' || 
s[charpos] == 'o' || s[charpos] == 'u' || s[charpos] == 'I' || s[charpos] == 'E'))
 state = "q0q1";
 else
 if (state == "qt" && (s[charpos] == 'a' || s[charpos] == 'e' || s[charpos] == 'i' 
|| s[charpos] == 'o' || s[charpos] == 'u' || s[charpos] == 'I' || s[charpos] == 'E'))
 state = "q0q1";
 else
 if (state == "qt" && s[charpos] == 's')
 state = "qsa";
 else
 if (state == "qy" && s[charpos] == 'y')
 state = "qsa";
 else
 if (state == "qy" && (s[charpos] == 'a' || s[charpos] == 'e' || s[charpos] 
== 'i' || s[charpos] == 'o' || s[charpos] == 'u' || s[charpos] == 'I' || s[charpos] == 'E'))
 state = "q0q1";
 else
 if (state == "qsa" && (s[charpos] == 'a' || s[charpos] == 'e' || 
s[charpos] == 'i' || s[charpos] == 'o' || s[charpos] == 'u' || s[charpos] == 'I' || s[charpos] == 'E'))
 state = "q0q1";
 else
 if (state == "q0q1" && s[charpos] == 'c')
 state = "qc";
 else
 if (state == "q0q1" && (s[charpos] == 'a' || s[charpos] == 'e' || 
s[charpos] == 'i' || s[charpos] == 'o' || s[charpos] == 'u' || s[charpos] == 'I' || s[charpos] == 'E'))
 state = "q0q1";
 else
 if (state == "q0q1" && s[charpos] == 'n')
 state = "q0qy";
 else
 if (state == "q0q1" && (s[charpos] == 'b' || s[charpos] == 'g' 
|| s[charpos] == 'h' || s[charpos] == 'k' || s[charpos] == 'm' || s[charpos] == 'p' || s[charpos] == 'r'))
 state = "qy";
 else
 if (state == "q0q1" && (s[charpos] == 'd' || s[charpos] == 
'w' || s[charpos] == 'z' || s[charpos] == 'y' || s[charpos] == 'j'))
 state = "qsa";
 else
 if (state == "q0q1" && s[charpos] == 's')
 state = "qs";
 else
 if (state == "q0q1" && s[charpos] == 't')
 state = "qt";
 else
 if (state == "q0qy" && s[charpos] == 'c')
 state = "qc";
 else
 if (state == "q0q1" && (s[charpos] == 'a' || 
s[charpos] == 'e' || s[charpos] == 'i' || s[charpos] == 'o' || s[charpos] == 'u' || s[charpos] == 'I' || 
s[charpos] == 'E'))
 state = "q0q1";
 else
 if (state == "q0q1" && s[charpos] == 'n')
 state = "q0qy";
 else
 if (state == "q0q1" && (s[charpos] == 'b' || 
s[charpos] == 'g' || s[charpos] == 'h' || s[charpos] == 'k' || s[charpos] == 'm' || s[charpos] == 'p' || 
s[charpos] == 'r'))
 state = "qy";
 else
 if (state == "q0q1" && (s[charpos] == 'd' 
|| s[charpos] == 'w' || s[charpos] == 'z' || s[charpos] == 'y' || s[charpos] == 'j'))
 state = "qsa";
 else
 if (state == "q0q1" && s[charpos] == 's')
 state = "qs";
 else
 if (state == "q0q1" && s[charpos] == 
't')
 state = "qt";
 else
 if (state == "q0qy" && s[charpos] 
== 'c')
 state == "qc";
 else
 if (state == "q0q1" && 
(s[charpos] == 'a' || s[charpos] == 'e' || s[charpos] == 'i' || s[charpos] == 'o' || s[charpos] == 'u' || 
s[charpos] == 'I' || s[charpos] == 'E'))
 state = "q0q1";
 else
 if (state == "q0q1" && 
s[charpos] == 'n')
 state = "q0qy";
 else
 if (state == "q0q1" && 
(s[charpos] == 'b' || s[charpos] == 'g' || s[charpos] == 'h' || s[charpos] == 'k' || s[charpos] == 'm' || 
s[charpos] == 'p' || s[charpos] == 'r'))
 state = "qy";
 else
 if (state == "q0q1" && 
(s[charpos] == 'd' || s[charpos] == 'w' || s[charpos] == 'z' || s[charpos] == 'y' || s[charpos] == 'j'))
 state = "qsa";
 else
 if (state == "q0q1" && 
s[charpos] == 's')
 state = "qs";
 else
 if (state == "q0q1" && 
s[charpos] == 't')
 state = "qt";
 else
 if (state == "q0qy" 
&& s[charpos] == 'c')
 state = "qc";
 else
 if (state == 
"q0qy" && (s[charpos] == 'a' || s[charpos] == 'e' || s[charpos] == 'i' || s[charpos] == 'o' || s[charpos] == 
'u' || s[charpos] == 'I' || s[charpos] == 'E'))
 state = "q0q1";
 else
 if (state == 
"q0qy" && s[charpos] == 's')
 state = "qs";
 else
 if (state == 
"q0qy" && s[charpos] == 't')
 state = 
"qt";
 else
 if (state == 
"q0qy" && (s[charpos] == 'd' || s[charpos] == 'w' || s[charpos] == 'z' || s[charpos] == 'j' || s[charpos] == 
'y'))
 state = 
"qsa";
 else
 
return(false);
 charpos++;
 }//end of while
 // where did I end up????
 if (state == "q0" || state == "q0q1" || state == "q0qy") return(true); // end in a final state
 else { return(false); }
}
// PERIOD DFA 
// Done by: Morgan Buell and Darshan
// RE: .
bool period(string s)
{ // complete this
 string state = "q0"; // establishes the string state
 int charpos = 0;
 while (s[charpos != '\0']) { //while loop loops through the input file until it hits the end
 if (state == "q0" && s[charpos] == '.') { //if statement chekcs whether or not the scanner picks up a 
period
 state == "PERIOD"; //once scanner picks up period, it changes state to period
 return true; //returns "true" when the state is equal to period
 }
 else { //if scanner doesn't pick up a period return false
 return false;
 }
 }
}
// ------ Three Tables -------------------------------------
// TABLES Done by: Eric Thompson
// ** Update the tokentype to be WORD1, WORD2, PERIOD, ERROR, EOFM, etc.
enum tokentype { ERROR, WORD1, WORD2, PERIOD, EOFM, VERB, VERBNEG, VERBPAST, VERBPASTNEG, 
IS, WAS, OBJECT, SUBJECT, DESTINATION, PRONOUN, CONNECTOR };
// ** For the display names of tokens - must be in the same order as the tokentype.
string tokenName[30] = { "Error", "Word1", "Word2", "Period", "Eofm", "Verb", "VerbNeg", "VerbPast", 
"VerbPastNeg", "Is", "Was", "Object", "Subject", "Destination", "Pronoun", "Connector" };
// ** Need the reservedwords table to be set up here. 
string reservedwords[30] = { "masu", "masen", "mashita", "masendeshita", "desu", "deshita", "o", "wa", 
"ni", "watashi", "anata", "kare", "kanojo", "sore", "mata", "soshite", "shikashi", "dakara", "eofm" };
tokentype reservedwordsenums[30] = { VERB, VERBNEG, VERBPAST, VERBPASTNEG, IS, WAS, OBJECT, 
SUBJECT, DESTINATION, PRONOUN, PRONOUN, PRONOUN, PRONOUN, PRONOUN, CONNECTOR, 
CONNECTOR, CONNECTOR, CONNECTOR, EOFM };
// ** Do not require any file input for this. Hard code the table.
// ** a.out should work without any additional files.
// ------------ Scanner and Driver -----------------------
ifstream fin; // global stream for reading from the input file
// Scanner processes only one word each time it is called
// Gives back the token type and the word itself
// ** Done by: Eric Thompson
int scanner(tokentype& tt, string& w)
{
// ** Grab the next word from the file via fin
// 1. If it is eofm, return right now. 
fin >> w;
if (w == "eofm") //Return if we've hit the end of file
{
tt = EOFM;
return 0;
}
/* **
2. Call the token functions (word and period)
 one after another (if-then-else).
 Generate a lexical error message if both DFAs failed.
 Let the tokentype be ERROR in that case.
 */
if (word(w))
{
//Don't need to do anything yet
}
else if (period(w)) //No more processing needed, we can set the type and return
{
tt = PERIOD;
return -1;
}
else //Neither a word nor period, must be an error
{
tt = ERROR;
return -1;
}
/**
 3. If it was a word,
check against the reservedwords list.
If not reserved, tokentype is WORD1 or WORD2
decided based on the last character.
*/
//Checking if reserved word
int i = 0;//Keep track of the index so we can get the enum in the matching enums array
for (string s : reservedwords)
{
if (s == w) //the string in reservedwords matches our word
{
tt = reservedwordsenums[i]; //Set to the matching enum type
return 0;
}
i++; //Increment index
}
//Checking if WORD1 or WORD2
char lastLetter = w.back(); //Getting the last char of our word to compare
if ((lastLetter == 'I') | (lastLetter == 'E')) //Word 1 if ending in capital I or E
{
tt = WORD1;
}
else if (islower(lastLetter)) //Word 2 if a lowercase letter
{
tt = WORD2;
}
else //Otherwise must be an error
{
tt = ERROR;
return -1;
}
//4. Return the token type & string (pass by reference)
return 0;
}//the end of scanner
// The temporary test driver to just call the scanner repeatedly 
// This will go away after this assignment
// DO NOT CHANGE THIS!!!!!! 
// Done by: Louis
int main()
{
tokentype thetype;
string theword;
string filename;
cout << "Enter the input file name: ";
cin >> filename;
fin.open(filename.c_str());
// the loop continues until eofm is returned.
while (true)
{
scanner(thetype, theword); // call the scanner which sets
// the arguments 
if (theword == "eofm") break; // stop now
cout << "Type is:" << tokenName[thetype] << endl;
cout << "Word is:" << theword << endl;
}
cout << "End of file is encountered." << endl;
fin.close();
}// end
