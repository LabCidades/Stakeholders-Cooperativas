// run with 4 chains and 2k iters.
// all numeric data should be scaled to mean 0 and std 1
data {
  int<lower=1> N;   // number of observations
  int<lower=1> K;   // number of independent variables
  matrix[N, K] X;   // data matrix
  vector[N] y;      // dependent variable vector
}
parameters {
  real alpha;           // intercept
  vector[K] beta;       // coefficients for independent variables
  real<lower=0> sigma;  // model error
}
model {
  // priors
  alpha ~ student_t(3, 0, 2.5);
  beta ~ student_t(3, 0, 2.5);
  sigma ~ exponential(1);

  // likelihood
  y ~ normal_id_glm(X, alpha, beta, sigma);
}