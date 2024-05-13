module;

#include <iostream>
#include <typeinfo>
#include <string>

module test.modules;


void myFunction()
{
  std::cout << "hello from module" << std::endl;
}

struct Test::Impl
{
  int number;
  std::string text;

  explicit Impl()
    : number(12345)
    , text("Grüezi")
  {
  }
};

Test::Test()
  : pimpl_(std::make_unique<Test::Impl>())
{
  std::cout << "init" << std::endl;
}

Test::Test(Test const& other)
  : pimpl_(std::make_unique<Test::Impl>(*other.pimpl_))
{
}

Test::~Test() = default;

auto Test::toString() const -> std::string
{
  return std::format("{} {} {}", typeid(*this).name(), pimpl_->number, pimpl_->text);
}

