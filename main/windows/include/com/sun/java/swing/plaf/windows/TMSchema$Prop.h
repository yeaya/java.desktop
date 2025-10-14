#ifndef _com_sun_java_swing_plaf_windows_TMSchema$Prop_h_
#define _com_sun_java_swing_plaf_windows_TMSchema$Prop_h_
//$ class com.sun.java.swing.plaf.windows.TMSchema$Prop
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BGTYPE")
#undef BGTYPE
#pragma push_macro("BORDERCOLOR")
#undef BORDERCOLOR
#pragma push_macro("BORDERONLY")
#undef BORDERONLY
#pragma push_macro("BORDERSIZE")
#undef BORDERSIZE
#pragma push_macro("CAPTIONMARGINS")
#undef CAPTIONMARGINS
#pragma push_macro("COLOR")
#undef COLOR
#pragma push_macro("CONTENTMARGINS")
#undef CONTENTMARGINS
#pragma push_macro("FILLCOLOR")
#undef FILLCOLOR
#pragma push_macro("FLATMENUS")
#undef FLATMENUS
#pragma push_macro("IMAGECOUNT")
#undef IMAGECOUNT
#pragma push_macro("NORMALSIZE")
#undef NORMALSIZE
#pragma push_macro("PROGRESSCHUNKSIZE")
#undef PROGRESSCHUNKSIZE
#pragma push_macro("PROGRESSSPACESIZE")
#undef PROGRESSSPACESIZE
#pragma push_macro("SIZE")
#undef SIZE
#pragma push_macro("SIZINGMARGINS")
#undef SIZINGMARGINS
#pragma push_macro("TEXTCOLOR")
#undef TEXTCOLOR
#pragma push_macro("TEXTSHADOWCOLOR")
#undef TEXTSHADOWCOLOR
#pragma push_macro("TEXTSHADOWOFFSET")
#undef TEXTSHADOWOFFSET
#pragma push_macro("TEXTSHADOWTYPE")
#undef TEXTSHADOWTYPE
#pragma push_macro("TRANSITIONDURATIONS")
#undef TRANSITIONDURATIONS

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import TMSchema$Prop : public ::java::lang::Enum {
	$class(TMSchema$Prop, 0, ::java::lang::Enum)
public:
	TMSchema$Prop();
	static $Array<::com::sun::java::swing::plaf::windows::TMSchema$Prop>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $Class* type, int32_t value);
	virtual int32_t getValue();
	virtual $String* toString() override;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* valueOf($String* name);
	static $Array<::com::sun::java::swing::plaf::windows::TMSchema$Prop>* values();
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* COLOR;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* SIZE;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* FLATMENUS;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* BORDERONLY;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* IMAGECOUNT;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* BORDERSIZE;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* PROGRESSCHUNKSIZE;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* PROGRESSSPACESIZE;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* TEXTSHADOWOFFSET;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* NORMALSIZE;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* SIZINGMARGINS;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* CONTENTMARGINS;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* CAPTIONMARGINS;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* BORDERCOLOR;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* FILLCOLOR;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* TEXTCOLOR;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* TEXTSHADOWCOLOR;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* BGTYPE;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* TEXTSHADOWTYPE;
	static ::com::sun::java::swing::plaf::windows::TMSchema$Prop* TRANSITIONDURATIONS;
	static $Array<::com::sun::java::swing::plaf::windows::TMSchema$Prop>* $VALUES;
	$Class* type = nullptr;
	int32_t value = 0;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("BGTYPE")
#pragma pop_macro("BORDERCOLOR")
#pragma pop_macro("BORDERONLY")
#pragma pop_macro("BORDERSIZE")
#pragma pop_macro("CAPTIONMARGINS")
#pragma pop_macro("COLOR")
#pragma pop_macro("CONTENTMARGINS")
#pragma pop_macro("FILLCOLOR")
#pragma pop_macro("FLATMENUS")
#pragma pop_macro("IMAGECOUNT")
#pragma pop_macro("NORMALSIZE")
#pragma pop_macro("PROGRESSCHUNKSIZE")
#pragma pop_macro("PROGRESSSPACESIZE")
#pragma pop_macro("SIZE")
#pragma pop_macro("SIZINGMARGINS")
#pragma pop_macro("TEXTCOLOR")
#pragma pop_macro("TEXTSHADOWCOLOR")
#pragma pop_macro("TEXTSHADOWOFFSET")
#pragma pop_macro("TEXTSHADOWTYPE")
#pragma pop_macro("TRANSITIONDURATIONS")

#endif // _com_sun_java_swing_plaf_windows_TMSchema$Prop_h_