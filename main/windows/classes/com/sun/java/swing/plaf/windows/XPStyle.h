#ifndef _com_sun_java_swing_plaf_windows_XPStyle_h_
#define _com_sun_java_swing_plaf_windows_XPStyle_h_
//$ class com.sun.java.swing.plaf.windows.XPStyle
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
						class TMSchema$Prop;
						class TMSchema$State;
						class TMSchema$TypeEnum;
						class XPStyle$Skin;
						class XPStyle$SkinPainter;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Color;
		class Component;
		class Dimension;
		class Insets;
		class Point;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export XPStyle : public ::java::lang::Object {
	$class(XPStyle, 0, ::java::lang::Object)
public:
	XPStyle();
	void init$();
	bool getBoolean(::java::awt::Component* c, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state, ::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop);
	virtual ::javax::swing::border::Border* getBorder(::java::awt::Component* c, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part);
	virtual ::java::awt::Color* getColor(::com::sun::java::swing::plaf::windows::XPStyle$Skin* skin, ::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop, ::java::awt::Color* fallback);
	virtual ::java::awt::Color* getColor(::java::awt::Component* c, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state, ::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop, ::java::awt::Color* fallback);
	virtual ::java::awt::Dimension* getDimension(::java::awt::Component* c, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state, ::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop);
	virtual int32_t getInt(::java::awt::Component* c, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state, ::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop, int32_t fallback);
	virtual ::java::awt::Insets* getMargin(::java::awt::Component* c, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state, ::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop);
	static ::java::awt::Dimension* getPartSize(::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state);
	virtual ::java::awt::Point* getPoint(::java::awt::Component* c, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state, ::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop);
	virtual ::com::sun::java::swing::plaf::windows::XPStyle$Skin* getSkin(::java::awt::Component* c, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part);
	virtual $String* getString(::java::awt::Component* c, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state, ::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop);
	static bool getSysBoolean(::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop);
	virtual int64_t getThemeTransitionDuration(::java::awt::Component* c, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* stateFrom, ::com::sun::java::swing::plaf::windows::TMSchema$State* stateTo, ::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop);
	virtual ::com::sun::java::swing::plaf::windows::TMSchema$TypeEnum* getTypeEnum(::java::awt::Component* c, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state, ::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop);
	static $String* getTypeEnumName(::java::awt::Component* c, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state, ::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop);
	static ::com::sun::java::swing::plaf::windows::XPStyle* getXP();
	static void invalidateStyle();
	virtual bool isSkinDefined(::java::awt::Component* c, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part);
	static bool isVista();
	static bool $assertionsDisabled;
	static ::com::sun::java::swing::plaf::windows::XPStyle* xp;
	static ::com::sun::java::swing::plaf::windows::XPStyle$SkinPainter* skinPainter;
	static ::java::lang::Boolean* themeActive;
	::java::util::HashMap* borderMap = nullptr;
	::java::util::HashMap* colorMap = nullptr;
	bool flatMenus = false;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_XPStyle_h_