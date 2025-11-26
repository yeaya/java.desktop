#ifndef _java_awt_dnd_DropTargetDropEvent_h_
#define _java_awt_dnd_DropTargetDropEvent_h_
//$ class java.awt.dnd.DropTargetDropEvent
//$ extends java.awt.dnd.DropTargetEvent

#include <java/awt/dnd/DropTargetEvent.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
			class Transferable;
		}
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DropTargetContext;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class $import DropTargetDropEvent : public ::java::awt::dnd::DropTargetEvent {
	$class(DropTargetDropEvent, 0, ::java::awt::dnd::DropTargetEvent)
public:
	DropTargetDropEvent();
	void init$(::java::awt::dnd::DropTargetContext* dtc, ::java::awt::Point* cursorLocn, int32_t dropAction, int32_t srcActions);
	void init$(::java::awt::dnd::DropTargetContext* dtc, ::java::awt::Point* cursorLocn, int32_t dropAction, int32_t srcActions, bool isLocal);
	virtual void acceptDrop(int32_t dropAction);
	virtual void dropComplete(bool success);
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getCurrentDataFlavors();
	virtual ::java::util::List* getCurrentDataFlavorsAsList();
	virtual int32_t getDropAction();
	virtual ::java::awt::Point* getLocation();
	virtual int32_t getSourceActions();
	virtual ::java::awt::datatransfer::Transferable* getTransferable();
	virtual bool isDataFlavorSupported(::java::awt::datatransfer::DataFlavor* df);
	virtual bool isLocalTransfer();
	virtual void rejectDrop();
	static const int64_t serialVersionUID = (int64_t)0xE81A8AE9DF1E8BC6;
	static ::java::awt::Point* zero;
	::java::awt::Point* location = nullptr;
	int32_t actions = 0;
	int32_t dropAction = 0;
	bool isLocalTx = false;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DropTargetDropEvent_h_