    int N, Q;
    cin >> N;
    cin >> Q;

    int* A[N];
    int k;

    for (int i = 0; i < N; i++) {
        cin >> k;
        int* S = new int[k];

        for (int j = 0; j < k; j++) {
            cin >> S[j];
        }

        A[i] = S;
    }

    int a, b;
    for (int i = 0; i < Q; i++) {
        cin >> a;
        cin >> b;
        cout << A[a][b] << endl;
    }

    for (int i = 0; i < N; i++) {
        delete A[i];
    }

    return 0;
}