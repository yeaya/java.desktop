#ifndef _sun_swing_plaf_synth_SynthFileChooserUI$GlobFilter_h_
#define _sun_swing_plaf_synth_SynthFileChooserUI$GlobFilter_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUI$GlobFilter
//$ extends javax.swing.filechooser.FileFilter

#include <javax/swing/filechooser/FileFilter.h>

namespace java {
	namespace io {
		class File;
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
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

class $import SynthFileChooserUI$GlobFilter : public ::javax::swing::filechooser::FileFilter {
	$class(SynthFileChooserUI$GlobFilter, $NO_CLASS_INIT, ::javax::swing::filechooser::FileFilter)
public:
	SynthFileChooserUI$GlobFilter();
	void init$(::sun::swing::plaf::synth::SynthFileChooserUI* this$0);
	virtual bool accept(::java::io::File* f) override;
	virtual $String* getDescription() override;
	virtual void setPattern($String* globPattern);
	::sun::swing::plaf::synth::SynthFileChooserUI* this$0 = nullptr;
	::java::util::regex::Pattern* pattern = nullptr;
	$String* globPattern = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUI$GlobFilter_h_