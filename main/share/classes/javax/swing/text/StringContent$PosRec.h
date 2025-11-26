#ifndef _javax_swing_text_StringContent$PosRec_h_
#define _javax_swing_text_StringContent$PosRec_h_
//$ class javax.swing.text.StringContent$PosRec
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			class StringContent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $export StringContent$PosRec : public ::java::lang::Object {
	$class(StringContent$PosRec, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StringContent$PosRec();
	void init$(::javax::swing::text::StringContent* this$0, int32_t offset);
	::javax::swing::text::StringContent* this$0 = nullptr;
	int32_t offset = 0;
	bool unused = false;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StringContent$PosRec_h_