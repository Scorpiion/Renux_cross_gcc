
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_annotation_RetentionPolicy__
#define __java_lang_annotation_RetentionPolicy__

#pragma interface

#include <java/lang/Enum.h>
#include <gcj/array.h>


class java::lang::annotation::RetentionPolicy : public ::java::lang::Enum
{

  RetentionPolicy(::java::lang::String *, jint);
public:
  static JArray< ::java::lang::annotation::RetentionPolicy * > * values();
  static ::java::lang::annotation::RetentionPolicy * valueOf(::java::lang::String *);
  static ::java::lang::annotation::RetentionPolicy * CLASS;
  static ::java::lang::annotation::RetentionPolicy * RUNTIME;
  static ::java::lang::annotation::RetentionPolicy * SOURCE;
private:
  static const jlong serialVersionUID = -1700821648800605045LL;
  static JArray< ::java::lang::annotation::RetentionPolicy * > * ENUM$VALUES;
public:
  static ::java::lang::Class class$;
};

#endif // __java_lang_annotation_RetentionPolicy__
