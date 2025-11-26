#ifndef _com_sun_beans_decoder_AccessorElementHandler_h_
#define _com_sun_beans_decoder_AccessorElementHandler_h_
//$ class com.sun.beans.decoder.AccessorElementHandler
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

class AccessorElementHandler : public ::com::sun::beans::decoder::ElementHandler {
	$class(AccessorElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::ElementHandler)
public:
	AccessorElementHandler();
	void init$();
	virtual void addArgument(Object$* argument) override;
	virtual void addAttribute($String* name, $String* value) override;
	virtual $Object* getValue($String* name) {return nullptr;}
	virtual ::com::sun::beans::decoder::ValueObject* getValueObject() override;
	virtual void setValue($String* name, Object$* value) {}
	$String* name = nullptr;
	::com::sun::beans::decoder::ValueObject* value = nullptr;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_AccessorElementHandler_h_