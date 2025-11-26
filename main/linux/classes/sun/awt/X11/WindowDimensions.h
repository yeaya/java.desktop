#ifndef _sun_awt_X11_WindowDimensions_h_
#define _sun_awt_X11_WindowDimensions_h_
//$ class sun.awt.X11.WindowDimensions
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Dimension;
		class Insets;
		class Point;
		class Rectangle;
	}
}

namespace sun {
	namespace awt {
		namespace X11 {

class WindowDimensions : public ::java::lang::Object {
	$class(WindowDimensions, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowDimensions();
	void init$(int32_t x, int32_t y, int32_t width, int32_t height, bool isClient);
	void init$(::java::awt::Rectangle* rec, ::java::awt::Insets* ins, bool isClient);
	void init$(::java::awt::Point* loc, ::java::awt::Dimension* size, ::java::awt::Insets* in, bool isClient);
	void init$(::java::awt::Rectangle* bounds, bool isClient);
	void init$(::sun::awt::X11::WindowDimensions* dims);
	virtual bool equals(Object$* o) override;
	virtual ::java::awt::Rectangle* getBounds();
	virtual ::java::awt::Rectangle* getClientRect();
	virtual ::java::awt::Dimension* getClientSize();
	virtual ::java::awt::Insets* getInsets();
	virtual ::java::awt::Point* getLocation();
	virtual ::java::awt::Rectangle* getScreenBounds();
	virtual ::java::awt::Dimension* getSize();
	virtual int32_t hashCode() override;
	virtual bool isClientSizeSet();
	virtual void setClientSize(::java::awt::Dimension* size);
	virtual void setClientSize(int32_t width, int32_t height);
	virtual void setInsets(::java::awt::Insets* in);
	virtual void setLocation(int32_t x, int32_t y);
	virtual void setSize(int32_t width, int32_t height);
	virtual $String* toString() override;
	::java::awt::Point* loc = nullptr;
	::java::awt::Dimension* size = nullptr;
	::java::awt::Insets* insets = nullptr;
	bool isClientSizeSet$ = false;
};

		} // X11
	} // awt
} // sun

#endif // _sun_awt_X11_WindowDimensions_h_