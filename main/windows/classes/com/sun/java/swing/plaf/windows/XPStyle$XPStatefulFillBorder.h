#ifndef _com_sun_java_swing_plaf_windows_XPStyle$XPStatefulFillBorder_h_
#define _com_sun_java_swing_plaf_windows_XPStyle$XPStatefulFillBorder_h_
//$ class com.sun.java.swing.plaf.windows.XPStyle$XPStatefulFillBorder
//$ extends com.sun.java.swing.plaf.windows.XPStyle$XPFillBorder

#include <com/sun/java/swing/plaf/windows/XPStyle$XPFillBorder.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
						class TMSchema$Prop;
						class XPStyle;
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
		class Graphics;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export XPStyle$XPStatefulFillBorder : public ::com::sun::java::swing::plaf::windows::XPStyle$XPFillBorder {
	$class(XPStyle$XPStatefulFillBorder, $NO_CLASS_INIT, ::com::sun::java::swing::plaf::windows::XPStyle$XPFillBorder)
public:
	XPStyle$XPStatefulFillBorder();
	using ::com::sun::java::swing::plaf::windows::XPStyle$XPFillBorder::getBorderInsets;
	void init$(::com::sun::java::swing::plaf::windows::XPStyle* this$0, ::java::awt::Color* color, int32_t thickness, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop);
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	::com::sun::java::swing::plaf::windows::XPStyle* this$0 = nullptr;
	::com::sun::java::swing::plaf::windows::TMSchema$Part* part = nullptr;
	::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_XPStyle$XPStatefulFillBorder_h_