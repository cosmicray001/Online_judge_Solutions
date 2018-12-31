/*
 * UVa 10034: Freckles
 * Sai Cheemalapati
 */

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace std;

/* Union find data structure. */
int pi[110];
int uf_rank[110];

void uf_makeset(int x) {
    pi[x] = x;
    uf_rank[x] = 0;
}

int uf_find(int x) {
    while (x != pi[x]) {
        x = pi[x];
    }
    return x;
}

void uf_union(int x, int y) {
    int rx = uf_find(x);
    int ry = uf_find(y);

    if (rx == ry) return;
    if (rx > ry) pi[ry] = rx;
    else {
        pi[rx] = ry;
        if (uf_rank[rx] == uf_rank[ry]) uf_rank[ry] = uf_rank[ry] + 1;
    }
}

float euclidian(pair<float, float> a, pair<float, float> b) {
    float x = a.first - b.first;
    float y = a.second - b.second;
    return sqrt(x * x + y * y);
}

bool compare(pair<float, pair<int, int> > a, pair<float, pair<int, int> > b) {
    return a.first < b.first;
}

int main() {
    int T, N;
    float x, y;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);

        vector<pair<float, float> > points;
        float matrix[N][N];
        float visited[N], cost[N], prev[N];

        for (int i = 0; i < N; i++) {
            scanf("%f %f", &x, &y);
            points.push_back(make_pair(x, y));
        }

        for (int i = 0; i < N; i++) uf_makeset(i);

        vector<pair<float, pair<int, int> > > E;
        E.clear();
        vector<pair<float, pair<int, int> > > X;
        X.clear();
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                E.push_back(make_pair(euclidian(points[i], points[j]), make_pair(i, j)));
            }
        }
        sort(E.begin(), E.end(), compare);

        for (int i = 0; i < E.size(); i++) {
            if (uf_find(E[i].second.first) != uf_find(E[i].second.second)) {
                X.push_back(E[i]);
                uf_union(E[i].second.first, E[i].second.second);
            }
        }

        float total = 0;
        for (int i = 0; i < X.size(); i++) total += X[i].first;
        printf("%.2f\n", total);

        if(T > 0) printf("\n");
    }
}
