#ifndef _javax_swing_plaf_metal_MetalHighContrastTheme_h_
#define _javax_swing_plaf_metal_MetalHighContrastTheme_h_
//$ class javax.swing.plaf.metal.MetalHighContrastTheme
//$ extends javax.swing.plaf.metal.DefaultMetalTheme

#include <javax/swing/plaf/metal/DefaultMetalTheme.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ColorUIResource;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class MetalHighContrastTheme : public ::javax::swing::plaf::metal::DefaultMetalTheme {
	$class(MetalHighContrastTheme, 0, ::javax::swing::plaf::metal::DefaultMetalTheme)
public:
	MetalHighContrastTheme();
	void init$();
	virtual void addCustomEntriesToTable(::javax::swing::UIDefaults* table) override;
	virtual ::javax::swing::plaf::ColorUIResource* getAcceleratorForeground() override;
	virtual ::javax::swing::plaf::ColorUIResource* getAcceleratorSelectedForeground() override;
	virtual ::javax::swing::plaf::ColorUIResource* getControlHighlight() override;
	virtual ::javax::swing::plaf::ColorUIResource* getFocusColor() override;
	virtual ::javax::swing::plaf::ColorUIResource* getHighlightedTextColor() override;
	virtual ::javax::swing::plaf::ColorUIResource* getMenuSelectedBackground() override;
	virtual ::javax::swing::plaf::ColorUIResource* getMenuSelectedForeground() override;
	virtual $String* getName() override;
	virtual ::javax::swing::plaf::ColorUIResource* getPrimary1() override;
	virtual ::javax::swing::plaf::ColorUIResource* getPrimary2() override;
	virtual ::javax::swing::plaf::ColorUIResource* getPrimary3() override;
	virtual ::javax::swing::plaf::ColorUIResource* getPrimaryControlHighlight() override;
	virtual ::javax::swing::plaf::ColorUIResource* getSecondary2() override;
	virtual ::javax::swing::plaf::ColorUIResource* getSecondary3() override;
	virtual ::javax::swing::plaf::ColorUIResource* getTextHighlightColor() override;
	virtual bool isSystemTheme() override;
	static ::javax::swing::plaf::ColorUIResource* primary1;
	static ::javax::swing::plaf::ColorUIResource* primary2;
	static ::javax::swing::plaf::ColorUIResource* primary3;
	static ::javax::swing::plaf::ColorUIResource* primaryHighlight;
	static ::javax::swing::plaf::ColorUIResource* secondary2;
	static ::javax::swing::plaf::ColorUIResource* secondary3;
};

			} // metal
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_metal_MetalHighContrastTheme_h_