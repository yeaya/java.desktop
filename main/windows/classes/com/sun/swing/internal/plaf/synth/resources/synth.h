#ifndef _com_sun_swing_internal_plaf_synth_resources_synth_h_
#define _com_sun_swing_internal_plaf_synth_resources_synth_h_
//$ class com.sun.swing.internal.plaf.synth.resources.synth
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace swing {
			namespace internal {
				namespace plaf {
					namespace synth {
						namespace resources {

class synth : public ::java::util::ListResourceBundle {
	$class(synth, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	synth();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

						} // resources
					} // synth
				} // plaf
			} // internal
		} // swing
	} // sun
} // com

#endif // _com_sun_swing_internal_plaf_synth_resources_synth_h_