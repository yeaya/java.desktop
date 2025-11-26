#ifndef _javax_swing_plaf_metal_OceanTheme_h_
#define _javax_swing_plaf_metal_OceanTheme_h_
//$ class javax.swing.plaf.metal.OceanTheme
//$ extends javax.swing.plaf.metal.DefaultMetalTheme

#include <javax/swing/plaf/metal/DefaultMetalTheme.h>

#pragma push_macro("CONTROL_TEXT_COLOR")
#undef CONTROL_TEXT_COLOR
#pragma push_macro("INACTIVE_CONTROL_TEXT_COLOR")
#undef INACTIVE_CONTROL_TEXT_COLOR
#pragma push_macro("MENU_DISABLED_FOREGROUND")
#undef MENU_DISABLED_FOREGROUND
#pragma push_macro("OCEAN_BLACK")
#undef OCEAN_BLACK
#pragma push_macro("OCEAN_DROP")
#undef OCEAN_DROP
#pragma push_macro("PRIMARY1")
#undef PRIMARY1
#pragma push_macro("PRIMARY2")
#undef PRIMARY2
#pragma push_macro("PRIMARY3")
#undef PRIMARY3
#pragma push_macro("SECONDARY1")
#undef SECONDARY1
#pragma push_macro("SECONDARY2")
#undef SECONDARY2
#pragma push_macro("SECONDARY3")
#undef SECONDARY3

namespace javax {
	namespace swing {
		class Icon;
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

class $import OceanTheme : public ::javax::swing::plaf::metal::DefaultMetalTheme {
	$class(OceanTheme, 0, ::javax::swing::plaf::metal::DefaultMetalTheme)
public:
	OceanTheme();
	void init$();
	virtual void addCustomEntriesToTable(::javax::swing::UIDefaults* table) override;
	virtual ::javax::swing::plaf::ColorUIResource* getBlack() override;
	virtual ::javax::swing::plaf::ColorUIResource* getControlTextColor() override;
	virtual ::javax::swing::plaf::ColorUIResource* getDesktopColor() override;
	::javax::swing::Icon* getHastenedIcon($String* iconID, ::javax::swing::UIDefaults* table);
	$Object* getIconResource($String* iconID);
	virtual ::javax::swing::plaf::ColorUIResource* getInactiveControlTextColor() override;
	virtual ::javax::swing::plaf::ColorUIResource* getMenuDisabledForeground() override;
	virtual $String* getName() override;
	virtual ::javax::swing::plaf::ColorUIResource* getPrimary1() override;
	virtual ::javax::swing::plaf::ColorUIResource* getPrimary2() override;
	virtual ::javax::swing::plaf::ColorUIResource* getPrimary3() override;
	virtual ::javax::swing::plaf::ColorUIResource* getSecondary1() override;
	virtual ::javax::swing::plaf::ColorUIResource* getSecondary2() override;
	virtual ::javax::swing::plaf::ColorUIResource* getSecondary3() override;
	virtual bool isSystemTheme() override;
	$Object* lambda$addCustomEntriesToTable$0(::javax::swing::UIDefaults* t);
	static ::javax::swing::plaf::ColorUIResource* PRIMARY1;
	static ::javax::swing::plaf::ColorUIResource* PRIMARY2;
	static ::javax::swing::plaf::ColorUIResource* PRIMARY3;
	static ::javax::swing::plaf::ColorUIResource* SECONDARY1;
	static ::javax::swing::plaf::ColorUIResource* SECONDARY2;
	static ::javax::swing::plaf::ColorUIResource* SECONDARY3;
	static ::javax::swing::plaf::ColorUIResource* CONTROL_TEXT_COLOR;
	static ::javax::swing::plaf::ColorUIResource* INACTIVE_CONTROL_TEXT_COLOR;
	static ::javax::swing::plaf::ColorUIResource* MENU_DISABLED_FOREGROUND;
	static ::javax::swing::plaf::ColorUIResource* OCEAN_BLACK;
	static ::javax::swing::plaf::ColorUIResource* OCEAN_DROP;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("CONTROL_TEXT_COLOR")
#pragma pop_macro("INACTIVE_CONTROL_TEXT_COLOR")
#pragma pop_macro("MENU_DISABLED_FOREGROUND")
#pragma pop_macro("OCEAN_BLACK")
#pragma pop_macro("OCEAN_DROP")
#pragma pop_macro("PRIMARY1")
#pragma pop_macro("PRIMARY2")
#pragma pop_macro("PRIMARY3")
#pragma pop_macro("SECONDARY1")
#pragma pop_macro("SECONDARY2")
#pragma pop_macro("SECONDARY3")

#endif // _javax_swing_plaf_metal_OceanTheme_h_