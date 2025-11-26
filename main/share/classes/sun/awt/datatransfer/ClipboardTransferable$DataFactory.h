#ifndef _sun_awt_datatransfer_ClipboardTransferable$DataFactory_h_
#define _sun_awt_datatransfer_ClipboardTransferable$DataFactory_h_
//$ class sun.awt.datatransfer.ClipboardTransferable$DataFactory
//$ extends java.lang.Object

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
			class ClipboardTransferable;
		}
	}
}

namespace sun {
	namespace awt {
		namespace datatransfer {

class ClipboardTransferable$DataFactory : public ::java::lang::Object {
	$class(ClipboardTransferable$DataFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClipboardTransferable$DataFactory();
	void init$(::sun::awt::datatransfer::ClipboardTransferable* this$0, int64_t format, $bytes* data);
	$Object* getTransferData(::java::awt::datatransfer::DataFlavor* flavor);
	::sun::awt::datatransfer::ClipboardTransferable* this$0 = nullptr;
	int64_t format = 0;
	$bytes* data = nullptr;
};

		} // datatransfer
	} // awt
} // sun

#endif // _sun_awt_datatransfer_ClipboardTransferable$DataFactory_h_