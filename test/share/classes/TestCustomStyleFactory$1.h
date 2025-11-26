#ifndef _TestCustomStyleFactory$1_h_
#define _TestCustomStyleFactory$1_h_
//$ class TestCustomStyleFactory$1
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
			namespace synth {
				class Region;
				class SynthStyle;
			}
		}
	}
}

class TestCustomStyleFactory$1 : public ::javax::swing::plaf::synth::SynthStyleFactory {
	$class(TestCustomStyleFactory$1, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthStyleFactory)
public:
	TestCustomStyleFactory$1();
	void init$(::javax::swing::plaf::synth::SynthStyleFactory* val$original);
	virtual ::javax::swing::plaf::synth::SynthStyle* getStyle(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::Region* id) override;
	::javax::swing::plaf::synth::SynthStyleFactory* val$original = nullptr;
};

#endif // _TestCustomStyleFactory$1_h_