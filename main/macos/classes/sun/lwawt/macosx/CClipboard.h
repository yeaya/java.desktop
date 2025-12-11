#ifndef _sun_lwawt_macosx_CClipboard_h_
#define _sun_lwawt_macosx_CClipboard_h_
//$ class sun.lwawt.macosx.CClipboard
//$ extends sun.awt.datatransfer.SunClipboard

#include <java/lang/Array.h>
#include <sun/awt/datatransfer/SunClipboard.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class Transferable;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CClipboard : public ::sun::awt::datatransfer::SunClipboard {
	$class(CClipboard, $NO_CLASS_INIT, ::sun::awt::datatransfer::SunClipboard)
public:
	CClipboard();
	void init$($String* name);
	void checkPasteboardAndNotify();
	bool checkPasteboardWithoutNotification();
	virtual void clearNativeContext() override;
	void declareTypes($longs* formats, ::sun::awt::datatransfer::SunClipboard* newOwner);
	virtual $bytes* getClipboardData(int64_t format) override;
	virtual $longs* getClipboardFormats() override;
	virtual ::java::awt::datatransfer::Transferable* getContents(Object$* requestor) override;
	virtual ::java::awt::datatransfer::Transferable* getContextContents() override;
	virtual int64_t getID() override;
	static void notifyChanged();
	void notifyLostOwnership();
	virtual void registerClipboardViewerChecked() override;
	virtual void setContentsNative(::java::awt::datatransfer::Transferable* contents) override;
	void setData($bytes* data, int64_t format);
	virtual void unregisterClipboardViewerChecked() override;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CClipboard_h_