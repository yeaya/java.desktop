#ifndef _javax_swing_LookAndFeel_h_
#define _javax_swing_LookAndFeel_h_
//$ class javax.swing.LookAndFeel
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class ComponentInputMap;
		class Icon;
		class InputMap;
		class JComponent;
		class LayoutStyle;
		class UIDefaults;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent$KeyBinding;
		}
	}
}

namespace javax {
	namespace swing {

class $export LookAndFeel : public ::java::lang::Object {
	$class(LookAndFeel, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LookAndFeel();
	void init$();
	virtual ::javax::swing::UIDefaults* getDefaults();
	virtual $String* getDescription() {return nullptr;}
	static $Object* getDesktopPropertyValue($String* systemPropertyName, Object$* fallbackValue);
	virtual ::javax::swing::Icon* getDisabledIcon(::javax::swing::JComponent* component, ::javax::swing::Icon* icon);
	virtual ::javax::swing::Icon* getDisabledSelectedIcon(::javax::swing::JComponent* component, ::javax::swing::Icon* icon);
	virtual $String* getID() {return nullptr;}
	virtual ::javax::swing::LayoutStyle* getLayoutStyle();
	virtual $String* getName() {return nullptr;}
	virtual bool getSupportsWindowDecorations();
	virtual void initialize();
	static void installBorder(::javax::swing::JComponent* c, $String* defaultBorderName);
	static void installColors(::javax::swing::JComponent* c, $String* defaultBgName, $String* defaultFgName);
	static void installColorsAndFont(::javax::swing::JComponent* c, $String* defaultBgName, $String* defaultFgName, $String* defaultFontName);
	static void installProperty(::javax::swing::JComponent* c, $String* propertyName, Object$* propertyValue);
	virtual bool isNativeLookAndFeel() {return false;}
	virtual bool isSupportedLookAndFeel() {return false;}
	static void loadKeyBindings(::javax::swing::InputMap* retMap, $ObjectArray* keys);
	static ::javax::swing::ComponentInputMap* makeComponentInputMap(::javax::swing::JComponent* c, $ObjectArray* keys);
	static $Object* makeIcon($Class* baseClass, $String* gifFile);
	static ::javax::swing::InputMap* makeInputMap($ObjectArray* keys);
	static $Array<::javax::swing::text::JTextComponent$KeyBinding>* makeKeyBindings($ObjectArray* keyBindingList);
	virtual void provideErrorFeedback(::java::awt::Component* component);
	virtual $String* toString() override;
	virtual void uninitialize();
	static void uninstallBorder(::javax::swing::JComponent* c);
};

	} // swing
} // javax

#endif // _javax_swing_LookAndFeel_h_