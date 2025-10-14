#ifndef _java_awt_im_InputSubset_h_
#define _java_awt_im_InputSubset_h_
//$ class java.awt.im.InputSubset
//$ extends java.lang.Character$Subset

#include <java/lang/Character$Subset.h>

#pragma push_macro("FULLWIDTH_DIGITS")
#undef FULLWIDTH_DIGITS
#pragma push_macro("FULLWIDTH_LATIN")
#undef FULLWIDTH_LATIN
#pragma push_macro("HALFWIDTH_KATAKANA")
#undef HALFWIDTH_KATAKANA
#pragma push_macro("HANJA")
#undef HANJA
#pragma push_macro("KANJI")
#undef KANJI
#pragma push_macro("LATIN")
#undef LATIN
#pragma push_macro("LATIN_DIGITS")
#undef LATIN_DIGITS
#pragma push_macro("SIMPLIFIED_HANZI")
#undef SIMPLIFIED_HANZI
#pragma push_macro("TRADITIONAL_HANZI")
#undef TRADITIONAL_HANZI

namespace java {
	namespace awt {
		namespace im {

class $export InputSubset : public ::java::lang::Character$Subset {
	$class(InputSubset, 0, ::java::lang::Character$Subset)
public:
	InputSubset();
	void init$($String* name);
	static ::java::awt::im::InputSubset* LATIN;
	static ::java::awt::im::InputSubset* LATIN_DIGITS;
	static ::java::awt::im::InputSubset* TRADITIONAL_HANZI;
	static ::java::awt::im::InputSubset* SIMPLIFIED_HANZI;
	static ::java::awt::im::InputSubset* KANJI;
	static ::java::awt::im::InputSubset* HANJA;
	static ::java::awt::im::InputSubset* HALFWIDTH_KATAKANA;
	static ::java::awt::im::InputSubset* FULLWIDTH_LATIN;
	static ::java::awt::im::InputSubset* FULLWIDTH_DIGITS;
};

		} // im
	} // awt
} // java

#pragma pop_macro("FULLWIDTH_DIGITS")
#pragma pop_macro("FULLWIDTH_LATIN")
#pragma pop_macro("HALFWIDTH_KATAKANA")
#pragma pop_macro("HANJA")
#pragma pop_macro("KANJI")
#pragma pop_macro("LATIN")
#pragma pop_macro("LATIN_DIGITS")
#pragma pop_macro("SIMPLIFIED_HANZI")
#pragma pop_macro("TRADITIONAL_HANZI")

#endif // _java_awt_im_InputSubset_h_