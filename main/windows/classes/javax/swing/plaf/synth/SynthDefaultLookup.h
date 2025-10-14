#ifndef _javax_swing_plaf_synth_SynthDefaultLookup_h_
#define _javax_swing_plaf_synth_SynthDefaultLookup_h_
//$ class javax.swing.plaf.synth.SynthDefaultLookup
//$ extends sun.swing.DefaultLookup

#include <sun/swing/DefaultLookup.h>

namespace javax {
	namespace swing {
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthDefaultLookup : public ::sun::swing::DefaultLookup {
	$class(SynthDefaultLookup, $NO_CLASS_INIT, ::sun::swing::DefaultLookup)
public:
	SynthDefaultLookup();
	void init$();
	virtual $Object* getDefault(::javax::swing::JComponent* c, ::javax::swing::plaf::ComponentUI* ui, $String* key) override;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthDefaultLookup_h_