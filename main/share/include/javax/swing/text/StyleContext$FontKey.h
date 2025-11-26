#ifndef _javax_swing_text_StyleContext$FontKey_h_
#define _javax_swing_text_StyleContext$FontKey_h_
//$ class javax.swing.text.StyleContext$FontKey
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {

class $import StyleContext$FontKey : public ::java::lang::Object {
	$class(StyleContext$FontKey, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StyleContext$FontKey();
	void init$($String* family, int32_t style, int32_t size);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual void setValue($String* family, int32_t style, int32_t size);
	$String* family = nullptr;
	int32_t style = 0;
	int32_t size = 0;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyleContext$FontKey_h_