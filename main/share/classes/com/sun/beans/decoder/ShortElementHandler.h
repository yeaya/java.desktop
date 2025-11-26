#ifndef _com_sun_beans_decoder_ShortElementHandler_h_
#define _com_sun_beans_decoder_ShortElementHandler_h_
//$ class com.sun.beans.decoder.ShortElementHandler
//$ extends com.sun.beans.decoder.StringElementHandler

#include <com/sun/beans/decoder/StringElementHandler.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class ShortElementHandler : public ::com::sun::beans::decoder::StringElementHandler {
	$class(ShortElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::StringElementHandler)
public:
	ShortElementHandler();
	void init$();
	virtual $Object* getValue($String* argument) override;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_ShortElementHandler_h_