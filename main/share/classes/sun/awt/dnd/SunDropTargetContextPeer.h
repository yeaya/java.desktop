#ifndef _sun_awt_dnd_SunDropTargetContextPeer_h_
#define _sun_awt_dnd_SunDropTargetContextPeer_h_
//$ class sun.awt.dnd.SunDropTargetContextPeer
//$ extends java.awt.dnd.peer.DropTargetContextPeer
//$ implements java.awt.datatransfer.Transferable

#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/peer/DropTargetContextPeer.h>
#include <java/lang/Array.h>

#pragma push_macro("DISPATCH_SYNC")
#undef DISPATCH_SYNC
#pragma push_macro("STATUS_ACCEPT")
#undef STATUS_ACCEPT
#pragma push_macro("STATUS_NONE")
#undef STATUS_NONE
#pragma push_macro("STATUS_REJECT")
#undef STATUS_REJECT
#pragma push_macro("STATUS_WAIT")
#undef STATUS_WAIT

namespace java {
	namespace awt {
		class Component;
	}
}
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
			class DropTarget;
			class DropTargetContext;
		}
	}
}
namespace sun {
	namespace awt {
		namespace dnd {
			class SunDropTargetEvent;
		}
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {
		namespace dnd {

class $export SunDropTargetContextPeer : public ::java::awt::dnd::peer::DropTargetContextPeer, public ::java::awt::datatransfer::Transferable {
	$class(SunDropTargetContextPeer, 0, ::java::awt::dnd::peer::DropTargetContextPeer, ::java::awt::datatransfer::Transferable)
public:
	SunDropTargetContextPeer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void acceptDrag(int32_t dragOperation) override;
	virtual void acceptDrop(int32_t dropOperation) override;
	virtual void doDropDone(bool success, int32_t dropAction, bool isLocal) {}
	virtual void dropComplete(bool success) override;
	virtual void eventPosted(::sun::awt::dnd::SunDropTargetEvent* e);
	virtual void eventProcessed(::sun::awt::dnd::SunDropTargetEvent* e, int32_t returnValue, bool dispatcherDone);
	virtual ::java::awt::dnd::DropTarget* getDropTarget() override;
	static ::java::awt::datatransfer::Transferable* getJVMLocalSourceTransferable();
	virtual $Object* getNativeData(int64_t format) {return nullptr;}
	virtual int64_t getNativeDragContext();
	virtual int32_t getTargetActions() override;
	virtual $Object* getTransferData(::java::awt::datatransfer::DataFlavor* df) override;
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getTransferDataFlavors() override;
	virtual ::java::awt::datatransfer::Transferable* getTransferable() override;
	void handleDropMessage(::java::awt::Component* component, int32_t x, int32_t y, int32_t dropAction, int32_t actions, $longs* formats, int64_t nativeCtxt);
	int32_t handleEnterMessage(::java::awt::Component* component, int32_t x, int32_t y, int32_t dropAction, int32_t actions, $longs* formats, int64_t nativeCtxt);
	void handleExitMessage(::java::awt::Component* component, int64_t nativeCtxt);
	int32_t handleMotionMessage(::java::awt::Component* component, int32_t x, int32_t y, int32_t dropAction, int32_t actions, $longs* formats, int64_t nativeCtxt);
	virtual bool isDataFlavorSupported(::java::awt::datatransfer::DataFlavor* df) override;
	virtual bool isTransferableJVMLocal() override;
	int32_t mapOperation(int32_t operation);
	virtual int32_t postDropTargetEvent(::java::awt::Component* component, int32_t x, int32_t y, int32_t dropAction, int32_t actions, $longs* formats, int64_t nativeCtxt, int32_t eventID, bool dispatchType);
	virtual void processDropMessage(::sun::awt::dnd::SunDropTargetEvent* event);
	virtual void processEnterMessage(::sun::awt::dnd::SunDropTargetEvent* event);
	virtual void processExitMessage(::sun::awt::dnd::SunDropTargetEvent* event);
	virtual void processMotionMessage(::sun::awt::dnd::SunDropTargetEvent* event, bool operationChanged);
	virtual void rejectDrag() override;
	virtual void rejectDrop() override;
	static void setCurrentJVMLocalSourceTransferable(::java::awt::datatransfer::Transferable* t);
	virtual void setTargetActions(int32_t actions) override;
	virtual $String* toString() override;
	static const bool DISPATCH_SYNC = true;
	::java::awt::dnd::DropTarget* currentDT = nullptr;
	::java::awt::dnd::DropTargetContext* currentDTC = nullptr;
	$longs* currentT = nullptr;
	int32_t currentA = 0;
	int32_t currentSA = 0;
	int32_t currentDA = 0;
	int32_t previousDA = 0;
	int64_t nativeDragContext = 0;
	::java::awt::datatransfer::Transferable* local = nullptr;
	bool dragRejected = false;
	int32_t dropStatus = 0;
	bool dropComplete$ = false;
	bool dropInProcess = false;
	static $Object* _globalLock;
	static ::sun::util::logging::PlatformLogger* dndLog;
	static ::java::awt::datatransfer::Transferable* currentJVMLocalSourceTransferable;
	static const int32_t STATUS_NONE = 0;
	static const int32_t STATUS_WAIT = 1;
	static const int32_t STATUS_ACCEPT = 2;
	static const int32_t STATUS_REJECT = (-1);
};

		} // dnd
	} // awt
} // sun

#pragma pop_macro("DISPATCH_SYNC")
#pragma pop_macro("STATUS_ACCEPT")
#pragma pop_macro("STATUS_NONE")
#pragma pop_macro("STATUS_REJECT")
#pragma pop_macro("STATUS_WAIT")

#endif // _sun_awt_dnd_SunDropTargetContextPeer_h_