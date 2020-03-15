#include <bits/stdc++.h>
using namespace std;
#define N 10001
#define M 10001
const double eps = 1e-7;

double Mat[M][N];
int B[M];
int m, n, Nn, Nm;

void pivot(int l, int e){
    double tmp = Mat[l][e];
    for(int i = 0; i < Nn; i++){
            Mat[l][i] /= tmp;
    }
    for(int i = 0; i < Nm; i++){
        tmp = Mat[i][e];
        if(i != l && fabs(Mat[i][e])>eps){
            for(int j = 0; j < Nn; j++){
                    Mat[i][j] -= tmp * Mat[l][j];
            }
        }
    }
    B[l] = e;  // e入基, B[l]出基
}

bool check(int a){
    for(int i = 1; i < Nm; i++){
        if(B[i] == a){
            return true;
        }
    }
    return false;
}

int simplex(){
    while(1){
        int e = -1;
        double e_min = 0x7fffffff;
        for(int i = 1; i < Nn; i++){
            if(Mat[0][i] < 0 && Mat[0][i] < e_min && !check(i)){
                e = i;
                e_min= Mat[0][i];
            }
        }
        if(e == -1) return 0;

        double theta = 0x7fffffff;
        int l;
        for(int i = 1; i < Nm; i++){
            // int t = 0x7fffffff;
            if(Mat[i][e] > 0){
                if(Mat[i][0] / Mat[i][e] < theta){
                    theta = Mat[i][0] / Mat[i][e];
                    l = i;
                }
            }        
        }
        if(theta == 0x7fffffff) return -1;
        pivot(l, e);
    }
}
// return 0 if ok
int initialise_simplex(){
    int l = -1;
    double min_b = 0x7fffffff;
    for(int i = 1; i < Nm; i++){
        if(l == -1 || Mat[i][0] < min_b){
            l = i;
            min_b = Mat[i][0];
        }
    }
    for(int i = 1; i < Nm; i++) B[i] = n + i;
    if(Mat[l][0] >= 0){
        return 0;
    }

    double c_old[Nn];
    for(int i = 0; i < Nn; i++) c_old[i] = Mat[0][i];
    
    // using x_0 as objective function, add -x_0 to each constraint
    Nn++;
    Mat[0][Nn-1] = 1;
    for(int i = 0; i < Nn - 1; i++) Mat[0][i] = 0;
    for(int i = 1; i < Nm; i++) Mat[i][Nn-1] = -1;

    pivot(l, Nn - 1);

    int flag;
    flag = simplex();
    if(flag == -1){
        cout << "Unbounded!" << endl;
        cout << Mat[0][0] << endl;
    }
    if(Mat[0][0] != 0) return -1;
    
    // remove x_0
    int basic = -1;
    for(int i = 1; i < Nm; i++){
        if(B[i] == Nn - 1){
            basic = i;
            break;
        }
    }
    // x_0 is basic, pivot it
    if(basic != -1){
        int nobasic = -1;
        for(int i = 1; i < Nn - 1; i++){
            for(int j = 1; j < Nm; j++){
                if(i != B[j]){
                    nobasic = i;
                    break;
                }
            }
        }
        pivot(basic, nobasic);
    }

    // restore L
    Nn--;
    for(int i = 0; i < Nn; i++){
        Mat[0][i] = c_old[i];
    }
    for(int i = 1; i < Nn; i++){
        int id = -1;
        for(int j = 1; j < Nm; j++){
            if(B[j] == i){
                id = j;
                break;
            }
        }
        if(id == -1) continue;
        else{
            double tmp = Mat[0][i];
            for(int k = 0; k < Nn; k++){
                Mat[0][k] = Mat[0][k] - tmp * Mat[id][k];
            }
        }
    }
    return 0;
}

void solve(){
    Nn = 1 + n + m;
    Nm = 1 + m;
    int flag = initialise_simplex();
    if(flag == -1) cout << "Infeasible!" << endl;
    else
    {
        int flag = simplex();
        if(flag == -1) cout << "Unbounded!" << endl;
        else
        {
            cout << -Mat[0][0] << endl;
        }
    }    
}

    
int main(){
    int in_n, in_m, t;
    cin >> in_n >> in_m;
    m = in_n;
    n = in_m;
    for(int i = 1; i <= in_n; i++){
        cin >> t;
        Mat[i][0] = -t;
    }
    int s, f, c;
    for(int i = 0; i < in_m; i++){
        cin >> s >> f >> c;
        Mat[0][i+1] = c;
        for(int j = s; j <= f; j++){
            Mat[j][i+1] = -1;
        }
    }

    Nn = 1 + n + m;
    Nm = 1 + m;
    for(int i = 1; i < Nm; i++){      
            Mat[i][n+i] = 1;
    }
    // Mat[0][0] = 0; Mat[0][1] = 2; Mat[0][2] = 5; Mat[0][3] = 2; Mat[0][4] = 0; Mat[0][5] = 0; Mat[0][6] = 0;
    // Mat[1][0] = -2; Mat[1][1] = -1; Mat[1][2] = 0; Mat[1][3] = 0; Mat[1][4] = 1; Mat[1][5] = 0; Mat[1][6] = 0;
    // Mat[2][0] = -3; Mat[2][1] = -1; Mat[2][2] = -1; Mat[2][3] = 0; Mat[2][4] = 0; Mat[2][5] = 1; Mat[2][6] = 0;
    // Mat[3][0] = -4; Mat[3][1] = 0; Mat[3][2] = -1; Mat[3][3] = -1; Mat[3][4] = 0; Mat[3][5] = 0; Mat[3][6] = 1;
    solve();
    return 0;
}