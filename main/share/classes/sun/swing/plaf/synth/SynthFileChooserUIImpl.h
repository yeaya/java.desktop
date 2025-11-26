#ifndef _sun_swing_plaf_synth_SynthFileChooserUIImpl_h_
#define _sun_swing_plaf_synth_SynthFileChooserUIImpl_h_
//$ class sun.swing.plaf.synth.SynthFileChooserUIImpl
//$ extends sun.swing.plaf.synth.SynthFileChooserUI

#include <java/lang/Array.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI.h>

#pragma push_macro("LIST_PREF_SIZE")
#undef LIST_PREF_SIZE

namespace java {
	namespace awt {
		class Dimension;
		class Insets;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseListener;
		}
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
namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class ActionMap;
		class JComboBox;
		class JComponent;
		class JFileChooser;
		class JLabel;
		class JList;
		class JPanel;
		class JTextField;
		class JToggleButton;
	}
}
namespace sun {
	namespace swing {
		class FilePane;
	}
}
namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {
				class SynthFileChooserUIImpl$AlignedLabel;
				class SynthFileChooserUIImpl$DirectoryComboBoxModel;
				class SynthFileChooserUIImpl$DirectoryComboBoxRenderer;
				class SynthFileChooserUIImpl$FilterComboBoxModel;
				class SynthFileChooserUIImpl$FilterComboBoxRenderer;
			}
		}
	}
}

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

class $export SynthFileChooserUIImpl : public ::sun::swing::plaf::synth::SynthFileChooserUI {
	$class(SynthFileChooserUIImpl, 0, ::sun::swing::plaf::synth::SynthFileChooserUI)
public:
	SynthFileChooserUIImpl();
	void init$(::javax::swing::JFileChooser* b);
	static bool access$000(::sun::swing::plaf::synth::SynthFileChooserUIImpl* x0);
	static ::java::io::File* access$100(::sun::swing::plaf::synth::SynthFileChooserUIImpl* x0);
	static ::java::awt::event::MouseListener* access$200(::sun::swing::plaf::synth::SynthFileChooserUIImpl* x0, ::javax::swing::JFileChooser* x1, ::javax::swing::JList* x2);
	virtual void addControlButtons();
	virtual ::javax::swing::ActionMap* createActionMap() override;
	virtual ::sun::swing::plaf::synth::SynthFileChooserUIImpl$DirectoryComboBoxModel* createDirectoryComboBoxModel(::javax::swing::JFileChooser* fc);
	virtual ::sun::swing::plaf::synth::SynthFileChooserUIImpl$DirectoryComboBoxRenderer* createDirectoryComboBoxRenderer(::javax::swing::JFileChooser* fc);
	virtual ::sun::swing::plaf::synth::SynthFileChooserUIImpl$FilterComboBoxModel* createFilterComboBoxModel();
	virtual ::sun::swing::plaf::synth::SynthFileChooserUIImpl$FilterComboBoxRenderer* createFilterComboBoxRenderer();
	virtual void doAccessoryChanged(::java::beans::PropertyChangeEvent* e) override;
	virtual void doControlButtonsChanged(::java::beans::PropertyChangeEvent* e) override;
	virtual void doDirectoryChanged(::java::beans::PropertyChangeEvent* e) override;
	virtual void doFileSelectionModeChanged(::java::beans::PropertyChangeEvent* e) override;
	virtual void doSelectedFileChanged(::java::beans::PropertyChangeEvent* e) override;
	virtual void doSelectedFilesChanged(::java::beans::PropertyChangeEvent* e) override;
	$String* fileNameString(::java::io::File* file);
	$String* fileNameString($Array<::java::io::File>* files);
	virtual ::javax::swing::JComponent* getDirectoryComboBox();
	virtual ::javax::swing::Action* getDirectoryComboBoxAction();
	virtual $String* getFileName() override;
	int32_t getMnemonic($String* key, ::java::util::Locale* l);
	static void groupLabels($Array<::sun::swing::plaf::synth::SynthFileChooserUIImpl$AlignedLabel>* group);
	virtual void installComponents(::javax::swing::JFileChooser* fc) override;
	virtual void installDefaults(::javax::swing::JFileChooser* fc) override;
	virtual void installListeners(::javax::swing::JFileChooser* fc) override;
	virtual void installStrings(::javax::swing::JFileChooser* fc) override;
	void populateFileNameLabel();
	virtual void removeControlButtons();
	virtual void rescanCurrentDirectory(::javax::swing::JFileChooser* fc) override;
	virtual void setFileName($String* fileName) override;
	virtual void uninstallListeners(::javax::swing::JFileChooser* fc) override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	::javax::swing::JLabel* lookInLabel = nullptr;
	::javax::swing::JComboBox* directoryComboBox = nullptr;
	::sun::swing::plaf::synth::SynthFileChooserUIImpl$DirectoryComboBoxModel* directoryComboBoxModel = nullptr;
	::javax::swing::Action* directoryComboBoxAction = nullptr;
	::sun::swing::plaf::synth::SynthFileChooserUIImpl$FilterComboBoxModel* filterComboBoxModel = nullptr;
	::javax::swing::JTextField* fileNameTextField = nullptr;
	::sun::swing::FilePane* filePane = nullptr;
	::javax::swing::JToggleButton* listViewButton = nullptr;
	::javax::swing::JToggleButton* detailsViewButton = nullptr;
	bool readOnly = false;
	::javax::swing::JPanel* buttonPanel = nullptr;
	::javax::swing::JPanel* bottomPanel = nullptr;
	::javax::swing::JComboBox* filterComboBox = nullptr;
	static ::java::awt::Dimension* hstrut5;
	static ::java::awt::Insets* shrinkwrap;
	static ::java::awt::Dimension* LIST_PREF_SIZE;
	int32_t lookInLabelMnemonic = 0;
	$String* lookInLabelText = nullptr;
	$String* saveInLabelText = nullptr;
	int32_t fileNameLabelMnemonic = 0;
	$String* fileNameLabelText = nullptr;
	int32_t folderNameLabelMnemonic = 0;
	$String* folderNameLabelText = nullptr;
	int32_t filesOfTypeLabelMnemonic = 0;
	$String* filesOfTypeLabelText = nullptr;
	$String* upFolderToolTipText = nullptr;
	$String* upFolderAccessibleName = nullptr;
	$String* homeFolderToolTipText = nullptr;
	$String* homeFolderAccessibleName = nullptr;
	$String* newFolderToolTipText = nullptr;
	$String* newFolderAccessibleName = nullptr;
	$String* listViewButtonToolTipText = nullptr;
	$String* listViewButtonAccessibleName = nullptr;
	$String* detailsViewButtonToolTipText = nullptr;
	$String* detailsViewButtonAccessibleName = nullptr;
	::sun::swing::plaf::synth::SynthFileChooserUIImpl$AlignedLabel* fileNameLabel = nullptr;
	::java::beans::PropertyChangeListener* modeListener = nullptr;
	static const int32_t space = 10;
};

			} // synth
		} // plaf
	} // swing
} // sun

#pragma pop_macro("LIST_PREF_SIZE")

#endif // _sun_swing_plaf_synth_SynthFileChooserUIImpl_h_