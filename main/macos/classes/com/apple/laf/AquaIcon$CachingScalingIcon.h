#ifndef _com_apple_laf_AquaIcon$CachingScalingIcon_h_
#define _com_apple_laf_AquaIcon$CachingScalingIcon_h_
//$ class com.apple.laf.AquaIcon$CachingScalingIcon
//$ extends javax.swing.Icon
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/Icon.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Image;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaIcon$CachingScalingIcon : public ::javax::swing::Icon, public ::javax::swing::plaf::UIResource {
	$class(AquaIcon$CachingScalingIcon, $NO_CLASS_INIT, ::javax::swing::Icon, ::javax::swing::plaf::UIResource)
public:
	AquaIcon$CachingScalingIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t width, int32_t height);
	virtual ::java::awt::Image* createImage() {return nullptr;}
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual ::java::awt::Image* getImage();
	virtual bool hasIconRef();
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual void setSize(int32_t width, int32_t height);
	virtual $String* toString() override;
	int32_t width = 0;
	int32_t height = 0;
	::java::awt::Image* image = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaIcon$CachingScalingIcon_h_