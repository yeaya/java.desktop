#ifndef _javax_swing_text_rtf_RTFAttributes_h_
#define _javax_swing_text_rtf_RTFAttributes_h_
//$ class javax.swing.text.rtf.RTFAttributes
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Dictionary;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {
				class RTFAttribute;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

class RTFAttributes : public ::java::lang::Object {
	$class(RTFAttributes, 0, ::java::lang::Object)
public:
	RTFAttributes();
	void init$();
	static ::java::util::Dictionary* attributesByKeyword();
	static $Array<::javax::swing::text::rtf::RTFAttribute>* attributes;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFAttributes_h_