#ifndef _sun_swing_plaf_synth_SynthFileChooserUI_h_
#define _sun_swing_plaf_synth_SynthFileChooserUI_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUI
//$ extends javax.swing.plaf.basic.BasicFileChooserUI
//$ implements javax.swing.plaf.synth.SynthUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <javax/swing/plaf/synth/SynthUI.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
		class PropertyChangeListener;
	}
}
namespace java {
	namespace io {
		class File;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class JButton;
		class JComponent;
		class JFileChooser;
	}
}
namespace javax {
	namespace swing {
		namespace filechooser {
			class FileFilter;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			class ComponentUI;
		}
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {
				class Region;
				class SynthContext;
				class SynthStyle;
			}
		}
	}
}
namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthFileChooserUI$GlobFilter;
			}
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $import SynthFileChooserUI : public ::javax::swing::plaf::basic::BasicFileChooserUI, public ::javax::swing::plaf::synth::SynthUI {
	$class(SynthFileChooserUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicFileChooserUI, ::javax::swing::plaf::synth::SynthUI)
public:
	SynthFileChooserUI();
	virtual $Object* clone() override;
	virtual ::javax::swing::ActionMap* createActionMap() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getFileName() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JFileChooser* b);
	virtual void clearIconCache() override;
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener(::javax::swing::JFileChooser* fc) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void doAccessoryChanged(::java::beans::PropertyChangeEvent* e);
	virtual void doAncestorChanged(::java::beans::PropertyChangeEvent* e);
	virtual void doControlButtonsChanged(::java::beans::PropertyChangeEvent* e);
	virtual void doDirectoryChanged(::java::beans::PropertyChangeEvent* e);
	virtual void doFileSelectionModeChanged(::java::beans::PropertyChangeEvent* e);
	virtual void doMultiSelectionChanged(::java::beans::PropertyChangeEvent* e);
	virtual void doSelectedFileChanged(::java::beans::PropertyChangeEvent* e);
	virtual void doSelectedFilesChanged(::java::beans::PropertyChangeEvent* e);
	virtual ::javax::swing::JButton* getApproveButton(::javax::swing::JFileChooser* fc) override;
	virtual ::javax::swing::JButton* getCancelButton(::javax::swing::JFileChooser* fc);
	$String* getCommonStartString($Array<::java::io::File>* files);
	int32_t getComponentState(::javax::swing::JComponent* c);
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c) override;
	virtual ::javax::swing::plaf::synth::SynthContext* getContext(::javax::swing::JComponent* c, int32_t state);
	virtual ::javax::swing::Action* getFileNameCompletionAction();
	::javax::swing::plaf::synth::Region* getRegion(::javax::swing::JComponent* c);
	virtual void installComponents(::javax::swing::JFileChooser* fc) override;
	virtual void installDefaults(::javax::swing::JFileChooser* fc) override;
	virtual void installIcons(::javax::swing::JFileChooser* fc) override;
	virtual void installListeners(::javax::swing::JFileChooser* fc) override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	static bool isGlobPattern($String* fileName);
	virtual void paint(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	virtual void paint(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g);
	virtual void paintBorder(::javax::swing::plaf::synth::SynthContext* context, ::java::awt::Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) override;
	void resetGlobFilter();
	virtual void setFileName($String* fileName) override;
	virtual $String* toString() override;
	virtual void uninstallComponents(::javax::swing::JFileChooser* fc) override;
	virtual void uninstallDefaults(::javax::swing::JFileChooser* fc) override;
	virtual void update(::java::awt::Graphics* g, ::javax::swing::JComponent* c) override;
	void updateFileNameCompletion();
	void updateStyle(::javax::swing::JComponent* c);
	::javax::swing::JButton* approveButton = nullptr;
	::javax::swing::JButton* cancelButton = nullptr;
	::javax::swing::plaf::synth::SynthStyle* style = nullptr;
	::javax::swing::Action* fileNameCompletionAction = nullptr;
	::javax::swing::filechooser::FileFilter* actualFileFilter = nullptr;
	::sun::swing::plaf::synth::SynthFileChooserUI$GlobFilter* globFilter = nullptr;
	$String* fileNameCompletionString = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // sun

#endif // _sun_swing_plaf_synth_SynthFileChooserUI_h_