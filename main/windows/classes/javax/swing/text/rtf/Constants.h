#ifndef _javax_swing_text_rtf_Constants_h_
#define _javax_swing_text_rtf_Constants_h_
//$ class javax.swing.text.rtf.Constants
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

class Constants : public ::java::lang::Object {
	$class(Constants, 0, ::java::lang::Object)
public:
	Constants();
	void init$();
	static $String* Tabs;
	static $String* RTFCharacterSet;
	static $String* StyleType;
	static $String* STSection;
	static $String* STParagraph;
	static $String* STCharacter;
	static $String* StyleNext;
	static $String* StyleAdditive;
	static $String* StyleHidden;
	static $String* Caps;
	static $String* Deleted;
	static $String* Outline;
	static $String* SmallCaps;
	static $String* Shadow;
	static $String* Strikethrough;
	static $String* Hidden;
	static $String* PaperWidth;
	static $String* PaperHeight;
	static $String* MarginLeft;
	static $String* MarginRight;
	static $String* MarginTop;
	static $String* MarginBottom;
	static $String* GutterWidth;
	static $String* WidowControl;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_Constants_h_