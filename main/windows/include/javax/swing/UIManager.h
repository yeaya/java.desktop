#ifndef _javax_swing_UIManager_h_
#define _javax_swing_UIManager_h_
//$ class javax.swing.UIManager
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Color;
		class Component;
		class Dimension;
		class Font;
		class Insets;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}
namespace java {
	namespace util {
		class Locale;
		class Properties;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JComponent;
		class LookAndFeel;
		class UIDefaults;
		class UIManager$LAFState;
		class UIManager$LookAndFeelInfo;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace javax {
	namespace swing {

class $import UIManager : public ::java::io::Serializable {
	$class(UIManager, 0, ::java::io::Serializable)
public:
	UIManager();
	void init$();
	static void addAuxiliaryLookAndFeel(::javax::swing::LookAndFeel* laf);
	static void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	static void checkProperty(::java::util::Properties* props, $String* key);
	static ::javax::swing::LookAndFeel* createLookAndFeel($String* name);
	static $Object* get(Object$* key);
	static $Object* get(Object$* key, ::java::util::Locale* l);
	static $Array<::javax::swing::LookAndFeel>* getAuxiliaryLookAndFeels();
	static bool getBoolean(Object$* key);
	static bool getBoolean(Object$* key, ::java::util::Locale* l);
	static ::javax::swing::border::Border* getBorder(Object$* key);
	static ::javax::swing::border::Border* getBorder(Object$* key, ::java::util::Locale* l);
	static ::java::awt::Color* getColor(Object$* key);
	static ::java::awt::Color* getColor(Object$* key, ::java::util::Locale* l);
	static $String* getCrossPlatformLookAndFeelClassName();
	static ::javax::swing::UIDefaults* getDefaults();
	static ::java::awt::Dimension* getDimension(Object$* key);
	static ::java::awt::Dimension* getDimension(Object$* key, ::java::util::Locale* l);
	static ::java::awt::Font* getFont(Object$* key);
	static ::java::awt::Font* getFont(Object$* key, ::java::util::Locale* l);
	static ::javax::swing::Icon* getIcon(Object$* key);
	static ::javax::swing::Icon* getIcon(Object$* key, ::java::util::Locale* l);
	static ::java::awt::Insets* getInsets(Object$* key);
	static ::java::awt::Insets* getInsets(Object$* key, ::java::util::Locale* l);
	static $Array<::javax::swing::UIManager$LookAndFeelInfo>* getInstalledLookAndFeels();
	static int32_t getInt(Object$* key);
	static int32_t getInt(Object$* key, ::java::util::Locale* l);
	static ::javax::swing::UIManager$LAFState* getLAFState();
	static ::javax::swing::LookAndFeel* getLookAndFeel();
	static ::javax::swing::UIDefaults* getLookAndFeelDefaults();
	static ::javax::swing::LookAndFeel* getMultiLookAndFeel();
	static $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners();
	static $String* getString(Object$* key);
	static $String* getString(Object$* key, ::java::util::Locale* l);
	static $String* getString(Object$* key, ::java::awt::Component* c);
	static $String* getSystemLookAndFeelClassName();
	static ::javax::swing::plaf::ComponentUI* getUI(::javax::swing::JComponent* target);
	static void initialize();
	static void initializeAuxiliaryLAFs(::java::util::Properties* swingProps);
	static void initializeDefaultLAF(::java::util::Properties* swingProps);
	static void initializeInstalledLAFs(::java::util::Properties* swingProps);
	static void initializeSystemDefaults(::java::util::Properties* swingProps);
	static void installLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* info);
	static void installLookAndFeel($String* name, $String* className);
	static ::java::util::Properties* loadSwingProperties();
	static $String* makeInstalledLAFKey($String* laf, $String* attr);
	static $String* makeSwingPropertiesFilename();
	static void maybeInitialize();
	static void maybeInitializeFocusPolicy(::javax::swing::JComponent* comp);
	static $Object* put(Object$* key, Object$* value);
	static bool removeAuxiliaryLookAndFeel(::javax::swing::LookAndFeel* laf);
	static void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	static void setInstalledLookAndFeels($Array<::javax::swing::UIManager$LookAndFeelInfo>* infos);
	static void setLookAndFeel(::javax::swing::LookAndFeel* newLookAndFeel);
	static void setLookAndFeel($String* className);
	static $Object* classLock;
	static $String* defaultLAFKey;
	static $String* auxiliaryLAFsKey;
	static $String* multiplexingLAFKey;
	static $String* installedLAFsKey;
	static $String* disableMnemonicKey;
	static $Array<::javax::swing::UIManager$LookAndFeelInfo>* installedLAFs;
};

	} // swing
} // javax

#endif // _javax_swing_UIManager_h_