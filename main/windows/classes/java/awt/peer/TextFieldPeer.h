#ifndef _java_awt_peer_TextFieldPeer_h_
#define _java_awt_peer_TextFieldPeer_h_
//$ interface java.awt.peer.TextFieldPeer
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

class TextFieldPeer : public ::java::awt::peer::TextComponentPeer {
	$interface(TextFieldPeer, $NO_CLASS_INIT, ::java::awt::peer::TextComponentPeer)
public:
	using ::java::awt::peer::TextComponentPeer::getMinimumSize;
	virtual ::java::awt::Dimension* getMinimumSize(int32_t columns) {return nullptr;}
	using ::java::awt::peer::TextComponentPeer::getPreferredSize;
	virtual ::java::awt::Dimension* getPreferredSize(int32_t columns) {return nullptr;}
	virtual void setEchoChar(char16_t echoChar) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_TextFieldPeer_h_