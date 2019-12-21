#include <bits/stdc++.h>
using namespace std;

#define N 100001
struct point{
    double x;
    double y;
    point(double a, double b){
        x = a;
        y = b;
    }
    point(){
        x = 0;
        y = 0;
    };
};

// vector<point> points, py;

double min(double a, double b){
    if(a < b) return a;
    return b;
}

static const bool cmp_x(point a, point b){
    return a.x < b.x;
}

static const bool cmp_y(point a, point b){
    return a.y < b.y;
}

double dis(point a, point b){
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

double minPoints(vector<point> &points, int l, int r){
    double mindis;
    if(r - l == 1) return dis(points[l], points[r]);
    if(r - l == 2){
        mindis = min(dis(points[l], points[l+1]), dis(points[l], points[l+2]));
        mindis = min(mindis, dis(points[l+1], points[l+2]));
        return mindis;
    }

    int mid = (l + r) / 2;
    double minl, minr;
    minl = minPoints(points, l, mid);
    minr = minPoints(points, mid+1, r);
    mindis = min(minl, minr);

    // sort(points.begin()+l, points.begin()+r, cmp_y);
    vector<point> lp, rp;
    for(int i = mid; i >= l && (points[mid].x - points[i].x) < mindis; i--){
        rp.push_back(points[i]);
    }
    for(int j = mid + 1; j <= r && (points[j].x - points[mid].x) < mindis; j++){
        rp.push_back(points[j]);
    }
    
    sort(rp.begin(), rp.end(), cmp_y);
    // for(int i = 0, index; i < lp.size(); i++){
    //     // for(int j = 0; j < rp.size(); j++){
    //     //     mindis = min(mindis, dis(lp[i], rp[j]));
    //     // }
    //     for(index = 0; index < rp.size() && lp[i].y < rp[index].y; index++);
    //     for(int j =0; j < 7 && j + index < rp.size(); j++){
    //         mindis = min(mindis, dis(lp[i], rp[j]));
    //     }
    // }
    for(int i = 0; i < rp.size(); i++){
        for(int j = i+1; j < rp.size(); j++){
            if(rp[j].y - rp[i].y >= mindis) break;
            mindis = min(mindis, dis(rp[i], rp[j]));
        }
    }
    
    return mindis;
}
    
int main(){
    int n;
    // double dia ;
    // point p;
	// while(scanf("%d",&n)==1&&n)
	// {
    //     vector<point> points;
    //     for(int i=0;i<n;i++){
	// 	    scanf("%lf%lf",&p.x,&p.y);
    //         points.push_back(p);
    //     }
	// 	sort ( points.begin(), points.end(), cmp_x);
	// 	dia = minPoints(points, 0, n-1);
	// 	printf("%.2f\n", dia / 2 );
	// }

    double t1, t2;
    scanf("%d", &n);
    vector<point> points;
    for(int i = 0; i < n; i++){
        // scanf("%lf", &t1);
        // scanf("%lf", &t2);
        cin >> t1 >> t2;
        points.push_back(point(t1, t2));
    }
    sort(points.begin(), points.end(), cmp_x);

    double result = minPoints(points, 0, n-1);
    // printf("%ld", result);
    // cout << result;
    cout<<setiosflags(ios::fixed)<<setprecision(2)<< result <<endl;
    return 0;
}