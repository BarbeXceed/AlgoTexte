#include "lectureFichier.hpp"

string lectureFichier(string path){
    string res = "";
    string ligne;

    // Read from the text file
    ifstream file(path);

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (file, ligne)) {
        // Output the text from the file
        res += ligne;
    }

    // Close the file
    file.close(); 

    return res;
}