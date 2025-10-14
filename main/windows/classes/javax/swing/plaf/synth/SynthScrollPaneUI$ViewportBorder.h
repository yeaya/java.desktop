#ifndef _javax_swing_plaf_synth_SynthScrollPaneUI$ViewportBorder_h_
#define _javax_swing_plaf_synth_SynthScrollPaneUI$ViewportBorder_h_
//$ class javax.swing.plaf.synth.SynthScrollPaneUI$ViewportBorder
//$ extends javax.swing.border.AbstractBorder
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/UIResource.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Insets;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthContext;
				class SynthScrollPaneUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthScrollPaneUI$ViewportBorder : public ::javax::swing::border::AbstractBorder, public ::javax::swing::plaf::UIResource {
	$class(SynthScrollPaneUI$ViewportBorder, 0, ::javax::swing::border::AbstractBorder, ::javax::swing::plaf::UIResource)
public:
	SynthScrollPaneUI$ViewportBorder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::synth::SynthScrollPaneUI* this$0, ::javax::swing::plaf::synth::SynthContext* context);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual $String* toString() override;
	::javax::swing::plaf::synth::SynthScrollPaneUI* this$0 = nullptr;
	static bool $assertionsDisabled;
	::java::awt::Insets* insets = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthScrollPaneUI$ViewportBorder_h_