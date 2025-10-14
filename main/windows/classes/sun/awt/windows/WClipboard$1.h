#ifndef _sun_awt_windows_WClipboard$1_h_
#define _sun_awt_windows_WClipboard$1_h_
//$ class sun.awt.windows.WClipboard$1
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
		namespace windows {
			class WClipboard;
		}
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WClipboard$1 : public ::java::awt::datatransfer::Transferable {
	$class(WClipboard$1, $NO_CLASS_INIT, ::java::awt::datatransfer::Transferable)
public:
	WClipboard$1();
	void init$(::sun::awt::windows::WClipboard* this$0, $bytes* val$localeDataFinal);
	virtual $Object* getTransferData(::java::awt::datatransfer::DataFlavor* flavor) override;
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getTransferDataFlavors() override;
	virtual bool isDataFlavorSupported(::java::awt::datatransfer::DataFlavor* flavor) override;
	::sun::awt::windows::WClipboard* this$0 = nullptr;
	$bytes* val$localeDataFinal = nullptr;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WClipboard$1_h_