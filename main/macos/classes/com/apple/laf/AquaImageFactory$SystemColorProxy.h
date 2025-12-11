#ifndef _com_apple_laf_AquaImageFactory$SystemColorProxy_h_
#define _com_apple_laf_AquaImageFactory$SystemColorProxy_h_
//$ class com.apple.laf.AquaImageFactory$SystemColorProxy
//$ extends java.awt.Color
//$ implements javax.swing.plaf.UIResource

#include <java/awt/Color.h>
#include <javax/swing/plaf/UIResource.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaImageFactory$SystemColorProxy : public ::java::awt::Color, public ::javax::swing::plaf::UIResource {
	$class(AquaImageFactory$SystemColorProxy, $NO_CLASS_INIT, ::java::awt::Color, ::javax::swing::plaf::UIResource)
public:
	AquaImageFactory$SystemColorProxy();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Color* color);
	virtual int32_t getRGB() override;
	virtual $String* toString() override;
	::java::awt::Color* color = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaImageFactory$SystemColorProxy_h_