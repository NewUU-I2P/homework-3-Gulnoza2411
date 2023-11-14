#include <string>

std::string problemSolution3(float height, char S) {
    std::string result;

    if (S== 'M') {
        if (height < 1.7) {
            result = "Short";
        } else if (height >= 1.7 && height < 1.85) {
            result = "Normal";
        } else {
            result = "Tall";
        }
    } else if (sex == 'F') {
        if (height < 1.6) {
            result = "Short";
        } else if (height >= 1.6 && height < 1.75) {
            result = "Normal";
        } else {
            result = "Tall";
        }
    } else {
        result = "Invalid input for S. Please enter 'M' or 'F'.";
    }

    return result;
}