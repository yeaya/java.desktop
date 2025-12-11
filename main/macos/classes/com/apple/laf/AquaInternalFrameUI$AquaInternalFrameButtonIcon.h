#ifndef _com_apple_laf_AquaInternalFrameUI$AquaInternalFrameButtonIcon_h_
#define _com_apple_laf_AquaInternalFrameUI$AquaInternalFrameButtonIcon_h_
//$ class com.apple.laf.AquaInternalFrameUI$AquaInternalFrameButtonIcon
//$ extends com.apple.laf.AquaIcon$JRSUIIcon

#include <com/apple/laf/AquaIcon$JRSUIIcon.h>

namespace apple {
	namespace laf {
		class JRSUIConstants$State;
		class JRSUIConstants$Widget;
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

class AquaInternalFrameUI$AquaInternalFrameButtonIcon : public ::com::apple::laf::AquaIcon$JRSUIIcon {
	$class(AquaInternalFrameUI$AquaInternalFrameButtonIcon, $NO_CLASS_INIT, ::com::apple::laf::AquaIcon$JRSUIIcon)
public:
	AquaInternalFrameUI$AquaInternalFrameButtonIcon();
	void init$(::apple::laf::JRSUIConstants$Widget* widget);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual ::apple::laf::JRSUIConstants$State* getStateFor(::java::awt::Component* c);
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaInternalFrameUI$AquaInternalFrameButtonIcon_h_