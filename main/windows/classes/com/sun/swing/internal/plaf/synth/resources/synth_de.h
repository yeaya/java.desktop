#ifndef _com_sun_swing_internal_plaf_synth_resources_synth_de_h_
#define _com_sun_swing_internal_plaf_synth_resources_synth_de_h_
//$ class com.sun.swing.internal.plaf.synth.resources.synth_de
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

class synth_de : public ::java::util::ListResourceBundle {
	$class(synth_de, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	synth_de();
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

#endif // _com_sun_swing_internal_plaf_synth_resources_synth_de_h_