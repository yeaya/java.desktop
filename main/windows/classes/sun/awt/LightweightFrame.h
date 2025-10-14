#ifndef _sun_awt_LightweightFrame_h_
#define _sun_awt_LightweightFrame_h_
//$ class sun.awt.LightweightFrame
//$ extends java.awt.Frame

#include <java/awt/Frame.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Graphics;
		class Image;
		class MenuBar;
		class MenuComponent;
		class Rectangle;
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
namespace java {
	namespace awt {
		namespace peer {
			class FramePeer;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace awt {

class $export LightweightFrame : public ::java::awt::Frame {
	$class(LightweightFrame, $NO_CLASS_INIT, ::java::awt::Frame)
public:
	LightweightFrame();
	using ::java::awt::Frame::add;
	using ::java::awt::Frame::getMousePosition;
	void init$();
	virtual void addDropTarget(::java::awt::dnd::DropTarget* dt) {}
	virtual void addNotify() override;
	virtual ::java::awt::dnd::DragGestureRecognizer* createDragGestureRecognizer($Class* abstractRecognizerClass, ::java::awt::dnd::DragSource* ds, ::java::awt::Component* c, int32_t srcActions, ::java::awt::dnd::DragGestureListener* dgl) {return nullptr;}
	virtual ::java::awt::dnd::peer::DragSourceContextPeer* createDragSourceContextPeer(::java::awt::dnd::DragGestureEvent* dge) {return nullptr;}
	virtual void emulateActivation(bool activate);
	virtual ::java::awt::Graphics* getGraphics() override;
	virtual ::java::awt::Rectangle* getHostBounds();
	virtual ::java::awt::Container* getParent() override;
	virtual int32_t getScaleFactor() {return 0;}
	virtual double getScaleFactorX() {return 0.0;}
	virtual double getScaleFactorY() {return 0.0;}
	virtual void grabFocus() {}
	using ::java::awt::Frame::isFocusCycleRoot;
	virtual bool isResizable() override;
	using ::java::awt::Frame::list;
	virtual void notifyDisplayChanged(int32_t scaleFactor) {}
	virtual void notifyDisplayChanged(double scaleFactorX, double scaleFactorY) {}
	using ::java::awt::Frame::remove;
	virtual void remove(::java::awt::MenuComponent* m) override;
	virtual void removeDropTarget(::java::awt::dnd::DropTarget* dt) {}
	using ::java::awt::Frame::setCursor;
	virtual void setHostBounds(int32_t x, int32_t y, int32_t w, int32_t h);
	virtual void setIconImage(::java::awt::Image* image) override;
	virtual void setIconImages(::java::util::List* icons) override;
	virtual void setMenuBar(::java::awt::MenuBar* mb) override;
	void setPeer(::java::awt::peer::FramePeer* p);
	virtual void setResizable(bool resizable) override;
	virtual void setTitle($String* title) override;
	using ::java::awt::Frame::show;
	virtual void toBack() override;
	virtual void toFront() override;
	virtual void ungrabFocus() {}
	int32_t hostX = 0;
	int32_t hostY = 0;
	int32_t hostW = 0;
	int32_t hostH = 0;
};

	} // awt
} // sun

#endif // _sun_awt_LightweightFrame_h_