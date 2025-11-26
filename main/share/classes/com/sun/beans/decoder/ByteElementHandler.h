#ifndef _com_sun_beans_decoder_ByteElementHandler_h_
#define _com_sun_beans_decoder_ByteElementHandler_h_
//$ class com.sun.beans.decoder.ByteElementHandler
//$ extends com.sun.beans.decoder.StringElementHandler

#include <com/sun/beans/decoder/StringElementHandler.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class ByteElementHandler : public ::com::sun::beans::decoder::StringElementHandler {
	$class(ByteElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::StringElementHandler)
public:
	ByteElementHandler();
	void init$();
	virtual $Object* getValue($String* argument) override;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_ByteElementHandler_h_