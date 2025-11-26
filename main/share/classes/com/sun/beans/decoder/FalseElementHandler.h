#ifndef _com_sun_beans_decoder_FalseElementHandler_h_
#define _com_sun_beans_decoder_FalseElementHandler_h_
//$ class com.sun.beans.decoder.FalseElementHandler
//$ extends com.sun.beans.decoder.NullElementHandler

#include <com/sun/beans/decoder/NullElementHandler.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class FalseElementHandler : public ::com::sun::beans::decoder::NullElementHandler {
	$class(FalseElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::NullElementHandler)
public:
	FalseElementHandler();
	void init$();
	virtual $Object* getValue() override;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_FalseElementHandler_h_