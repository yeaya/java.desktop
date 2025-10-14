#ifndef _DeafServer_h_
#define _DeafServer_h_
//$ class DeafServer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpServer;
			}
		}
	}
}

class DeafServer : public ::java::lang::Object {
	$class(DeafServer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DeafServer();
	void init$();
	virtual void destroy();
	virtual int32_t getPort();
	::com::sun::net::httpserver::HttpServer* server = nullptr;
	bool wakeup = false;
};

#endif // _DeafServer_h_