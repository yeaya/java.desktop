#ifndef _com_sun_java_swing_plaf_motif_resources_motif_it_h_
#define _com_sun_java_swing_plaf_motif_resources_motif_it_h_
//$ class com.sun.java.swing.plaf.motif.resources.motif_it
//$ extends java.util.ListResourceBundle

#include <java/lang/Array.h>
#include <java/util/ListResourceBundle.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						namespace resources {

class motif_it : public ::java::util::ListResourceBundle {
	$class(motif_it, $NO_CLASS_INIT, ::java::util::ListResourceBundle)
public:
	motif_it();
	void init$();
	virtual $Array<::java::lang::Object, 2>* getContents() override;
};

						} // resources
					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_resources_motif_it_h_