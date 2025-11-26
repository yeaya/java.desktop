#ifndef _bug6924059$1$1_h_
#define _bug6924059$1$1_h_
//$ class bug6924059$1$1
//$ extends javax.swing.plaf.synth.SynthScrollBarUI

#include <javax/swing/plaf/synth/SynthScrollBarUI.h>

class bug6924059$1;

class bug6924059$1$1 : public ::javax::swing::plaf::synth::SynthScrollBarUI {
	$class(bug6924059$1$1, $NO_CLASS_INIT, ::javax::swing::plaf::synth::SynthScrollBarUI)
public:
	bug6924059$1$1();
	void init$(::bug6924059$1* this$0);
	virtual void configureScrollBarColors() override;
	using ::javax::swing::plaf::synth::SynthScrollBarUI::paintTrack;
	using ::javax::swing::plaf::synth::SynthScrollBarUI::paintThumb;
	::bug6924059$1* this$0 = nullptr;
};

#endif // _bug6924059$1$1_h_