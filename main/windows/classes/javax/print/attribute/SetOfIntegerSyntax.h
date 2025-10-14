#ifndef _javax_print_attribute_SetOfIntegerSyntax_h_
#define _javax_print_attribute_SetOfIntegerSyntax_h_
//$ class javax.print.attribute.SetOfIntegerSyntax
//$ extends java.io.Serializable
//$ implements java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class IntegerSyntax;
		}
	}
}

namespace javax {
	namespace print {
		namespace attribute {

class $export SetOfIntegerSyntax : public ::java::io::Serializable, public ::java::lang::Cloneable {
	$class(SetOfIntegerSyntax, $NO_CLASS_INIT, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	SetOfIntegerSyntax();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($String* members);
	void init$($Array<int32_t, 2>* members);
	void init$(int32_t member);
	void init$(int32_t lowerBound, int32_t upperBound);
	static void accumulate(::java::util::Vector* ranges, int32_t lb, int32_t ub);
	static $Array<int32_t, 2>* canonicalArrayForm(::java::util::Vector* ranges);
	virtual bool contains(int32_t x);
	virtual bool contains(::javax::print::attribute::IntegerSyntax* attribute);
	virtual bool equals(Object$* object) override;
	virtual $Array<int32_t, 2>* getMembers();
	virtual int32_t hashCode() override;
	virtual int32_t next(int32_t x);
	static $Array<int32_t, 2>* parse($String* members);
	static $Array<int32_t, 2>* parse($Array<int32_t, 2>* members);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x32E35AA253D8C34B;
	$Array<int32_t, 2>* members = nullptr;
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_SetOfIntegerSyntax_h_