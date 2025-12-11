#ifndef _apple_laf_JRSUIConstants$DoubleValue_h_
#define _apple_laf_JRSUIConstants$DoubleValue_h_
//$ class apple.laf.JRSUIConstants$DoubleValue
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("TYPE_CODE")
#undef TYPE_CODE

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace apple {
	namespace laf {

class JRSUIConstants$DoubleValue : public ::java::lang::Object {
	$class(JRSUIConstants$DoubleValue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JRSUIConstants$DoubleValue();
	void init$(double doubleValue);
	virtual bool equals(Object$* obj) override;
	virtual int8_t getTypeCode();
	virtual int32_t hashCode() override;
	virtual void putValueInBuffer(::java::nio::ByteBuffer* buffer);
	virtual $String* toString() override;
	static const int8_t TYPE_CODE = 1;
	double doubleValue = 0.0;
};

	} // laf
} // apple

#pragma pop_macro("TYPE_CODE")

#endif // _apple_laf_JRSUIConstants$DoubleValue_h_