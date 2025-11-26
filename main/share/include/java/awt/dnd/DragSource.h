#ifndef _java_awt_dnd_DragSource_h_
#define _java_awt_dnd_DragSource_h_
//$ class java.awt.dnd.DragSource
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
		class Cursor;
		class Image;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace datatransfer {
			class FlavorMap;
			class Transferable;
		}
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DragGestureEvent;
			class DragGestureListener;
			class DragGestureRecognizer;
			class DragSourceContext;
			class DragSourceDragEvent;
			class DragSourceDropEvent;
			class DragSourceEvent;
			class DragSourceListener;
			class DragSourceMotionListener;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class EventListener;
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class $import DragSource : public ::java::io::Serializable {
	$class(DragSource, 0, ::java::io::Serializable)
public:
	DragSource();
	void init$();
	virtual void addDragSourceListener(::java::awt::dnd::DragSourceListener* dsl);
	virtual void addDragSourceMotionListener(::java::awt::dnd::DragSourceMotionListener* dsml);
	virtual ::java::awt::dnd::DragGestureRecognizer* createDefaultDragGestureRecognizer(::java::awt::Component* c, int32_t actions, ::java::awt::dnd::DragGestureListener* dgl);
	virtual ::java::awt::dnd::DragGestureRecognizer* createDragGestureRecognizer($Class* recognizerAbstractClass, ::java::awt::Component* c, int32_t actions, ::java::awt::dnd::DragGestureListener* dgl);
	virtual ::java::awt::dnd::DragSourceContext* createDragSourceContext(::java::awt::dnd::DragGestureEvent* dgl, ::java::awt::Cursor* dragCursor, ::java::awt::Image* dragImage, ::java::awt::Point* imageOffset, ::java::awt::datatransfer::Transferable* t, ::java::awt::dnd::DragSourceListener* dsl);
	static ::java::awt::dnd::DragSource* getDefaultDragSource();
	virtual $Array<::java::awt::dnd::DragSourceListener>* getDragSourceListeners();
	virtual $Array<::java::awt::dnd::DragSourceMotionListener>* getDragSourceMotionListeners();
	static int32_t getDragThreshold();
	virtual ::java::awt::datatransfer::FlavorMap* getFlavorMap();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType);
	static bool isDragImageSupported();
	static ::java::awt::Cursor* load($String* name);
	virtual void processDragDropEnd(::java::awt::dnd::DragSourceDropEvent* dsde);
	virtual void processDragEnter(::java::awt::dnd::DragSourceDragEvent* dsde);
	virtual void processDragExit(::java::awt::dnd::DragSourceEvent* dse);
	virtual void processDragMouseMoved(::java::awt::dnd::DragSourceDragEvent* dsde);
	virtual void processDragOver(::java::awt::dnd::DragSourceDragEvent* dsde);
	virtual void processDropActionChanged(::java::awt::dnd::DragSourceDragEvent* dsde);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removeDragSourceListener(::java::awt::dnd::DragSourceListener* dsl);
	virtual void removeDragSourceMotionListener(::java::awt::dnd::DragSourceMotionListener* dsml);
	virtual void startDrag(::java::awt::dnd::DragGestureEvent* trigger, ::java::awt::Cursor* dragCursor, ::java::awt::Image* dragImage, ::java::awt::Point* imageOffset, ::java::awt::datatransfer::Transferable* transferable, ::java::awt::dnd::DragSourceListener* dsl, ::java::awt::datatransfer::FlavorMap* flavorMap);
	virtual void startDrag(::java::awt::dnd::DragGestureEvent* trigger, ::java::awt::Cursor* dragCursor, ::java::awt::datatransfer::Transferable* transferable, ::java::awt::dnd::DragSourceListener* dsl, ::java::awt::datatransfer::FlavorMap* flavorMap);
	virtual void startDrag(::java::awt::dnd::DragGestureEvent* trigger, ::java::awt::Cursor* dragCursor, ::java::awt::Image* dragImage, ::java::awt::Point* dragOffset, ::java::awt::datatransfer::Transferable* transferable, ::java::awt::dnd::DragSourceListener* dsl);
	virtual void startDrag(::java::awt::dnd::DragGestureEvent* trigger, ::java::awt::Cursor* dragCursor, ::java::awt::datatransfer::Transferable* transferable, ::java::awt::dnd::DragSourceListener* dsl);
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x568B1124D8628632;
	static ::java::awt::Cursor* DefaultCopyDrop;
	static ::java::awt::Cursor* DefaultMoveDrop;
	static ::java::awt::Cursor* DefaultLinkDrop;
	static ::java::awt::Cursor* DefaultCopyNoDrop;
	static ::java::awt::Cursor* DefaultMoveNoDrop;
	static ::java::awt::Cursor* DefaultLinkNoDrop;
	static ::java::awt::dnd::DragSource* dflt;
	static $String* dragSourceListenerK;
	static $String* dragSourceMotionListenerK;
	::java::awt::datatransfer::FlavorMap* flavorMap = nullptr;
	::java::awt::dnd::DragSourceListener* listener = nullptr;
	::java::awt::dnd::DragSourceMotionListener* motionListener = nullptr;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DragSource_h_