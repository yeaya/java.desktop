#ifndef _java_awt_Window$1_h_
#define _java_awt_Window$1_h_
//$ class java.awt.Window$1
//$ extends sun.awt.AWTAccessor$WindowAccessor

#include <java/lang/Array.h>
#include <sun/awt/AWTAccessor$WindowAccessor.h>

namespace java {
	namespace awt {
		class Window;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class Point2D;
		}
	}
}

namespace java {
	namespace awt {

class Window$1 : public ::sun::awt::AWTAccessor$WindowAccessor {
	$class(Window$1, $NO_CLASS_INIT, ::sun::awt::AWTAccessor$WindowAccessor)
public:
	Window$1();
	void init$();
	virtual ::java::awt::geom::Point2D* calculateSecurityWarningPosition(::java::awt::Window* window, double x, double y, double w, double h) override;
	virtual $Array<::java::awt::Window>* getOwnedWindows(::java::awt::Window* w) override;
	virtual bool isAutoRequestFocus(::java::awt::Window* w) override;
	virtual bool isTrayIconWindow(::java::awt::Window* w) override;
	virtual void setLWRequestStatus(::java::awt::Window* changed, bool status) override;
	virtual void setSecurityWarningSize(::java::awt::Window* window, int32_t width, int32_t height) override;
	virtual void setTrayIconWindow(::java::awt::Window* w, bool isTrayIconWindow) override;
	virtual void updateWindow(::java::awt::Window* window) override;
};

	} // awt
} // java

#endif // _java_awt_Window$1_h_