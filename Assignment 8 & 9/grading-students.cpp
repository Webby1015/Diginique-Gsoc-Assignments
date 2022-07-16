vector<int> gradingStudents(vector<int> grades) {
    for(int i=0;i<grades.size();i++){
        if (grades[i]>=38 && ((((grades[i]/5)+1)*5)-(grades[i]))<3){        
        grades[i]=((grades[i]/5)+1)*5;
        }
    }
    return grades;
}
