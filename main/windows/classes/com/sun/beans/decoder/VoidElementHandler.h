#ifndef _com_sun_beans_decoder_VoidElementHandler_h_
#define _com_sun_beans_decoder_VoidElementHandler_h_
//$ class com.sun.beans.decoder.VoidElementHandler
//$ extends com.sun.beans.decoder.ObjectElementHandler

#include <com/sun/beans/decoder/ObjectElementHandler.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class VoidElementHandler : public ::com::sun::beans::decoder::ObjectElementHandler {
	$class(VoidElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::ObjectElementHandler)
public:
	VoidElementHandler();
	using ::com::sun::beans::decoder::ObjectElementHandler::getValueObject;
	void init$();
	virtual bool isArgument() override;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_VoidElementHandler_h_