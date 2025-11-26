#ifndef _javax_swing_text_rtf_RTFGenerator$CharacterKeywordPair_h_
#define _javax_swing_text_rtf_RTFGenerator$CharacterKeywordPair_h_
//$ class javax.swing.text.rtf.RTFGenerator$CharacterKeywordPair
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

class RTFGenerator$CharacterKeywordPair : public ::java::lang::Object {
	$class(RTFGenerator$CharacterKeywordPair, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RTFGenerator$CharacterKeywordPair();
	void init$();
	char16_t character = 0;
	$String* keyword = nullptr;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFGenerator$CharacterKeywordPair_h_