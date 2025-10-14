#ifndef _com_sun_beans_decoder_StringElementHandler_h_
#define _com_sun_beans_decoder_StringElementHandler_h_
//$ class com.sun.beans.decoder.StringElementHandler
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
namespace java {
	namespace lang {
		class StringBuilder;
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class StringElementHandler : public ::com::sun::beans::decoder::ElementHandler {
	$class(StringElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::ElementHandler)
public:
	StringElementHandler();
	void init$();
	virtual void addArgument(Object$* argument) override;
	virtual void addCharacter(char16_t ch) override;
	virtual $Object* getValue($String* argument);
	virtual ::com::sun::beans::decoder::ValueObject* getValueObject() override;
	::java::lang::StringBuilder* sb = nullptr;
	::com::sun::beans::decoder::ValueObject* value = nullptr;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_StringElementHandler_h_