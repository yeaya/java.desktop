#ifndef _com_sun_java_swing_plaf_windows_XPStyle$XPEmptyBorder_h_
#define _com_sun_java_swing_plaf_windows_XPStyle$XPEmptyBorder_h_
//$ class com.sun.java.swing.plaf.windows.XPStyle$XPEmptyBorder
//$ extends javax.swing.border.EmptyBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/EmptyBorder.h>
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

class $export XPStyle$XPEmptyBorder : public ::javax::swing::border::EmptyBorder, public ::javax::swing::plaf::UIResource {
	$class(XPStyle$XPEmptyBorder, $NO_CLASS_INIT, ::javax::swing::border::EmptyBorder, ::javax::swing::plaf::UIResource)
public:
	XPStyle$XPEmptyBorder();
	using ::javax::swing::border::EmptyBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::java::swing::plaf::windows::XPStyle* this$0, ::java::awt::Insets* m);
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

#endif // _com_sun_java_swing_plaf_windows_XPStyle$XPEmptyBorder_h_