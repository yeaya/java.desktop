#ifndef _com_sun_beans_decoder_PropertyElementHandler_h_
#define _com_sun_beans_decoder_PropertyElementHandler_h_
//$ class com.sun.beans.decoder.PropertyElementHandler
//$ extends com.sun.beans.decoder.AccessorElementHandler

#include <com/sun/beans/decoder/AccessorElementHandler.h>
#include <java/lang/Array.h>

#pragma push_macro("GETTER")
#undef GETTER
#pragma push_macro("SETTER")
#undef SETTER

namespace java {
	namespace beans {
		class PropertyDescriptor;
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace decoder {

class PropertyElementHandler : public ::com::sun::beans::decoder::AccessorElementHandler {
	$class(PropertyElementHandler, 0, ::com::sun::beans::decoder::AccessorElementHandler)
public:
	PropertyElementHandler();
	void init$();
	virtual void addAttribute($String* name, $String* value) override;
	static ::java::lang::reflect::Method* findGetter($Class* type, $String* name, $ClassArray* args);
	static ::java::lang::reflect::Method* findSetter($Class* type, $String* name, $ClassArray* args);
	static ::java::beans::PropertyDescriptor* getProperty($Class* type, $String* name);
	static $Object* getPropertyValue(Object$* bean, $String* name, ::java::lang::Integer* index);
	virtual $Object* getValue($String* name) override;
	virtual bool isArgument() override;
	static void setPropertyValue(Object$* bean, $String* name, ::java::lang::Integer* index, Object$* value);
	virtual void setValue($String* name, Object$* value) override;
	static $String* GETTER;
	static $String* SETTER;
	::java::lang::Integer* index = nullptr;
};

			} // decoder
		} // beans
	} // sun
} // com

#pragma pop_macro("GETTER")
#pragma pop_macro("SETTER")

#endif // _com_sun_beans_decoder_PropertyElementHandler_h_