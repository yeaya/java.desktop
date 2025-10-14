#ifndef _javax_swing_text_rtf_RTFAttributes$NumericAttribute_h_
#define _javax_swing_text_rtf_RTFAttributes$NumericAttribute_h_
//$ class javax.swing.text.rtf.RTFAttributes$NumericAttribute
//$ extends javax.swing.text.rtf.RTFAttributes$GenericAttribute
//$ implements javax.swing.text.rtf.RTFAttribute

#include <javax/swing/text/rtf/RTFAttribute.h>
#include <javax/swing/text/rtf/RTFAttributes$GenericAttribute.h>

namespace java {
	namespace lang {
		class Number;
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

class RTFAttributes$NumericAttribute : public ::javax::swing::text::rtf::RTFAttributes$GenericAttribute, public ::javax::swing::text::rtf::RTFAttribute {
	$class(RTFAttributes$NumericAttribute, $NO_CLASS_INIT, ::javax::swing::text::rtf::RTFAttributes$GenericAttribute, ::javax::swing::text::rtf::RTFAttribute)
public:
	RTFAttributes$NumericAttribute();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual int32_t domain() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t d, Object$* s, $String* r);
	void init$(int32_t d, Object$* s, $String* r, int32_t ds, int32_t dr);
	void init$(int32_t d, Object$* s, $String* r, ::java::lang::Number* ds, int32_t dr, float sc);
	static ::javax::swing::text::rtf::RTFAttributes$NumericAttribute* NewTwips(int32_t d, Object$* s, $String* r, float ds, int32_t dr);
	static ::javax::swing::text::rtf::RTFAttributes$NumericAttribute* NewTwips(int32_t d, Object$* s, $String* r, int32_t dr);
	virtual $String* rtfName() override;
	virtual bool set(::javax::swing::text::MutableAttributeSet* target) override;
	virtual bool set(::javax::swing::text::MutableAttributeSet* target, int32_t parameter) override;
	virtual bool setDefault(::javax::swing::text::MutableAttributeSet* target) override;
	virtual $Object* swingName() override;
	virtual $String* toString() override;
	virtual bool write(::javax::swing::text::AttributeSet* source, ::javax::swing::text::rtf::RTFGenerator* target, bool force) override;
	virtual bool writeValue(Object$* o_value, ::javax::swing::text::rtf::RTFGenerator* target, bool force) override;
	int32_t rtfDefault = 0;
	::java::lang::Number* swingDefault = nullptr;
	float scale = 0.0;
};

			} // rtf
		} // text
	} // swing
} // javax

#endif // _javax_swing_text_rtf_RTFAttributes$NumericAttribute_h_