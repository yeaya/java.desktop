#ifndef _com_apple_laf_AquaFonts$DerivedUIResourceFont_h_
#define _com_apple_laf_AquaFonts$DerivedUIResourceFont_h_
//$ class com.apple.laf.AquaFonts$DerivedUIResourceFont
//$ extends javax.swing.plaf.FontUIResource

#include <javax/swing/plaf/FontUIResource.h>

namespace java {
	namespace awt {
		class Font;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaFonts$DerivedUIResourceFont : public ::javax::swing::plaf::FontUIResource {
	$class(AquaFonts$DerivedUIResourceFont, $NO_CLASS_INIT, ::javax::swing::plaf::FontUIResource)
public:
	AquaFonts$DerivedUIResourceFont();
	void init$(::java::awt::Font* font);
	void init$($String* name, int32_t style, int32_t size);
	virtual ::java::awt::Font* deriveFont(::java::awt::geom::AffineTransform* trans) override;
	virtual ::java::awt::Font* deriveFont(float derivedSize) override;
	virtual ::java::awt::Font* deriveFont(int32_t derivedStyle) override;
	virtual ::java::awt::Font* deriveFont(int32_t derivedStyle, ::java::awt::geom::AffineTransform* trans) override;
	virtual ::java::awt::Font* deriveFont(int32_t derivedStyle, float derivedSize) override;
	virtual ::java::awt::Font* deriveFont(::java::util::Map* attributes) override;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaFonts$DerivedUIResourceFont_h_