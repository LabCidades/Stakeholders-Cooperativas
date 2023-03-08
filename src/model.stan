data {
  int<lower=1> N;                        // number of observations
  int<lower=1> K;                        // number of independent variables
  matrix[N, K] X;                        // data matrix
  vector[N] y;                           // dependent variable vector
  int<lower=2> J;                        // number of groups
  array[N] int<lower=1, upper=J> idx;    // group membership
}
parameters {
  real alpha;                            // intercept
  vector[K] beta;                        // coefficients for independent variables
  real<lower=0> sigma;                   // model error
  real<lower=0> tau;                     // group-level SD intercepts
  vector[J] z;                           // group-level non-centered intercepts
}
transformed parameters {
  vector[J] alpha_j = z * tau + alpha;  // group-level intercepts
}
model {
  // priors
  alpha ~ student_t(3, 0, 2.5);
  beta ~ student_t(3, 0, 2.5);
  sigma ~ exponential(25);
  
  tau ~ cauchy(0, 2);
  z ~ normal(0, 1);

  // likelihood
  y ~ normal_id_glm(X, alpha_j[idx], beta, sigma);
}