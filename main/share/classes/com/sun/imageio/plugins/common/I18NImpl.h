#ifndef _com_sun_imageio_plugins_common_I18NImpl_h_
#define _com_sun_imageio_plugins_common_I18NImpl_h_
//$ class com.sun.imageio.plugins.common.I18NImpl
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

class I18NImpl : public ::java::lang::Object {
	$class(I18NImpl, $NO_CLASS_INIT, ::java::lang::Object)
public:
	I18NImpl();
	void init$();
	static $String* getString($String* className, $String* resource_name, $String* key);
};

				} // common
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_common_I18NImpl_h_