#ifndef _java_awt_dnd_DnDEventMulticaster_h_
#define _java_awt_dnd_DnDEventMulticaster_h_
//$ class java.awt.dnd.DnDEventMulticaster
//$ extends java.awt.AWTEventMulticaster
//$ implements java.awt.dnd.DragSourceListener,java.awt.dnd.DragSourceMotionListener

#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/dnd/DragSourceListener.h>
#include <java/awt/dnd/DragSourceMotionListener.h>

namespace java {
	namespace awt {
		namespace dnd {
			class DragSourceDragEvent;
			class DragSourceDropEvent;
			class DragSourceEvent;
		}
	}
}
namespace java {
	namespace io {
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

class DnDEventMulticaster : public ::java::awt::AWTEventMulticaster, public ::java::awt::dnd::DragSourceListener, public ::java::awt::dnd::DragSourceMotionListener {
	$class(DnDEventMulticaster, $NO_CLASS_INIT, ::java::awt::AWTEventMulticaster, ::java::awt::dnd::DragSourceListener, ::java::awt::dnd::DragSourceMotionListener)
public:
	DnDEventMulticaster();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::EventListener* a, ::java::util::EventListener* b);
	static ::java::awt::dnd::DragSourceListener* add(::java::awt::dnd::DragSourceListener* a, ::java::awt::dnd::DragSourceListener* b);
	static ::java::awt::dnd::DragSourceMotionListener* add(::java::awt::dnd::DragSourceMotionListener* a, ::java::awt::dnd::DragSourceMotionListener* b);
	static ::java::util::EventListener* addInternal(::java::util::EventListener* a, ::java::util::EventListener* b);
	virtual void dragDropEnd(::java::awt::dnd::DragSourceDropEvent* dsde) override;
	virtual void dragEnter(::java::awt::dnd::DragSourceDragEvent* dsde) override;
	virtual void dragExit(::java::awt::dnd::DragSourceEvent* dse) override;
	virtual void dragMouseMoved(::java::awt::dnd::DragSourceDragEvent* dsde) override;
	virtual void dragOver(::java::awt::dnd::DragSourceDragEvent* dsde) override;
	virtual void dropActionChanged(::java::awt::dnd::DragSourceDragEvent* dsde) override;
	static ::java::awt::dnd::DragSourceListener* remove(::java::awt::dnd::DragSourceListener* l, ::java::awt::dnd::DragSourceListener* oldl);
	static ::java::awt::dnd::DragSourceMotionListener* remove(::java::awt::dnd::DragSourceMotionListener* l, ::java::awt::dnd::DragSourceMotionListener* ol);
	virtual ::java::util::EventListener* remove(::java::util::EventListener* oldl) override;
	static ::java::util::EventListener* removeInternal(::java::util::EventListener* l, ::java::util::EventListener* oldl);
	static void save(::java::io::ObjectOutputStream* s, $String* k, ::java::util::EventListener* l);
	virtual $String* toString() override;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DnDEventMulticaster_h_