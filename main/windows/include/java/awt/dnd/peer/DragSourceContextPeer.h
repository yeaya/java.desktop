#ifndef _java_awt_dnd_peer_DragSourceContextPeer_h_
#define _java_awt_dnd_peer_DragSourceContextPeer_h_
//$ interface java.awt.dnd.peer.DragSourceContextPeer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Cursor;
		class Image;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DragSourceContext;
		}
	}
}

namespace java {
	namespace awt {
		namespace dnd {
			namespace peer {

class $import DragSourceContextPeer : public ::java::lang::Object {
	$interface(DragSourceContextPeer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::awt::Cursor* getCursor() {return nullptr;}
	virtual void setCursor(::java::awt::Cursor* c) {}
	virtual void startDrag(::java::awt::dnd::DragSourceContext* dsc, ::java::awt::Cursor* c, ::java::awt::Image* dragImage, ::java::awt::Point* imageOffset) {}
	virtual void transferablesFlavorsChanged() {}
};

			} // peer
		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_peer_DragSourceContextPeer_h_