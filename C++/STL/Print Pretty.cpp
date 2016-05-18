        cout << resetiosflags(ios::uppercase) << setiosflags(ios::showbase) << setw(0);
        cout << setprecision(0) << fixed << hex << (long long) A << endl;

        cout << resetiosflags(ios::showbase) << setfill('_') << setw(15);
        cout << setprecision(2) << fixed << right << showpos << B << endl;

        cout << setiosflags(ios::uppercase);
        cout << setprecision(9) << scientific << noshowpos << C << endl;
