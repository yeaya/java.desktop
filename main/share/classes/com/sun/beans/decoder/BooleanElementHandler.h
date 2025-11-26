#ifndef _com_sun_beans_decoder_BooleanElementHandler_h_
#define _com_sun_beans_decoder_BooleanElementHandler_h_
//$ class com.sun.beans.decoder.BooleanElementHandler
//$ extends com.sun.beans.decoder.StringElementHandler

#include <com/sun/beans/decoder/StringElementHandler.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class BooleanElementHandler : public ::com::sun::beans::decoder::StringElementHandler {
	$class(BooleanElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::StringElementHandler)
public:
	BooleanElementHandler();
	void init$();
	virtual $Object* getValue($String* argument) override;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_BooleanElementHandler_h_