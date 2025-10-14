#ifndef _sun_swing_LightweightContent_h_
#define _sun_swing_LightweightContent_h_
//$ interface sun.swing.LightweightContent
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
		class Cursor;
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DragGestureEvent;
			class DragGestureListener;
			class DragGestureRecognizer;
			class DragSource;
			class DropTarget;
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
namespace javax {
	namespace swing {
		class JComponent;
	}
}

namespace sun {
	namespace swing {

class $export LightweightContent : public ::java::lang::Object {
	$interface(LightweightContent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addDropTarget(::java::awt::dnd::DropTarget* dt);
	virtual ::java::awt::dnd::DragGestureRecognizer* createDragGestureRecognizer($Class* abstractRecognizerClass, ::java::awt::dnd::DragSource* ds, ::java::awt::Component* c, int32_t srcActions, ::java::awt::dnd::DragGestureListener* dgl);
	virtual ::java::awt::dnd::peer::DragSourceContextPeer* createDragSourceContextPeer(::java::awt::dnd::DragGestureEvent* dge);
	virtual void focusGrabbed() {}
	virtual void focusUngrabbed() {}
	virtual ::javax::swing::JComponent* getComponent() {return nullptr;}
	virtual void imageBufferReset($ints* data, int32_t x, int32_t y, int32_t width, int32_t height, int32_t linestride, int32_t scale);
	virtual void imageBufferReset($ints* data, int32_t x, int32_t y, int32_t width, int32_t height, int32_t linestride, double scaleX, double scaleY);
	virtual void imageBufferReset($ints* data, int32_t x, int32_t y, int32_t width, int32_t height, int32_t linestride);
	virtual void imageReshaped(int32_t x, int32_t y, int32_t width, int32_t height) {}
	virtual void imageUpdated(int32_t dirtyX, int32_t dirtyY, int32_t dirtyWidth, int32_t dirtyHeight) {}
	virtual void maximumSizeChanged(int32_t width, int32_t height) {}
	virtual void minimumSizeChanged(int32_t width, int32_t height) {}
	virtual void paintLock() {}
	virtual void paintUnlock() {}
	virtual void preferredSizeChanged(int32_t width, int32_t height) {}
	virtual void removeDropTarget(::java::awt::dnd::DropTarget* dt);
	virtual void setCursor(::java::awt::Cursor* cursor);
};

	} // swing
} // sun

#endif // _sun_swing_LightweightContent_h_