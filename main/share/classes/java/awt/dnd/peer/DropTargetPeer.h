#ifndef _java_awt_dnd_peer_DropTargetPeer_h_
#define _java_awt_dnd_peer_DropTargetPeer_h_
//$ interface java.awt.dnd.peer.DropTargetPeer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace dnd {
			class DropTarget;
		}
	}
}

namespace java {
	namespace awt {
		namespace dnd {
			namespace peer {

class $export DropTargetPeer : public ::java::lang::Object {
	$interface(DropTargetPeer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addDropTarget(::java::awt::dnd::DropTarget* dt) {}
	virtual void removeDropTarget(::java::awt::dnd::DropTarget* dt) {}
};

			} // peer
		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_peer_DropTargetPeer_h_