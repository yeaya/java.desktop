#ifndef _javax_print_attribute_standard_JobKOctetsSupported_h_
#define _javax_print_attribute_standard_JobKOctetsSupported_h_
//$ class javax.print.attribute.standard.JobKOctetsSupported
//$ extends javax.print.attribute.SetOfIntegerSyntax
//$ implements javax.print.attribute.SupportedValuesAttribute

#include <javax/print/attribute/SetOfIntegerSyntax.h>
#include <javax/print/attribute/SupportedValuesAttribute.h>

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

class $export JobKOctetsSupported : public ::javax::print::attribute::SetOfIntegerSyntax, public ::javax::print::attribute::SupportedValuesAttribute {
	$class(JobKOctetsSupported, $NO_CLASS_INIT, ::javax::print::attribute::SetOfIntegerSyntax, ::javax::print::attribute::SupportedValuesAttribute)
public:
	JobKOctetsSupported();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t lowerBound, int32_t upperBound);
	virtual bool equals(Object$* object) override;
	virtual $Class* getCategory() override;
	virtual $String* getName() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xD83346646DEDD31D;
};

			} // standard
		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_standard_JobKOctetsSupported_h_