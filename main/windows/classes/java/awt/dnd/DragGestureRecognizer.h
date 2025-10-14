#ifndef _java_awt_dnd_DragGestureRecognizer_h_
#define _java_awt_dnd_DragGestureRecognizer_h_
//$ class java.awt.dnd.DragGestureRecognizer
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		class Component;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DragGestureListener;
			class DragSource;
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
		class ArrayList;
	}
}

namespace java {
	namespace awt {
		namespace dnd {

class $export DragGestureRecognizer : public ::java::io::Serializable {
	$class(DragGestureRecognizer, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	DragGestureRecognizer();
	void init$(::java::awt::dnd::DragSource* ds, ::java::awt::Component* c, int32_t sa, ::java::awt::dnd::DragGestureListener* dgl);
	void init$(::java::awt::dnd::DragSource* ds, ::java::awt::Component* c, int32_t sa);
	void init$(::java::awt::dnd::DragSource* ds, ::java::awt::Component* c);
	void init$(::java::awt::dnd::DragSource* ds);
	virtual void addDragGestureListener(::java::awt::dnd::DragGestureListener* dgl);
	virtual void appendEvent(::java::awt::event::InputEvent* awtie);
	virtual void fireDragGestureRecognized(int32_t dragAction, ::java::awt::Point* p);
	virtual ::java::awt::Component* getComponent();
	virtual ::java::awt::dnd::DragSource* getDragSource();
	virtual int32_t getSourceActions();
	virtual ::java::awt::event::InputEvent* getTriggerEvent();
	void readObject(::java::io::ObjectInputStream* s);
	virtual void registerListeners() {}
	virtual void removeDragGestureListener(::java::awt::dnd::DragGestureListener* dgl);
	virtual void resetRecognizer();
	virtual void setComponent(::java::awt::Component* c);
	virtual void setSourceActions(int32_t actions);
	virtual void unregisterListeners() {}
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0x7CDA9ABDDA7C4F29;
	::java::awt::dnd::DragSource* dragSource = nullptr;
	::java::awt::Component* component = nullptr;
	::java::awt::dnd::DragGestureListener* dragGestureListener = nullptr;
	int32_t sourceActions = 0;
	::java::util::ArrayList* events = nullptr;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DragGestureRecognizer_h_