#ifndef _com_sun_beans_decoder_VarElementHandler_h_
#define _com_sun_beans_decoder_VarElementHandler_h_
//$ class com.sun.beans.decoder.VarElementHandler
//$ extends com.sun.beans.decoder.ElementHandler

#include <com/sun/beans/decoder/ElementHandler.h>

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

class VarElementHandler : public ::com::sun::beans::decoder::ElementHandler {
	$class(VarElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::ElementHandler)
public:
	VarElementHandler();
	void init$();
	virtual void addAttribute($String* name, $String* value) override;
	virtual ::com::sun::beans::decoder::ValueObject* getValueObject() override;
	::com::sun::beans::decoder::ValueObject* value = nullptr;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_VarElementHandler_h_