#ifndef _com_sun_beans_decoder_FloatElementHandler_h_
#define _com_sun_beans_decoder_FloatElementHandler_h_
//$ class com.sun.beans.decoder.FloatElementHandler
//$ extends com.sun.beans.decoder.StringElementHandler

#include <com/sun/beans/decoder/StringElementHandler.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class FloatElementHandler : public ::com::sun::beans::decoder::StringElementHandler {
	$class(FloatElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::StringElementHandler)
public:
	FloatElementHandler();
	void init$();
	virtual $Object* getValue($String* argument) override;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_FloatElementHandler_h_