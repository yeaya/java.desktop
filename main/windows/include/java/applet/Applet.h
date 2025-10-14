#ifndef _java_applet_Applet_h_
#define _java_applet_Applet_h_
//$ class java.applet.Applet
//$ extends java.awt.Panel

#include <java/awt/Panel.h>
#include <java/lang/Array.h>

namespace java {
	namespace applet {
		class AppletContext;
		class AppletStub;
		class AudioClip;
	}
}
namespace java {
	namespace awt {
		class Dimension;
		class Image;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace java {
	namespace applet {

class $import Applet : public ::java::awt::Panel {
	$class(Applet, $NO_CLASS_INIT, ::java::awt::Panel)
public:
	Applet();
	using ::java::awt::Panel::add;
	using ::java::awt::Panel::getMousePosition;
	void init$();
	virtual void destroy();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::applet::AppletContext* getAppletContext();
	virtual $String* getAppletInfo();
	virtual ::java::applet::AudioClip* getAudioClip(::java::net::URL* url);
	virtual ::java::applet::AudioClip* getAudioClip(::java::net::URL* url, $String* name);
	virtual ::java::net::URL* getCodeBase();
	virtual ::java::net::URL* getDocumentBase();
	virtual ::java::awt::Image* getImage(::java::net::URL* url);
	virtual ::java::awt::Image* getImage(::java::net::URL* url, $String* name);
	virtual ::java::util::Locale* getLocale() override;
	virtual $String* getParameter($String* name);
	virtual $Array<::java::lang::String, 2>* getParameterInfo();
	virtual void init();
	virtual bool isActive();
	virtual bool isValidateRoot() override;
	using ::java::awt::Panel::list;
	static ::java::applet::AudioClip* newAudioClip(::java::net::URL* url);
	virtual void play(::java::net::URL* url);
	virtual void play(::java::net::URL* url, $String* name);
	void readObject(::java::io::ObjectInputStream* s);
	using ::java::awt::Panel::remove;
	virtual void resize(int32_t width, int32_t height) override;
	virtual void resize(::java::awt::Dimension* d) override;
	void setStub(::java::applet::AppletStub* stub);
	virtual void showStatus($String* msg);
	virtual void start();
	virtual void stop();
	::java::applet::AppletStub* stub = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xAEFF5B3DEC26A5B9;
	::javax::accessibility::AccessibleContext* accessibleContext = nullptr;
};

	} // applet
} // java

#endif // _java_applet_Applet_h_