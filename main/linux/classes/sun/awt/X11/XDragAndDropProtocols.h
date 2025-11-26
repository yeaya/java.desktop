#ifndef _sun_awt_X11_XDragAndDropProtocols_h_
#define _sun_awt_X11_XDragAndDropProtocols_h_
//$ class sun.awt.X11.XDragAndDropProtocols
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Iterator;
		class List;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XDragSourceProtocol;
			class XDropTargetProtocol;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XDragAndDropProtocols : public ::java::lang::Object {
	$class(XDragAndDropProtocols, 0, ::java::lang::Object)
public:
	XDragAndDropProtocols();
	void init$();
	static ::sun::awt::X11::XDragSourceProtocol* getDragSourceProtocol($String* name);
	static ::java::util::Iterator* getDragSourceProtocols();
	static ::sun::awt::X11::XDropTargetProtocol* getDropTargetProtocol($String* name);
	static ::java::util::Iterator* getDropTargetProtocols();
	static ::java::util::List* dragProtocols;
	static ::java::util::List* dropProtocols;
	static $String* XDnD;
	static $String* MotifDnD;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XDragAndDropProtocols_h_