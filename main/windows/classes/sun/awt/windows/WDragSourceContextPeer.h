#ifndef _sun_awt_windows_WDragSourceContextPeer_h_
#define _sun_awt_windows_WDragSourceContextPeer_h_
//$ class sun.awt.windows.WDragSourceContextPeer
//$ extends sun.awt.dnd.SunDragSourceContextPeer

#include <java/lang/Array.h>
#include <sun/awt/dnd/SunDragSourceContextPeer.h>

namespace java {
	namespace awt {
		class Component;
		class Cursor;
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
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace awt {
		namespace windows {

class WDragSourceContextPeer : public ::sun::awt::dnd::SunDragSourceContextPeer {
	$class(WDragSourceContextPeer, 0, ::sun::awt::dnd::SunDragSourceContextPeer)
public:
	WDragSourceContextPeer();
	void init$(::java::awt::dnd::DragGestureEvent* dge);
	int64_t createDragSource(::java::awt::Component* component, ::java::awt::datatransfer::Transferable* transferable, ::java::awt::event::InputEvent* nativeTrigger, int32_t actions, $longs* formats, ::java::util::Map* formatMap);
	static ::sun::awt::windows::WDragSourceContextPeer* createDragSourceContextPeer(::java::awt::dnd::DragGestureEvent* dge);
	void doDragDrop(int64_t nativeCtxt, ::java::awt::Cursor* cursor, $ints* imageData, int32_t imgWidth, int32_t imgHight, int32_t offsetX, int32_t offsetY);
	virtual void quitSecondaryEventLoop() override;
	virtual void setNativeCursor(int64_t nativeCtxt, ::java::awt::Cursor* c, int32_t cType) override;
	using ::sun::awt::dnd::SunDragSourceContextPeer::startDrag;
	virtual void startDrag(::java::awt::datatransfer::Transferable* trans, $longs* formats, ::java::util::Map* formatMap) override;
	virtual void startSecondaryEventLoop() override;
	static ::sun::awt::windows::WDragSourceContextPeer* theInstance;
};

		} // windows
	} // awt
} // sun

#endif // _sun_awt_windows_WDragSourceContextPeer_h_