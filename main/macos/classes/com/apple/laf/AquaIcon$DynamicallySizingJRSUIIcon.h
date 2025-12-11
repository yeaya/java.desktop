#ifndef _com_apple_laf_AquaIcon$DynamicallySizingJRSUIIcon_h_
#define _com_apple_laf_AquaIcon$DynamicallySizingJRSUIIcon_h_
//$ class com.apple.laf.AquaIcon$DynamicallySizingJRSUIIcon
//$ extends com.apple.laf.AquaIcon$JRSUIIcon

#include <com/apple/laf/AquaIcon$JRSUIIcon.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaUtilControlSize$SizeDescriptor;
			class AquaUtilControlSize$SizeVariant;
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

class AquaIcon$DynamicallySizingJRSUIIcon : public ::com::apple::laf::AquaIcon$JRSUIIcon {
	$class(AquaIcon$DynamicallySizingJRSUIIcon, $NO_CLASS_INIT, ::com::apple::laf::AquaIcon$JRSUIIcon)
public:
	AquaIcon$DynamicallySizingJRSUIIcon();
	void init$(::com::apple::laf::AquaUtilControlSize$SizeDescriptor* sizeDescriptor);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void initJRSUIState() {}
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	::com::apple::laf::AquaUtilControlSize$SizeDescriptor* sizeDescriptor = nullptr;
	::com::apple::laf::AquaUtilControlSize$SizeVariant* sizeVariant = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaIcon$DynamicallySizingJRSUIIcon_h_