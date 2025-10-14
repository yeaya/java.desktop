#ifndef _java_awt_peer_TextComponentPeer_h_
#define _java_awt_peer_TextComponentPeer_h_
//$ interface java.awt.peer.TextComponentPeer
//$ extends java.awt.peer.ComponentPeer

#include <java/awt/peer/ComponentPeer.h>

namespace java {
	namespace awt {
		namespace im {
			class InputMethodRequests;
		}
	}
}

namespace java {
	namespace awt {
		namespace peer {

class TextComponentPeer : public ::java::awt::peer::ComponentPeer {
	$interface(TextComponentPeer, $NO_CLASS_INIT, ::java::awt::peer::ComponentPeer)
public:
	virtual int32_t getCaretPosition() {return 0;}
	virtual ::java::awt::im::InputMethodRequests* getInputMethodRequests() {return nullptr;}
	virtual int32_t getSelectionEnd() {return 0;}
	virtual int32_t getSelectionStart() {return 0;}
	virtual $String* getText() {return nullptr;}
	virtual void select(int32_t selStart, int32_t selEnd) {}
	virtual void setCaretPosition(int32_t pos) {}
	virtual void setEditable(bool editable) {}
	virtual void setText($String* text) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_TextComponentPeer_h_