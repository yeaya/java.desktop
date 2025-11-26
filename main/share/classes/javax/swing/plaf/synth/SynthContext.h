#ifndef _javax_swing_plaf_synth_SynthContext_h_
#define _javax_swing_plaf_synth_SynthContext_h_
//$ class javax.swing.plaf.synth.SynthContext
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
				class SynthPainter;
				class SynthStyle;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export SynthContext : public ::java::lang::Object {
	$class(SynthContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SynthContext();
	void init$();
	void init$(::javax::swing::JComponent* component, ::javax::swing::plaf::synth::Region* region, ::javax::swing::plaf::synth::SynthStyle* style, int32_t state);
	virtual ::javax::swing::JComponent* getComponent();
	virtual int32_t getComponentState();
	static ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, ::javax::swing::plaf::synth::SynthStyle* style, int32_t state);
	static ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* component, ::javax::swing::plaf::synth::Region* region, ::javax::swing::plaf::synth::SynthStyle* style, int32_t state);
	virtual ::javax::swing::plaf::synth::SynthPainter* getPainter();
	virtual ::javax::swing::plaf::synth::Region* getRegion();
	virtual ::javax::swing::plaf::synth::SynthStyle* getStyle();
	virtual bool isSubregion();
	virtual void setComponentState(int32_t state);
	virtual void setStyle(::javax::swing::plaf::synth::SynthStyle* style);
	::javax::swing::JComponent* component = nullptr;
	::javax::swing::plaf::synth::Region* region = nullptr;
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	int32_t state = 0;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthContext_h_