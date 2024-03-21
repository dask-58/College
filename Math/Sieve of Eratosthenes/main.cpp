const long long N = 1e6 + 1;
vector<bool> prime(N);

void SieveOfEratosthenes() {
    prime[0] = prime[1] = true;

    for (int i = 4; i < N; i += 2)
        prime[i] = true;

    for (int i = 3; i * i <= N; i += 2){
        if (!prime[i]){
            for (int j = i * i; j < N; j += 2 * i) prime[j] = true;
        }
    }
}