#ifndef _bug8081411$CenteredSynthIcon_h_
#define _bug8081411$CenteredSynthIcon_h_
//$ class bug8081411$CenteredSynthIcon
//$ extends javax.swing.plaf.synth.SynthIcon

#include <javax/swing/plaf/synth/SynthIcon.h>

namespace java {
	namespace awt {
		class Graphics;
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

class bug8081411$CenteredSynthIcon : public ::javax::swing::plaf::synth::SynthIcon {
	$class(bug8081411$CenteredSynthIcon, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthIcon)
public:
	bug8081411$CenteredSynthIcon();
	using ::javax::swing::plaf::synth::SynthIcon::getIconWidth;
	using ::javax::swing::plaf::synth::SynthIcon::getIconHeight;
	void init$(::javax::swing::plaf::synth::SynthIcon* icon, int32_t width, int32_t height);
	virtual int32_t getIconHeight(::javax::swing::plaf::synth::SynthContext* sc) override;
	virtual int32_t getIconWidth(::javax::swing::plaf::synth::SynthContext* sc) override;
	using ::javax::swing::plaf::synth::SynthIcon::paintIcon;
	virtual void paintIcon(::javax::swing::plaf::synth::SynthContext* syntContext, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	::javax::swing::plaf::synth::SynthIcon* icon = nullptr;
	int32_t width = 0;
	int32_t height = 0;
};

#endif // _bug8081411$CenteredSynthIcon_h_