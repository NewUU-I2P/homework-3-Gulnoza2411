float problemSolution2(float i, float j, float k) {
    float result;
    if (i>j && i>k){
        cout<<"the maximum number is i="<<i<<endl;
    }
    else if (j>i && j>k){
        cout<<"the maximum number is j="<<j<<endl;
    }
    else  (k>i && k>j){
        cout<<"the maximum number is k="<<k<<endl;
    }
    return result;
}