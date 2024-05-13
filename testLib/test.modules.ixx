module;

#include <memory>
#include <string>

export module test.modules;


export _declspec(dllexport) void myFunction();

export class _declspec(dllexport) Test
{
public:
  ~Test();
  Test();
  Test(Test const& other);
  Test(Test&& other) = delete;
  Test& operator=(Test const&) = delete;
  Test& operator=(Test&&) = delete;

  auto toString() const -> std::string;

private:
  struct Impl;
  std::unique_ptr<Impl> const pimpl_;
};
