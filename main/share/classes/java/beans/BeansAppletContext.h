#ifndef _java_beans_BeansAppletContext_h_
#define _java_beans_BeansAppletContext_h_
//$ class java.beans.BeansAppletContext
//$ extends java.applet.AppletContext

#include <java/applet/AppletContext.h>

namespace java {
	namespace applet {
		class Applet;
		class AudioClip;
	}
}
namespace java {
	namespace awt {
		class Image;
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class Hashtable;
		class Iterator;
	}
}

namespace java {
	namespace beans {

class BeansAppletContext : public ::java::applet::AppletContext {
	$class(BeansAppletContext, $NO_CLASS_INIT, ::java::applet::AppletContext)
public:
	BeansAppletContext();
	void init$(::java::applet::Applet* target);
	virtual ::java::applet::Applet* getApplet($String* name) override;
	virtual ::java::util::Enumeration* getApplets() override;
	virtual ::java::applet::AudioClip* getAudioClip(::java::net::URL* url) override;
	virtual ::java::awt::Image* getImage(::java::net::URL* url) override;
	virtual ::java::io::InputStream* getStream($String* key) override;
	virtual ::java::util::Iterator* getStreamKeys() override;
	virtual void setStream($String* key, ::java::io::InputStream* stream) override;
	virtual void showDocument(::java::net::URL* url) override;
	virtual void showDocument(::java::net::URL* url, $String* target) override;
	virtual void showStatus($String* status) override;
	::java::applet::Applet* target = nullptr;
	::java::util::Hashtable* imageCache = nullptr;
};

	} // beans
} // java

#endif // _java_beans_BeansAppletContext_h_