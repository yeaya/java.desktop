#ifndef _com_sun_beans_decoder_TrueElementHandler_h_
#define _com_sun_beans_decoder_TrueElementHandler_h_
//$ class com.sun.beans.decoder.TrueElementHandler
//$ extends com.sun.beans.decoder.NullElementHandler

#include <com/sun/beans/decoder/NullElementHandler.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class TrueElementHandler : public ::com::sun::beans::decoder::NullElementHandler {
	$class(TrueElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::NullElementHandler)
public:
	TrueElementHandler();
	void init$();
	virtual $Object* getValue() override;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_TrueElementHandler_h_