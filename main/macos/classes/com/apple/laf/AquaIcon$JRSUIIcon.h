#ifndef _com_apple_laf_AquaIcon$JRSUIIcon_h_
#define _com_apple_laf_AquaIcon$JRSUIIcon_h_
//$ class com.apple.laf.AquaIcon$JRSUIIcon
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

class AquaIcon$JRSUIIcon : public ::javax::swing::Icon, public ::javax::swing::plaf::UIResource {
	$class(AquaIcon$JRSUIIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::javax::swing::plaf::UIResource)
public:
	AquaIcon$JRSUIIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	::com::apple::laf::AquaPainter* painter = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaIcon$JRSUIIcon_h_