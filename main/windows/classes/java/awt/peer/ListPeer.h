#ifndef _java_awt_peer_ListPeer_h_
#define _java_awt_peer_ListPeer_h_
//$ interface java.awt.peer.ListPeer
//$ extends java.awt.peer.ComponentPeer

#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class ListPeer : public ::java::awt::peer::ComponentPeer {
	$interface(ListPeer, $NO_CLASS_INIT, ::java::awt::peer::ComponentPeer)
public:
	virtual void add($String* item, int32_t index) {}
	virtual void delItems(int32_t start, int32_t end) {}
	virtual void deselect(int32_t index) {}
	using ::java::awt::peer::ComponentPeer::getMinimumSize;
	virtual ::java::awt::Dimension* getMinimumSize(int32_t rows) {return nullptr;}
	using ::java::awt::peer::ComponentPeer::getPreferredSize;
	virtual ::java::awt::Dimension* getPreferredSize(int32_t rows) {return nullptr;}
	virtual $ints* getSelectedIndexes() {return nullptr;}
	virtual void makeVisible(int32_t index) {}
	virtual void removeAll() {}
	virtual void select(int32_t index) {}
	virtual void setMultipleMode(bool m) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_ListPeer_h_