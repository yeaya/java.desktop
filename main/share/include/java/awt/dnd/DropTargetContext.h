#ifndef _java_awt_dnd_DropTargetContext_h_
#define _java_awt_dnd_DropTargetContext_h_
//$ class java.awt.dnd.DropTargetContext
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
	}
}
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
				class DropTargetContextPeer;
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class $import DropTargetContext : public ::java::io::Serializable {
	$class(DropTargetContext, 0, ::java::io::Serializable)
public:
	DropTargetContext();
	void init$(::java::awt::dnd::DropTarget* dt);
	virtual void acceptDrag(int32_t dragOperation);
	virtual void acceptDrop(int32_t dropOperation);
	virtual ::java::awt::datatransfer::Transferable* createTransferableProxy(::java::awt::datatransfer::Transferable* t, bool local);
	virtual void dropComplete(bool success);
	virtual ::java::awt::Component* getComponent();
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getCurrentDataFlavors();
	virtual ::java::util::List* getCurrentDataFlavorsAsList();
	virtual ::java::awt::dnd::DropTarget* getDropTarget();
	virtual ::java::awt::dnd::peer::DropTargetContextPeer* getDropTargetContextPeer();
	virtual int32_t getTargetActions();
	virtual ::java::awt::datatransfer::Transferable* getTransferable();
	virtual bool isDataFlavorSupported(::java::awt::datatransfer::DataFlavor* df);
	virtual void rejectDrag();
	virtual void rejectDrop();
	virtual void reset();
	virtual void setDropTargetContextPeer(::java::awt::dnd::peer::DropTargetContextPeer* dtcp);
	virtual void setTargetActions(int32_t actions);
	static const int64_t serialVersionUID = (int64_t)0xF73303C711FFFDF5;
	::java::awt::dnd::DropTarget* dropTarget = nullptr;
	::java::awt::dnd::peer::DropTargetContextPeer* dropTargetContextPeer = nullptr;
	::java::awt::datatransfer::Transferable* transferable = nullptr;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DropTargetContext_h_