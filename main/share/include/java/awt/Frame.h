#ifndef _java_awt_Frame_h_
#define _java_awt_Frame_h_
//$ class java.awt.Frame
//$ extends java.awt.Window

#include <java/awt/Cursor.h>
#include <java/awt/Window.h>
#include <java/lang/Array.h>

#pragma push_macro("CROSSHAIR_CURSOR")
#undef CROSSHAIR_CURSOR
#pragma push_macro("DEFAULT_CURSOR")
#undef DEFAULT_CURSOR
#pragma push_macro("E_RESIZE_CURSOR")
#undef E_RESIZE_CURSOR
#pragma push_macro("HAND_CURSOR")
#undef HAND_CURSOR
#pragma push_macro("ICONIFIED")
#undef ICONIFIED
#pragma push_macro("MAXIMIZED_BOTH")
#undef MAXIMIZED_BOTH
#pragma push_macro("MAXIMIZED_HORIZ")
#undef MAXIMIZED_HORIZ
#pragma push_macro("MAXIMIZED_VERT")
#undef MAXIMIZED_VERT
#pragma push_macro("MOVE_CURSOR")
#undef MOVE_CURSOR
#pragma push_macro("NE_RESIZE_CURSOR")
#undef NE_RESIZE_CURSOR
#pragma push_macro("NORMAL")
#undef NORMAL
#pragma push_macro("NW_RESIZE_CURSOR")
#undef NW_RESIZE_CURSOR
#pragma push_macro("N_RESIZE_CURSOR")
#undef N_RESIZE_CURSOR
#pragma push_macro("SE_RESIZE_CURSOR")
#undef SE_RESIZE_CURSOR
#pragma push_macro("SW_RESIZE_CURSOR")
#undef SW_RESIZE_CURSOR
#pragma push_macro("S_RESIZE_CURSOR")
#undef S_RESIZE_CURSOR
#pragma push_macro("TEXT_CURSOR")
#undef TEXT_CURSOR
#pragma push_macro("WAIT_CURSOR")
#undef WAIT_CURSOR
#pragma push_macro("W_RESIZE_CURSOR")
#undef W_RESIZE_CURSOR

