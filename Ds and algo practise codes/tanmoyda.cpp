#include <bits/stdc++.h>
using namespace std;

vector<string> permutations;
set<string> check;

//now we have to create the global variables
string permutation;
bool already_used[10000];


//puro code complete except one thing
//amra permutation string tar index tomo position e character bosaiya kaj korsi, right?
//kintu shuru te to permutation string ta empty, oitar size o empty
//tai jokhon e oitar je kono position access korte jabo tokhon e runtime error khabe, karon shuru te array er size e 0
//sutorang amake permutation er size ta amar input string er size er soman korte hobe. right?//hae
//taile 59 number line e asho


void generate_permutations(string &s, int index = 0) {
  if (index == s.size()) {
  	permutations.push_back(permutation);
    return;
  } // this is the base case
  //permutation eikhane hobe global string ta
  //jeitar moddhe store korbo//okay bujhsi

  for (int i = 0; i < s.size(); i++) {
    if (already_used[i]) { //already used will store the
      continue;            //flag whether this character was used or not
    }

    permutation[index] = s[i];  //if this character is not already used, we are going to use it now

    already_used[i] = true;
    generate_permutations(s, index+1); //now we have to put characters for the next positions


    permutation[index] = '\0'; //I'm clearing this position
    already_used[i] = false; // as the recursion call has already generated the permutations for
                             // the next positions, we can now use another character for this
                             //position, so, we are going to unmark this position//accha permutation array te ans rakhtesi?
                             //yes

  }
}
//function declaration ta bujhso?
//uporer ta? seta to bujhsi e je ekta string er pointer nisi adress er
//yes
//actually pointer na
//reference nisi
//pointer hoile oitar aage * diye derefe
//ha e hrence kora lagto
//kintu reference use korle direct use kora jay
//here, index = 0 by default, ei jonno just generate_permutation(s) diye call
//dile index = 0 hoye jaabe
//okay bujhsi


int main() {
  string s = "abca"; //Suppose this is the string we want to generate permutations of
  permutation = s ;// khela done :p shuru tei permutation er vitore s er ekta copy rekhe dilam
                  // ei copy tar sob gula position recursive call er somoy replace hoye jaabe except the
                  // \0 character at the end. this will prevent runtime error :D

  //now we want to store the permutations in a vector or array, not just print them.
	generate_permutations(s);

/*  for (string s: permutations) {
    cout << s << endl;
  }*/
  int i=0;
   while (!permutations.empty()) {
    cout << permutations[i++] << endl;
  }

  return 0;
}
//shuru te driver code likhe nilam
//ekhon jei function gula banano dorkar oigula banabo

