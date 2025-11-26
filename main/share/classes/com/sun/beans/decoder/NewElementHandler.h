#ifndef _com_sun_beans_decoder_NewElementHandler_h_
#define _com_sun_beans_decoder_NewElementHandler_h_
//$ class com.sun.beans.decoder.NewElementHandler
//$ extends com.sun.beans.decoder.ElementHandler

#include <com/sun/beans/decoder/ElementHandler.h>
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
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class NewElementHandler : public ::com::sun::beans::decoder::ElementHandler {
	$class(NewElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::ElementHandler)
public:
	NewElementHandler();
	void init$();
	virtual void addArgument(Object$* argument) override;
	virtual void addAttribute($String* name, $String* value) override;
	static $ClassArray* getArgumentTypes($ObjectArray* arguments);
	static $ObjectArray* getArguments($ObjectArray* arguments, $ClassArray* types);
	virtual $Object* getContextBean() override;
	virtual ::com::sun::beans::decoder::ValueObject* getValueObject() override;
	virtual ::com::sun::beans::decoder::ValueObject* getValueObject($Class* type, $ObjectArray* args);
	::java::util::List* arguments = nullptr;
	::com::sun::beans::decoder::ValueObject* value = nullptr;
	$Class* type = nullptr;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_NewElementHandler_h_