#ifndef _com_apple_laf_AquaImageFactory$InvertableImageIcon_h_
#define _com_apple_laf_AquaImageFactory$InvertableImageIcon_h_
//$ class com.apple.laf.AquaImageFactory$InvertableImageIcon
//$ extends javax.swing.ImageIcon
//$ implements com.apple.laf.AquaIcon$InvertableIcon,javax.swing.plaf.UIResource

#include <com/apple/laf/AquaIcon$InvertableIcon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Image;
	}
}
namespace javax {
	namespace swing {
		class Icon;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaImageFactory$InvertableImageIcon : public ::javax::swing::ImageIcon, public ::com::apple::laf::AquaIcon$InvertableIcon, public ::javax::swing::plaf::UIResource {
	$class(AquaImageFactory$InvertableImageIcon, $NO_CLASS_INIT, ::javax::swing::ImageIcon, ::com::apple::laf::AquaIcon$InvertableIcon, ::javax::swing::plaf::UIResource)
public:
	AquaImageFactory$InvertableImageIcon();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::Image* image);
	virtual ::javax::swing::Icon* getInvertedIcon() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	virtual $String* toString() override;
	::javax::swing::Icon* invertedImage = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaImageFactory$InvertableImageIcon_h_