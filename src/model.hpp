// Code generated by stanc v2.32.1
#include <stan/model/model_header.hpp>
namespace model_model_namespace {
using stan::model::model_base_crtp;
using namespace stan::math;
stan::math::profile_map profiles__;
static constexpr std::array<const char*, 26> locations_array__ =
  {" (found before start of program)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 10, column 2 to column 13)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 11, column 2 to column 17)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 12, column 2 to column 22)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 13, column 2 to column 20)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 14, column 2 to column 14)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 17, column 2 to column 38)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 21, column 2 to column 31)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 22, column 2 to column 30)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 23, column 2 to column 26)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 25, column 2 to column 21)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 26, column 2 to column 19)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 29, column 2 to column 50)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 2, column 2 to column 17)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 3, column 2 to column 17)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 4, column 9 to column 10)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 4, column 12 to column 13)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 4, column 2 to column 17)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 5, column 9 to column 10)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 5, column 2 to column 14)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 6, column 2 to column 17)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 7, column 8 to column 9)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 7, column 2 to column 37)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 11, column 9 to column 10)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 14, column 9 to column 10)",
  " (in '/home/user/Stakeholders-Cooperativas/src/model.stan', line 17, column 9 to column 10)"};
class model_model final : public model_base_crtp<model_model> {
 private:
  int N;
  int K;
  Eigen::Matrix<double,-1,-1> X_data__;
  Eigen::Matrix<double,-1,1> y_data__;
  int J;
  std::vector<int> idx;
  Eigen::Map<Eigen::Matrix<double,-1,-1>> X{nullptr, 0, 0};
  Eigen::Map<Eigen::Matrix<double,-1,1>> y{nullptr, 0};
 public:
  ~model_model() {}
  model_model(stan::io::var_context& context__, unsigned int
              random_seed__ = 0, std::ostream* pstream__ = nullptr)
      : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double;
    boost::ecuyer1988 base_rng__ =
      stan::services::util::create_rng(random_seed__, 0);
    // suppress unused var warning
    (void) base_rng__;
    static constexpr const char* function__ =
      "model_model_namespace::model_model";
    // suppress unused var warning
    (void) function__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 13;
      context__.validate_dims("data initialization", "N", "int",
        std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      current_statement__ = 13;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 13;
      stan::math::check_greater_or_equal(function__, "N", N, 1);
      current_statement__ = 14;
      context__.validate_dims("data initialization", "K", "int",
        std::vector<size_t>{});
      K = std::numeric_limits<int>::min();
      current_statement__ = 14;
      K = context__.vals_i("K")[(1 - 1)];
      current_statement__ = 14;
      stan::math::check_greater_or_equal(function__, "K", K, 1);
      current_statement__ = 15;
      stan::math::validate_non_negative_index("X", "N", N);
      current_statement__ = 16;
      stan::math::validate_non_negative_index("X", "K", K);
      current_statement__ = 17;
      context__.validate_dims("data initialization", "X", "double",
        std::vector<size_t>{static_cast<size_t>(N), static_cast<size_t>(K)});
      X_data__ = Eigen::Matrix<double,-1,-1>::Constant(N, K,
                   std::numeric_limits<double>::quiet_NaN());
      new (&X) Eigen::Map<Eigen::Matrix<double,-1,-1>>(X_data__.data(), N, K);
      {
        std::vector<local_scalar_t__> X_flat__;
        current_statement__ = 17;
        X_flat__ = context__.vals_r("X");
        current_statement__ = 17;
        pos__ = 1;
        current_statement__ = 17;
        for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
          current_statement__ = 17;
          for (int sym2__ = 1; sym2__ <= N; ++sym2__) {
            current_statement__ = 17;
            stan::model::assign(X, X_flat__[(pos__ - 1)],
              "assigning variable X", stan::model::index_uni(sym2__),
              stan::model::index_uni(sym1__));
            current_statement__ = 17;
            pos__ = (pos__ + 1);
          }
        }
      }
      current_statement__ = 18;
      stan::math::validate_non_negative_index("y", "N", N);
      current_statement__ = 19;
      context__.validate_dims("data initialization", "y", "double",
        std::vector<size_t>{static_cast<size_t>(N)});
      y_data__ = Eigen::Matrix<double,-1,1>::Constant(N,
                   std::numeric_limits<double>::quiet_NaN());
      new (&y) Eigen::Map<Eigen::Matrix<double,-1,1>>(y_data__.data(), N);
      {
        std::vector<local_scalar_t__> y_flat__;
        current_statement__ = 19;
        y_flat__ = context__.vals_r("y");
        current_statement__ = 19;
        pos__ = 1;
        current_statement__ = 19;
        for (int sym1__ = 1; sym1__ <= N; ++sym1__) {
          current_statement__ = 19;
          stan::model::assign(y, y_flat__[(pos__ - 1)],
            "assigning variable y", stan::model::index_uni(sym1__));
          current_statement__ = 19;
          pos__ = (pos__ + 1);
        }
      }
      current_statement__ = 20;
      context__.validate_dims("data initialization", "J", "int",
        std::vector<size_t>{});
      J = std::numeric_limits<int>::min();
      current_statement__ = 20;
      J = context__.vals_i("J")[(1 - 1)];
      current_statement__ = 20;
      stan::math::check_greater_or_equal(function__, "J", J, 2);
      current_statement__ = 21;
      stan::math::validate_non_negative_index("idx", "N", N);
      current_statement__ = 22;
      context__.validate_dims("data initialization", "idx", "int",
        std::vector<size_t>{static_cast<size_t>(N)});
      idx = std::vector<int>(N, std::numeric_limits<int>::min());
      current_statement__ = 22;
      idx = context__.vals_i("idx");
      current_statement__ = 22;
      stan::math::check_greater_or_equal(function__, "idx", idx, 1);
      current_statement__ = 22;
      stan::math::check_less_or_equal(function__, "idx", idx, J);
      current_statement__ = 23;
      stan::math::validate_non_negative_index("beta", "K", K);
      current_statement__ = 24;
      stan::math::validate_non_negative_index("z", "J", J);
      current_statement__ = 25;
      stan::math::validate_non_negative_index("alpha_j", "J", J);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = 1 + K + 1 + 1 + J;
  }
  inline std::string model_name() const final {
    return "model_model";
  }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.32.1",
             "stancflags = "};
  }
  template <bool propto__, bool jacobian__, typename VecR, typename VecI,
            stan::require_vector_like_t<VecR>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline stan::scalar_type_t<VecR>
  log_prob_impl(VecR& params_r__, VecI& params_i__, std::ostream*
                pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    static constexpr const char* function__ =
      "model_model_namespace::log_prob";
    // suppress unused var warning
    (void) function__;
    try {
      local_scalar_t__ alpha = DUMMY_VAR__;
      current_statement__ = 1;
      alpha = in__.template read<local_scalar_t__>();
      Eigen::Matrix<local_scalar_t__,-1,1> beta =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(K, DUMMY_VAR__);
      current_statement__ = 2;
      beta = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(K);
      local_scalar_t__ sigma = DUMMY_VAR__;
      current_statement__ = 3;
      sigma = in__.template read_constrain_lb<local_scalar_t__,
                jacobian__>(0, lp__);
      local_scalar_t__ tau = DUMMY_VAR__;
      current_statement__ = 4;
      tau = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      Eigen::Matrix<local_scalar_t__,-1,1> z =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(J, DUMMY_VAR__);
      current_statement__ = 5;
      z = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(J);
      Eigen::Matrix<local_scalar_t__,-1,1> alpha_j =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(J, DUMMY_VAR__);
      current_statement__ = 6;
      stan::model::assign(alpha_j,
        stan::math::add(stan::math::multiply(z, tau), alpha),
        "assigning variable alpha_j");
      {
        current_statement__ = 7;
        lp_accum__.add(stan::math::student_t_lpdf<propto__>(alpha, 3, 0, 2.5));
        current_statement__ = 8;
        lp_accum__.add(stan::math::student_t_lpdf<propto__>(beta, 3, 0, 2.5));
        current_statement__ = 9;
        lp_accum__.add(stan::math::exponential_lpdf<propto__>(sigma, 25));
        current_statement__ = 10;
        lp_accum__.add(stan::math::cauchy_lpdf<propto__>(tau, 0, 2));
        current_statement__ = 11;
        lp_accum__.add(stan::math::normal_lpdf<propto__>(z, 0, 1));
        current_statement__ = 12;
        lp_accum__.add(stan::math::normal_id_glm_lpdf<propto__>(y, X,
                         stan::model::rvalue(alpha_j, "alpha_j",
                           stan::model::index_multi(idx)), beta, sigma));
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
  }
  template <typename RNG, typename VecR, typename VecI, typename VecVar,
            stan::require_vector_like_vt<std::is_floating_point,
            VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral,
            VecI>* = nullptr, stan::require_vector_vt<std::is_floating_point,
            VecVar>* = nullptr>
  inline void
  write_array_impl(RNG& base_rng__, VecR& params_r__, VecI& params_i__,
                   VecVar& vars__, const bool
                   emit_transformed_parameters__ = true, const bool
                   emit_generated_quantities__ = true, std::ostream*
                   pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    // suppress unused var warning
    (void) propto__;
    double lp__ = 0.0;
    // suppress unused var warning
    (void) lp__;
    int current_statement__ = 0;
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    constexpr bool jacobian__ = false;
    static constexpr const char* function__ =
      "model_model_namespace::write_array";
    // suppress unused var warning
    (void) function__;
    try {
      double alpha = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 1;
      alpha = in__.template read<local_scalar_t__>();
      Eigen::Matrix<double,-1,1> beta =
        Eigen::Matrix<double,-1,1>::Constant(K,
          std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 2;
      beta = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(K);
      double sigma = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 3;
      sigma = in__.template read_constrain_lb<local_scalar_t__,
                jacobian__>(0, lp__);
      double tau = std::numeric_limits<double>::quiet_NaN();
      current_statement__ = 4;
      tau = in__.template read_constrain_lb<local_scalar_t__, jacobian__>(0,
              lp__);
      Eigen::Matrix<double,-1,1> z =
        Eigen::Matrix<double,-1,1>::Constant(J,
          std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 5;
      z = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(J);
      Eigen::Matrix<double,-1,1> alpha_j =
        Eigen::Matrix<double,-1,1>::Constant(J,
          std::numeric_limits<double>::quiet_NaN());
      out__.write(alpha);
      out__.write(beta);
      out__.write(sigma);
      out__.write(tau);
      out__.write(z);
      if (stan::math::logical_negation(
            (stan::math::primitive_value(emit_transformed_parameters__) ||
            stan::math::primitive_value(emit_generated_quantities__)))) {
        return ;
      }
      current_statement__ = 6;
      stan::model::assign(alpha_j,
        stan::math::add(stan::math::multiply(z, tau), alpha),
        "assigning variable alpha_j");
      if (emit_transformed_parameters__) {
        out__.write(alpha_j);
      }
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, typename VecI,
            stan::require_vector_t<VecVar>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline void
  unconstrain_array_impl(const VecVar& params_r__, const VecI& params_i__,
                         VecVar& vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ alpha = DUMMY_VAR__;
      current_statement__ = 1;
      alpha = in__.read<local_scalar_t__>();
      out__.write(alpha);
      Eigen::Matrix<local_scalar_t__,-1,1> beta =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(K, DUMMY_VAR__);
      current_statement__ = 2;
      stan::model::assign(beta,
        in__.read<Eigen::Matrix<local_scalar_t__,-1,1>>(K),
        "assigning variable beta");
      out__.write(beta);
      local_scalar_t__ sigma = DUMMY_VAR__;
      current_statement__ = 3;
      sigma = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, sigma);
      local_scalar_t__ tau = DUMMY_VAR__;
      current_statement__ = 4;
      tau = in__.read<local_scalar_t__>();
      out__.write_free_lb(0, tau);
      Eigen::Matrix<local_scalar_t__,-1,1> z =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(J, DUMMY_VAR__);
      current_statement__ = 5;
      stan::model::assign(z,
        in__.read<Eigen::Matrix<local_scalar_t__,-1,1>>(J),
        "assigning variable z");
      out__.write(z);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, stan::require_vector_t<VecVar>* = nullptr>
  inline void
  transform_inits_impl(const stan::io::var_context& context__, VecVar&
                       vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      current_statement__ = 1;
      context__.validate_dims("parameter initialization", "alpha", "double",
        std::vector<size_t>{});
      current_statement__ = 2;
      context__.validate_dims("parameter initialization", "beta", "double",
        std::vector<size_t>{static_cast<size_t>(K)});
      current_statement__ = 3;
      context__.validate_dims("parameter initialization", "sigma", "double",
        std::vector<size_t>{});
      current_statement__ = 4;
      context__.validate_dims("parameter initialization", "tau", "double",
        std::vector<size_t>{});
      current_statement__ = 5;
      context__.validate_dims("parameter initialization", "z", "double",
        std::vector<size_t>{static_cast<size_t>(J)});
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      local_scalar_t__ alpha = DUMMY_VAR__;
      current_statement__ = 1;
      alpha = context__.vals_r("alpha")[(1 - 1)];
      out__.write(alpha);
      Eigen::Matrix<local_scalar_t__,-1,1> beta =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(K, DUMMY_VAR__);
      {
        std::vector<local_scalar_t__> beta_flat__;
        current_statement__ = 2;
        beta_flat__ = context__.vals_r("beta");
        current_statement__ = 2;
        pos__ = 1;
        current_statement__ = 2;
        for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
          current_statement__ = 2;
          stan::model::assign(beta, beta_flat__[(pos__ - 1)],
            "assigning variable beta", stan::model::index_uni(sym1__));
          current_statement__ = 2;
          pos__ = (pos__ + 1);
        }
      }
      out__.write(beta);
      local_scalar_t__ sigma = DUMMY_VAR__;
      current_statement__ = 3;
      sigma = context__.vals_r("sigma")[(1 - 1)];
      out__.write_free_lb(0, sigma);
      local_scalar_t__ tau = DUMMY_VAR__;
      current_statement__ = 4;
      tau = context__.vals_r("tau")[(1 - 1)];
      out__.write_free_lb(0, tau);
      Eigen::Matrix<local_scalar_t__,-1,1> z =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(J, DUMMY_VAR__);
      {
        std::vector<local_scalar_t__> z_flat__;
        current_statement__ = 5;
        z_flat__ = context__.vals_r("z");
        current_statement__ = 5;
        pos__ = 1;
        current_statement__ = 5;
        for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
          current_statement__ = 5;
          stan::model::assign(z, z_flat__[(pos__ - 1)],
            "assigning variable z", stan::model::index_uni(sym1__));
          current_statement__ = 5;
          pos__ = (pos__ + 1);
        }
      }
      out__.write(z);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  inline void
  get_param_names(std::vector<std::string>& names__, const bool
                  emit_transformed_parameters__ = true, const bool
                  emit_generated_quantities__ = true) const {
    names__ = std::vector<std::string>{"alpha", "beta", "sigma", "tau", "z"};
    if (emit_transformed_parameters__) {
      std::vector<std::string> temp{"alpha_j"};
      names__.reserve(names__.size() + temp.size());
      names__.insert(names__.end(), temp.begin(), temp.end());
    }
    if (emit_generated_quantities__) {}
  }
  inline void
  get_dims(std::vector<std::vector<size_t>>& dimss__, const bool
           emit_transformed_parameters__ = true, const bool
           emit_generated_quantities__ = true) const {
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{},
                std::vector<size_t>{static_cast<size_t>(K)},
                std::vector<size_t>{}, std::vector<size_t>{},
                std::vector<size_t>{static_cast<size_t>(J)}};
    if (emit_transformed_parameters__) {
      std::vector<std::vector<size_t>>
        temp{std::vector<size_t>{static_cast<size_t>(J)}};
      dimss__.reserve(dimss__.size() + temp.size());
      dimss__.insert(dimss__.end(), temp.begin(), temp.end());
    }
    if (emit_generated_quantities__) {}
  }
  inline void
  constrained_param_names(std::vector<std::string>& param_names__, bool
                          emit_transformed_parameters__ = true, bool
                          emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "alpha");
    for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
      param_names__.emplace_back(std::string() + "beta" + '.' +
        std::to_string(sym1__));
    }
    param_names__.emplace_back(std::string() + "sigma");
    param_names__.emplace_back(std::string() + "tau");
    for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
      param_names__.emplace_back(std::string() + "z" + '.' +
        std::to_string(sym1__));
    }
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
        param_names__.emplace_back(std::string() + "alpha_j" + '.' +
          std::to_string(sym1__));
      }
    }
    if (emit_generated_quantities__) {}
  }
  inline void
  unconstrained_param_names(std::vector<std::string>& param_names__, bool
                            emit_transformed_parameters__ = true, bool
                            emit_generated_quantities__ = true) const final {
    param_names__.emplace_back(std::string() + "alpha");
    for (int sym1__ = 1; sym1__ <= K; ++sym1__) {
      param_names__.emplace_back(std::string() + "beta" + '.' +
        std::to_string(sym1__));
    }
    param_names__.emplace_back(std::string() + "sigma");
    param_names__.emplace_back(std::string() + "tau");
    for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
      param_names__.emplace_back(std::string() + "z" + '.' +
        std::to_string(sym1__));
    }
    if (emit_transformed_parameters__) {
      for (int sym1__ = 1; sym1__ <= J; ++sym1__) {
        param_names__.emplace_back(std::string() + "alpha_j" + '.' +
          std::to_string(sym1__));
      }
    }
    if (emit_generated_quantities__) {}
  }
  inline std::string get_constrained_sizedtypes() const {
    return std::string("[{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(K) + "},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"tau\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"z\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(J) + "},\"block\":\"parameters\"},{\"name\":\"alpha_j\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(J) + "},\"block\":\"transformed_parameters\"}]");
  }
  inline std::string get_unconstrained_sizedtypes() const {
    return std::string("[{\"name\":\"alpha\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"beta\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(K) + "},\"block\":\"parameters\"},{\"name\":\"sigma\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"tau\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"z\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(J) + "},\"block\":\"parameters\"},{\"name\":\"alpha_j\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(J) + "},\"block\":\"transformed_parameters\"}]");
  }
  // Begin method overload boilerplate
  template <typename RNG> inline void
  write_array(RNG& base_rng, Eigen::Matrix<double,-1,1>& params_r,
              Eigen::Matrix<double,-1,1>& vars, const bool
              emit_transformed_parameters = true, const bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = ((((1 + K) + 1) + 1) + J);
    const size_t num_transformed = emit_transformed_parameters * (J);
    const size_t num_gen_quantities = emit_generated_quantities * (0);
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    std::vector<int> params_i;
    vars = Eigen::Matrix<double,-1,1>::Constant(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <typename RNG> inline void
  write_array(RNG& base_rng, std::vector<double>& params_r, std::vector<int>&
              params_i, std::vector<double>& vars, bool
              emit_transformed_parameters = true, bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = ((((1 + K) + 1) + 1) + J);
    const size_t num_transformed = emit_transformed_parameters * (J);
    const size_t num_gen_quantities = emit_generated_quantities * (0);
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    vars = std::vector<double>(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(Eigen::Matrix<T_,-1,1>& params_r, std::ostream* pstream = nullptr) const {
    Eigen::Matrix<int,-1,1> params_i;
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(std::vector<T_>& params_r, std::vector<int>& params_i,
           std::ostream* pstream = nullptr) const {
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  inline void
  transform_inits(const stan::io::var_context& context,
                  Eigen::Matrix<double,-1,1>& params_r, std::ostream*
                  pstream = nullptr) const final {
    std::vector<double> params_r_vec(params_r.size());
    std::vector<int> params_i;
    transform_inits(context, params_i, params_r_vec, pstream);
    params_r = Eigen::Map<Eigen::Matrix<double,-1,1>>(params_r_vec.data(),
                 params_r_vec.size());
  }
  inline void
  transform_inits(const stan::io::var_context& context, std::vector<int>&
                  params_i, std::vector<double>& vars, std::ostream*
                  pstream__ = nullptr) const {
    vars.resize(num_params_r__);
    transform_inits_impl(context, vars, pstream__);
  }
  inline void
  unconstrain_array(const std::vector<double>& params_constrained,
                    std::vector<double>& params_unconstrained, std::ostream*
                    pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = std::vector<double>(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
  inline void
  unconstrain_array(const Eigen::Matrix<double,-1,1>& params_constrained,
                    Eigen::Matrix<double,-1,1>& params_unconstrained,
                    std::ostream* pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = Eigen::Matrix<double,-1,1>::Constant(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
};
}
using stan_model = model_model_namespace::model_model;
#ifndef USING_R
// Boilerplate
stan::model::model_base&
new_model(stan::io::var_context& data_context, unsigned int seed,
          std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model_model_namespace::profiles__;
}
#endif