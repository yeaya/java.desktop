#ifndef _com_sun_beans_decoder_NullElementHandler_h_
#define _com_sun_beans_decoder_NullElementHandler_h_
//$ class com.sun.beans.decoder.NullElementHandler
//$ extends com.sun.beans.decoder.ElementHandler
//$ implements com.sun.beans.decoder.ValueObject

#include <com/sun/beans/decoder/ElementHandler.h>
#include <com/sun/beans/decoder/ValueObject.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class NullElementHandler : public ::com::sun::beans::decoder::ElementHandler, public ::com::sun::beans::decoder::ValueObject {
	$class(NullElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::ElementHandler, ::com::sun::beans::decoder::ValueObject)
public:
	NullElementHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual $Object* getValue() override;
	virtual ::com::sun::beans::decoder::ValueObject* getValueObject() override;
	virtual bool isVoid() override;
	virtual $String* toString() override;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_NullElementHandler_h_