#ifndef _java_awt_dnd_peer_DropTargetContextPeer_h_
#define _java_awt_dnd_peer_DropTargetContextPeer_h_
//$ interface java.awt.dnd.peer.DropTargetContextPeer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
			class Transferable;
		}
	}
}
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

class $export DropTargetContextPeer : public ::java::lang::Object {
	$interface(DropTargetContextPeer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void acceptDrag(int32_t dragAction) {}
	virtual void acceptDrop(int32_t dropAction) {}
	virtual void dropComplete(bool success) {}
	virtual ::java::awt::dnd::DropTarget* getDropTarget() {return nullptr;}
	virtual int32_t getTargetActions() {return 0;}
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getTransferDataFlavors() {return nullptr;}
	virtual ::java::awt::datatransfer::Transferable* getTransferable() {return nullptr;}
	virtual bool isTransferableJVMLocal() {return false;}
	virtual void rejectDrag() {}
	virtual void rejectDrop() {}
	virtual void setTargetActions(int32_t actions) {}
};

			} // peer
		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_peer_DropTargetContextPeer_h_