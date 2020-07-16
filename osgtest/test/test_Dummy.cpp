#include <boost/test/unit_test.hpp>
#include <osgtest/Dummy.hpp>

using namespace osgtest;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    osgtest::DummyClass dummy;
    dummy.welcome();
}
