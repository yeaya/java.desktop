#ifndef _java_awt_peer_TrayIconPeer_h_
#define _java_awt_peer_TrayIconPeer_h_
//$ interface java.awt.peer.TrayIconPeer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace peer {

class TrayIconPeer : public ::java::lang::Object {
	$interface(TrayIconPeer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void displayMessage($String* caption, $String* text, $String* messageType) {}
	virtual void dispose() {}
	virtual void setToolTip($String* tooltip) {}
	virtual void showPopupMenu(int32_t x, int32_t y) {}
	virtual void updateImage() {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_TrayIconPeer_h_