string solve(string a,string b,char ch){
    string s = "";
    s.push_back(ch);
    s += a;
    s += b;
    return s;
}