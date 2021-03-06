class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& A, int L, int M) {
        for(int i = 1; i < A.size(); i++){
            A[i] += A[i-1];
        }
        
        int Lmax = A[L-1], Mmax = A[M-1];
        int result = A[L + M - 1];
        for(int i = L+M; i < A.size(); i++){
            Lmax = max( Lmax, A[i - M] - A[i - L - M]);
            Mmax = max( Mmax, A[i - L] - A[i - L - M]);
            result = max(result, max( Lmax + (A[i] - A[i - M]), Mmax + (A[i] - A[i - L])));
        }
        
        return result;
    }
};
