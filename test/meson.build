executable(
  'RunHttpClient',

  'RunHttpClient.cxx',
  '../src/lib/curl/Init.cxx',
  '../src/lib/curl/Global.cxx',
  '../src/lib/curl/Request.cxx',
  '../src/util/PrintException.cxx',

  include_directories: inc,
  dependencies: [
    thread_dep,
    boost_dep,
    libcurl_dep,
  ],
)
