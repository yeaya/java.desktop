#ifndef _com_sun_swing_internal_plaf_basic_resources_basic_zh_TW_h_
#define _com_sun_swing_internal_plaf_basic_resources_basic_zh_TW_h_
//$ class com.sun.swing.internal.plaf.basic.resources.basic_zh_TW
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

class basic_zh_TW : public ::java::util::ListResourceBundle {
	$class(basic_zh_TW, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	basic_zh_TW();
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

#endif // _com_sun_swing_internal_plaf_basic_resources_basic_zh_TW_h_