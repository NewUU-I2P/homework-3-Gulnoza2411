float problemSolution5(float x, float y, char operation) {
   float result;
    switch () {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error" << endl;
                return 1;
            }
            break;
        default:
            cout << "Error" << endl;
            return 1;
    }
   return result;
}