namespace java {
	namespace awt {
		class Color;
		class GraphicsConfiguration;
		class Image;
		class MenuBar;
		class MenuComponent;
		class Rectangle;
		class Shape;
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
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace java {
	namespace awt {

class $import Frame : public ::java::awt::Window {
	$class(Frame, 0, ::java::awt::Window)
public:
	Frame();
	using ::java::awt::Window::isFocusCycleRoot;
	using ::java::awt::Window::add;
	using ::java::awt::Window::getMousePosition;
	using ::java::awt::Window::list;
	void init$();
	void init$(::java::awt::GraphicsConfiguration* gc);
	void init$($String* title);
	void init$($String* title, ::java::awt::GraphicsConfiguration* gc);
	virtual void addNotify() override;
	virtual $String* constructComponentName() override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual int32_t getCursorType();
	virtual int32_t getExtendedState();
	static $Array<::java::awt::Frame>* getFrames();
	virtual ::java::awt::Image* getIconImage();
	virtual ::java::awt::Rectangle* getMaximizedBounds();
	virtual ::java::awt::MenuBar* getMenuBar();
	virtual int32_t getState();
	virtual $String* getTitle();
	void init($String* title, ::java::awt::GraphicsConfiguration* gc);
	static void initIDs();
	bool isFrameStateSupported(int32_t state);
	virtual bool isResizable();
	virtual bool isUndecorated();
	virtual $String* paramString() override;
	virtual void postProcessKeyEvent(::java::awt::event::KeyEvent* e) override;
	void readObject(::java::io::ObjectInputStream* s);
	using ::java::awt::Window::remove;
	virtual void remove(::java::awt::MenuComponent* m) override;
	virtual void removeNotify() override;
	virtual void setBackground(::java::awt::Color* bgColor) override;
	using ::java::awt::Window::setCursor;
	virtual void setCursor(int32_t cursorType);
	virtual void setExtendedState(int32_t state);
	virtual void setIconImage(::java::awt::Image* image) override;
	virtual void setMaximizedBounds(::java::awt::Rectangle* bounds);
	virtual void setMenuBar(::java::awt::MenuBar* mb);
	virtual void setOpacity(float opacity) override;
	virtual void setResizable(bool resizable);
	virtual void setShape(::java::awt::Shape* shape) override;
	virtual void setState(int32_t state);
	virtual void setTitle($String* title);
	virtual void setUndecorated(bool undecorated);
	using ::java::awt::Window::show;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int32_t DEFAULT_CURSOR = ::java::awt::Cursor::DEFAULT_CURSOR;
	static const int32_t CROSSHAIR_CURSOR = ::java::awt::Cursor::CROSSHAIR_CURSOR;
	static const int32_t TEXT_CURSOR = ::java::awt::Cursor::TEXT_CURSOR;
	static const int32_t WAIT_CURSOR = ::java::awt::Cursor::WAIT_CURSOR;
	static const int32_t SW_RESIZE_CURSOR = ::java::awt::Cursor::SW_RESIZE_CURSOR;
	static const int32_t SE_RESIZE_CURSOR = ::java::awt::Cursor::SE_RESIZE_CURSOR;
	static const int32_t NW_RESIZE_CURSOR = ::java::awt::Cursor::NW_RESIZE_CURSOR;
	static const int32_t NE_RESIZE_CURSOR = ::java::awt::Cursor::NE_RESIZE_CURSOR;
	static const int32_t N_RESIZE_CURSOR = ::java::awt::Cursor::N_RESIZE_CURSOR;
	static const int32_t S_RESIZE_CURSOR = ::java::awt::Cursor::S_RESIZE_CURSOR;
	static const int32_t W_RESIZE_CURSOR = ::java::awt::Cursor::W_RESIZE_CURSOR;
	static const int32_t E_RESIZE_CURSOR = ::java::awt::Cursor::E_RESIZE_CURSOR;
	static const int32_t HAND_CURSOR = ::java::awt::Cursor::HAND_CURSOR;
	static const int32_t MOVE_CURSOR = ::java::awt::Cursor::MOVE_CURSOR;
	static const int32_t NORMAL = 0;
	static const int32_t ICONIFIED = 1;
	static const int32_t MAXIMIZED_HORIZ = 2;
	static const int32_t MAXIMIZED_VERT = 4;
	static const int32_t MAXIMIZED_BOTH = 6; // MAXIMIZED_VERT | MAXIMIZED_HORIZ
	::java::awt::Rectangle* maximizedBounds = nullptr;
	$String* title = nullptr;
	::java::awt::MenuBar* menuBar = nullptr;
	bool resizable = false;
	bool undecorated = false;
	bool mbManagement = false;
	int32_t state = 0;
	::java::util::Vector* ownedWindows = nullptr;
	static $String* base;
	static int32_t nameCounter;
	static const int64_t serialVersionUID = (int64_t)0x251A08C50F4CB36C;
	int32_t frameSerializedDataVersion = 0;
};

	} // awt
} // java

#pragma pop_macro("CROSSHAIR_CURSOR")
#pragma pop_macro("DEFAULT_CURSOR")
#pragma pop_macro("E_RESIZE_CURSOR")
#pragma pop_macro("HAND_CURSOR")
#pragma pop_macro("ICONIFIED")
#pragma pop_macro("MAXIMIZED_BOTH")
#pragma pop_macro("MAXIMIZED_HORIZ")
#pragma pop_macro("MAXIMIZED_VERT")
#pragma pop_macro("MOVE_CURSOR")
#pragma pop_macro("NE_RESIZE_CURSOR")
#pragma pop_macro("NORMAL")
#pragma pop_macro("NW_RESIZE_CURSOR")
#pragma pop_macro("N_RESIZE_CURSOR")
#pragma pop_macro("SE_RESIZE_CURSOR")
#pragma pop_macro("SW_RESIZE_CURSOR")
#pragma pop_macro("S_RESIZE_CURSOR")
#pragma pop_macro("TEXT_CURSOR")
#pragma pop_macro("WAIT_CURSOR")
#pragma pop_macro("W_RESIZE_CURSOR")

#endif // _java_awt_Frame_h_