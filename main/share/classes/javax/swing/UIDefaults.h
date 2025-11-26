#ifndef _javax_swing_UIDefaults_h_
#define _javax_swing_UIDefaults_h_
//$ class javax.swing.UIDefaults
//$ extends java.util.Hashtable

#include <java/lang/Array.h>
#include <java/util/Hashtable.h>

#pragma push_macro("PENDING")
#undef PENDING

namespace java {
	namespace awt {
		class Color;
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
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace util {
		class Locale;
		class Map;
		class Vector;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JComponent;
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
		namespace event {
			class SwingPropertyChangeSupport;
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

class $export UIDefaults : public ::java::util::Hashtable {
	$class(UIDefaults, 0, ::java::util::Hashtable)
public:
	UIDefaults();
	void init$();
	void init$(int32_t initialCapacity, float loadFactor);
	void init$($ObjectArray* keyValueList);
	void addInternalBundle($String* bundleName);
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual void addResourceBundle($String* bundleName);
	virtual void firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue);
	virtual $Object* get(Object$* key) override;
	virtual $Object* get(Object$* key, ::java::util::Locale* l);
	virtual bool getBoolean(Object$* key);
	virtual bool getBoolean(Object$* key, ::java::util::Locale* l);
	virtual ::javax::swing::border::Border* getBorder(Object$* key);
	virtual ::javax::swing::border::Border* getBorder(Object$* key, ::java::util::Locale* l);
	virtual ::java::awt::Color* getColor(Object$* key);
	virtual ::java::awt::Color* getColor(Object$* key, ::java::util::Locale* l);
	virtual ::java::util::Locale* getDefaultLocale();
	virtual ::java::awt::Dimension* getDimension(Object$* key);
	virtual ::java::awt::Dimension* getDimension(Object$* key, ::java::util::Locale* l);
	virtual ::java::awt::Font* getFont(Object$* key);
	virtual ::java::awt::Font* getFont(Object$* key, ::java::util::Locale* l);
	$Object* getFromHashtable(Object$* key);
	$Object* getFromResourceBundle(Object$* key, ::java::util::Locale* l);
	virtual ::javax::swing::Icon* getIcon(Object$* key);
	virtual ::javax::swing::Icon* getIcon(Object$* key, ::java::util::Locale* l);
	virtual ::java::awt::Insets* getInsets(Object$* key);
	virtual ::java::awt::Insets* getInsets(Object$* key, ::java::util::Locale* l);
	virtual int32_t getInt(Object$* key);
	virtual int32_t getInt(Object$* key, ::java::util::Locale* l);
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners();
	::java::util::Map* getResourceCache(::java::util::Locale* l);
	virtual $String* getString(Object$* key);
	virtual $String* getString(Object$* key, ::java::util::Locale* l);
	virtual ::javax::swing::plaf::ComponentUI* getUI(::javax::swing::JComponent* target);
	virtual $Class* getUIClass($String* uiClassID, ::java::lang::ClassLoader* uiClassLoader);
	virtual $Class* getUIClass($String* uiClassID);
	virtual void getUIError($String* msg);
	static bool isDesktopResourceBundle($String* baseName);
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual void putDefaults($ObjectArray* keyValueList);
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual void removeResourceBundle($String* bundleName);
	virtual void setDefaultLocale(::java::util::Locale* l);
	static $Object* PENDING;
	::javax::swing::event::SwingPropertyChangeSupport* changeSupport = nullptr;
	::java::util::Vector* resourceBundles = nullptr;
	::java::util::Locale* defaultLocale = nullptr;
	::java::util::Map* resourceCache = nullptr;
};

	} // swing
} // javax

#pragma pop_macro("PENDING")

#endif // _javax_swing_UIDefaults_h_