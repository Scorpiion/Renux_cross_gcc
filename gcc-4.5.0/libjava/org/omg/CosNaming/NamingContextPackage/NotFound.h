
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CosNaming_NamingContextPackage_NotFound__
#define __org_omg_CosNaming_NamingContextPackage_NotFound__

#pragma interface

#include <org/omg/CORBA/UserException.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CosNaming
      {
          class NameComponent;
        namespace NamingContextPackage
        {
            class NotFound;
            class NotFoundReason;
        }
      }
    }
  }
}

class org::omg::CosNaming::NamingContextPackage::NotFound : public ::org::omg::CORBA::UserException
{

public:
  NotFound();
  NotFound(::org::omg::CosNaming::NamingContextPackage::NotFoundReason *, JArray< ::org::omg::CosNaming::NameComponent * > *);
  NotFound(::java::lang::String *, ::org::omg::CosNaming::NamingContextPackage::NotFoundReason *, JArray< ::org::omg::CosNaming::NameComponent * > *);
private:
  static const jlong serialVersionUID = -7539098836265502514LL;
public:
  ::org::omg::CosNaming::NamingContextPackage::NotFoundReason * __attribute__((aligned(__alignof__( ::org::omg::CORBA::UserException)))) why;
  JArray< ::org::omg::CosNaming::NameComponent * > * rest_of_name;
  static ::java::lang::Class class$;
};

#endif // __org_omg_CosNaming_NamingContextPackage_NotFound__
