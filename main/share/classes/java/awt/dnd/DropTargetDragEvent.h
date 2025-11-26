#ifndef _java_awt_dnd_DropTargetDragEvent_h_
#define _java_awt_dnd_DropTargetDragEvent_h_
//$ class java.awt.dnd.DropTargetDragEvent
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

class $export DropTargetDragEvent : public ::java::awt::dnd::DropTargetEvent {
	$class(DropTargetDragEvent, $NO_CLASS_INIT, ::java::awt::dnd::DropTargetEvent)
public:
	DropTargetDragEvent();
	void init$(::java::awt::dnd::DropTargetContext* dtc, ::java::awt::Point* cursorLocn, int32_t dropAction, int32_t srcActions);
	virtual void acceptDrag(int32_t dragOperation);
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getCurrentDataFlavors();
	virtual ::java::util::List* getCurrentDataFlavorsAsList();
	virtual int32_t getDropAction();
	virtual ::java::awt::Point* getLocation();
	virtual int32_t getSourceActions();
	virtual ::java::awt::datatransfer::Transferable* getTransferable();
	virtual bool isDataFlavorSupported(::java::awt::datatransfer::DataFlavor* df);
	virtual void rejectDrag();
	static const int64_t serialVersionUID = (int64_t)0x8B1E1A0AE401722E;
	::java::awt::Point* location = nullptr;
	int32_t actions = 0;
	int32_t dropAction = 0;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DropTargetDragEvent_h_