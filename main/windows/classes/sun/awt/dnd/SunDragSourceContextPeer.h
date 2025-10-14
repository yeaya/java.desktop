#ifndef _sun_awt_dnd_SunDragSourceContextPeer_h_
#define _sun_awt_dnd_SunDragSourceContextPeer_h_
//$ class sun.awt.dnd.SunDragSourceContextPeer
//$ extends java.awt.dnd.peer.DragSourceContextPeer

#include <java/awt/dnd/peer/DragSourceContextPeer.h>
#include <java/lang/Array.h>

#pragma push_macro("DISPATCH_CHANGED")
#undef DISPATCH_CHANGED
#pragma push_macro("DISPATCH_ENTER")
#undef DISPATCH_ENTER
#pragma push_macro("DISPATCH_EXIT")
#undef DISPATCH_EXIT
#pragma push_macro("DISPATCH_FINISH")
#undef DISPATCH_FINISH
#pragma push_macro("DISPATCH_MOTION")
#undef DISPATCH_MOTION
#pragma push_macro("DISPATCH_MOUSE_MOVED")
#undef DISPATCH_MOUSE_MOVED

namespace java {
	namespace awt {
		class AWTEvent;
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
			class DragSourceContext;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace awt {
		namespace dnd {

class $export SunDragSourceContextPeer : public ::java::awt::dnd::peer::DragSourceContextPeer {
	$class(SunDragSourceContextPeer, 0, ::java::awt::dnd::peer::DragSourceContextPeer)
public:
	SunDragSourceContextPeer();
	void init$(::java::awt::dnd::DragGestureEvent* dge);
	static void checkDragDropInProgress();
	static bool checkEvent(::java::awt::AWTEvent* event);
	void cleanup();
	static int32_t convertModifiersToDropAction(int32_t modifiers, int32_t supportedActions);
	void dragDropFinished(bool success, int32_t operations, int32_t x, int32_t y);
	virtual void dragEnter(int32_t targetActions, int32_t modifiers, int32_t x, int32_t y);
	void dragExit(int32_t x, int32_t y);
	void dragMotion(int32_t targetActions, int32_t modifiers, int32_t x, int32_t y);
	void dragMouseMoved(int32_t targetActions, int32_t modifiers, int32_t x, int32_t y);
	virtual ::java::awt::Component* getComponent();
	virtual ::java::awt::Cursor* getCursor() override;
	virtual ::java::awt::Image* getDragImage();
	virtual ::java::awt::Point* getDragImageOffset();
	virtual ::java::awt::dnd::DragSourceContext* getDragSourceContext();
	static $String* getExceptionMessage(bool b);
	virtual int64_t getNativeContext();
	virtual ::java::awt::dnd::DragGestureEvent* getTrigger();
	static bool isDragDropInProgress();
	void operationChanged(int32_t targetActions, int32_t modifiers, int32_t x, int32_t y);
	void postDragSourceDragEvent(int32_t targetAction, int32_t modifiers, int32_t x, int32_t y, int32_t dispatchType);
	virtual void quitSecondaryEventLoop();
	virtual void setCursor(::java::awt::Cursor* c) override;
	static void setDragDropInProgress(bool b);
	virtual void setNativeContext(int64_t ctxt);
	virtual void setNativeCursor(int64_t nativeCtxt, ::java::awt::Cursor* c, int32_t cType) {}
	virtual void setTrigger(::java::awt::dnd::DragGestureEvent* dge);
	virtual void startDrag(::java::awt::dnd::DragSourceContext* dsc, ::java::awt::Cursor* c, ::java::awt::Image* di, ::java::awt::Point* p) override;
	virtual void startDrag(::java::awt::datatransfer::Transferable* trans, $longs* formats, ::java::util::Map* formatMap) {}
	virtual void startSecondaryEventLoop();
	virtual void transferablesFlavorsChanged() override;
	::java::awt::dnd::DragGestureEvent* trigger = nullptr;
	::java::awt::Component* component = nullptr;
	::java::awt::Cursor* cursor = nullptr;
	::java::awt::Image* dragImage = nullptr;
	::java::awt::Point* dragImageOffset = nullptr;
	int64_t nativeCtxt = 0;
	::java::awt::dnd::DragSourceContext* dragSourceContext = nullptr;
	int32_t sourceActions = 0;
	static $volatile(bool) dragDropInProgress;
	static $volatile(bool) discardingMouseEvents;
	static const int32_t DISPATCH_ENTER = 1;
	static const int32_t DISPATCH_MOTION = 2;
	static const int32_t DISPATCH_CHANGED = 3;
	static const int32_t DISPATCH_EXIT = 4;
	static const int32_t DISPATCH_FINISH = 5;
	static const int32_t DISPATCH_MOUSE_MOVED = 6;
};

		} // dnd
	} // awt
} // sun

#pragma pop_macro("DISPATCH_CHANGED")
#pragma pop_macro("DISPATCH_ENTER")
#pragma pop_macro("DISPATCH_EXIT")
#pragma pop_macro("DISPATCH_FINISH")
#pragma pop_macro("DISPATCH_MOTION")
#pragma pop_macro("DISPATCH_MOUSE_MOVED")

#endif // _sun_awt_dnd_SunDragSourceContextPeer_h_