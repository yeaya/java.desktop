#ifndef _sun_swing_plaf_synth_SynthFileChooserUI$UIBorder_h_
#define _sun_swing_plaf_synth_SynthFileChooserUI$UIBorder_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUI$UIBorder
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
namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthFileChooserUI;
			}
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthFileChooserUI$UIBorder : public ::javax::swing::border::AbstractBorder, public ::javax::swing::plaf::UIResource {
	$class(SynthFileChooserUI$UIBorder, $NO_CLASS_INIT, ::javax::swing::border::AbstractBorder, ::javax::swing::plaf::UIResource)
public:
	SynthFileChooserUI$UIBorder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::border::AbstractBorder::getBorderInsets;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::swing::plaf::synth::SynthFileChooserUI* this$0, ::java::awt::Insets* insets);
	virtual ::java::awt::Insets* getBorderInsets(::java::awt::Component* c, ::java::awt::Insets* insets) override;
	virtual bool isBorderOpaque() override;
	virtual void paintBorder(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) override;
	virtual $String* toString() override;
	::sun::swing::plaf::synth::SynthFileChooserUI* this$0 = nullptr;
	::java::awt::Insets* _insets = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUI$UIBorder_h_