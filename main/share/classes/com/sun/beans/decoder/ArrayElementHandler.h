#ifndef _com_sun_beans_decoder_ArrayElementHandler_h_
#define _com_sun_beans_decoder_ArrayElementHandler_h_
//$ class com.sun.beans.decoder.ArrayElementHandler
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
namespace java {
	namespace lang {
		class Integer;
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class ArrayElementHandler : public ::com::sun::beans::decoder::NewElementHandler {
	$class(ArrayElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::NewElementHandler)
public:
	ArrayElementHandler();
	using ::com::sun::beans::decoder::NewElementHandler::getValueObject;
	void init$();
	virtual void addAttribute($String* name, $String* value) override;
	virtual ::com::sun::beans::decoder::ValueObject* getValueObject($Class* type, $ObjectArray* args) override;
	virtual bool isArgument() override;
	virtual void startElement() override;
	::java::lang::Integer* length = nullptr;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_ArrayElementHandler_h_