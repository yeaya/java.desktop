#ifndef _com_sun_swing_internal_plaf_synth_resources_synth_ja_h_
#define _com_sun_swing_internal_plaf_synth_resources_synth_ja_h_
//$ class com.sun.swing.internal.plaf.synth.resources.synth_ja
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

class synth_ja : public ::java::util::ListResourceBundle {
	$class(synth_ja, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	synth_ja();
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

#endif // _com_sun_swing_internal_plaf_synth_resources_synth_ja_h_