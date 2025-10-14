#ifndef _com_sun_beans_decoder_DoubleElementHandler_h_
#define _com_sun_beans_decoder_DoubleElementHandler_h_
//$ class com.sun.beans.decoder.DoubleElementHandler
//$ extends com.sun.beans.decoder.StringElementHandler

#include <com/sun/beans/decoder/StringElementHandler.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class DoubleElementHandler : public ::com::sun::beans::decoder::StringElementHandler {
	$class(DoubleElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::StringElementHandler)
public:
	DoubleElementHandler();
	void init$();
	virtual $Object* getValue($String* argument) override;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_DoubleElementHandler_h_