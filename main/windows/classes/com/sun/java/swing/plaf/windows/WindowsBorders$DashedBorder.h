#ifndef _com_sun_java_swing_plaf_windows_WindowsBorders$DashedBorder_h_
#define _com_sun_java_swing_plaf_windows_WindowsBorders$DashedBorder_h_
//$ class com.sun.java.swing.plaf.windows.WindowsBorders$DashedBorder
//$ extends javax.swing.border.LineBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/LineBorder.h>
#include <javax/swing/plaf/UIResource.h>

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

class $export WindowsBorders$DashedBorder : public ::javax::swing::border::LineBorder, public ::javax::swing::plaf::UIResource {
	$class(WindowsBorders$DashedBorder, $NO_CLASS_INIT, ::javax::swing::border::LineBorder, ::javax::swing::plaf::UIResource)
public:
	WindowsBorders$DashedBorder();
	using ::javax::swing::border::LineBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Color* color);
	void init$(::java::awt::Color* color, int32_t thickness);
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual $String* toString() override;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsBorders$DashedBorder_h_