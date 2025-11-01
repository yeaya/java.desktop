#ifndef _com_sun_java_swing_plaf_windows_WindowsTableHeaderUI$IconBorder_h_
#define _com_sun_java_swing_plaf_windows_WindowsTableHeaderUI$IconBorder_h_
//$ class com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$IconBorder
//$ extends javax.swing.border.Border
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export WindowsTableHeaderUI$IconBorder : public ::javax::swing::border::Border, public ::javax::swing::plaf::UIResource {
	$class(WindowsTableHeaderUI$IconBorder, $NO_CLASS_INIT, ::javax::swing::border::Border, ::javax::swing::plaf::UIResource)
public:
	WindowsTableHeaderUI$IconBorder();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::Icon* icon, int32_t top, int32_t left, int32_t bottom, int32_t right);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c) override;
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual $String* toString() override;
	::javax::swing::Icon* icon = nullptr;
	int32_t top = 0;
	int32_t left = 0;
	int32_t bottom = 0;
	int32_t right = 0;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_WindowsTableHeaderUI$IconBorder_h_