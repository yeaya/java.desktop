#ifndef _com_sun_java_swing_plaf_windows_TMSchema$TypeEnum_h_
#define _com_sun_java_swing_plaf_windows_TMSchema$TypeEnum_h_
//$ class com.sun.java.swing.plaf.windows.TMSchema$TypeEnum
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("BT_BORDERFILL")
#undef BT_BORDERFILL
#pragma push_macro("BT_IMAGEFILE")
#undef BT_IMAGEFILE
#pragma push_macro("TST_CONTINUOUS")
#undef TST_CONTINUOUS
#pragma push_macro("TST_NONE")
#undef TST_NONE
#pragma push_macro("TST_SINGLE")
#undef TST_SINGLE

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Prop;
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import TMSchema$TypeEnum : public ::java::lang::Enum {
	$class(TMSchema$TypeEnum, 0, ::java::lang::Enum)
public:
	TMSchema$TypeEnum();
	static $Array<::com::sun::java::swing::plaf::windows::TMSchema$TypeEnum>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, ::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop, $String* enumName, int32_t value);
	virtual $String* getName();
	static ::com::sun::java::swing::plaf::windows::TMSchema$TypeEnum* getTypeEnum(::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop, int32_t enumval);
	virtual $String* toString() override;
	static ::com::sun::java::swing::plaf::windows::TMSchema$TypeEnum* valueOf($String* name);
	static $Array<::com::sun::java::swing::plaf::windows::TMSchema$TypeEnum>* values();
	static ::com::sun::java::swing::plaf::windows::TMSchema$TypeEnum* BT_IMAGEFILE;
	static ::com::sun::java::swing::plaf::windows::TMSchema$TypeEnum* BT_BORDERFILL;
	static ::com::sun::java::swing::plaf::windows::TMSchema$TypeEnum* TST_NONE;
	static ::com::sun::java::swing::plaf::windows::TMSchema$TypeEnum* TST_SINGLE;
	static ::com::sun::java::swing::plaf::windows::TMSchema$TypeEnum* TST_CONTINUOUS;
	static $Array<::com::sun::java::swing::plaf::windows::TMSchema$TypeEnum>* $VALUES;
	::com::sun::java::swing::plaf::windows::TMSchema$Prop* prop = nullptr;
	$String* enumName = nullptr;
	int32_t value = 0;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("BT_BORDERFILL")
#pragma pop_macro("BT_IMAGEFILE")
#pragma pop_macro("TST_CONTINUOUS")
#pragma pop_macro("TST_NONE")
#pragma pop_macro("TST_SINGLE")

#endif // _com_sun_java_swing_plaf_windows_TMSchema$TypeEnum_h_