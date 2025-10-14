#ifndef _java_awt_peer_TextAreaPeer_h_
#define _java_awt_peer_TextAreaPeer_h_
//$ interface java.awt.peer.TextAreaPeer
//$ extends java.awt.peer.TextComponentPeer

#include <java/awt/peer/TextComponentPeer.h>

namespace java {
	namespace awt {
		class Dimension;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class TextAreaPeer : public ::java::awt::peer::TextComponentPeer {
	$interface(TextAreaPeer, $NO_CLASS_INIT, ::java::awt::peer::TextComponentPeer)
public:
	using ::java::awt::peer::TextComponentPeer::getMinimumSize;
	virtual ::java::awt::Dimension* getMinimumSize(int32_t rows, int32_t columns) {return nullptr;}
	using ::java::awt::peer::TextComponentPeer::getPreferredSize;
	virtual ::java::awt::Dimension* getPreferredSize(int32_t rows, int32_t columns) {return nullptr;}
	virtual void insert($String* text, int32_t pos) {}
	virtual void replaceRange($String* text, int32_t start, int32_t end) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_TextAreaPeer_h_