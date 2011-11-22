
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_directory_DirContext__
#define __javax_naming_directory_DirContext__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace naming
    {
        class Context;
        class Name;
        class NameParser;
        class NamingEnumeration;
      namespace directory
      {
          class Attributes;
          class DirContext;
          class ModificationItem;
          class SearchControls;
      }
    }
  }
}

class javax::naming::directory::DirContext : public ::java::lang::Object
{

public:
  virtual ::javax::naming::directory::Attributes * getAttributes(::java::lang::String *) = 0;
  virtual ::javax::naming::directory::Attributes * getAttributes(::java::lang::String *, JArray< ::java::lang::String * > *) = 0;
  virtual ::javax::naming::directory::Attributes * getAttributes(::javax::naming::Name *) = 0;
  virtual ::javax::naming::directory::Attributes * getAttributes(::javax::naming::Name *, JArray< ::java::lang::String * > *) = 0;
  virtual void modifyAttributes(::javax::naming::Name *, jint, ::javax::naming::directory::Attributes *) = 0;
  virtual void modifyAttributes(::java::lang::String *, jint, ::javax::naming::directory::Attributes *) = 0;
  virtual void modifyAttributes(::javax::naming::Name *, JArray< ::javax::naming::directory::ModificationItem * > *) = 0;
  virtual void modifyAttributes(::java::lang::String *, JArray< ::javax::naming::directory::ModificationItem * > *) = 0;
  virtual void bind(::javax::naming::Name *, ::java::lang::Object *, ::javax::naming::directory::Attributes *) = 0;
  virtual void bind(::java::lang::String *, ::java::lang::Object *, ::javax::naming::directory::Attributes *) = 0;
  virtual void rebind(::javax::naming::Name *, ::java::lang::Object *, ::javax::naming::directory::Attributes *) = 0;
  virtual void rebind(::java::lang::String *, ::java::lang::Object *, ::javax::naming::directory::Attributes *) = 0;
  virtual ::javax::naming::directory::DirContext * createSubcontext(::javax::naming::Name *, ::javax::naming::directory::Attributes *) = 0;
  virtual ::javax::naming::directory::DirContext * createSubcontext(::java::lang::String *, ::javax::naming::directory::Attributes *) = 0;
  virtual ::javax::naming::directory::DirContext * getSchema(::javax::naming::Name *) = 0;
  virtual ::javax::naming::directory::DirContext * getSchema(::java::lang::String *) = 0;
  virtual ::javax::naming::directory::DirContext * getSchemaClassDefinition(::javax::naming::Name *) = 0;
  virtual ::javax::naming::directory::DirContext * getSchemaClassDefinition(::java::lang::String *) = 0;
  virtual ::javax::naming::NamingEnumeration * search(::javax::naming::Name *, ::javax::naming::directory::Attributes *, JArray< ::java::lang::String * > *) = 0;
  virtual ::javax::naming::NamingEnumeration * search(::java::lang::String *, ::javax::naming::directory::Attributes *, JArray< ::java::lang::String * > *) = 0;
  virtual ::javax::naming::NamingEnumeration * search(::javax::naming::Name *, ::javax::naming::directory::Attributes *) = 0;
  virtual ::javax::naming::NamingEnumeration * search(::java::lang::String *, ::javax::naming::directory::Attributes *) = 0;
  virtual ::javax::naming::NamingEnumeration * search(::javax::naming::Name *, ::java::lang::String *, ::javax::naming::directory::SearchControls *) = 0;
  virtual ::javax::naming::NamingEnumeration * search(::java::lang::String *, ::java::lang::String *, ::javax::naming::directory::SearchControls *) = 0;
  virtual ::javax::naming::NamingEnumeration * search(::javax::naming::Name *, ::java::lang::String *, JArray< ::java::lang::Object * > *, ::javax::naming::directory::SearchControls *) = 0;
  virtual ::javax::naming::NamingEnumeration * search(::java::lang::String *, ::java::lang::String *, JArray< ::java::lang::Object * > *, ::javax::naming::directory::SearchControls *) = 0;
  virtual void bind(::javax::naming::Name *, ::java::lang::Object *) = 0;
  virtual void bind(::java::lang::String *, ::java::lang::Object *) = 0;
  virtual ::java::lang::Object * lookup(::javax::naming::Name *) = 0;
  virtual ::java::lang::Object * lookup(::java::lang::String *) = 0;
  virtual void rebind(::javax::naming::Name *, ::java::lang::Object *) = 0;
  virtual void rebind(::java::lang::String *, ::java::lang::Object *) = 0;
  virtual void unbind(::javax::naming::Name *) = 0;
  virtual void unbind(::java::lang::String *) = 0;
  virtual void rename(::javax::naming::Name *, ::javax::naming::Name *) = 0;
  virtual void rename(::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::javax::naming::NamingEnumeration * list(::javax::naming::Name *) = 0;
  virtual ::javax::naming::NamingEnumeration * list(::java::lang::String *) = 0;
  virtual ::javax::naming::NamingEnumeration * listBindings(::javax::naming::Name *) = 0;
  virtual ::javax::naming::NamingEnumeration * listBindings(::java::lang::String *) = 0;
  virtual ::javax::naming::Context * createSubcontext(::javax::naming::Name *) = 0;
  virtual ::javax::naming::Context * createSubcontext(::java::lang::String *) = 0;
  virtual void destroySubcontext(::javax::naming::Name *) = 0;
  virtual void destroySubcontext(::java::lang::String *) = 0;
  virtual ::java::lang::Object * lookupLink(::javax::naming::Name *) = 0;
  virtual ::java::lang::Object * lookupLink(::java::lang::String *) = 0;
  virtual ::javax::naming::NameParser * getNameParser(::javax::naming::Name *) = 0;
  virtual ::javax::naming::NameParser * getNameParser(::java::lang::String *) = 0;
  virtual ::javax::naming::Name * composeName(::javax::naming::Name *, ::javax::naming::Name *) = 0;
  virtual ::java::lang::String * composeName(::java::lang::String *, ::java::lang::String *) = 0;
  virtual ::java::lang::Object * addToEnvironment(::java::lang::String *, ::java::lang::Object *) = 0;
  virtual ::java::lang::Object * removeFromEnvironment(::java::lang::String *) = 0;
  virtual ::java::util::Hashtable * getEnvironment() = 0;
  virtual void close() = 0;
  virtual ::java::lang::String * getNameInNamespace() = 0;
  static const jint ADD_ATTRIBUTE = 1;
  static const jint REPLACE_ATTRIBUTE = 2;
  static const jint REMOVE_ATTRIBUTE = 3;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_naming_directory_DirContext__
