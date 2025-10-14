#ifndef _java_awt_dnd_DragSourceContext$1_h_
#define _java_awt_dnd_DragSourceContext$1_h_
//$ class java.awt.dnd.DragSourceContext$1
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
			class DragSourceContext;
		}
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class DragSourceContext$1 : public ::java::awt::datatransfer::Transferable {
	$class(DragSourceContext$1, $NO_CLASS_INIT, ::java::awt::datatransfer::Transferable)
public:
	DragSourceContext$1();
	void init$(::java::awt::dnd::DragSourceContext* this$0);
	virtual $Object* getTransferData(::java::awt::datatransfer::DataFlavor* flavor) override;
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getTransferDataFlavors() override;
	virtual bool isDataFlavorSupported(::java::awt::datatransfer::DataFlavor* flavor) override;
	::java::awt::dnd::DragSourceContext* this$0 = nullptr;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DragSourceContext$1_h_