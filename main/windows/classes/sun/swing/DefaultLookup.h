#ifndef _sun_swing_DefaultLookup_h_
#define _sun_swing_DefaultLookup_h_
//$ class sun.swing.DefaultLookup
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_LOOKUP_KEY")
#undef DEFAULT_LOOKUP_KEY

namespace java {
	namespace awt {
		class Color;
		class Insets;
	}
}
namespace java {
	namespace lang {
		class Thread;
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
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace sun {
	namespace swing {

class $export DefaultLookup : public ::java::lang::Object {
	$class(DefaultLookup, 0, ::java::lang::Object)
public:
	DefaultLookup();
	void init$();
	static $Object* get(::javax::swing::JComponent* c, ::javax::swing::plaf::ComponentUI* ui, $String* key);
	static bool getBoolean(::javax::swing::JComponent* c, ::javax::swing::plaf::ComponentUI* ui, $String* key, bool defaultValue);
	static bool getBoolean(::javax::swing::JComponent* c, ::javax::swing::plaf::ComponentUI* ui, $String* key);
	static ::javax::swing::border::Border* getBorder(::javax::swing::JComponent* c, ::javax::swing::plaf::ComponentUI* ui, $String* key, ::javax::swing::border::Border* defaultValue);
	static ::javax::swing::border::Border* getBorder(::javax::swing::JComponent* c, ::javax::swing::plaf::ComponentUI* ui, $String* key);
	static ::java::awt::Color* getColor(::javax::swing::JComponent* c, ::javax::swing::plaf::ComponentUI* ui, $String* key, ::java::awt::Color* defaultValue);
	static ::java::awt::Color* getColor(::javax::swing::JComponent* c, ::javax::swing::plaf::ComponentUI* ui, $String* key);
	virtual $Object* getDefault(::javax::swing::JComponent* c, ::javax::swing::plaf::ComponentUI* ui, $String* key);
	static ::javax::swing::Icon* getIcon(::javax::swing::JComponent* c, ::javax::swing::plaf::ComponentUI* ui, $String* key, ::javax::swing::Icon* defaultValue);
	static ::javax::swing::Icon* getIcon(::javax::swing::JComponent* c, ::javax::swing::plaf::ComponentUI* ui, $String* key);
	static ::java::awt::Insets* getInsets(::javax::swing::JComponent* c, ::javax::swing::plaf::ComponentUI* ui, $String* key, ::java::awt::Insets* defaultValue);
	static ::java::awt::Insets* getInsets(::javax::swing::JComponent* c, ::javax::swing::plaf::ComponentUI* ui, $String* key);
	static int32_t getInt(::javax::swing::JComponent* c, ::javax::swing::plaf::ComponentUI* ui, $String* key, int32_t defaultValue);
	static int32_t getInt(::javax::swing::JComponent* c, ::javax::swing::plaf::ComponentUI* ui, $String* key);
	static void setDefaultLookup(::sun::swing::DefaultLookup* lookup);
	static $Object* DEFAULT_LOOKUP_KEY;
	static $Thread* currentDefaultThread;
	static ::sun::swing::DefaultLookup* currentDefaultLookup;
	static bool isLookupSet;
};

	} // swing
} // sun

#pragma pop_macro("DEFAULT_LOOKUP_KEY")

#endif // _sun_swing_DefaultLookup_h_