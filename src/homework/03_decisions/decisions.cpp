//write include statement for decisions header


//Write code for function(s) code here

char get_letter_grade_using_if(int grades){ 
    if (grades < 100 && grades > 90){return 'A';}
    if (grades < 89 && grades > 80){return 'B';}
    if (grades < 79 && grades > 70){return 'C';}
    if (grades < 69 && grades > 60){return 'D';}
    if (grades < 59 && grades > 0){return 'F';}

}

char get_letter_grade_using_switch(int grades){
    switch (grades){
        case 90 ... 100:
            return  'A';
            break;
        case 80 ... 89:
            return  'B';
            break;
        case 70 ... 79:
            return  'C';
            break;
        case 60 ... 69:
            return  'D';
            break;
        case 0 ... 59:
            return  'F';
            break;
        default: 
            break;
    }
}
