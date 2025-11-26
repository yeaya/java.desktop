#ifndef _java_awt_peer_FileDialogPeer_h_
#define _java_awt_peer_FileDialogPeer_h_
//$ interface java.awt.peer.FileDialogPeer
//$ extends java.awt.peer.DialogPeer

#include <java/awt/peer/DialogPeer.h>

namespace java {
	namespace io {
		class FilenameFilter;
	}
}

namespace java {
	namespace awt {
		namespace peer {

class FileDialogPeer : public ::java::awt::peer::DialogPeer {
	$interface(FileDialogPeer, $NO_CLASS_INIT, ::java::awt::peer::DialogPeer)
public:
	virtual void setDirectory($String* dir) {}
	virtual void setFile($String* file) {}
	virtual void setFilenameFilter(::java::io::FilenameFilter* filter) {}
};

		} // peer
	} // awt
} // java

#endif // _java_awt_peer_FileDialogPeer_h_