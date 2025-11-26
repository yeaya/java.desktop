#ifndef _javax_swing_plaf_synth_SynthGraphicsUtils$SynthIconWrapper_h_
#define _javax_swing_plaf_synth_SynthGraphicsUtils$SynthIconWrapper_h_
//$ class javax.swing.plaf.synth.SynthGraphicsUtils$SynthIconWrapper
//$ extends javax.swing.Icon

#include <javax/swing/Icon.h>

#pragma push_macro("CACHE")
#undef CACHE

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthContext;
				class SynthIcon;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthGraphicsUtils$SynthIconWrapper : public ::javax::swing::Icon {
	$class(SynthGraphicsUtils$SynthIconWrapper, 0, ::javax::swing::Icon)
public:
	SynthGraphicsUtils$SynthIconWrapper();
	void init$(::javax::swing::plaf::synth::SynthIcon* icon, ::javax::swing::plaf::synth::SynthContext* context);
	static ::javax::swing::plaf::synth::SynthGraphicsUtils$SynthIconWrapper* get(::javax::swing::plaf::synth::SynthIcon* icon, ::javax::swing::plaf::synth::SynthContext* context);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	static void release(::javax::swing::plaf::synth::SynthGraphicsUtils$SynthIconWrapper* wrapper);
	virtual void reset(::javax::swing::plaf::synth::SynthIcon* icon, ::javax::swing::plaf::synth::SynthContext* context);
	static ::java::util::List* CACHE;
	::javax::swing::plaf::synth::SynthIcon* synthIcon = nullptr;
	::javax::swing::plaf::synth::SynthContext* context = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#pragma pop_macro("CACHE")

#endif // _javax_swing_plaf_synth_SynthGraphicsUtils$SynthIconWrapper_h_