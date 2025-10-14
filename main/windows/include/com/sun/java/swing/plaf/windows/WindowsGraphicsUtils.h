#ifndef _com_sun_java_swing_plaf_windows_WindowsGraphicsUtils_h_
#define _com_sun_java_swing_plaf_windows_WindowsGraphicsUtils_h_
//$ class com.sun.java.swing.plaf.windows.WindowsGraphicsUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
						class TMSchema$State;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Component;
		class Container;
		class Graphics;
		class Rectangle;
		class Window;
	}
}
namespace javax {
	namespace swing {
		class AbstractButton;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsGraphicsUtils : public ::java::lang::Object {
	$class(WindowsGraphicsUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	WindowsGraphicsUtils();
	void init$();
	static ::java::awt::Color* getDisabledTextColor(::javax::swing::AbstractButton* b);
	static bool isLeftToRight(::java::awt::Component* c);
	static void paintClassicText(::javax::swing::AbstractButton* b, ::java::awt::Graphics* g, int32_t x, int32_t y, $String* text, int32_t mnemIndex);
	static void paintText(::java::awt::Graphics* g, ::javax::swing::AbstractButton* b, ::java::awt::Rectangle* textRect, $String* text, int32_t textShiftOffset);
	static void paintXPText(::javax::swing::AbstractButton* b, ::java::awt::Graphics* g, int32_t x, int32_t y, $String* text, int32_t mnemIndex);
	static void paintXPText(::javax::swing::AbstractButton* b, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state, ::java::awt::Graphics* g, int32_t x, int32_t y, $String* text, int32_t mnemIndex);
	static void repaintMnemonicsInContainer(::java::awt::Container* cont);
	static void repaintMnemonicsInWindow(::java::awt::Window* w);
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsGraphicsUtils_h_