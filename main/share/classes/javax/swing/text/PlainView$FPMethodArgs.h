#ifndef _javax_swing_text_PlainView$FPMethodArgs_h_
#define _javax_swing_text_PlainView$FPMethodArgs_h_
//$ class javax.swing.text.PlainView$FPMethodArgs
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("GNNC")
#undef GNNC
#pragma push_macro("GNNII")
#undef GNNII
#pragma push_macro("IGNN")
#undef IGNN
#pragma push_macro("IIGNN")
#undef IIGNN

namespace javax {
	namespace swing {
		namespace text {

class $export PlainView$FPMethodArgs : public ::java::lang::Enum {
	$class(PlainView$FPMethodArgs, 0, ::java::lang::Enum)
public:
	PlainView$FPMethodArgs();
	static $Array<::javax::swing::text::PlainView$FPMethodArgs>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual $ClassArray* getMethodArguments(bool isFPType);
	static ::javax::swing::text::PlainView$FPMethodArgs* valueOf($String* name);
	static $Array<::javax::swing::text::PlainView$FPMethodArgs>* values();
	static ::javax::swing::text::PlainView$FPMethodArgs* IGNN;
	static ::javax::swing::text::PlainView$FPMethodArgs* IIGNN;
	static ::javax::swing::text::PlainView$FPMethodArgs* GNNII;
	static ::javax::swing::text::PlainView$FPMethodArgs* GNNC;
	static $Array<::javax::swing::text::PlainView$FPMethodArgs>* $VALUES;
};

		} // text
	} // swing
} // javax

#pragma pop_macro("GNNC")
#pragma pop_macro("GNNII")
#pragma pop_macro("IGNN")
#pragma pop_macro("IIGNN")

#endif // _javax_swing_text_PlainView$FPMethodArgs_h_