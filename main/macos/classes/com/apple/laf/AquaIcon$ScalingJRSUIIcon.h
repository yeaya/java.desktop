#ifndef _com_apple_laf_AquaIcon$ScalingJRSUIIcon_h_
#define _com_apple_laf_AquaIcon$ScalingJRSUIIcon_h_
//$ class com.apple.laf.AquaIcon$ScalingJRSUIIcon
//$ extends javax.swing.Icon
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/Icon.h>
#include <javax/swing/plaf/UIResource.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaPainter;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaIcon$ScalingJRSUIIcon : public ::javax::swing::Icon, public ::javax::swing::plaf::UIResource {
	$class(AquaIcon$ScalingJRSUIIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::javax::swing::plaf::UIResource)
public:
	AquaIcon$ScalingJRSUIIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t width, int32_t height);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void initIconPainter(::com::apple::laf::AquaPainter* painter) {}
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	int32_t width = 0;
	int32_t height = 0;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaIcon$ScalingJRSUIIcon_h_