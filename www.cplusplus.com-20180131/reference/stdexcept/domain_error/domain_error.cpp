class domain_error : public logic_error {
public:
  explicit domain_error (const string& what_arg);
};

