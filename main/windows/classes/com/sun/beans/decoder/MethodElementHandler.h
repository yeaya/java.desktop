#ifndef _com_sun_beans_decoder_MethodElementHandler_h_
#define _com_sun_beans_decoder_MethodElementHandler_h_
//$ class com.sun.beans.decoder.MethodElementHandler
//$ extends com.sun.beans.decoder.NewElementHandler

#include <com/sun/beans/decoder/NewElementHandler.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {
				class ValueObject;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class MethodElementHandler : public ::com::sun::beans::decoder::NewElementHandler {
	$class(MethodElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::NewElementHandler)
public:
	MethodElementHandler();
	using ::com::sun::beans::decoder::NewElementHandler::getValueObject;
	void init$();
	virtual void addAttribute($String* name, $String* value) override;
	virtual ::com::sun::beans::decoder::ValueObject* getValueObject($Class* type, $ObjectArray* args) override;
	$String* name = nullptr;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_MethodElementHandler_h_