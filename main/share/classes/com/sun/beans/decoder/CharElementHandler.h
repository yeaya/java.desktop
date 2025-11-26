#ifndef _com_sun_beans_decoder_CharElementHandler_h_
#define _com_sun_beans_decoder_CharElementHandler_h_
//$ class com.sun.beans.decoder.CharElementHandler
//$ extends com.sun.beans.decoder.StringElementHandler

#include <com/sun/beans/decoder/StringElementHandler.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class CharElementHandler : public ::com::sun::beans::decoder::StringElementHandler {
	$class(CharElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::StringElementHandler)
public:
	CharElementHandler();
	void init$();
	virtual void addAttribute($String* name, $String* value) override;
	virtual $Object* getValue($String* argument) override;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_CharElementHandler_h_