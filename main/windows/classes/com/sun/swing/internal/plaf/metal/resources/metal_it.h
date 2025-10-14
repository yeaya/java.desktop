#ifndef _com_sun_swing_internal_plaf_metal_resources_metal_it_h_
#define _com_sun_swing_internal_plaf_metal_resources_metal_it_h_
//$ class com.sun.swing.internal.plaf.metal.resources.metal_it
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace swing {
			namespace internal {
				namespace plaf {
					namespace metal {
						namespace resources {

class metal_it : public ::java::util::ListResourceBundle {
	$class(metal_it, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	metal_it();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

						} // resources
					} // metal
				} // plaf
			} // internal
		} // swing
	} // sun
} // com

#endif // _com_sun_swing_internal_plaf_metal_resources_metal_it_h_