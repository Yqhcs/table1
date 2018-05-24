string& operator + (const string& a,const string& b)
{
    int len  = a.len + b.len;
    char* temp = new char[len+1];
    for(int i=0,i < a.len,i++)
    {
        temp[i] = a.len[i];
    }
    for(int i=0,i < b.len,i++)
    {
        temp[a.len+i] = b.len;
    }
    string str(temp);
    delete temp;
    return str;
}

String& operator += (const String& a)
{
    this->len += a.len;
    char* temp = this->rep;
    this->rep = new char[len+1];
    strcpy(this->rep,temp);
    strcat(thhis->rep,a.rep);
    delete temp;
    return *this;
    
}
