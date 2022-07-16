string dayOfProgrammer(int year) {
    string str;
    if(year==1918)
    {
        str="26.09.1918";
    }
    else if(year<=1917 && year%4==0)
     {
        str="12.09."+to_string(year);
     }
    else if(year<=1917)
        str="13.09."+to_string(year);
    else if(year>=1919 && ((year%400==0) || (year%4==0 && year%100!=0)))
        str="12.09."+to_string(year);
    else
        str="13.09."+to_string(year);
    return str;
}
