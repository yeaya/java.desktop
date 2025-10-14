#ifndef _sun_awt_windows_WClipboard_h_
#define _sun_awt_windows_WClipboard_h_
//$ class sun.awt.windows.WClipboard
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
	namespace awt {
		namespace windows {

class WClipboard : public ::sun::awt::datatransfer::SunClipboard {
	$class(WClipboard, 0, ::sun::awt::datatransfer::SunClipboard)
public:
	WClipboard();
	void init$();
	virtual void clearNativeContext() override;
	virtual void closeClipboard() override;
	virtual ::java::awt::datatransfer::Transferable* createLocaleTransferable($longs* formats) override;
	virtual $bytes* getClipboardData(int64_t format) override;
	virtual $longs* getClipboardFormats() override;
	virtual int64_t getID() override;
	void handleContentsChanged();
	static void init();
	void lostSelectionOwnershipImpl();
	virtual void openClipboard(::sun::awt::datatransfer::SunClipboard* newOwner) override;
	void publishClipboardData(int64_t format, $bytes* bytes);
	void registerClipboardViewer();
	virtual void registerClipboardViewerChecked() override;
	virtual void setContentsNative(::java::awt::datatransfer::Transferable* contents) override;
	virtual void unregisterClipboardViewerChecked() override;
	bool isClipboardViewerRegistered = false;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WClipboard_h_