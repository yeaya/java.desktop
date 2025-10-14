#ifndef _javax_print_attribute_ResolutionSyntax_h_
#define _javax_print_attribute_ResolutionSyntax_h_
//$ class javax.print.attribute.ResolutionSyntax
//$ extends java.io.Serializable
//$ implements java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("DPCM")
#undef DPCM
#pragma push_macro("DPI")
#undef DPI

namespace javax {
	namespace print {
		namespace attribute {

class $import ResolutionSyntax : public ::java::io::Serializable, public ::java::lang::Cloneable {
	$class(ResolutionSyntax, $NO_CLASS_INIT, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	ResolutionSyntax();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(int32_t crossFeedResolution, int32_t feedResolution, int32_t units);
	static int32_t convertFromDphi(int32_t dphi, int32_t units);
	virtual bool equals(Object$* object) override;
	virtual int32_t getCrossFeedResolution(int32_t units);
	virtual int32_t getCrossFeedResolutionDphi();
	virtual int32_t getFeedResolution(int32_t units);
	virtual int32_t getFeedResolutionDphi();
	virtual $ints* getResolution(int32_t units);
	virtual int32_t hashCode() override;
	virtual bool lessThanOrEquals(::javax::print::attribute::ResolutionSyntax* other);
	virtual $String* toString(int32_t units, $String* unitsName);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x2590487CB69EC891;
	int32_t crossFeedResolution = 0;
	int32_t feedResolution = 0;
	static const int32_t DPI = 100;
	static const int32_t DPCM = 254;
};

		} // attribute
	} // print
} // javax

#pragma pop_macro("DPCM")
#pragma pop_macro("DPI")

#endif // _javax_print_attribute_ResolutionSyntax_h_