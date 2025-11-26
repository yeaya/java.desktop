#ifndef _javax_swing_text_rtf_RTFAttributes$GenericAttribute_h_
#define _javax_swing_text_rtf_RTFAttributes$GenericAttribute_h_
//$ class javax.swing.text.rtf.RTFAttributes$GenericAttribute
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class RTFAttributes$GenericAttribute : public ::java::lang::Object {
	$class(RTFAttributes$GenericAttribute, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RTFAttributes$GenericAttribute();
	void init$(int32_t d, Object$* s, $String* r);
	virtual int32_t domain();
	virtual $String* rtfName();
	virtual bool set(::javax::swing::text::MutableAttributeSet* target) {return false;}
	virtual bool set(::javax::swing::text::MutableAttributeSet* target, int32_t parameter) {return false;}
	virtual bool setDefault(::javax::swing::text::MutableAttributeSet* target) {return false;}
	virtual $Object* swingName();
	virtual bool write(::javax::swing::text::AttributeSet* source, ::javax::swing::text::rtf::RTFGenerator* target, bool force);
	virtual bool writeValue(Object$* value, ::javax::swing::text::rtf::RTFGenerator* target, bool force);
	int32_t domain$ = 0;
	$Object* swingName$ = nullptr;
	$String* rtfName$ = nullptr;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFAttributes$GenericAttribute_h_