const soupServings = function (n) {
  if (n >= 5000) 
  {
    return 1.0;
  }
  n = Math.ceil(n / 25);
  // Creating a 2D DP table to store the probabilities.
  const dp = new Array(n + 1).fill(0).map(() => new Array(n + 1).fill(0));
  // Base case: If both A and B are empty, return 0.5.
  dp[0][0] = 0.5;
  for (let b = 1; b <= n; b++) {
    dp[0][b] = 1; // If A is empty but B is not, return 1.
  }

  for (let a = 1; a <= n; a++) {
    for (let b = 1; b <= n; b++) {
      dp[a][b] = 0.25 * (dp[Math.max(0, a - 4)][b] + dp[Math.max(0, a - 3)][Math.max(0, b - 1)] +
        dp[Math.max(0, a - 2)][Math.max(0, b - 2)] + dp[Math.max(0, a - 1)][Math.max(0, b - 3)]);
    }
  }
  return dp[n][n];
};
