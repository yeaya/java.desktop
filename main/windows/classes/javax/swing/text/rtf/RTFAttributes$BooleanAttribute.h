#ifndef _javax_swing_text_rtf_RTFAttributes$BooleanAttribute_h_
#define _javax_swing_text_rtf_RTFAttributes$BooleanAttribute_h_
//$ class javax.swing.text.rtf.RTFAttributes$BooleanAttribute
//$ extends javax.swing.text.rtf.RTFAttributes$GenericAttribute
//$ implements javax.swing.text.rtf.RTFAttribute

#include <javax/swing/text/rtf/RTFAttribute.h>
#include <javax/swing/text/rtf/RTFAttributes$GenericAttribute.h>

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace swing {
		namespace text {
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

class RTFAttributes$BooleanAttribute : public ::javax::swing::text::rtf::RTFAttributes$GenericAttribute, public ::javax::swing::text::rtf::RTFAttribute {
	$class(RTFAttributes$BooleanAttribute, 0, ::javax::swing::text::rtf::RTFAttributes$GenericAttribute, ::javax::swing::text::rtf::RTFAttribute)
public:
	RTFAttributes$BooleanAttribute();
	virtual $Object* clone() override;
	virtual int32_t domain() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t d, Object$* s, $String* r, bool ds, bool dr);
	void init$(int32_t d, Object$* s, $String* r);
	virtual $String* rtfName() override;
	virtual bool set(::javax::swing::text::MutableAttributeSet* target) override;
	virtual bool set(::javax::swing::text::MutableAttributeSet* target, int32_t parameter) override;
	virtual bool setDefault(::javax::swing::text::MutableAttributeSet* target) override;
	virtual $Object* swingName() override;
	virtual $String* toString() override;
	virtual bool write(::javax::swing::text::AttributeSet* source, ::javax::swing::text::rtf::RTFGenerator* target, bool force) override;
	virtual bool writeValue(Object$* o_value, ::javax::swing::text::rtf::RTFGenerator* target, bool force) override;
	bool rtfDefault = false;
	bool swingDefault = false;
	static ::java::lang::Boolean* True;
	static ::java::lang::Boolean* False;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFAttributes$BooleanAttribute_h_