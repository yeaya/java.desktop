#ifndef _javax_swing_text_StringContent$UndoPosRef_h_
#define _javax_swing_text_StringContent$UndoPosRef_h_
//$ class javax.swing.text.StringContent$UndoPosRef
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			class StringContent;
			class StringContent$PosRec;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export StringContent$UndoPosRef : public ::java::lang::Object {
	$class(StringContent$UndoPosRef, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StringContent$UndoPosRef();
	void init$(::javax::swing::text::StringContent* this$0, ::javax::swing::text::StringContent$PosRec* rec);
	void resetLocation();
	::javax::swing::text::StringContent* this$0 = nullptr;
	int32_t undoLocation = 0;
	::javax::swing::text::StringContent$PosRec* rec = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StringContent$UndoPosRef_h_