
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_Permissions$1__
#define __java_security_Permissions$1__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace security
    {
        class Permissions;
        class Permissions$1;
    }
  }
}

class java::security::Permissions$1 : public ::java::lang::Object
{

public: // actually package-private
  Permissions$1(::java::security::Permissions *);
public:
  virtual jboolean hasMoreElements();
  virtual ::java::lang::Object * nextElement();
public: // actually package-private
  ::java::util::Enumeration * __attribute__((aligned(__alignof__( ::java::lang::Object)))) main_enum;
  ::java::util::Enumeration * sub_enum;
  ::java::security::Permissions * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_security_Permissions$1__
