bool helperMatch(string &s, string &p, int i, int j);
// bool isMatch(string s, string p) {
//     int ns = s.size();
//     int np = p.size();
//     if(ns == 0 && np == 0) return true;
//     if(ns == 0 && np != 0) return false;
//     if(ns != 0 && np == 0) return false;
//     if(p[0] == '*') return false;
//     return helperMatch(s, p, 0, 0);
// }

// bool helperMatch(string &s, string &p, int i, int j){
//     int ns = s.size();
//     int np = p.size();
//     if(np == j) return !(ns - i);
//     if(j + 1 < np && p[j+1] == '*'){ 
//             return helperMatch(s, p, i, j+2) ||
//                 ((i < ns) &&helperMatch(s, p, i+1, j+2)) ||
//                 helperMatch(s, p, i+1, j);
//     }else{
//         (i < ns && p[j] == s[i] || p[j] == '.') && helperMatch(s, p, i+1, j+1);
//     }
// }