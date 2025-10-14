#ifndef _javax_swing_plaf_metal_MetalLookAndFeel_h_
#define _javax_swing_plaf_metal_MetalLookAndFeel_h_
//$ class javax.swing.plaf.metal.MetalLookAndFeel
//$ extends javax.swing.plaf.basic.BasicLookAndFeel

#include <javax/swing/plaf/basic/BasicLookAndFeel.h>

#pragma push_macro("METAL_LOOK_AND_FEEL_INITED")
#undef METAL_LOOK_AND_FEEL_INITED

namespace java {
	namespace awt {
		class Color;
		class Component;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class ReferenceQueue;
		}
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JComponent;
		class LayoutStyle;
		class UIDefaults;
	}
}
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
				class MetalTheme;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $import MetalLookAndFeel : public ::javax::swing::plaf::basic::BasicLookAndFeel {
	$class(MetalLookAndFeel, 0, ::javax::swing::plaf::basic::BasicLookAndFeel)
public:
	MetalLookAndFeel();
	void init$();
	virtual void createDefaultTheme();
	static void flushUnreferenced();
	static ::javax::swing::plaf::ColorUIResource* getAcceleratorForeground();
	static ::javax::swing::plaf::ColorUIResource* getAcceleratorSelectedForeground();
	static ::javax::swing::plaf::ColorUIResource* getBlack();
	static ::javax::swing::plaf::ColorUIResource* getControl();
	static ::javax::swing::plaf::ColorUIResource* getControlDarkShadow();
	static ::javax::swing::plaf::ColorUIResource* getControlDisabled();
	static ::javax::swing::plaf::ColorUIResource* getControlHighlight();
	static ::javax::swing::plaf::ColorUIResource* getControlInfo();
	static ::javax::swing::plaf::ColorUIResource* getControlShadow();
	static ::javax::swing::plaf::ColorUIResource* getControlTextColor();
	static ::javax::swing::plaf::FontUIResource* getControlTextFont();
	static ::javax::swing::plaf::metal::MetalTheme* getCurrentTheme();
	virtual ::javax::swing::UIDefaults* getDefaults() override;
	virtual $String* getDescription() override;
	static ::javax::swing::plaf::ColorUIResource* getDesktopColor();
	virtual ::javax::swing::Icon* getDisabledIcon(::javax::swing::JComponent* component, ::javax::swing::Icon* icon) override;
	virtual ::javax::swing::Icon* getDisabledSelectedIcon(::javax::swing::JComponent* component, ::javax::swing::Icon* icon) override;
	static ::javax::swing::plaf::ColorUIResource* getFocusColor();
	static ::javax::swing::plaf::ColorUIResource* getHighlightedTextColor();
	virtual $String* getID() override;
	static ::javax::swing::plaf::ColorUIResource* getInactiveControlTextColor();
	static ::javax::swing::plaf::ColorUIResource* getInactiveSystemTextColor();
	virtual ::javax::swing::LayoutStyle* getLayoutStyle() override;
	static ::javax::swing::plaf::ColorUIResource* getMenuBackground();
	static ::javax::swing::plaf::ColorUIResource* getMenuDisabledForeground();
	static ::javax::swing::plaf::ColorUIResource* getMenuForeground();
	static ::javax::swing::plaf::ColorUIResource* getMenuSelectedBackground();
	static ::javax::swing::plaf::ColorUIResource* getMenuSelectedForeground();
	static ::javax::swing::plaf::FontUIResource* getMenuTextFont();
	virtual $String* getName() override;
	static ::javax::swing::plaf::ColorUIResource* getPrimaryControl();
	static ::javax::swing::plaf::ColorUIResource* getPrimaryControlDarkShadow();
	static ::javax::swing::plaf::ColorUIResource* getPrimaryControlHighlight();
	static ::javax::swing::plaf::ColorUIResource* getPrimaryControlInfo();
	static ::javax::swing::plaf::ColorUIResource* getPrimaryControlShadow();
	static ::javax::swing::plaf::ColorUIResource* getSeparatorBackground();
	static ::javax::swing::plaf::ColorUIResource* getSeparatorForeground();
	static ::javax::swing::plaf::FontUIResource* getSubTextFont();
	virtual bool getSupportsWindowDecorations() override;
	static ::javax::swing::plaf::ColorUIResource* getSystemTextColor();
	static ::javax::swing::plaf::FontUIResource* getSystemTextFont();
	static ::javax::swing::plaf::ColorUIResource* getTextHighlightColor();
	static ::javax::swing::plaf::ColorUIResource* getUserTextColor();
	static ::javax::swing::plaf::FontUIResource* getUserTextFont();
	static ::javax::swing::plaf::ColorUIResource* getWhite();
	static ::javax::swing::plaf::ColorUIResource* getWindowBackground();
	static ::javax::swing::plaf::ColorUIResource* getWindowTitleBackground();
	static ::javax::swing::plaf::FontUIResource* getWindowTitleFont();
	static ::javax::swing::plaf::ColorUIResource* getWindowTitleForeground();
	static ::javax::swing::plaf::ColorUIResource* getWindowTitleInactiveBackground();
	static ::javax::swing::plaf::ColorUIResource* getWindowTitleInactiveForeground();
	virtual void initClassDefaults(::javax::swing::UIDefaults* table) override;
	virtual void initComponentDefaults(::javax::swing::UIDefaults* table) override;
	void initResourceBundle(::javax::swing::UIDefaults* table);
	virtual void initSystemColorDefaults(::javax::swing::UIDefaults* table) override;
	virtual bool isNativeLookAndFeel() override;
	virtual bool isSupportedLookAndFeel() override;
	static bool isWindows();
	static $Object* lambda$initComponentDefaults$0(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$1(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$10(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$11(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$12(::java::awt::Color* controlDarkShadow, ::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$16(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$17(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$18(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$19(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$2(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$20(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$21(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$22(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$23(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$24(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$25(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$26(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$27(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$28(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$29(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$3(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$30(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$31(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$32(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$33(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$34(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$35(int32_t internalFrameIconSize, ::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$36(int32_t internalFrameIconSize, ::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$37(int32_t internalFrameIconSize, ::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$38(int32_t internalFrameIconSize, ::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$39(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$4(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$40(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$41(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$43(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$44(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$46(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$5(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$51(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$52(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$53(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$54(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$55(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$56(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$57(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$6(::java::awt::Color* controlShadow, ::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$7(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$8(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$9(::javax::swing::UIDefaults* t);
	virtual void provideErrorFeedback(::java::awt::Component* component) override;
	static void setCurrentTheme(::javax::swing::plaf::metal::MetalTheme* theme);
	static bool useHighContrastTheme();
	static bool useSystemFonts();
	static bool usingOcean();
	static bool METAL_LOOK_AND_FEEL_INITED;
	static bool checkedWindows;
	static bool isWindows$;
	static bool checkedSystemFontSettings;
	static bool useSystemFonts$;
	static ::java::lang::ref::ReferenceQueue* queue;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("METAL_LOOK_AND_FEEL_INITED")

#endif // _javax_swing_plaf_metal_MetalLookAndFeel_h_