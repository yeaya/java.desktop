#ifndef _sun_awt_datatransfer_ClipboardTransferable_h_
#define _sun_awt_datatransfer_ClipboardTransferable_h_
//$ class sun.awt.datatransfer.ClipboardTransferable
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
	namespace util {
		class Map;
		class Map$Entry;
	}
}
namespace sun {
	namespace awt {
		namespace datatransfer {
			class SunClipboard;
		}
	}
}

namespace sun {
	namespace awt {
		namespace datatransfer {

class ClipboardTransferable : public ::java::awt::datatransfer::Transferable {
	$class(ClipboardTransferable, $NO_CLASS_INIT, ::java::awt::datatransfer::Transferable)
public:
	ClipboardTransferable();
	void init$(::sun::awt::datatransfer::SunClipboard* clipboard);
	bool fetchOneFlavor(::sun::awt::datatransfer::SunClipboard* clipboard, ::java::awt::datatransfer::DataFlavor* flavor, int64_t format, ::java::util::Map* cached_data);
	virtual $Object* getTransferData(::java::awt::datatransfer::DataFlavor* flavor) override;
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getTransferDataFlavors() override;
	virtual bool isDataFlavorSupported(::java::awt::datatransfer::DataFlavor* flavor) override;
	void lambda$new$0(::sun::awt::datatransfer::SunClipboard* clipboard, ::java::util::Map* cached_data, ::java::util::Map$Entry* entry);
	::java::util::Map* flavorsToData = nullptr;
	$Array<::java::awt::datatransfer::DataFlavor>* flavors = nullptr;
};

		} // datatransfer
	} // awt
} // sun

#endif // _sun_awt_datatransfer_ClipboardTransferable_h_