//
// Copyright (C) 2011-2017 Ben Key
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_boost or copy at
// http://www.boost.org/LICENSE_boost)
//

#include <boost/predef.h>

#if (BOOST_OS_SOLARIS)

#include <cstdlib>
#include <string>

#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/path.hpp>

#include <boost/executable_path/detail/executable_path_internals.hpp>

namespace boost {
namespace detail {

boost::filesystem::path executable_path_worker()
{
  boost::filesystem::path ret;
  std::string pathString = getexecname();
  if (pathString.empty())
  {
    return ret;
  }
  boost::system::error_code ec;
  ret = boost::filesystem::canonical(
    pathString, boost::filesystem::current_path(), ec);
  if (ec.value() != boost::system::errc::success)
  {
    ret.clear();
  }
  return ret;
}
}
}

#endif
