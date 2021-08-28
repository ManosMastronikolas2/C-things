#include <iostream>
#include <cctype> 
#include <cstring>

//Simple sentence word count program
//You HAVE to end sentence with '.' 

void wordcnt(std::string &str){
    int wcnt=0;

    if(str!=" "){ //check for empty string

        for(int i=0;i<=str.size();i++){
        if(isspace(str[i])){ //if str[i] is space, it means it has a word before it
            wcnt++; //so it increments the count
        }else if(str[i]=='.'){ //if there's '.' it means the end of the sentence
            wcnt++; //increment to count the final word before the '.'
        }

    }
    }
    std::cout << "There are " << wcnt << " words.\n";
}

int main(){
    //MAGIC :)
    std::string in;
    getline(std::cin, in);
    std::cin.clear();

    wordcnt(in);
    return 0;
}