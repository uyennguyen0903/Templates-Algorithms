int add(int &a, ll b) {
    a = (a + b) % Mod7;
}

struct Matrix {
    vector<vector<int>> a;
    int n, m;

    Matrix(int n, int m) : n(n), m(m) {
        a.assign(n, vector<int>(m, 0));
    }

    friend Matrix operator * (Matrix a, Matrix b) {
        Matrix c(a.n, b.m);
        For(i,0,a.n-1)
            For(j,0,b.m-1)
                For(k,0,a.m-1)
                    add(c.a[i][j], 1LL * a.a[i][k] * b.a[k][j]);
        return c;
    }
};

Matrix identity(int n) {
    Matrix res(n, n);
    For(i,0,n-1)
        res.a[i][i] = 1;
    return res;
}

void power(Matrix &a, int n, Matrix &b) {
    while (n > 0) {
        if (n&1) b = a * b;
        a = a * a;
        n = n / 2;
    }
}