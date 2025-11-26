#ifndef _sun_awt_X11_XClipboard_h_
#define _sun_awt_X11_XClipboard_h_
//$ class sun.awt.X11.XClipboard
//$ extends sun.awt.datatransfer.SunClipboard
//$ implements sun.awt.X11.OwnershipListener

#include <java/lang/Array.h>
#include <sun/awt/X11/OwnershipListener.h>
#include <sun/awt/datatransfer/SunClipboard.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class Transferable;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace awt {
		namespace X11 {
			class XAtom;
			class XSelection;
			class XSelectionEvent;
		}
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class XClipboard : public ::sun::awt::datatransfer::SunClipboard, public ::sun::awt::X11::OwnershipListener {
	$class(XClipboard, 0, ::sun::awt::datatransfer::SunClipboard, ::sun::awt::X11::OwnershipListener)
public:
	XClipboard();
	using ::sun::awt::datatransfer::SunClipboard::checkChange;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name, $String* selectionName);
	void checkChange(::sun::awt::X11::XSelectionEvent* xse);
	void checkChangeHere(::java::awt::datatransfer::Transferable* contents);
	virtual void clearNativeContext() override;
	virtual $bytes* getClipboardData(int64_t format) override;
	virtual $longs* getClipboardFormats() override;
	virtual ::java::awt::datatransfer::Transferable* getContents(Object$* requestor) override;
	virtual int64_t getID() override;
	static int32_t getPollInterval();
	void getTargetsDelayed();
	::sun::awt::X11::XAtom* getTargetsPropertyAtom();
	virtual void ownershipChanged(bool isOwner) override;
	virtual void registerClipboardViewerChecked() override;
	virtual void setContentsNative(::java::awt::datatransfer::Transferable* contents) override;
	virtual $String* toString() override;
	virtual void unregisterClipboardViewerChecked() override;
	::sun::awt::X11::XSelection* selection = nullptr;
	int64_t convertSelectionTime = 0;
	$volatile(bool) isSelectionNotifyProcessed = false;
	$volatile(::sun::awt::X11::XAtom*) targetsPropertyAtom = nullptr;
	static $Object* classLock;
	static const int32_t defaultPollInterval = 200;
	static int32_t pollInterval;
	static ::java::util::Map* targetsAtom2Clipboard;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_XClipboard_h_