#ifndef _javax_swing_TransferHandler$TransferSupport_h_
#define _javax_swing_TransferHandler$TransferSupport_h_
//$ class javax.swing.TransferHandler$TransferSupport
//$ extends java.lang.Object

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
			class DropTargetEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class TransferHandler$DropLocation;
	}
}

namespace javax {
	namespace swing {

class $import TransferHandler$TransferSupport : public ::java::lang::Object {
	$class(TransferHandler$TransferSupport, 0, ::java::lang::Object)
public:
	TransferHandler$TransferSupport();
	void init$(::java::awt::Component* component, ::java::awt::dnd::DropTargetEvent* event);
	void init$(::java::awt::Component* component, ::java::awt::datatransfer::Transferable* transferable);
	void assureIsDrop();
	::java::awt::Component* getComponent();
	$Array<::java::awt::datatransfer::DataFlavor>* getDataFlavors();
	int32_t getDropAction();
	::javax::swing::TransferHandler$DropLocation* getDropLocation();
	int32_t getSourceDropActions();
	::java::awt::datatransfer::Transferable* getTransferable();
	int32_t getUserDropAction();
	bool isDataFlavorSupported(::java::awt::datatransfer::DataFlavor* df);
	bool isDrop();
	void setDNDVariables(::java::awt::Component* component, ::java::awt::dnd::DropTargetEvent* event);
	void setDropAction(int32_t dropAction);
	void setShowDropLocation(bool showDropLocation);
	static bool $assertionsDisabled;
	bool isDrop$ = false;
	::java::awt::Component* component = nullptr;
	bool showDropLocationIsSet = false;
	bool showDropLocation = false;
	int32_t dropAction = 0;
	$Object* source = nullptr;
	::javax::swing::TransferHandler$DropLocation* dropLocation = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_TransferHandler$TransferSupport_h_