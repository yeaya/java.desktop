#ifndef _com_sun_beans_decoder_ClassElementHandler_h_
#define _com_sun_beans_decoder_ClassElementHandler_h_
//$ class com.sun.beans.decoder.ClassElementHandler
//$ extends com.sun.beans.decoder.StringElementHandler

#include <com/sun/beans/decoder/StringElementHandler.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class ClassElementHandler : public ::com::sun::beans::decoder::StringElementHandler {
	$class(ClassElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::StringElementHandler)
public:
	ClassElementHandler();
	void init$();
	virtual $Object* getValue($String* argument) override;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_ClassElementHandler_h_