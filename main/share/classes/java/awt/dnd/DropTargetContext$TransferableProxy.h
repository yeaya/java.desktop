#ifndef _java_awt_dnd_DropTargetContext$TransferableProxy_h_
#define _java_awt_dnd_DropTargetContext$TransferableProxy_h_
//$ class java.awt.dnd.DropTargetContext$TransferableProxy
//$ extends java.awt.datatransfer.Transferable

#include <java/awt/datatransfer/Transferable.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
		}
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DropTargetContext;
		}
	}
}
namespace sun {
	namespace awt {
		namespace datatransfer {
			class TransferableProxy;
		}
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class $export DropTargetContext$TransferableProxy : public ::java::awt::datatransfer::Transferable {
	$class(DropTargetContext$TransferableProxy, $NO_CLASS_INIT, ::java::awt::datatransfer::Transferable)
public:
	DropTargetContext$TransferableProxy();
	void init$(::java::awt::dnd::DropTargetContext* this$0, ::java::awt::datatransfer::Transferable* t, bool local);
	virtual $Object* getTransferData(::java::awt::datatransfer::DataFlavor* df) override;
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getTransferDataFlavors() override;
	virtual bool isDataFlavorSupported(::java::awt::datatransfer::DataFlavor* flavor) override;
	::java::awt::dnd::DropTargetContext* this$0 = nullptr;
	::java::awt::datatransfer::Transferable* transferable = nullptr;
	bool isLocal = false;
	::sun::awt::datatransfer::TransferableProxy* proxy = nullptr;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DropTargetContext$TransferableProxy_h_