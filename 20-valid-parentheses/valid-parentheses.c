bool isValid(char* s) {
    int len=strlen(s);
    if (len %2!=0)
        return false;
    char stack[len];
    int top=-1;
    for(int i=0;s[i]!='\0';i++){
        char c=s[i];
        if(c=='(' || c=='[' || c=='{')
            stack[++top]=c;
        else{
            if(top==-1)
                return false;
            char open=stack[top--];
            if((c==')' && open !='(') ||(c=='}' && open !='{')|| (c==']' && open !='['))
            return false;
        }
    }
     return top == -1;
}