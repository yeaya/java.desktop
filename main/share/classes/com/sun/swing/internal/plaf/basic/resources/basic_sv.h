#ifndef _com_sun_swing_internal_plaf_basic_resources_basic_sv_h_
#define _com_sun_swing_internal_plaf_basic_resources_basic_sv_h_
//$ class com.sun.swing.internal.plaf.basic.resources.basic_sv
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

class basic_sv : public ::java::util::ListResourceBundle {
	$class(basic_sv, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	basic_sv();
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

#endif // _com_sun_swing_internal_plaf_basic_resources_basic_sv_h_