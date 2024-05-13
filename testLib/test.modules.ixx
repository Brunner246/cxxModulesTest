module;

#include <memory>
#include <string>

export module test.modules;


export _declspec(dllexport) void myFunction();

export struct _declspec(dllexport) ITest
{
  virtual ~ITest() = default;

  virtual std::string toString() const = 0;
};

class Test : public ITest
{
public:
  ~Test() override;
  Test();
  Test(Test const& other);
  Test(Test&& other) = delete;
  Test& operator=(Test const&) = delete;
  Test& operator=(Test&&) = delete;

  std::string toString() const override;

private:
  struct Impl;
  std::unique_ptr<Impl> const pimpl_;
};

export _declspec(dllexport) std::unique_ptr<ITest> createTest()
{
  return std::make_unique<Test>();
}