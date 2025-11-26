#ifndef _java_applet_AppletStub_h_
#define _java_applet_AppletStub_h_
//$ interface java.applet.AppletStub
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace applet {
		class AppletContext;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}

namespace java {
	namespace applet {

class $export AppletStub : public ::java::lang::Object {
	$interface(AppletStub, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void appletResize(int32_t width, int32_t height) {}
	virtual ::java::applet::AppletContext* getAppletContext() {return nullptr;}
	virtual ::java::net::URL* getCodeBase() {return nullptr;}
	virtual ::java::net::URL* getDocumentBase() {return nullptr;}
	virtual $String* getParameter($String* name) {return nullptr;}
	virtual bool isActive() {return false;}
};

	} // applet
} // java

#endif // _java_applet_AppletStub_h_