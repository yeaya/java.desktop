#ifndef _com_sun_java_swing_plaf_windows_XPStyle$XPImageBorder_h_
#define _com_sun_java_swing_plaf_windows_XPStyle$XPImageBorder_h_
//$ class com.sun.java.swing.plaf.windows.XPStyle$XPImageBorder
//$ extends javax.swing.border.AbstractBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
						class XPStyle;
						class XPStyle$Skin;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
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

class $export XPStyle$XPImageBorder : public ::javax::swing::border::AbstractBorder, public ::javax::swing::plaf::UIResource {
	$class(XPStyle$XPImageBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder, ::javax::swing::plaf::UIResource)
public:
	XPStyle$XPImageBorder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::java::swing::plaf::windows::XPStyle* this$0, ::java::awt::Component* c, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual $String* toString() override;
	::com::sun::java::swing::plaf::windows::XPStyle* this$0 = nullptr;
	::com::sun::java::swing::plaf::windows::XPStyle$Skin* skin = nullptr;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_XPStyle$XPImageBorder_h_