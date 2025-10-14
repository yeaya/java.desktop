#ifndef _java_awt_dnd_DragGestureEvent_h_
#define _java_awt_dnd_DragGestureEvent_h_
//$ class java.awt.dnd.DragGestureEvent
//$ extends java.util.EventObject

#include <java/lang/Array.h>
#include <java/util/EventObject.h>

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
			class Transferable;
		}
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DragGestureRecognizer;
			class DragSource;
			class DragSourceListener;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class InputEvent;
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
		class Iterator;
		class List;
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class $export DragGestureEvent : public ::java::util::EventObject {
	$class(DragGestureEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	DragGestureEvent();
	void init$(::java::awt::dnd::DragGestureRecognizer* dgr, int32_t act, ::java::awt::Point* ori, ::java::util::List* evs);
	virtual ::java::awt::Component* getComponent();
	virtual int32_t getDragAction();
	virtual ::java::awt::Point* getDragOrigin();
	virtual ::java::awt::dnd::DragSource* getDragSource();
	virtual ::java::awt::dnd::DragGestureRecognizer* getSourceAsDragGestureRecognizer();
	virtual ::java::awt::event::InputEvent* getTriggerEvent();
	virtual ::java::util::Iterator* iterator();
	void readObject(::java::io::ObjectInputStream* s);
	virtual void startDrag(::java::awt::Cursor* dragCursor, ::java::awt::datatransfer::Transferable* transferable);
	virtual void startDrag(::java::awt::Cursor* dragCursor, ::java::awt::datatransfer::Transferable* transferable, ::java::awt::dnd::DragSourceListener* dsl);
	virtual void startDrag(::java::awt::Cursor* dragCursor, ::java::awt::Image* dragImage, ::java::awt::Point* imageOffset, ::java::awt::datatransfer::Transferable* transferable, ::java::awt::dnd::DragSourceListener* dsl);
	virtual $ObjectArray* toArray();
	virtual $ObjectArray* toArray($ObjectArray* array);
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x7E0340EA64CCF82A;
	::java::util::List* events = nullptr;
	::java::awt::dnd::DragSource* dragSource = nullptr;
	::java::awt::Component* component = nullptr;
	::java::awt::Point* origin = nullptr;
	int32_t action = 0;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DragGestureEvent_h_