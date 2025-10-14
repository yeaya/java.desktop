#ifndef _javax_swing_text_html_FormSubmitEvent$MethodType_h_
#define _javax_swing_text_html_FormSubmitEvent$MethodType_h_
//$ class javax.swing.text.html.FormSubmitEvent$MethodType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("GET")
#undef GET
#pragma push_macro("POST")
#undef POST

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $export FormSubmitEvent$MethodType : public ::java::lang::Enum {
	$class(FormSubmitEvent$MethodType, 0, ::java::lang::Enum)
public:
	FormSubmitEvent$MethodType();
	static $Array<::javax::swing::text::html::FormSubmitEvent$MethodType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::javax::swing::text::html::FormSubmitEvent$MethodType* valueOf($String* name);
	static $Array<::javax::swing::text::html::FormSubmitEvent$MethodType>* values();
	static ::javax::swing::text::html::FormSubmitEvent$MethodType* GET;
	static ::javax::swing::text::html::FormSubmitEvent$MethodType* POST;
	static $Array<::javax::swing::text::html::FormSubmitEvent$MethodType>* $VALUES;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("GET")
#pragma pop_macro("POST")

#endif // _javax_swing_text_html_FormSubmitEvent$MethodType_h_