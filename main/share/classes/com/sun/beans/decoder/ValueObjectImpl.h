#ifndef _com_sun_beans_decoder_ValueObjectImpl_h_
#define _com_sun_beans_decoder_ValueObjectImpl_h_
//$ class com.sun.beans.decoder.ValueObjectImpl
//$ extends com.sun.beans.decoder.ValueObject

#include <com/sun/beans/decoder/ValueObject.h>

#pragma push_macro("NULL")
#undef NULL
#pragma push_macro("VOID")
#undef VOID

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class ValueObjectImpl : public ::com::sun::beans::decoder::ValueObject {
	$class(ValueObjectImpl, 0, ::com::sun::beans::decoder::ValueObject)
public:
	ValueObjectImpl();
	void init$();
	void init$(Object$* value);
	static ::com::sun::beans::decoder::ValueObject* create(Object$* value);
	virtual $Object* getValue() override;
	virtual bool isVoid() override;
	static ::com::sun::beans::decoder::ValueObject* NULL;
	static ::com::sun::beans::decoder::ValueObject* VOID;
	$Object* value = nullptr;
	bool isVoid$ = false;
};

			} // decoder
		} // beans
	} // sun
} // com

#pragma pop_macro("NULL")
#pragma pop_macro("VOID")

#endif // _com_sun_beans_decoder_ValueObjectImpl_h_