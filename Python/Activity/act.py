
def waysToTransform(n, k, a, b):
    gs = 0
    bs = 0
    i = 0
    while i < len(a):
        curr = i
        nw = []
        while len(nw) < len(a):

            nw.append(a[curr])

            curr += 1

            curr = curr % len(a)
        if nw == b:
            gs += 1
        else:
            bs += 1
        i += 1
    dp = [[0] * (k + 1) for _ in range(2)]
    mod = 10**9 + 7
    if a == b:
        dp[1][0] = 1
        dp[0][0] = 0
    else:
        dp[0][0] = 1
        dp[1][0] = 0
    for i in range(1, k + 1): 
        dp[0][i] = ((dp[0][i - 1] * (bs - 1)) % mod + (dp[1][i - 1] * bs)) % mod
        dp[1][i] = ((dp[0][i - 1] * gs) % mod + (dp[1][i - 1] * (gs - 1))) % mod
    return dp[1][k]