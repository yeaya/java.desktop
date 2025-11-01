#ifndef _com_sun_java_swing_plaf_windows_WindowsBorders$ToolBarBorder_h_
#define _com_sun_java_swing_plaf_windows_WindowsBorders$ToolBarBorder_h_
//$ class com.sun.java.swing.plaf.windows.WindowsBorders$ToolBarBorder
//$ extends javax.swing.border.AbstractBorder
//$ implements javax.swing.plaf.UIResource,javax.swing.SwingConstants

#include <javax/swing/SwingConstants.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Graphics;
		class Insets;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsBorders$ToolBarBorder : public ::javax::swing::border::AbstractBorder, public ::javax::swing::plaf::UIResource, public ::javax::swing::SwingConstants {
	$class(WindowsBorders$ToolBarBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder, ::javax::swing::plaf::UIResource, ::javax::swing::SwingConstants)
public:
	WindowsBorders$ToolBarBorder();
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Color* shadow, ::java::awt::Color* highlight);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual $String* toString() override;
	::java::awt::Color* shadow = nullptr;
	::java::awt::Color* highlight = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsBorders$ToolBarBorder_h_