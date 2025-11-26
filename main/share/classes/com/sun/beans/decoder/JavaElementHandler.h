#ifndef _com_sun_beans_decoder_JavaElementHandler_h_
#define _com_sun_beans_decoder_JavaElementHandler_h_
//$ class com.sun.beans.decoder.JavaElementHandler
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

class JavaElementHandler : public ::com::sun::beans::decoder::ElementHandler {
	$class(JavaElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::ElementHandler)
public:
	JavaElementHandler();
	void init$();
	virtual void addArgument(Object$* argument) override;
	virtual void addAttribute($String* name, $String* value) override;
	$Object* getValue();
	virtual ::com::sun::beans::decoder::ValueObject* getValueObject() override;
	virtual bool isArgument() override;
	bool isValid(Object$* owner);
	$Class* type = nullptr;
	::com::sun::beans::decoder::ValueObject* value = nullptr;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_JavaElementHandler_h_