#ifndef _sun_awt_X11_XDesktopPeer_h_
#define _sun_awt_X11_XDesktopPeer_h_
//$ class sun.awt.X11.XDesktopPeer
//$ extends java.awt.peer.DesktopPeer

#include <java/awt/peer/DesktopPeer.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Desktop$Action;
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XDesktopPeer : public ::java::awt::peer::DesktopPeer {
	$class(XDesktopPeer, 0, ::java::awt::peer::DesktopPeer)
public:
	XDesktopPeer();
	void init$();
	virtual void browse(::java::net::URI* uri) override;
	virtual void edit(::java::io::File* file) override;
	bool gnome_url_show($bytes* url);
	static bool init(int32_t gtkVersion, bool verbose);
	static void initWithLock();
	static bool isDesktopSupported();
	virtual bool isSupported(::java::awt::Desktop$Action* type) override;
	void launch(::java::net::URI* uri);
	virtual void mail(::java::net::URI* uri) override;
	virtual void open(::java::io::File* file) override;
	virtual void print(::java::io::File* file) override;
	static ::java::util::List* supportedActions;
	static bool nativeLibraryLoaded;
	static bool initExecuted;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XDesktopPeer_h_