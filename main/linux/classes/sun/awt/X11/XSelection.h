#ifndef _sun_awt_X11_XSelection_h_
#define _sun_awt_X11_XSelection_h_
//$ class sun.awt.X11.XSelection
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("MAX_LENGTH")
#undef MAX_LENGTH
#pragma push_macro("MAX_PROPERTY_SIZE")
#undef MAX_PROPERTY_SIZE

namespace java {
	namespace awt {
		namespace datatransfer {
			class Transferable;
		}
	}
}
namespace java {
	namespace util {
		class Hashtable;
		class Map;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class OwnershipListener;
			class WindowPropertyGetter;
			class XAtom;
			class XEventDispatcher;
			class XSelectionRequestEvent;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XSelection : public ::java::lang::Object {
	$class(XSelection, 0, ::java::lang::Object)
public:
	XSelection();
	void init$(::sun::awt::X11::XAtom* atom);
	bool convertAndStore(int64_t requestor, int64_t format, int64_t property);
	void fireOwnershipChanges(bool isOwner);
	$bytes* getData(int64_t format, int64_t time);
	static $longs* getFormats(::sun::awt::X11::WindowPropertyGetter* targetsGetter);
	static ::sun::awt::X11::XSelection* getSelection(::sun::awt::X11::XAtom* atom);
	::sun::awt::X11::XAtom* getSelectionAtom();
	$longs* getTargets(int64_t time);
	bool handleMultipleRequest(int64_t requestor, int64_t property);
	void handleSelectionRequest(::sun::awt::X11::XSelectionRequestEvent* xsre);
	bool handleTargetsRequest(int64_t property, int64_t requestor);
	bool isOwner();
	void lostOwnership();
	void registerOwershipListener(::sun::awt::X11::OwnershipListener* l);
	void reset();
	bool setOwner(::java::awt::datatransfer::Transferable* contents, ::java::util::Map* formatMap, $longs* formats, int64_t time);
	void setOwnerProp(bool f);
	void unregisterOwnershipListener();
	void validateDataGetter(::sun::awt::X11::WindowPropertyGetter* propertyGetter);
	static void waitForSelectionNotify(::sun::awt::X11::WindowPropertyGetter* dataGetter);
	static ::java::util::Hashtable* table;
	static $Object* lock;
	static ::sun::awt::X11::XAtom* selectionPropertyAtom;
	static const int64_t MAX_LENGTH = 0x000F4240;
	static int32_t MAX_PROPERTY_SIZE;
	static ::sun::awt::X11::XEventDispatcher* incrementalTransferHandler;
	static ::sun::awt::X11::WindowPropertyGetter* propertyGetter;
	::sun::awt::X11::XAtom* selectionAtom = nullptr;
	::java::awt::datatransfer::Transferable* contents = nullptr;
	::java::util::Map* formatMap = nullptr;
	$longs* formats = nullptr;
	::sun::awt::AppContext* appContext = nullptr;
	static int64_t lastRequestServerTime;
	int64_t ownershipTime = 0;
	bool isOwner$ = false;
	::sun::awt::X11::OwnershipListener* ownershipListener = nullptr;
	$Object* stateLock = nullptr;
};

		} // X11
	} // awt
} // sun

#pragma pop_macro("MAX_LENGTH")
#pragma pop_macro("MAX_PROPERTY_SIZE")

#endif // _sun_awt_X11_XSelection_h_