#include<bits/stdc++.h>
using namespace std;
struct node {
    long long val, sum, con;
    bool ppg;
    node():val(0), sum(0), ppg(0), con(0){}
    node(int v):val(v), ppg(0), sum(v), con(1){}
    void _merge(node &q, node &w) {
        sum = q.sum + w.sum;
        con = q.con + w.con;
        return;
    }
    void propagate(node &q, node &w) {
        if(!ppg)return;
        q.ppg = w.ppg = 1;
        q.val += val;
        w.val += val;
        ppg = 0;
        val = 0;
        return;
    }
    void calc() {
        sum+=val*con;
        return;
    }

    node operator+(const node &p) const {
        node ret;
        ret.sum = sum + p.sum;
        ret.con = con + p.con;
        return ret;
    }

    node operator++() const {
        node ret = *this;
        ret.sum += ret.con * ret.val;
        return ret;
    }

}tree[400005];
void init(int nd, int bb, int ee) {
    if(bb==ee) {
        tree[nd]=node(0);
        return;
    }
    int ll=nd<<1, rr=ll|1, mm=(bb+ee)>>1;
    init(ll, bb, mm);
    init(rr, mm+1, ee);
    tree[nd]._merge(tree[ll], tree[rr]);
    return;
}
void update(int nd, int bb, int ee, int ii, int jj, long long vv) {
    int ll=nd<<1, rr=ll|1, mm=(bb+ee)>>1;
    tree[nd].calc();
    if(bb!=ee) tree[nd].propagate(tree[ll], tree[rr]);
    if(bb>jj || ee<ii)return;
    if(bb>=ii && ee<=jj) {
        tree[nd].ppg = 1;
        tree[nd].val += vv;
        tree[nd].calc();
        return;
    }
    update(ll, bb, mm, ii, jj, vv);
    update(rr, mm+1, ee, ii, jj, vv);
    tree[nd]._merge(tree[ll], tree[rr]);
    return;
}
long long query(int nd, int bb, int ee, int ii, int jj) {
    int ll=nd<<1, rr=ll|1, mm=(bb+ee)>>1;
    tree[nd].calc();
    if(bb!=ee) tree[nd].propagate(tree[ll], tree[rr]);
    if(bb>jj || ee<ii)return 0;
    if(bb>=ii && ee<=jj) return tree[nd].sum;
    return query(ll, bb, mm, ii, jj)+query(rr, mm+1, ee, ii, jj);
}
int main() {
    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) {
        int n, c;
        cin>>n>>c;
        init(1, 1, n);
        while(c--) {
            int type, x, y, v;
            cin>>type>>x>>y;
            if(type == 0) {
                cin>>v;
                update(1, 1, n, x, y, v);
            }else cout<<query(1, 1, n, x, y)<<"\n";

        }
    }
    return 0;
}
