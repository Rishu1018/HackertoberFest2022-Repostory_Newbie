 static int totalFruit(const vector<int>& fruits) {
        vector<int> counts(size(fruits));
        // |nz| the number of non zero elements in |counts|.
        int nz = 0;
        int ans = 0;
        for (int l = 0, r = 0; r < size(fruits); ++r) {
            // If the bucket was empty before increase the count of non zero elements.
            if (!counts[fruits[r]]++) ++nz;
            // While we are using more than two baskets ...
            while (nz > 2) {
                // If the bucket count goes to zero decrement the count of non zero elements.
                if (!--counts[fruits[l++]]) --nz;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
