#ifndef _javax_swing_text_html_CSS$LengthUnit_h_
#define _javax_swing_text_html_CSS$LengthUnit_h_
//$ class javax.swing.text.html.CSS$LengthUnit
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

#pragma push_macro("UNINITIALIZED_LENGTH")
#undef UNINITIALIZED_LENGTH

namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

class $import CSS$LengthUnit : public ::java::io::Serializable {
	$class(CSS$LengthUnit, 0, ::java::io::Serializable)
public:
	CSS$LengthUnit();
	void init$($String* value, int16_t defaultType, float defaultValue);
	virtual float getValue(bool w3cLengthUnits);
	static float getValue(float value, $String* units, ::java::lang::Boolean* w3cLengthUnits);
	virtual void parse($String* value, int16_t defaultType, float defaultValue);
	virtual $String* toString() override;
	static ::java::util::Hashtable* lengthMapping;
	static ::java::util::Hashtable* w3cLengthMapping;
	int16_t type = 0;
	float value = 0.0;
	$String* units = nullptr;
	static const int16_t UNINITIALIZED_LENGTH = (int16_t)10;
};

			} // html
		} // text
	} // swing
} // javax

#pragma pop_macro("UNINITIALIZED_LENGTH")

#endif // _javax_swing_text_html_CSS$LengthUnit_h_