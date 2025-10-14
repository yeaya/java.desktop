#ifndef _com_sun_java_swing_plaf_windows_XPStyle$Skin_h_
#define _com_sun_java_swing_plaf_windows_XPStyle$Skin_h_
//$ class com.sun.java.swing.plaf.windows.XPStyle$Skin
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
						class TMSchema$State;
					}
				}
			}
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Dimension;
		class Graphics;
		class Insets;
		class Rectangle;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $export XPStyle$Skin : public ::java::lang::Object {
	$class(XPStyle$Skin, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XPStyle$Skin();
	void init$(::java::awt::Component* component, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part);
	void init$(::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state);
	void init$(::java::awt::Component* component, ::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state);
	virtual bool equals(Object$* obj) override;
	virtual ::java::awt::Insets* getContentMargin();
	int32_t getHeight(::com::sun::java::swing::plaf::windows::TMSchema$State* state);
	virtual int32_t getHeight();
	int32_t getWidth(::com::sun::java::swing::plaf::windows::TMSchema$State* state);
	virtual int32_t getWidth();
	virtual int32_t hashCode() override;
	virtual bool haveToSwitchStates();
	virtual void paintSkin(::java::awt::Graphics* g, int32_t dx, int32_t dy, ::com::sun::java::swing::plaf::windows::TMSchema$State* state);
	virtual void paintSkin(::java::awt::Graphics* g, ::java::awt::Rectangle* r, ::com::sun::java::swing::plaf::windows::TMSchema$State* state);
	virtual void paintSkin(::java::awt::Graphics* g, int32_t dx, int32_t dy, int32_t dw, int32_t dh, ::com::sun::java::swing::plaf::windows::TMSchema$State* state);
	virtual void paintSkin(::java::awt::Graphics* g, int32_t dx, int32_t dy, int32_t dw, int32_t dh, ::com::sun::java::swing::plaf::windows::TMSchema$State* state, bool borderFill);
	virtual void paintSkinRaw(::java::awt::Graphics* g, int32_t dx, int32_t dy, int32_t dw, int32_t dh, ::com::sun::java::swing::plaf::windows::TMSchema$State* state);
	virtual void switchStates(bool b);
	virtual $String* toString() override;
	::java::awt::Component* component = nullptr;
	::com::sun::java::swing::plaf::windows::TMSchema$Part* part = nullptr;
	::com::sun::java::swing::plaf::windows::TMSchema$State* state = nullptr;
	$String* string = nullptr;
	::java::awt::Dimension* size = nullptr;
	bool switchStates$ = false;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_windows_XPStyle$Skin_h_