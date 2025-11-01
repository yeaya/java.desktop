#ifndef _java_awt_dnd_DragSourceContext_h_
#define _java_awt_dnd_DragSourceContext_h_
//$ class java.awt.dnd.DragSourceContext
//$ extends java.awt.dnd.DragSourceListener
//$ implements java.awt.dnd.DragSourceMotionListener,java.io.Serializable

#include <java/awt/dnd/DragSourceListener.h>
#include <java/awt/dnd/DragSourceMotionListener.h>
#include <java/io/Serializable.h>

#pragma push_macro("CHANGED")
#undef CHANGED
#pragma push_macro("DEFAULT")
#undef DEFAULT
#pragma push_macro("ENTER")
#undef ENTER
#pragma push_macro("OVER")
#undef OVER

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
			class DragGestureEvent;
			class DragSource;
			class DragSourceDragEvent;
			class DragSourceDropEvent;
			class DragSourceEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			namespace peer {
				class DragSourceContextPeer;
			}
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
	namespace awt {
		namespace dnd {

class $import DragSourceContext : public ::java::awt::dnd::DragSourceListener, public ::java::awt::dnd::DragSourceMotionListener, public ::java::io::Serializable {
	$class(DragSourceContext, 0, ::java::awt::dnd::DragSourceListener, ::java::awt::dnd::DragSourceMotionListener, ::java::io::Serializable)
public:
	DragSourceContext();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::dnd::DragGestureEvent* trigger, ::java::awt::Cursor* dragCursor, ::java::awt::Image* dragImage, ::java::awt::Point* offset, ::java::awt::datatransfer::Transferable* t, ::java::awt::dnd::DragSourceListener* dsl);
	virtual void addDragSourceListener(::java::awt::dnd::DragSourceListener* dsl);
	virtual void dragDropEnd(::java::awt::dnd::DragSourceDropEvent* dsde) override;
	virtual void dragEnter(::java::awt::dnd::DragSourceDragEvent* dsde) override;
	virtual void dragExit(::java::awt::dnd::DragSourceEvent* dse) override;
	virtual void dragMouseMoved(::java::awt::dnd::DragSourceDragEvent* dsde) override;
	virtual void dragOver(::java::awt::dnd::DragSourceDragEvent* dsde) override;
	virtual void dropActionChanged(::java::awt::dnd::DragSourceDragEvent* dsde) override;
	virtual ::java::awt::Component* getComponent();
	virtual ::java::awt::Cursor* getCursor();
	virtual ::java::awt::dnd::DragSource* getDragSource();
	virtual int32_t getSourceActions();
	virtual ::java::awt::datatransfer::Transferable* getTransferable();
	virtual ::java::awt::dnd::DragGestureEvent* getTrigger();
	static ::java::awt::dnd::peer::DragSourceContextPeer* lambda$static$0(::java::awt::dnd::DragSourceContext* dsc);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removeDragSourceListener(::java::awt::dnd::DragSourceListener* dsl);
	virtual void setCursor(::java::awt::Cursor* c);
	void setCursorImpl(::java::awt::Cursor* c);
	virtual $String* toString() override;
	virtual void transferablesFlavorsChanged();
	virtual void updateCurrentCursor(int32_t sourceAct, int32_t targetAct, int32_t status);
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0xFE65FD20AA2D6E61;
	static const int32_t DEFAULT = 0;
	static const int32_t ENTER = 1;
	static const int32_t OVER = 2;
	static const int32_t CHANGED = 3;
	static ::java::awt::datatransfer::Transferable* emptyTransferable;
	::java::awt::dnd::peer::DragSourceContextPeer* peer = nullptr;
	::java::awt::dnd::DragGestureEvent* trigger = nullptr;
	::java::awt::Cursor* cursor = nullptr;
	::java::awt::datatransfer::Transferable* transferable = nullptr;
	::java::awt::dnd::DragSourceListener* listener = nullptr;
	bool useCustomCursor = false;
	int32_t sourceActions = 0;
};

		} // dnd
	} // awt
} // java

#pragma pop_macro("CHANGED")
#pragma pop_macro("DEFAULT")
#pragma pop_macro("ENTER")
#pragma pop_macro("OVER")

#endif // _java_awt_dnd_DragSourceContext_h_