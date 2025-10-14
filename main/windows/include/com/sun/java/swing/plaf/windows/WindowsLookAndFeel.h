#ifndef _com_sun_java_swing_plaf_windows_WindowsLookAndFeel_h_
#define _com_sun_java_swing_plaf_windows_WindowsLookAndFeel_h_
//$ class com.sun.java.swing.plaf.windows.WindowsLookAndFeel
//$ extends javax.swing.plaf.basic.BasicLookAndFeel

#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>

#pragma push_macro("HI_RES_DISABLED_ICON_CLIENT_KEY")
#undef HI_RES_DISABLED_ICON_CLIENT_KEY

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class WindowsDesktopProperty;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class Icon;
		class JComponent;
		class LayoutStyle;
		class UIDefaults;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import WindowsLookAndFeel : public ::javax::swing::plaf::basic::BasicLookAndFeel {
	$class(WindowsLookAndFeel, 0, ::javax::swing::plaf::basic::BasicLookAndFeel)
public:
	WindowsLookAndFeel();
	void init$();
	void calculateBaseUnits();
	virtual ::javax::swing::Action* createAudioAction(Object$* key) override;
	int32_t dluToPixels(int32_t dlu, int32_t direction);
	virtual $String* getDescription() override;
	$Object* getDesktopFontValue($String* fontName, Object$* backup);
	virtual ::javax::swing::Icon* getDisabledIcon(::javax::swing::JComponent* component, ::javax::swing::Icon* icon) override;
	virtual $String* getID() override;
	virtual ::javax::swing::LayoutStyle* getLayoutStyle() override;
	$ObjectArray* getLazyValueDefaults();
	virtual $String* getName() override;
	virtual void initClassDefaults(::javax::swing::UIDefaults* table) override;
	virtual void initComponentDefaults(::javax::swing::UIDefaults* table) override;
	void initResourceBundle(::javax::swing::UIDefaults* table);
	virtual void initSystemColorDefaults(::javax::swing::UIDefaults* table) override;
	void initVistaComponentDefaults(::javax::swing::UIDefaults* table);
	virtual void initialize() override;
	static bool isClassicWindows();
	static bool isMnemonicHidden();
	virtual bool isNativeLookAndFeel() override;
	static bool isOnVista();
	static bool isOnWindows7();
	virtual bool isSupportedLookAndFeel() override;
	static $Object* lambda$getLazyValueDefaults$10(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$11(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$12(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$13(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$15(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$16(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$18(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$19(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$20(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$21(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$22(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$23(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$24(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$25(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$26(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$27(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$28(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$29(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$31(::javax::swing::UIDefaults* t);
	static $Object* lambda$getLazyValueDefaults$9(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$0(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$1(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$2(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$3(::javax::swing::UIDefaults* t);
	static $Object* lambda$initComponentDefaults$4(::javax::swing::UIDefaults* t);
	$Object* lambda$initComponentDefaults$5(::javax::swing::UIDefaults* t);
	static $Object* lambda$initVistaComponentDefaults$6(::javax::swing::UIDefaults* t);
	static $Object* lambda$initVistaComponentDefaults$7(::javax::swing::UIDefaults* t);
	static $Object* lambda$initVistaComponentDefaults$8(::javax::swing::UIDefaults* t);
	virtual void provideErrorFeedback(::java::awt::Component* component) override;
	static void repaintRootPane(::java::awt::Component* c);
	static void setMnemonicHidden(bool hide);
	virtual void uninitialize() override;
	static bool $assertionsDisabled;
	static $Object* HI_RES_DISABLED_ICON_CLIENT_KEY;
	bool updatePending = false;
	bool useSystemFontSettings = false;
	bool useSystemFontSizeSettings = false;
	::com::sun::java::swing::plaf::windows::WindowsDesktopProperty* themeActive = nullptr;
	::com::sun::java::swing::plaf::windows::WindowsDesktopProperty* dllName = nullptr;
	::com::sun::java::swing::plaf::windows::WindowsDesktopProperty* colorName = nullptr;
	::com::sun::java::swing::plaf::windows::WindowsDesktopProperty* sizeName = nullptr;
	::com::sun::java::swing::plaf::windows::WindowsDesktopProperty* aaSettings = nullptr;
	::javax::swing::LayoutStyle* style = nullptr;
	int32_t baseUnitX = 0;
	int32_t baseUnitY = 0;
	static bool isMnemonicHidden$;
	static bool isClassicWindows$;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("HI_RES_DISABLED_ICON_CLIENT_KEY")

#endif // _com_sun_java_swing_plaf_windows_WindowsLookAndFeel_h_