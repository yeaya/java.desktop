#ifndef _com_sun_java_swing_plaf_motif_MotifTextUI_h_
#define _com_sun_java_swing_plaf_motif_MotifTextUI_h_
//$ class com.sun.java.swing.plaf.motif.MotifTextUI
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		namespace text {
			class Caret;
			class JTextComponent$KeyBinding;
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifTextUI : public ::java::lang::Object {
	$class(MotifTextUI, 0, ::java::lang::Object)
public:
	MotifTextUI();
	void init$();
	static ::javax::swing::text::Caret* createCaret();
	static $Array<::javax::swing::text::JTextComponent$KeyBinding>* defaultBindings;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifTextUI_h_