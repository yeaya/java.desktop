#ifndef _javax_swing_text_rtf_RTFAttributes$AssertiveAttribute_h_
#define _javax_swing_text_rtf_RTFAttributes$AssertiveAttribute_h_
//$ class javax.swing.text.rtf.RTFAttributes$AssertiveAttribute
//$ extends javax.swing.text.rtf.RTFAttributes$GenericAttribute
//$ implements javax.swing.text.rtf.RTFAttribute

#include <javax/swing/text/rtf/RTFAttribute.h>
#include <javax/swing/text/rtf/RTFAttributes$GenericAttribute.h>

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

class RTFAttributes$AssertiveAttribute : public ::javax::swing::text::rtf::RTFAttributes$GenericAttribute, public ::javax::swing::text::rtf::RTFAttribute {
	$class(RTFAttributes$AssertiveAttribute, $NO_CLASS_INIT, ::javax::swing::text::rtf::RTFAttributes$GenericAttribute, ::javax::swing::text::rtf::RTFAttribute)
public:
	RTFAttributes$AssertiveAttribute();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual int32_t domain() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t d, Object$* s, $String* r);
	void init$(int32_t d, Object$* s, $String* r, Object$* v);
	void init$(int32_t d, Object$* s, $String* r, int32_t v);
	virtual $String* rtfName() override;
	virtual bool set(::javax::swing::text::MutableAttributeSet* target) override;
	virtual bool set(::javax::swing::text::MutableAttributeSet* target, int32_t parameter) override;
	virtual bool setDefault(::javax::swing::text::MutableAttributeSet* target) override;
	virtual $Object* swingName() override;
	virtual $String* toString() override;
	virtual bool write(::javax::swing::text::AttributeSet* source, ::javax::swing::text::rtf::RTFGenerator* target, bool force) override;
	virtual bool writeValue(Object$* value, ::javax::swing::text::rtf::RTFGenerator* target, bool force) override;
	$Object* swingValue = nullptr;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFAttributes$AssertiveAttribute_h_