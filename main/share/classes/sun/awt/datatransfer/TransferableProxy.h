#ifndef _sun_awt_datatransfer_TransferableProxy_h_
#define _sun_awt_datatransfer_TransferableProxy_h_
//$ class sun.awt.datatransfer.TransferableProxy
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

namespace sun {
	namespace awt {
		namespace datatransfer {

class TransferableProxy : public ::java::awt::datatransfer::Transferable {
	$class(TransferableProxy, $NO_CLASS_INIT, ::java::awt::datatransfer::Transferable)
public:
	TransferableProxy();
	void init$(::java::awt::datatransfer::Transferable* t, bool local);
	virtual $Object* getTransferData(::java::awt::datatransfer::DataFlavor* df) override;
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getTransferDataFlavors() override;
	virtual bool isDataFlavorSupported(::java::awt::datatransfer::DataFlavor* flavor) override;
	::java::awt::datatransfer::Transferable* transferable = nullptr;
	bool isLocal = false;
};

		} // datatransfer
	} // awt
} // sun

#endif // _sun_awt_datatransfer_TransferableProxy_h_