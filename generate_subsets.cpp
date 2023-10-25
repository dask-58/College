void search(int k, int n, vector<int>& subset) {
    if (k == n + 1) {
        // Process and print the subset
        cout << "{";
        for (int i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i < subset.size() - 1) {
                cout << ", ";
            }
        }
        cout << "}\n";
    } else {
        // Include k in the subset
        subset.push_back(k);
        search(k + 1, n, subset);
        subset.pop_back();

        // Don't include k in the subset
        search(k + 1, n, subset);
    }
}

