#ifndef _javax_print_attribute_Size2DSyntax_h_
#define _javax_print_attribute_Size2DSyntax_h_
//$ class javax.print.attribute.Size2DSyntax
//$ extends java.io.Serializable
//$ implements java.lang.Cloneable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("INCH")
#undef INCH
#pragma push_macro("MM")
#undef MM

namespace javax {
	namespace print {
		namespace attribute {

class $import Size2DSyntax : public ::java::io::Serializable, public ::java::lang::Cloneable {
	$class(Size2DSyntax, $NO_CLASS_INIT, ::java::io::Serializable, ::java::lang::Cloneable)
public:
	Size2DSyntax();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(float x, float y, int32_t units);
	void init$(int32_t x, int32_t y, int32_t units);
	static float convertFromMicrometers(int32_t x, int32_t units);
	virtual bool equals(Object$* object) override;
	virtual $floats* getSize(int32_t units);
	virtual float getX(int32_t units);
	virtual int32_t getXMicrometers();
	virtual float getY(int32_t units);
	virtual int32_t getYMicrometers();
	virtual int32_t hashCode() override;
	virtual $String* toString(int32_t units, $String* unitsName);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x4D7FEA8F7BA9EAB2;
	int32_t x = 0;
	int32_t y = 0;
	static const int32_t INCH = 25400;
	static const int32_t MM = 1000;
};

		} // attribute
	} // print
} // javax

#pragma pop_macro("INCH")
#pragma pop_macro("MM")

#endif // _javax_print_attribute_Size2DSyntax_h_