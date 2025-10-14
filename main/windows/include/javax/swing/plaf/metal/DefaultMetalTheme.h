#ifndef _javax_swing_plaf_metal_DefaultMetalTheme_h_
#define _javax_swing_plaf_metal_DefaultMetalTheme_h_
//$ class javax.swing.plaf.metal.DefaultMetalTheme
//$ extends javax.swing.plaf.metal.MetalTheme

#include <java/lang/Array.h>
#include <javax/swing/plaf/metal/MetalTheme.h>

#pragma push_macro("PLAIN_FONTS")
#undef PLAIN_FONTS

namespace javax {
	namespace swing {
		namespace plaf {
			class ColorUIResource;
			class FontUIResource;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class DefaultMetalTheme$FontDelegate;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import DefaultMetalTheme : public ::javax::swing::plaf::metal::MetalTheme {
	$class(DefaultMetalTheme, 0, ::javax::swing::plaf::metal::MetalTheme)
public:
	DefaultMetalTheme();
	void init$();
	virtual ::javax::swing::plaf::FontUIResource* getControlTextFont() override;
	static $String* getDefaultFontName(int32_t key);
	static int32_t getDefaultFontSize(int32_t key);
	static int32_t getDefaultFontStyle(int32_t key);
	static $String* getDefaultPropertyName(int32_t key);
	::javax::swing::plaf::FontUIResource* getFont(int32_t key);
	virtual ::javax::swing::plaf::FontUIResource* getMenuTextFont() override;
	virtual $String* getName() override;
	virtual ::javax::swing::plaf::ColorUIResource* getPrimary1() override;
	virtual ::javax::swing::plaf::ColorUIResource* getPrimary2() override;
	virtual ::javax::swing::plaf::ColorUIResource* getPrimary3() override;
	virtual ::javax::swing::plaf::ColorUIResource* getSecondary1() override;
	virtual ::javax::swing::plaf::ColorUIResource* getSecondary2() override;
	virtual ::javax::swing::plaf::ColorUIResource* getSecondary3() override;
	virtual ::javax::swing::plaf::FontUIResource* getSubTextFont() override;
	virtual ::javax::swing::plaf::FontUIResource* getSystemTextFont() override;
	virtual ::javax::swing::plaf::FontUIResource* getUserTextFont() override;
	virtual ::javax::swing::plaf::FontUIResource* getWindowTitleFont() override;
	virtual void install() override;
	virtual bool isSystemTheme() override;
	static bool PLAIN_FONTS;
	static $StringArray* fontNames;
	static $ints* fontStyles;
	static $ints* fontSizes;
	static $StringArray* defaultNames;
	static ::javax::swing::plaf::ColorUIResource* primary1;
	static ::javax::swing::plaf::ColorUIResource* primary2;
	static ::javax::swing::plaf::ColorUIResource* primary3;
	static ::javax::swing::plaf::ColorUIResource* secondary1;
	static ::javax::swing::plaf::ColorUIResource* secondary2;
	static ::javax::swing::plaf::ColorUIResource* secondary3;
	::javax::swing::plaf::metal::DefaultMetalTheme$FontDelegate* fontDelegate = nullptr;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("PLAIN_FONTS")

#endif // _javax_swing_plaf_metal_DefaultMetalTheme_h_