//
//  main.cpp
//  Awesome
//
//  Created by Nikko Santiago on 3/10/23.
//

#include <iostream>
#include <iomanip>

void input_One_Two(int &inputOne, int &inputTwo);
void output_One_Two(int &inputOne, int &inputTwo);

int main(){
  

    int inputOne;
    int inputTwo;
    input_One_Two( inputOne, inputTwo);
    output_One_Two(inputOne, inputTwo);
 
    
    
    
    
    
   
  
    return 0;
}

//always make an input module. main outputs main. thats all.
void input_One_Two(int &inputOne, int &inputTwo){
    std::cout<< "Believe in yourself." << std::endl;
 
    std::cout << "JK. Distract yourself. Enter two numbers" << std::endl;

    std::cin >> inputOne;
 
    std::cin>> inputTwo;
}

//do not do (int &result), call variables from specified module only
void output_One_Two(int &inputOne, int &inputTwo){

    int result;
    result = inputOne + inputTwo;

  
    std::cout << result << std::endl;
    //I used return result(refer to page 147), but just use the damn cout//
}
