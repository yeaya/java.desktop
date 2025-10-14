#ifndef _DeafServer$DeafHandler_h_
#define _DeafServer$DeafHandler_h_
//$ class DeafServer$DeafHandler
//$ extends com.sun.net.httpserver.HttpHandler

#include <com/sun/net/httpserver/HttpHandler.h>

class DeafServer;
namespace com {
	namespace sun {
		namespace net {
			namespace httpserver {
				class HttpExchange;
			}
		}
	}
}

class DeafServer$DeafHandler : public ::com::sun::net::httpserver::HttpHandler {
	$class(DeafServer$DeafHandler, $NO_CLASS_INIT, ::com::sun::net::httpserver::HttpHandler)
public:
	DeafServer$DeafHandler();
	void init$(::DeafServer* this$0);
	virtual void handle(::com::sun::net::httpserver::HttpExchange* r) override;
	::DeafServer* this$0 = nullptr;
};

#endif // _DeafServer$DeafHandler_h_