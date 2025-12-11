#ifndef _sun_lwawt_macosx_CDragSourceContextPeer_h_
#define _sun_lwawt_macosx_CDragSourceContextPeer_h_
//$ class sun.lwawt.macosx.CDragSourceContextPeer
//$ extends sun.awt.dnd.SunDragSourceContextPeer

#include <java/lang/Array.h>
#include <sun/awt/dnd/SunDragSourceContextPeer.h>

namespace java {
	namespace awt {
		class Component;
		class Cursor;
		class Image;
		class Point;
		class Rectangle;
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
	namespace awt {
		namespace event {
			class InputEvent;
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace swing {
		class JList;
		class JTable;
		class JTree;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}
namespace sun {
	namespace lwawt {
		namespace macosx {
			class CImage;
		}
	}
}

namespace sun {
	namespace lwawt {
		namespace macosx {

class CDragSourceContextPeer : public ::sun::awt::dnd::SunDragSourceContextPeer {
	$class(CDragSourceContextPeer, 0, ::sun::awt::dnd::SunDragSourceContextPeer)
public:
	CDragSourceContextPeer();
	void init$(::java::awt::dnd::DragGestureEvent* dge);
	static ::sun::lwawt::macosx::CDragSourceContextPeer* createDragSourceContextPeer(::java::awt::dnd::DragGestureEvent* dge);
	int64_t createNativeDragSource(::java::awt::Component* component, int64_t nativePeer, ::java::awt::datatransfer::Transferable* transferable, ::java::awt::event::InputEvent* triggerEvent, int32_t dragPosX, int32_t dragPosY, int32_t extModifiers, int32_t clickCount, int64_t timestamp, int64_t nsDragImagePtr, int32_t dragImageOffsetX, int32_t dragImageOffsetY, int32_t sourceActions, $longs* formats, ::java::util::Map* formatMap);
	void doDragging(int64_t nativeDragSource);
	void dragMouseMoved(int32_t targetActions, int32_t modifiers, int32_t x, int32_t y);
	static ::java::awt::Component* getDropTargetAt(::java::awt::Component* root, int32_t x, int32_t y);
	void lambda$startDrag$0();
	void releaseNativeDragSource(int64_t nativeDragSource);
	void resetHovering();
	void setDefaultDragImage(::java::awt::Component* component);
	void setDefaultDragImage(::javax::swing::text::JTextComponent* component);
	void setDefaultDragImage(::javax::swing::JTree* component);
	void setDefaultDragImage(::javax::swing::JTable* component);
	void setDefaultDragImage(::javax::swing::JList* component);
	void setDefaultDragImage();
	virtual void setNativeCursor(int64_t nativeCtxt, ::java::awt::Cursor* c, int32_t cType) override;
	void setOutlineDragImage(::java::awt::Rectangle* outline);
	void setOutlineDragImage(::java::awt::Rectangle* outline, ::java::lang::Boolean* shouldScale);
	virtual void startDrag(::java::awt::dnd::DragSourceContext* dsc, ::java::awt::Cursor* cursor, ::java::awt::Image* dragImage, ::java::awt::Point* dragImageOffset) override;
	virtual void startDrag(::java::awt::datatransfer::Transferable* transferable, $longs* formats, ::java::util::Map* formatMap) override;
	static ::sun::lwawt::macosx::CDragSourceContextPeer* fInstance;
	::java::awt::Image* fDragImage = nullptr;
	::sun::lwawt::macosx::CImage* fDragCImage = nullptr;
	::java::awt::Point* fDragImageOffset = nullptr;
	static ::java::awt::Component* hoveringComponent;
	static double fMaxImageSize;
};

		} // macosx
	} // lwawt
} // sun

#endif // _sun_lwawt_macosx_CDragSourceContextPeer_h_