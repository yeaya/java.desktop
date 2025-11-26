#ifndef _java_beans_BeansAppletStub_h_
#define _java_beans_BeansAppletStub_h_
//$ class java.beans.BeansAppletStub
//$ extends java.applet.AppletStub

#include <java/applet/AppletStub.h>

namespace java {
	namespace applet {
		class Applet;
		class AppletContext;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}

namespace java {
	namespace beans {

class BeansAppletStub : public ::java::applet::AppletStub {
	$class(BeansAppletStub, $NO_CLASS_INIT, ::java::applet::AppletStub)
public:
	BeansAppletStub();
	void init$(::java::applet::Applet* target, ::java::applet::AppletContext* context, ::java::net::URL* codeBase, ::java::net::URL* docBase);
	virtual void appletResize(int32_t width, int32_t height) override;
	virtual ::java::applet::AppletContext* getAppletContext() override;
	virtual ::java::net::URL* getCodeBase() override;
	virtual ::java::net::URL* getDocumentBase() override;
	virtual $String* getParameter($String* name) override;
	virtual bool isActive() override;
	bool active = false;
	::java::applet::Applet* target = nullptr;
	::java::applet::AppletContext* context = nullptr;
	::java::net::URL* codeBase = nullptr;
	::java::net::URL* docBase = nullptr;
};

	} // beans
} // java

#endif // _java_beans_BeansAppletStub_h_