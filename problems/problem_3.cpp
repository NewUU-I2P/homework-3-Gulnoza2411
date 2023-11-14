#include <string>

std::string problemSolution3(float height, char S) {
    std::string result;
    if(s=='M'){
        if(height<1.7){
            result="short";
        }
        else if (height>=1.7 && height<1.85){
            result="normal";
        }
        else{
            result="tall";
        }
        else if(S=='F'){
            if(height<1.6){
                result="short";
            }
            else if (height>=1.6 && height<1.75){
                result="normal";
            }
            else{
                result="tall"
            }
        }
        return result;
    }
    // write your code here

    // use return to return your result
    // make use of control flow statements
}