#ifndef _com_sun_java_swing_plaf_windows_WindowsScrollBarUI$Grid_h_
#define _com_sun_java_swing_plaf_windows_WindowsScrollBarUI$Grid_h_
//$ class com.sun.java.swing.plaf.windows.WindowsScrollBarUI$Grid
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("BUFFER_SIZE")
#undef BUFFER_SIZE

namespace java {
	namespace awt {
		class Color;
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace image {
			class BufferedImage;
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsScrollBarUI$Grid : public ::java::lang::Object {
	$class(WindowsScrollBarUI$Grid, 0, ::java::lang::Object)
public:
	WindowsScrollBarUI$Grid();
	void init$(::java::awt::Color* fg, ::java::awt::Color* bg);
	static ::com::sun::java::swing::plaf::windows::WindowsScrollBarUI$Grid* getGrid(::java::awt::Color* fg, ::java::awt::Color* bg);
	virtual void paint(::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h);
	void paintGrid(::java::awt::Graphics* g, ::java::awt::Color* fg, ::java::awt::Color* bg);
	static const int32_t BUFFER_SIZE = 64;
	static ::java::util::HashMap* map;
	::java::awt::image::BufferedImage* image = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("BUFFER_SIZE")

#endif // _com_sun_java_swing_plaf_windows_WindowsScrollBarUI$Grid_h_