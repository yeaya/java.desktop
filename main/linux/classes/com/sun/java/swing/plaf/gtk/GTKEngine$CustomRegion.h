#ifndef _com_sun_java_swing_plaf_gtk_GTKEngine$CustomRegion_h_
#define _com_sun_java_swing_plaf_gtk_GTKEngine$CustomRegion_h_
//$ class com.sun.java.swing.plaf.gtk.GTKEngine$CustomRegion
//$ extends javax.swing.plaf.synth.Region

#include <javax/swing/plaf/synth/Region.h>

#pragma push_macro("TITLED_BORDER")
#undef TITLED_BORDER

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKEngine$CustomRegion : public ::javax::swing::plaf::synth::Region {
	$class(GTKEngine$CustomRegion, 0, ::javax::swing::plaf::synth::Region)
public:
	GTKEngine$CustomRegion();
	void init$($String* name);
	static ::javax::swing::plaf::synth::Region* TITLED_BORDER;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("TITLED_BORDER")

#endif // _com_sun_java_swing_plaf_gtk_GTKEngine$CustomRegion_h_