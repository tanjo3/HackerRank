class Matrix {
    public:
        vector<vector<int>> a;

        Matrix operator+(const Matrix &m) {
            Matrix sum;

            for(vector<vector<int>>::size_type i = 0; i < a.size(); i++) {
                vector<int> temp, a_row = a.at(i);

                for(vector<int>::size_type j = 0; j < a_row.size(); j++) {
                    temp.push_back(a_row.at(j) + m.a.at(i).at(j));
                }

                sum.a.push_back(temp);
            }

            return sum;
        }
};