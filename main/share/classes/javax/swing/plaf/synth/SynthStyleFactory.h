#ifndef _javax_swing_plaf_synth_SynthStyleFactory_h_
#define _javax_swing_plaf_synth_SynthStyleFactory_h_
//$ class javax.swing.plaf.synth.SynthStyleFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class JComponent;
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
			namespace synth {

class $export SynthStyleFactory : public ::java::lang::Object {
	$class(SynthStyleFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SynthStyleFactory();
	void init$();
	virtual ::javax::swing::plaf::synth::SynthStyle* getStyle(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* id) {return nullptr;}
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthStyleFactory_h_