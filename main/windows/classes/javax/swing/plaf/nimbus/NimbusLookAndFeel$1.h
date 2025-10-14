#ifndef _javax_swing_plaf_nimbus_NimbusLookAndFeel$1_h_
#define _javax_swing_plaf_nimbus_NimbusLookAndFeel$1_h_
//$ class javax.swing.plaf.nimbus.NimbusLookAndFeel$1
//$ extends javax.swing.plaf.synth.SynthStyleFactory

#include <javax/swing/plaf/synth/SynthStyleFactory.h>

namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {
				class NimbusLookAndFeel;
			}
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class Region;
				class SynthStyle;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class NimbusLookAndFeel$1 : public ::javax::swing::plaf::synth::SynthStyleFactory {
	$class(NimbusLookAndFeel$1, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthStyleFactory)
public:
	NimbusLookAndFeel$1();
	void init$(::javax::swing::plaf::nimbus::NimbusLookAndFeel* this$0);
	virtual ::javax::swing::plaf::synth::SynthStyle* getStyle(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* r) override;
	::javax::swing::plaf::nimbus::NimbusLookAndFeel* this$0 = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_NimbusLookAndFeel$1_h_