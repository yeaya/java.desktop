#ifndef _java_applet_AppletContext_h_
#define _java_applet_AppletContext_h_
//$ interface java.applet.AppletContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
		class Iterator;
	}
}

namespace java {
	namespace applet {

class $import AppletContext : public ::java::lang::Object {
	$interface(AppletContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::applet::Applet* getApplet($String* name) {return nullptr;}
	virtual ::java::util::Enumeration* getApplets() {return nullptr;}
	virtual ::java::applet::AudioClip* getAudioClip(::java::net::URL* url) {return nullptr;}
	virtual ::java::awt::Image* getImage(::java::net::URL* url) {return nullptr;}
	virtual ::java::io::InputStream* getStream($String* key) {return nullptr;}
	virtual ::java::util::Iterator* getStreamKeys() {return nullptr;}
	virtual void setStream($String* key, ::java::io::InputStream* stream) {}
	virtual void showDocument(::java::net::URL* url) {}
	virtual void showDocument(::java::net::URL* url, $String* target) {}
	virtual void showStatus($String* status) {}
};

	} // applet
} // java

#endif // _java_applet_AppletContext_h_