#ifndef _com_sun_swing_internal_plaf_basic_resources_basic_it_h_
#define _com_sun_swing_internal_plaf_basic_resources_basic_it_h_
//$ class com.sun.swing.internal.plaf.basic.resources.basic_it
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace swing {
			namespace internal {
				namespace plaf {
					namespace basic {
						namespace resources {

class basic_it : public ::java::util::ListResourceBundle {
	$class(basic_it, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	basic_it();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

						} // resources
					} // basic
				} // plaf
			} // internal
		} // swing
	} // sun
} // com

#endif // _com_sun_swing_internal_plaf_basic_resources_basic_it_h_