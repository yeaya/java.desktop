#ifndef _javax_swing_TransferHandler$PropertyTransferable_h_
#define _javax_swing_TransferHandler$PropertyTransferable_h_
//$ class javax.swing.TransferHandler$PropertyTransferable
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
	namespace beans {
		class PropertyDescriptor;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace javax {
	namespace swing {

class $export TransferHandler$PropertyTransferable : public ::java::awt::datatransfer::Transferable {
	$class(TransferHandler$PropertyTransferable, $NO_CLASS_INIT, ::java::awt::datatransfer::Transferable)
public:
	TransferHandler$PropertyTransferable();
	void init$(::java::beans::PropertyDescriptor* p, ::javax::swing::JComponent* c);
	virtual $Object* getTransferData(::java::awt::datatransfer::DataFlavor* flavor) override;
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getTransferDataFlavors() override;
	virtual bool isDataFlavorSupported(::java::awt::datatransfer::DataFlavor* flavor) override;
	::javax::swing::JComponent* component = nullptr;
	::java::beans::PropertyDescriptor* property = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_TransferHandler$PropertyTransferable_h_