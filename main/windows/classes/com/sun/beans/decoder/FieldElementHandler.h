#ifndef _com_sun_beans_decoder_FieldElementHandler_h_
#define _com_sun_beans_decoder_FieldElementHandler_h_
//$ class com.sun.beans.decoder.FieldElementHandler
//$ extends com.sun.beans.decoder.AccessorElementHandler

#include <com/sun/beans/decoder/AccessorElementHandler.h>

namespace java {
	namespace lang {
		namespace reflect {
			class Field;
		}
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class FieldElementHandler : public ::com::sun::beans::decoder::AccessorElementHandler {
	$class(FieldElementHandler, $NO_CLASS_INIT, ::com::sun::beans::decoder::AccessorElementHandler)
public:
	FieldElementHandler();
	void init$();
	virtual void addAttribute($String* name, $String* value) override;
	static ::java::lang::reflect::Field* findField(Object$* bean, $String* name);
	virtual $Object* getContextBean() override;
	static $Object* getFieldValue(Object$* bean, $String* name);
	virtual $Object* getValue($String* name) override;
	virtual bool isArgument() override;
	static void setFieldValue(Object$* bean, $String* name, Object$* value);
	virtual void setValue($String* name, Object$* value) override;
	$Class* type = nullptr;
};

			} // decoder
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_decoder_FieldElementHandler_h_