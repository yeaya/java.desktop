#ifndef _javax_swing_plaf_nimbus_NimbusIcon_h_
#define _javax_swing_plaf_nimbus_NimbusIcon_h_
//$ class javax.swing.plaf.nimbus.NimbusIcon
//$ extends javax.swing.plaf.synth.SynthIcon
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/synth/SynthIcon.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}
namespace javax {
	namespace swing {
		class Painter;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthContext;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

class NimbusIcon : public ::javax::swing::plaf::synth::SynthIcon, public ::javax::swing::plaf::UIResource {
	$class(NimbusIcon, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthIcon, ::javax::swing::plaf::UIResource)
public:
	NimbusIcon();
	using ::javax::swing::plaf::synth::SynthIcon::getIconWidth;
	using ::javax::swing::plaf::synth::SynthIcon::getIconHeight;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* prefix, $String* key, int32_t w, int32_t h);
	virtual int32_t getIconHeight(::javax::swing::plaf::synth::SynthContext* context) override;
	virtual int32_t getIconWidth(::javax::swing::plaf::synth::SynthContext* context) override;
	static ::javax::swing::Painter* paintFilter(::javax::swing::Painter* painter);
	virtual void paintIcon(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y) override;
	int32_t scale(::javax::swing::plaf::synth::SynthContext* context, int32_t size);
	virtual $String* toString() override;
	int32_t width = 0;
	int32_t height = 0;
	$String* prefix = nullptr;
	$String* key = nullptr;
};

			} // nimbus
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_nimbus_NimbusIcon_h_