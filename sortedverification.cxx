#include <iostream>
#include <fstream>
#include "json.hpp" //For loading json file

using namespace std;
using json = nlohmann::json;


int main(int argc, char** argv) {

    string jsonFile = argv[1]; //jsonfile stores file name

    ifstream inputFile(jsonFile); //Read jsonFile 
    if(!inputFile.is_open()){     //If file is not open print not open and stop
        cout<<"File did not open"; 
        return 1; 
    }

    else{

        json data; //Declaring a json data type
        inputFile >>data;  //Pushing file inputs into data
        cout<<data; 

        json result; //json object to store result
        
        for(int i =0; i <data; i++){

            if(data == "metadata"){
                continue;
                
            }
        }
    }

}