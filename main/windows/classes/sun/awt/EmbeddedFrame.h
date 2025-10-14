#ifndef _sun_awt_EmbeddedFrame_h_
#define _sun_awt_EmbeddedFrame_h_
//$ class sun.awt.EmbeddedFrame
//$ extends java.awt.Frame
//$ implements java.awt.KeyEventDispatcher,java.beans.PropertyChangeListener

#include <java/awt/Frame.h>
#include <java/awt/KeyEventDispatcher.h>
#include <java/beans/PropertyChangeListener.h>

#pragma push_macro("BACKWARD")
#undef BACKWARD
#pragma push_macro("FORWARD")
#undef FORWARD

namespace java {
	namespace applet {
		class Applet;
	}
}
namespace java {
	namespace awt {
		class AWTKeyStroke;
		class Component;
		class Container;
		class Cursor;
		class Dialog;
		class Image;
		class KeyboardFocusManager;
		class MenuBar;
		class MenuComponent;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class KeyEvent;
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
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace sun {
	namespace awt {

class $export EmbeddedFrame : public ::java::awt::Frame, public ::java::awt::KeyEventDispatcher, public ::java::beans::PropertyChangeListener {
	$class(EmbeddedFrame, $NO_CLASS_INIT, ::java::awt::Frame, ::java::awt::KeyEventDispatcher, ::java::beans::PropertyChangeListener)
public:
	EmbeddedFrame();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::Frame::add;
	using ::java::awt::Frame::getMousePosition;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(bool supportsXEmbed);
	void init$();
	void init$(int32_t handle);
	void init$(int64_t handle);
	void init$(int64_t handle, bool supportsXEmbed);
	virtual void addNotify() override;
	void addTraversingOutListeners(::java::awt::KeyboardFocusManager* kfm);
	virtual bool dispatchKeyEvent(::java::awt::event::KeyEvent* e) override;
	static ::java::applet::Applet* getAppletIfAncestorOf(::java::awt::Component* comp);
	virtual ::java::awt::Rectangle* getBoundsPrivate();
	virtual ::java::awt::Cursor* getCursor() override;
	virtual ::java::awt::Point* getLocationPrivate();
	virtual ::java::awt::Container* getParent() override;
	virtual void hide() override;
	virtual bool isCursorAllowed();
	using ::java::awt::Frame::isFocusCycleRoot;
	virtual bool isResizable() override;
	using ::java::awt::Frame::list;
	virtual void notifyModalBlocked(::java::awt::Dialog* blocker, bool blocked);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual void registerAccelerator(::java::awt::AWTKeyStroke* stroke) {}
	virtual void registerListeners();
	using ::java::awt::Frame::remove;
	virtual void remove(::java::awt::MenuComponent* m) override;
	void removeTraversingOutListeners(::java::awt::KeyboardFocusManager* kfm);
	virtual void setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height);
	using ::java::awt::Frame::setCursor;
	virtual void setCursorAllowed(bool isCursorAllowed);
	virtual void setIconImage(::java::awt::Image* image) override;
	virtual void setIconImages(::java::util::List* icons) override;
	virtual void setLocationPrivate(int32_t x, int32_t y);
	virtual void setMenuBar(::java::awt::MenuBar* mb) override;
	virtual void setPeer(::java::awt::peer::ComponentPeer* p);
	virtual void setResizable(bool resizable) override;
	virtual void setTitle($String* title) override;
	using ::java::awt::Frame::show;
	virtual void show() override;
	virtual bool supportsXEmbed();
	virtual void synthesizeWindowActivation(bool doActivate);
	virtual void toBack() override;
	virtual void toFront() override;
	virtual $String* toString() override;
	virtual bool traverseIn(bool direction);
	virtual bool traverseOut(bool direction);
	virtual void unregisterAccelerator(::java::awt::AWTKeyStroke* stroke) {}
	bool isCursorAllowed$ = false;
	bool supportsXEmbed$ = false;
	::java::awt::KeyboardFocusManager* appletKFM = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x292D0DA7513783CA;
	static const bool FORWARD = true;
	static const bool BACKWARD = false;
};

	} // awt
} // sun

#pragma pop_macro("BACKWARD")
#pragma pop_macro("FORWARD")

#endif // _sun_awt_EmbeddedFrame_h_