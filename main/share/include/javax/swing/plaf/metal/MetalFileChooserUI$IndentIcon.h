#ifndef _javax_swing_plaf_metal_MetalFileChooserUI$IndentIcon_h_
#define _javax_swing_plaf_metal_MetalFileChooserUI$IndentIcon_h_
//$ class javax.swing.plaf.metal.MetalFileChooserUI$IndentIcon
//$ extends javax.swing.Icon

#include <javax/swing/Icon.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalFileChooserUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalFileChooserUI$IndentIcon : public ::javax::swing::Icon {
	$class(MetalFileChooserUI$IndentIcon, $NO_CLASS_INIT, ::javax::swing::Icon)
public:
	MetalFileChooserUI$IndentIcon();
	void init$(::javax::swing::plaf::metal::MetalFileChooserUI* this$0);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	::javax::swing::plaf::metal::MetalFileChooserUI* this$0 = nullptr;
	::javax::swing::Icon* icon = nullptr;
	int32_t depth = 0;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalFileChooserUI$IndentIcon_h_