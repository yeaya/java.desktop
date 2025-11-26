#ifndef _com_sun_beans_decoder_LongElementHandler_h_
#define _com_sun_beans_decoder_LongElementHandler_h_
//$ class com.sun.beans.decoder.LongElementHandler
//$ extends com.sun.beans.decoder.StringElementHandler

#include <com/sun/beans/decoder/StringElementHandler.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class LongElementHandler : public ::com::sun::beans::decoder::StringElementHandler {
	$class(LongElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::StringElementHandler)
public:
	LongElementHandler();
	void init$();
	virtual $Object* getValue($String* argument) override;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_LongElementHandler_h_