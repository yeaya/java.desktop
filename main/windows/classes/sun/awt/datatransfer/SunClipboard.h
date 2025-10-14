#ifndef _sun_awt_datatransfer_SunClipboard_h_
#define _sun_awt_datatransfer_SunClipboard_h_
//$ class sun.awt.datatransfer.SunClipboard
//$ extends java.awt.datatransfer.Clipboard
//$ implements java.beans.PropertyChangeListener

#include <java/awt/datatransfer/Clipboard.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>

#pragma push_macro("CLIPBOARD_FLAVOR_LISTENER_KEY")
#undef CLIPBOARD_FLAVOR_LISTENER_KEY

namespace java {
	namespace awt {
		namespace datatransfer {
			class ClipboardOwner;
			class DataFlavor;
			class FlavorListener;
			class FlavorTable;
			class Transferable;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace sun {
	namespace awt {
		class AppContext;
	}
}

namespace sun {
	namespace awt {
		namespace datatransfer {

class SunClipboard : public ::java::awt::datatransfer::Clipboard, public ::java::beans::PropertyChangeListener {
	$class(SunClipboard, $NO_CLASS_INIT, ::java::awt::datatransfer::Clipboard, ::java::beans::PropertyChangeListener)
public:
	SunClipboard();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name);
	virtual void addFlavorListener(::java::awt::datatransfer::FlavorListener* listener) override;
	virtual bool areFlavorListenersRegistered();
	void checkChange($longs* formats);
	virtual void clearNativeContext() {}
	virtual void closeClipboard();
	virtual ::java::awt::datatransfer::Transferable* createLocaleTransferable($longs* formats);
	static ::java::util::Set* formatArrayAsDataFlavorSet($longs* formats);
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getAvailableDataFlavors() override;
	virtual $bytes* getClipboardData(int64_t format) {return nullptr;}
	virtual $longs* getClipboardFormats() {return nullptr;}
	virtual $longs* getClipboardFormatsOpenClose();
	virtual ::java::awt::datatransfer::Transferable* getContents(Object$* requestor) override;
	virtual ::java::awt::datatransfer::Transferable* getContextContents();
	virtual $Object* getData(::java::awt::datatransfer::DataFlavor* flavor) override;
	static ::java::awt::datatransfer::FlavorTable* getDefaultFlavorTable();
	::java::util::Set* getFlavorListeners(::sun::awt::AppContext* appContext);
	virtual $Array<::java::awt::datatransfer::FlavorListener>* getFlavorListeners() override;
	virtual int64_t getID() {return 0;}
	void initContext();
	virtual bool isDataFlavorAvailable(::java::awt::datatransfer::DataFlavor* flavor) override;
	void lambda$checkChange$2(::java::awt::datatransfer::FlavorListener* listener);
	void lambda$lostOwnershipLater$1(::sun::awt::AppContext* disposedContext);
	void lambda$setContents$0(::java::awt::datatransfer::ClipboardOwner* oldOwner, ::java::awt::datatransfer::Transferable* oldContents);
	virtual void lostOwnershipImpl();
	virtual void lostOwnershipLater(::sun::awt::AppContext* disposedContext);
	virtual void lostOwnershipNow(::sun::awt::AppContext* disposedContext);
	virtual void openClipboard(::sun::awt::datatransfer::SunClipboard* newOwner);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual void registerClipboardViewerChecked() {}
	virtual void removeFlavorListener(::java::awt::datatransfer::FlavorListener* listener) override;
	virtual void setContents(::java::awt::datatransfer::Transferable* contents, ::java::awt::datatransfer::ClipboardOwner* owner) override;
	virtual void setContentsNative(::java::awt::datatransfer::Transferable* contents) {}
	virtual $String* toString() override;
	virtual void unregisterClipboardViewerChecked() {}
	::sun::awt::AppContext* contentsContext = nullptr;
	$Object* CLIPBOARD_FLAVOR_LISTENER_KEY = nullptr;
	$volatile(int32_t) numberOfFlavorListeners = 0;
	$volatile($longs*) currentFormats = nullptr;
};

		} // datatransfer
	} // awt
} // sun

#pragma pop_macro("CLIPBOARD_FLAVOR_LISTENER_KEY")

#endif // _sun_awt_datatransfer_SunClipboard_h_