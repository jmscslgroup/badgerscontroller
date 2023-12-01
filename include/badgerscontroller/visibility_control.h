#ifndef BADGERSCONTROLLER__VISIBILITY_CONTROL_H_
#define BADGERSCONTROLLER__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define BADGERSCONTROLLER_EXPORT __attribute__ ((dllexport))
    #define BADGERSCONTROLLER_IMPORT __attribute__ ((dllimport))
  #else
    #define BADGERSCONTROLLER_EXPORT __declspec(dllexport)
    #define BADGERSCONTROLLER_IMPORT __declspec(dllimport)
  #endif
  #ifdef BADGERSCONTROLLER_BUILDING_LIBRARY
    #define BADGERSCONTROLLER_PUBLIC BADGERSCONTROLLER_EXPORT
  #else
    #define BADGERSCONTROLLER_PUBLIC BADGERSCONTROLLER_IMPORT
  #endif
  #define BADGERSCONTROLLER_PUBLIC_TYPE BADGERSCONTROLLER_PUBLIC
  #define BADGERSCONTROLLER_LOCAL
#else
  #define BADGERSCONTROLLER_EXPORT __attribute__ ((visibility("default")))
  #define BADGERSCONTROLLER_IMPORT
  #if __GNUC__ >= 4
    #define BADGERSCONTROLLER_PUBLIC __attribute__ ((visibility("default")))
    #define BADGERSCONTROLLER_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define BADGERSCONTROLLER_PUBLIC
    #define BADGERSCONTROLLER_LOCAL
  #endif
  #define BADGERSCONTROLLER_PUBLIC_TYPE
#endif
#endif  // BADGERSCONTROLLER__VISIBILITY_CONTROL_H_
// Generated 01-Dec-2023 11:30:39
// Copyright 2019-2020 The MathWorks, Inc.
