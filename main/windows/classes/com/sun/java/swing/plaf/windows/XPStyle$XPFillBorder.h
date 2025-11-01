#ifndef _com_sun_java_swing_plaf_windows_XPStyle$XPFillBorder_h_
#define _com_sun_java_swing_plaf_windows_XPStyle$XPFillBorder_h_
//$ class com.sun.java.swing.plaf.windows.XPStyle$XPFillBorder
//$ extends javax.swing.border.LineBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/LineBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
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
		class Insets;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export XPStyle$XPFillBorder : public ::javax::swing::border::LineBorder, public ::javax::swing::plaf::UIResource {
	$class(XPStyle$XPFillBorder, $NO_CLASS_INIT, ::javax::swing::border::LineBorder, ::javax::swing::plaf::UIResource)
public:
	XPStyle$XPFillBorder();
	using ::javax::swing::border::LineBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::java::swing::plaf::windows::XPStyle* this$0, ::java::awt::Color* color, int32_t thickness);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual $String* toString() override;
	::com::sun::java::swing::plaf::windows::XPStyle* this$0 = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_XPStyle$XPFillBorder_h_