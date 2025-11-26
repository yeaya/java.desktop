#ifndef _com_sun_java_swing_plaf_gtk_GTKRegion_h_
#define _com_sun_java_swing_plaf_gtk_GTKRegion_h_
//$ class com.sun.java.swing.plaf.gtk.GTKRegion
//$ extends javax.swing.plaf.synth.Region

#include <javax/swing/plaf/synth/Region.h>

#pragma push_macro("HANDLE_BOX")
#undef HANDLE_BOX

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKRegion : public ::javax::swing::plaf::synth::Region {
	$class(GTKRegion, 0, ::javax::swing::plaf::synth::Region)
public:
	GTKRegion();
	void init$($String* name, $String* ui, bool subregion);
	static ::javax::swing::plaf::synth::Region* HANDLE_BOX;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("HANDLE_BOX")

#endif // _com_sun_java_swing_plaf_gtk_GTKRegion_h_