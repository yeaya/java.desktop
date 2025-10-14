#ifndef _java_awt_dnd_DropTarget_h_
#define _java_awt_dnd_DropTarget_h_
//$ class java.awt.dnd.DropTarget
//$ extends java.awt.dnd.DropTargetListener
//$ implements java.io.Serializable

#include <java/awt/dnd/DropTargetListener.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		class Component;
		class Point;
	}
}
namespace java {
	namespace awt {
		namespace datatransfer {
			class FlavorMap;
		}
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DropTarget$DropTargetAutoScroller;
			class DropTargetContext;
			class DropTargetDragEvent;
			class DropTargetDropEvent;
			class DropTargetEvent;
		}
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			namespace peer {
				class DropTargetPeer;
			}
		}
	}
}
namespace java {
	namespace awt {
		namespace peer {
			class ComponentPeer;
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

class $export DropTarget : public ::java::awt::dnd::DropTargetListener, public ::java::io::Serializable {
	$class(DropTarget, $NO_CLASS_INIT, ::java::awt::dnd::DropTargetListener, ::java::io::Serializable)
public:
	DropTarget();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Component* c, int32_t ops, ::java::awt::dnd::DropTargetListener* dtl, bool act, ::java::awt::datatransfer::FlavorMap* fm);
	void init$(::java::awt::Component* c, int32_t ops, ::java::awt::dnd::DropTargetListener* dtl, bool act);
	void init$();
	void init$(::java::awt::Component* c, ::java::awt::dnd::DropTargetListener* dtl);
	void init$(::java::awt::Component* c, int32_t ops, ::java::awt::dnd::DropTargetListener* dtl);
	virtual void addDropTargetListener(::java::awt::dnd::DropTargetListener* dtl);
	virtual void addNotify();
	virtual void clearAutoscroll();
	virtual ::java::awt::dnd::DropTarget$DropTargetAutoScroller* createDropTargetAutoScroller(::java::awt::Component* c, ::java::awt::Point* p);
	virtual ::java::awt::dnd::DropTargetContext* createDropTargetContext();
	virtual void doSetDefaultActions(int32_t ops);
	virtual void dragEnter(::java::awt::dnd::DropTargetDragEvent* dtde) override;
	virtual void dragExit(::java::awt::dnd::DropTargetEvent* dte) override;
	virtual void dragOver(::java::awt::dnd::DropTargetDragEvent* dtde) override;
	virtual void drop(::java::awt::dnd::DropTargetDropEvent* dtde) override;
	virtual void dropActionChanged(::java::awt::dnd::DropTargetDragEvent* dtde) override;
	virtual ::java::awt::Component* getComponent();
	virtual int32_t getDefaultActions();
	virtual ::java::awt::dnd::DropTargetContext* getDropTargetContext();
	virtual ::java::awt::datatransfer::FlavorMap* getFlavorMap();
	virtual void initializeAutoscrolling(::java::awt::Point* p);
	virtual bool isActive();
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removeDropTargetListener(::java::awt::dnd::DropTargetListener* dtl);
	virtual void removeNotify();
	virtual void setActive(bool isActive);
	virtual void setComponent(::java::awt::Component* c);
	virtual void setDefaultActions(int32_t ops);
	virtual void setFlavorMap(::java::awt::datatransfer::FlavorMap* fm);
	virtual $String* toString() override;
	virtual void updateAutoscroll(::java::awt::Point* dragCursorLocn);
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0xA8CB3DE73E71A9D9;
	::java::awt::dnd::DropTargetContext* dropTargetContext = nullptr;
	::java::awt::Component* component = nullptr;
	::java::awt::peer::ComponentPeer* componentPeer = nullptr;
	::java::awt::dnd::peer::DropTargetPeer* nativePeer = nullptr;
	int32_t actions = 0;
	bool active = false;
	::java::awt::dnd::DropTarget$DropTargetAutoScroller* autoScroller = nullptr;
	::java::awt::dnd::DropTargetListener* dtListener = nullptr;
	::java::awt::datatransfer::FlavorMap* flavorMap = nullptr;
	bool isDraggingInside = false;
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_DropTarget_h_