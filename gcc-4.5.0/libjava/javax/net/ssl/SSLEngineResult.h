
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_net_ssl_SSLEngineResult__
#define __javax_net_ssl_SSLEngineResult__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace net
    {
      namespace ssl
      {
          class SSLEngineResult;
          class SSLEngineResult$HandshakeStatus;
          class SSLEngineResult$Status;
      }
    }
  }
}

class javax::net::ssl::SSLEngineResult : public ::java::lang::Object
{

public:
  SSLEngineResult(::javax::net::ssl::SSLEngineResult$Status *, ::javax::net::ssl::SSLEngineResult$HandshakeStatus *, jint, jint);
  virtual jint bytesConsumed();
  virtual jint bytesProduced();
  virtual ::javax::net::ssl::SSLEngineResult$HandshakeStatus * getHandshakeStatus();
  virtual ::javax::net::ssl::SSLEngineResult$Status * getStatus();
  virtual ::java::lang::String * toString();
private:
  ::javax::net::ssl::SSLEngineResult$HandshakeStatus * __attribute__((aligned(__alignof__( ::java::lang::Object)))) handshakeStatus;
  ::javax::net::ssl::SSLEngineResult$Status * status;
  jint bytesConsumed__;
  jint bytesProduced__;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_net_ssl_SSLEngineResult__