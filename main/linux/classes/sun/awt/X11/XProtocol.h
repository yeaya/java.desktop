#ifndef _sun_awt_X11_XProtocol_h_
#define _sun_awt_X11_XProtocol_h_
//$ class sun.awt.X11.XProtocol
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XAtom;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XProtocol : public ::java::lang::Object {
	$class(XProtocol, 0, ::java::lang::Object)
public:
	XProtocol();
	void init$();
	virtual int64_t checkAnchor(::sun::awt::X11::XAtom* anchorProp, int64_t anchorType);
	virtual int64_t checkAnchor(::sun::awt::X11::XAtom* anchorProp, ::sun::awt::X11::XAtom* anchorType);
	virtual int64_t checkAnchorImpl(::sun::awt::X11::XAtom* anchorProp, int64_t anchorType);
	virtual bool checkProtocol(::sun::awt::X11::XAtom* listName, ::sun::awt::X11::XAtom* protocol);
	static ::sun::util::logging::PlatformLogger* log;
	::java::util::Map* atomToList = nullptr;
	::java::util::Map* atomToAnchor = nullptr;
	$volatile(bool) firstCheck = false;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XProtocol_h_