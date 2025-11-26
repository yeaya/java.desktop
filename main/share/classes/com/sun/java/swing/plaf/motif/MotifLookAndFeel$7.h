#ifndef _com_sun_java_swing_plaf_motif_MotifLookAndFeel$7_h_
#define _com_sun_java_swing_plaf_motif_MotifLookAndFeel$7_h_
//$ class com.sun.java.swing.plaf.motif.MotifLookAndFeel$7
//$ extends javax.swing.UIDefaults$LazyValue

#include <javax/swing/UIDefaults$LazyValue.h>

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {
						class MotifLookAndFeel;
					}
				}
			}
		}
	}
}
namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

class $export MotifLookAndFeel$7 : public ::javax::swing::UIDefaults$LazyValue {
	$class(MotifLookAndFeel$7, $NO_CLASS_INIT, ::javax::swing::UIDefaults$LazyValue)
public:
	MotifLookAndFeel$7();
	void init$(::com::sun::java::swing::plaf::motif::MotifLookAndFeel* this$0);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	::com::sun::java::swing::plaf::motif::MotifLookAndFeel* this$0 = nullptr;
};

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#endif // _com_sun_java_swing_plaf_motif_MotifLookAndFeel$7_h_