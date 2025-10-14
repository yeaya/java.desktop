#ifndef _com_sun_beans_decoder_ValueObject_h_
#define _com_sun_beans_decoder_ValueObject_h_
//$ interface com.sun.beans.decoder.ValueObject
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class ValueObject : public ::java::lang::Object {
	$interface(ValueObject, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getValue() {return nullptr;}
	virtual bool isVoid() {return false;}
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_ValueObject_h_