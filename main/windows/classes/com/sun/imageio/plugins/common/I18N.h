#ifndef _com_sun_imageio_plugins_common_I18N_h_
#define _com_sun_imageio_plugins_common_I18N_h_
//$ class com.sun.imageio.plugins.common.I18N
//$ extends com.sun.imageio.plugins.common.I18NImpl

#include <com/sun/imageio/plugins/common/I18NImpl.h>

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

class I18N : public ::com::sun::imageio::plugins::common::I18NImpl {
	$class(I18N, 0, ::com::sun::imageio::plugins::common::I18NImpl)
public:
	I18N();
	void init$();
	static $String* getString($String* key);
	static $String* resource_name;
};

				} // common
			} // plugins
		} // imageio
	} // sun
} // com

#endif // _com_sun_imageio_plugins_common_I18N_h_