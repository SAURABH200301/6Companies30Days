class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4){
        double a= sqrt(pow(p1[0]-p2[0],2)+pow(p1[1]-p2[1],2));
        double b= sqrt(pow(p3[0]-p2[0],2)+pow(p3[1]-p2[1],2));
        double c= sqrt(pow(p3[0]-p4[0],2)+pow(p3[1]-p4[1],2));
        double d= sqrt(pow(p1[0]-p4[0],2)+pow(p1[1]-p4[1],2));
        double e= sqrt(pow(p1[0]-p3[0],2)+pow(p1[1]-p3[1],2));
        double f= sqrt(pow(p4[0]-p2[0],2)+pow(p4[1]-p2[1],2));
        map<double,int> m;
        // cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
        m[a]++;m[b]++;m[c]++;m[d]++;m[e]++;m[f]++;
        if(m.find(0)!=m.end()) return false;
        if(m.size()<=2 and (m[a]==4 or m[a]==2)) return true;
        return false;

    }
};
