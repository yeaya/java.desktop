#ifndef _com_apple_laf_AquaFocus$FocusedIcon_h_
#define _com_apple_laf_AquaFocus$FocusedIcon_h_
//$ class com.apple.laf.AquaFocus$FocusedIcon
//$ extends com.apple.laf.AquaUtils$ShadowBorder
//$ implements javax.swing.Icon

#include <com/apple/laf/AquaUtils$ShadowBorder.h>
#include <javax/swing/Icon.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFocus$FocusedIcon : public ::com::apple::laf::AquaUtils$ShadowBorder, public ::javax::swing::Icon {
	$class(AquaFocus$FocusedIcon, $NO_CLASS_INIT, ::com::apple::laf::AquaUtils$ShadowBorder, ::javax::swing::Icon)
public:
	AquaFocus$FocusedIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::Icon* icon, int32_t slack);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	::javax::swing::Icon* icon = nullptr;
	int32_t slack = 0;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFocus$FocusedIcon_h_