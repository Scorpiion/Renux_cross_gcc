
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_geom_GeneralPath$GeneralPathIterator__
#define __java_awt_geom_GeneralPath$GeneralPathIterator__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace geom
      {
          class AffineTransform;
          class GeneralPath;
          class GeneralPath$GeneralPathIterator;
      }
    }
  }
}

class java::awt::geom::GeneralPath$GeneralPathIterator : public ::java::lang::Object
{

public: // actually package-private
  GeneralPath$GeneralPathIterator(::java::awt::geom::GeneralPath *, ::java::awt::geom::AffineTransform *);
public:
  virtual jint getWindingRule();
  virtual jboolean isDone();
  virtual void next();
  virtual jint currentSegment(JArray< jfloat > *);
  virtual jint currentSegment(JArray< jdouble > *);
private:
  static JArray< jint > * NUM_COORDS;
public: // actually package-private
  ::java::awt::geom::GeneralPath * __attribute__((aligned(__alignof__( ::java::lang::Object)))) path;
private:
  ::java::awt::geom::AffineTransform * transform;
  jint pos;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_geom_GeneralPath$GeneralPathIterator__
