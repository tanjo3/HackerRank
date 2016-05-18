    /* Enter your code here */
    if (dynamic_cast<Fireball*>(spell) != nullptr) {
        dynamic_cast<Fireball*>(spell)->revealFirepower();
    } else if (dynamic_cast<Frostbite*>(spell) != nullptr) {
        dynamic_cast<Frostbite*>(spell)->revealFrostpower();
    } else if (dynamic_cast<Waterbolt*>(spell) != nullptr) {
        dynamic_cast<Waterbolt*>(spell)->revealWaterpower();
    } else if (dynamic_cast<Thunderstorm*>(spell) != nullptr) {
        dynamic_cast<Thunderstorm*>(spell)->revealThunderpower();
    } else {
        string X = spell->revealScrollName();
        string Y = SpellJournal::read();
        int m = X.length();
        int n = Y.length();

        int C[m + 1][n + 1];
        for (int i = 0; i <= m; i++) {
            C[i][0] = 0;
        }
        for (int j = 0; j <= n; j++) {
            C[0][j] = 0;
        }
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (X[i - 1] == Y[j - 1]) {
                    C[i][j] = C[i - 1][j - 1] + 1;
                } else {
                    C[i][j] = max(C[i][j - 1], C[i- 1][j]);
                }
            }
        }

        cout << C[m][n] << endl;
    }
