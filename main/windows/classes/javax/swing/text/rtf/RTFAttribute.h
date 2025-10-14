#ifndef _javax_swing_text_rtf_RTFAttribute_h_
#define _javax_swing_text_rtf_RTFAttribute_h_
//$ interface javax.swing.text.rtf.RTFAttribute
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("D_CHARACTER")
#undef D_CHARACTER
#pragma push_macro("D_DOCUMENT")
#undef D_DOCUMENT
#pragma push_macro("D_META")
#undef D_META
#pragma push_macro("D_PARAGRAPH")
#undef D_PARAGRAPH
#pragma push_macro("D_SECTION")
#undef D_SECTION

namespace javax {
	namespace swing {
		namespace text {
			class AttributeSet;
			class MutableAttributeSet;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {
				class RTFGenerator;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

class RTFAttribute : public ::java::lang::Object {
	$interface(RTFAttribute, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t domain() {return 0;}
	virtual $String* rtfName() {return nullptr;}
	virtual bool set(::javax::swing::text::MutableAttributeSet* target) {return false;}
	virtual bool set(::javax::swing::text::MutableAttributeSet* target, int32_t parameter) {return false;}
	virtual bool setDefault(::javax::swing::text::MutableAttributeSet* target) {return false;}
	virtual $Object* swingName() {return nullptr;}
	virtual bool write(::javax::swing::text::AttributeSet* source, ::javax::swing::text::rtf::RTFGenerator* target, bool force) {return false;}
	virtual bool writeValue(Object$* value, ::javax::swing::text::rtf::RTFGenerator* target, bool force) {return false;}
	static const int32_t D_CHARACTER = 0;
	static const int32_t D_PARAGRAPH = 1;
	static const int32_t D_SECTION = 2;
	static const int32_t D_DOCUMENT = 3;
	static const int32_t D_META = 4;
};

			} // rtf
		} // text
	} // swing
} // javax

#pragma pop_macro("D_CHARACTER")
#pragma pop_macro("D_DOCUMENT")
#pragma pop_macro("D_META")
#pragma pop_macro("D_PARAGRAPH")
#pragma pop_macro("D_SECTION")

#endif // _javax_swing_text_rtf_RTFAttribute_h_