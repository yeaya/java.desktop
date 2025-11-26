#ifndef _com_sun_beans_decoder_IntElementHandler_h_
#define _com_sun_beans_decoder_IntElementHandler_h_
//$ class com.sun.beans.decoder.IntElementHandler
//$ extends com.sun.beans.decoder.StringElementHandler

#include <com/sun/beans/decoder/StringElementHandler.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class IntElementHandler : public ::com::sun::beans::decoder::StringElementHandler {
	$class(IntElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::StringElementHandler)
public:
	IntElementHandler();
	void init$();
	virtual $Object* getValue($String* argument) override;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_IntElementHandler_h_