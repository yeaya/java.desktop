#ifndef _com_sun_java_swing_plaf_windows_TMSchema$State_h_
#define _com_sun_java_swing_plaf_windows_TMSchema$State_h_
//$ class com.sun.java.swing.plaf.windows.TMSchema$State
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ACTIVE")
#undef ACTIVE
#pragma push_macro("ASSIST")
#undef ASSIST
#pragma push_macro("BITMAP")
#undef BITMAP
#pragma push_macro("BULLETDISABLED")
#undef BULLETDISABLED
#pragma push_macro("BULLETNORMAL")
#undef BULLETNORMAL
#pragma push_macro("CHECKED")
#undef CHECKED
#pragma push_macro("CHECKEDDISABLED")
#undef CHECKEDDISABLED
#pragma push_macro("CHECKEDHOT")
#undef CHECKEDHOT
#pragma push_macro("CHECKEDNORMAL")
#undef CHECKEDNORMAL
#pragma push_macro("CHECKEDPRESSED")
#undef CHECKEDPRESSED
#pragma push_macro("CHECKMARKDISABLED")
#undef CHECKMARKDISABLED
#pragma push_macro("CHECKMARKNORMAL")
#undef CHECKMARKNORMAL
#pragma push_macro("CLOSED")
#undef CLOSED
#pragma push_macro("DEFAULTED")
#undef DEFAULTED
#pragma push_macro("DISABLED")
#undef DISABLED
#pragma push_macro("DISABLEDHOT")
#undef DISABLEDHOT
#pragma push_macro("DISABLEDPUSHED")
#undef DISABLEDPUSHED
#pragma push_macro("DOWNDISABLED")
#undef DOWNDISABLED
#pragma push_macro("DOWNHOT")
#undef DOWNHOT
#pragma push_macro("DOWNHOVER")
#undef DOWNHOVER
#pragma push_macro("DOWNNORMAL")
#undef DOWNNORMAL
#pragma push_macro("DOWNPRESSED")
#undef DOWNPRESSED
#pragma push_macro("FOCUSED")
#undef FOCUSED
#pragma push_macro("HOT")
#undef HOT
#pragma push_macro("HOTCHECKED")
#undef HOTCHECKED
#pragma push_macro("HOVER")
#undef HOVER
#pragma push_macro("ICONHOT")
#undef ICONHOT
#pragma push_macro("ICONNORMAL")
#undef ICONNORMAL
#pragma push_macro("ICONPRESSED")
#undef ICONPRESSED
#pragma push_macro("ICONSORTEDHOT")
#undef ICONSORTEDHOT
#pragma push_macro("ICONSORTEDNORMAL")
#undef ICONSORTEDNORMAL
#pragma push_macro("ICONSORTEDPRESSED")
#undef ICONSORTEDPRESSED
#pragma push_macro("INACTIVE")
#undef INACTIVE
#pragma push_macro("INACTIVEDISABLED")
#undef INACTIVEDISABLED
#pragma push_macro("INACTIVEHOT")
#undef INACTIVEHOT
#pragma push_macro("INACTIVENORMAL")
#undef INACTIVENORMAL
#pragma push_macro("INACTIVEPUSHED")
#undef INACTIVEPUSHED
#pragma push_macro("LEFTDISABLED")
#undef LEFTDISABLED
#pragma push_macro("LEFTHOT")
#undef LEFTHOT
#pragma push_macro("LEFTHOVER")
#undef LEFTHOVER
#pragma push_macro("LEFTNORMAL")
#undef LEFTNORMAL
#pragma push_macro("LEFTPRESSED")
#undef LEFTPRESSED
#pragma push_macro("MIXEDDISABLED")
#undef MIXEDDISABLED
#pragma push_macro("MIXEDHOT")
#undef MIXEDHOT
#pragma push_macro("MIXEDNORMAL")
#undef MIXEDNORMAL
#pragma push_macro("MIXEDPRESSED")
#undef MIXEDPRESSED
#pragma push_macro("NORMAL")
#undef NORMAL
#pragma push_macro("OPENED")
#undef OPENED
#pragma push_macro("PRESSED")
#undef PRESSED
#pragma push_macro("PUSHED")
#undef PUSHED
#pragma push_macro("READONLY")
#undef READONLY
#pragma push_macro("RIGHTDISABLED")
#undef RIGHTDISABLED
#pragma push_macro("RIGHTHOT")
#undef RIGHTHOT
#pragma push_macro("RIGHTHOVER")
#undef RIGHTHOVER
#pragma push_macro("RIGHTNORMAL")
#undef RIGHTNORMAL
#pragma push_macro("RIGHTPRESSED")
#undef RIGHTPRESSED
#pragma push_macro("SELECTED")
#undef SELECTED
#pragma push_macro("SORTEDDOWN")
#undef SORTEDDOWN
#pragma push_macro("SORTEDHOT")
#undef SORTEDHOT
#pragma push_macro("SORTEDNORMAL")
#undef SORTEDNORMAL
#pragma push_macro("SORTEDPRESSED")
#undef SORTEDPRESSED
#pragma push_macro("SORTEDUP")
#undef SORTEDUP
#pragma push_macro("UNCHECKEDDISABLED")
#undef UNCHECKEDDISABLED
#pragma push_macro("UNCHECKEDHOT")
#undef UNCHECKEDHOT
#pragma push_macro("UNCHECKEDNORMAL")
#undef UNCHECKEDNORMAL
#pragma push_macro("UNCHECKEDPRESSED")
#undef UNCHECKEDPRESSED
#pragma push_macro("UPDISABLED")
#undef UPDISABLED
#pragma push_macro("UPHOT")
#undef UPHOT
#pragma push_macro("UPHOVER")
#undef UPHOVER
#pragma push_macro("UPNORMAL")
#undef UPNORMAL
#pragma push_macro("UPPRESSED")
#undef UPPRESSED

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {
						class TMSchema$Part;
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class EnumMap;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

class $import TMSchema$State : public ::java::lang::Enum {
	$class(TMSchema$State, 0, ::java::lang::Enum)
public:
	TMSchema$State();
	static $Array<::com::sun::java::swing::plaf::windows::TMSchema$State>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static int32_t getValue(::com::sun::java::swing::plaf::windows::TMSchema$Part* part, ::com::sun::java::swing::plaf::windows::TMSchema$State* state);
	static void initStates();
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* valueOf($String* name);
	static $Array<::com::sun::java::swing::plaf::windows::TMSchema$State>* values();
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* ACTIVE;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* ASSIST;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* BITMAP;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* CHECKED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* CHECKEDDISABLED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* CHECKEDHOT;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* CHECKEDNORMAL;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* CHECKEDPRESSED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* CHECKMARKNORMAL;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* CHECKMARKDISABLED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* BULLETNORMAL;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* BULLETDISABLED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* CLOSED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* DEFAULTED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* DISABLED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* DISABLEDHOT;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* DISABLEDPUSHED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* DOWNDISABLED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* DOWNHOT;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* DOWNNORMAL;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* DOWNPRESSED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* FOCUSED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* HOT;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* HOTCHECKED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* ICONHOT;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* ICONNORMAL;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* ICONPRESSED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* ICONSORTEDHOT;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* ICONSORTEDNORMAL;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* ICONSORTEDPRESSED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* INACTIVE;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* INACTIVENORMAL;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* INACTIVEHOT;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* INACTIVEPUSHED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* INACTIVEDISABLED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* LEFTDISABLED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* LEFTHOT;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* LEFTNORMAL;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* LEFTPRESSED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* MIXEDDISABLED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* MIXEDHOT;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* MIXEDNORMAL;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* MIXEDPRESSED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* NORMAL;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* PRESSED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* OPENED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* PUSHED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* READONLY;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* RIGHTDISABLED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* RIGHTHOT;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* RIGHTNORMAL;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* RIGHTPRESSED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* SELECTED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* UNCHECKEDDISABLED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* UNCHECKEDHOT;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* UNCHECKEDNORMAL;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* UNCHECKEDPRESSED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* UPDISABLED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* UPHOT;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* UPNORMAL;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* UPPRESSED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* HOVER;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* UPHOVER;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* DOWNHOVER;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* LEFTHOVER;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* RIGHTHOVER;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* SORTEDDOWN;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* SORTEDHOT;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* SORTEDNORMAL;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* SORTEDPRESSED;
	static ::com::sun::java::swing::plaf::windows::TMSchema$State* SORTEDUP;
	static $Array<::com::sun::java::swing::plaf::windows::TMSchema$State>* $VALUES;
	static ::java::util::EnumMap* stateMap;
};

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("ACTIVE")
#pragma pop_macro("ASSIST")
#pragma pop_macro("BITMAP")
#pragma pop_macro("BULLETDISABLED")
#pragma pop_macro("BULLETNORMAL")
#pragma pop_macro("CHECKED")
#pragma pop_macro("CHECKEDDISABLED")
#pragma pop_macro("CHECKEDHOT")
#pragma pop_macro("CHECKEDNORMAL")
#pragma pop_macro("CHECKEDPRESSED")
#pragma pop_macro("CHECKMARKDISABLED")
#pragma pop_macro("CHECKMARKNORMAL")
#pragma pop_macro("CLOSED")
#pragma pop_macro("DEFAULTED")
#pragma pop_macro("DISABLED")
#pragma pop_macro("DISABLEDHOT")
#pragma pop_macro("DISABLEDPUSHED")
#pragma pop_macro("DOWNDISABLED")
#pragma pop_macro("DOWNHOT")
#pragma pop_macro("DOWNHOVER")
#pragma pop_macro("DOWNNORMAL")
#pragma pop_macro("DOWNPRESSED")
#pragma pop_macro("FOCUSED")
#pragma pop_macro("HOT")
#pragma pop_macro("HOTCHECKED")
#pragma pop_macro("HOVER")
#pragma pop_macro("ICONHOT")
#pragma pop_macro("ICONNORMAL")
#pragma pop_macro("ICONPRESSED")
#pragma pop_macro("ICONSORTEDHOT")
#pragma pop_macro("ICONSORTEDNORMAL")
#pragma pop_macro("ICONSORTEDPRESSED")
#pragma pop_macro("INACTIVE")
#pragma pop_macro("INACTIVEDISABLED")
#pragma pop_macro("INACTIVEHOT")
#pragma pop_macro("INACTIVENORMAL")
#pragma pop_macro("INACTIVEPUSHED")
#pragma pop_macro("LEFTDISABLED")
#pragma pop_macro("LEFTHOT")
#pragma pop_macro("LEFTHOVER")
#pragma pop_macro("LEFTNORMAL")
#pragma pop_macro("LEFTPRESSED")
#pragma pop_macro("MIXEDDISABLED")
#pragma pop_macro("MIXEDHOT")
#pragma pop_macro("MIXEDNORMAL")
#pragma pop_macro("MIXEDPRESSED")
#pragma pop_macro("NORMAL")
#pragma pop_macro("OPENED")
#pragma pop_macro("PRESSED")
#pragma pop_macro("PUSHED")
#pragma pop_macro("READONLY")
#pragma pop_macro("RIGHTDISABLED")
#pragma pop_macro("RIGHTHOT")
#pragma pop_macro("RIGHTHOVER")
#pragma pop_macro("RIGHTNORMAL")
#pragma pop_macro("RIGHTPRESSED")
#pragma pop_macro("SELECTED")
#pragma pop_macro("SORTEDDOWN")
#pragma pop_macro("SORTEDHOT")
#pragma pop_macro("SORTEDNORMAL")
#pragma pop_macro("SORTEDPRESSED")
#pragma pop_macro("SORTEDUP")
#pragma pop_macro("UNCHECKEDDISABLED")
#pragma pop_macro("UNCHECKEDHOT")
#pragma pop_macro("UNCHECKEDNORMAL")
#pragma pop_macro("UNCHECKEDPRESSED")
#pragma pop_macro("UPDISABLED")
#pragma pop_macro("UPHOT")
#pragma pop_macro("UPHOVER")
#pragma pop_macro("UPNORMAL")
#pragma pop_macro("UPPRESSED")

#endif // _com_sun_java_swing_plaf_windows_TMSchema$State_h_