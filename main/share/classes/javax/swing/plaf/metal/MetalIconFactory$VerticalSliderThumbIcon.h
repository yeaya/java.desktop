#ifndef _javax_swing_plaf_metal_MetalIconFactory$VerticalSliderThumbIcon_h_
#define _javax_swing_plaf_metal_MetalIconFactory$VerticalSliderThumbIcon_h_
//$ class javax.swing.plaf.metal.MetalIconFactory$VerticalSliderThumbIcon
//$ extends javax.swing.Icon
//$ implements java.io.Serializable,javax.swing.plaf.UIResource

#include <java/io/Serializable.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/UIResource.h>

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
				class MetalBumps;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalIconFactory$VerticalSliderThumbIcon : public ::javax::swing::Icon, public ::java::io::Serializable, public ::javax::swing::plaf::UIResource {
	$class(MetalIconFactory$VerticalSliderThumbIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::java::io::Serializable, ::javax::swing::plaf::UIResource)
public:
	MetalIconFactory$VerticalSliderThumbIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	static ::javax::swing::plaf::metal::MetalBumps* controlBumps;
	static ::javax::swing::plaf::metal::MetalBumps* primaryBumps;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalIconFactory$VerticalSliderThumbIcon_h_