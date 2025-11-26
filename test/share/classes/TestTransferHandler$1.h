#ifndef _TestTransferHandler$1_h_
#define _TestTransferHandler$1_h_
//$ class TestTransferHandler$1
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

class TestTransferHandler$1 : public ::java::awt::datatransfer::Transferable {
	$class(TestTransferHandler$1, $NO_CLASS_INIT, ::java::awt::datatransfer::Transferable)
public:
	TestTransferHandler$1();
	void init$(::java::awt::datatransfer::DataFlavor* val$colorFlavor);
	virtual $Object* getTransferData(::java::awt::datatransfer::DataFlavor* flavor) override;
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getTransferDataFlavors() override;
	virtual bool isDataFlavorSupported(::java::awt::datatransfer::DataFlavor* flavor) override;
	::java::awt::datatransfer::DataFlavor* val$colorFlavor = nullptr;
};

#endif // _TestTransferHandler$1_h_