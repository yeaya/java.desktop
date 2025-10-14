#ifndef _javax_swing_plaf_metal_MetalFileChooserUI_h_
#define _javax_swing_plaf_metal_MetalFileChooserUI_h_
//$ class javax.swing.plaf.metal.MetalFileChooserUI
//$ extends javax.swing.plaf.basic.BasicFileChooserUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>

#pragma push_macro("LIST_PREF_HEIGHT")
#undef LIST_PREF_HEIGHT
#pragma push_macro("LIST_PREF_SIZE")
#undef LIST_PREF_SIZE
#pragma push_macro("LIST_PREF_WIDTH")
#undef LIST_PREF_WIDTH
#pragma push_macro("MIN_HEIGHT")
#undef MIN_HEIGHT
#pragma push_macro("MIN_WIDTH")
#undef MIN_WIDTH
#pragma push_macro("PREF_HEIGHT")
#undef PREF_HEIGHT
#pragma push_macro("PREF_SIZE")
#undef PREF_SIZE
#pragma push_macro("PREF_WIDTH")
#undef PREF_WIDTH

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
	namespace lang {
		class Integer;
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
		class DefaultListCellRenderer;
		class JButton;
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
namespace javax {
	namespace swing {
		namespace event {
			class ListSelectionEvent;
			class ListSelectionListener;
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
			namespace metal {
				class MetalFileChooserUI$AlignedLabel;
				class MetalFileChooserUI$DirectoryComboBoxModel;
				class MetalFileChooserUI$FilterComboBoxModel;
				class MetalFileChooserUI$FilterComboBoxRenderer;
			}
		}
	}
}
namespace sun {
	namespace swing {
		class FilePane;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

class $export MetalFileChooserUI : public ::javax::swing::plaf::basic::BasicFileChooserUI {
	$class(MetalFileChooserUI, 0, ::javax::swing::plaf::basic::BasicFileChooserUI)
public:
	MetalFileChooserUI();
	void init$(::javax::swing::JFileChooser* filechooser);
	static bool access$000(::javax::swing::plaf::metal::MetalFileChooserUI* x0);
	static ::java::io::File* access$100(::javax::swing::plaf::metal::MetalFileChooserUI* x0);
	static ::java::awt::event::MouseListener* access$200(::javax::swing::plaf::metal::MetalFileChooserUI* x0, ::javax::swing::JFileChooser* x1, ::javax::swing::JList* x2);
	virtual void addControlButtons();
	virtual ::javax::swing::ActionMap* createActionMap() override;
	virtual ::javax::swing::JPanel* createDetailsView(::javax::swing::JFileChooser* fc);
	virtual ::javax::swing::plaf::metal::MetalFileChooserUI$DirectoryComboBoxModel* createDirectoryComboBoxModel(::javax::swing::JFileChooser* fc);
	::javax::swing::DefaultListCellRenderer* createDirectoryComboBoxRenderer(::javax::swing::JFileChooser* fc);
	virtual ::javax::swing::plaf::metal::MetalFileChooserUI$FilterComboBoxModel* createFilterComboBoxModel();
	virtual ::javax::swing::plaf::metal::MetalFileChooserUI$FilterComboBoxRenderer* createFilterComboBoxRenderer();
	virtual ::javax::swing::JPanel* createList(::javax::swing::JFileChooser* fc);
	virtual ::javax::swing::event::ListSelectionListener* createListSelectionListener(::javax::swing::JFileChooser* fc) override;
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener(::javax::swing::JFileChooser* fc) override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	void doAccessoryChanged(::java::beans::PropertyChangeEvent* e);
	void doApproveButtonMnemonicChanged(::java::beans::PropertyChangeEvent* e);
	void doApproveButtonTextChanged(::java::beans::PropertyChangeEvent* e);
	void doControlButtonsChanged(::java::beans::PropertyChangeEvent* e);
	void doDialogTypeChanged(::java::beans::PropertyChangeEvent* e);
	void doDirectoryChanged(::java::beans::PropertyChangeEvent* e);
	void doFileSelectionModeChanged(::java::beans::PropertyChangeEvent* e);
	void doFilterChanged(::java::beans::PropertyChangeEvent* e);
	void doSelectedFileChanged(::java::beans::PropertyChangeEvent* e);
	void doSelectedFilesChanged(::java::beans::PropertyChangeEvent* e);
	virtual void ensureFileIsVisible(::javax::swing::JFileChooser* fc, ::java::io::File* f) override;
	$String* fileNameString(::java::io::File* file);
	$String* fileNameString($Array<::java::io::File>* files);
	virtual ::javax::swing::ActionMap* getActionMap() override;
	virtual ::javax::swing::JButton* getApproveButton(::javax::swing::JFileChooser* fc) override;
	virtual ::javax::swing::JPanel* getBottomPanel();
	virtual ::javax::swing::JPanel* getButtonPanel();
	virtual $String* getDirectoryName() override;
	virtual $String* getFileName() override;
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	::java::lang::Integer* getMnemonic($String* key, ::java::util::Locale* l);
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	static void groupLabels($Array<::javax::swing::plaf::metal::MetalFileChooserUI$AlignedLabel>* group);
	virtual void installComponents(::javax::swing::JFileChooser* fc) override;
	virtual void installListeners(::javax::swing::JFileChooser* fc) override;
	virtual void installStrings(::javax::swing::JFileChooser* fc) override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	void populateFileNameLabel();
	virtual void removeControlButtons();
	virtual void rescanCurrentDirectory(::javax::swing::JFileChooser* fc) override;
	virtual void setDirectoryName($String* dirname) override;
	virtual void setDirectorySelected(bool directorySelected) override;
	virtual void setFileName($String* filename) override;
	virtual void uninstallComponents(::javax::swing::JFileChooser* fc) override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	virtual void valueChanged(::javax::swing::event::ListSelectionEvent* e);
	::javax::swing::JLabel* lookInLabel = nullptr;
	::javax::swing::JComboBox* directoryComboBox = nullptr;
	::javax::swing::plaf::metal::MetalFileChooserUI$DirectoryComboBoxModel* directoryComboBoxModel = nullptr;
	::javax::swing::Action* directoryComboBoxAction = nullptr;
	::javax::swing::plaf::metal::MetalFileChooserUI$FilterComboBoxModel* filterComboBoxModel = nullptr;
	::javax::swing::JTextField* fileNameTextField = nullptr;
	::sun::swing::FilePane* filePane = nullptr;
	::javax::swing::JToggleButton* listViewButton = nullptr;
	::javax::swing::JToggleButton* detailsViewButton = nullptr;
	::javax::swing::JButton* approveButton = nullptr;
	::javax::swing::JButton* cancelButton = nullptr;
	::javax::swing::JPanel* buttonPanel = nullptr;
	::javax::swing::JPanel* bottomPanel = nullptr;
	::javax::swing::JComboBox* filterComboBox = nullptr;
	static ::java::awt::Dimension* hstrut5;
	static ::java::awt::Dimension* hstrut11;
	static ::java::awt::Dimension* vstrut5;
	static ::java::awt::Insets* shrinkwrap;
	static int32_t PREF_WIDTH;
	static int32_t PREF_HEIGHT;
	static ::java::awt::Dimension* PREF_SIZE;
	static int32_t MIN_WIDTH;
	static int32_t MIN_HEIGHT;
	static int32_t LIST_PREF_WIDTH;
	static int32_t LIST_PREF_HEIGHT;
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
	::javax::swing::plaf::metal::MetalFileChooserUI$AlignedLabel* fileNameLabel = nullptr;
	static const int32_t space = 10;
};

			} // metal
		} // plaf
	} // swing
} // javax

#pragma pop_macro("LIST_PREF_HEIGHT")
#pragma pop_macro("LIST_PREF_SIZE")
#pragma pop_macro("LIST_PREF_WIDTH")
#pragma pop_macro("MIN_HEIGHT")
#pragma pop_macro("MIN_WIDTH")
#pragma pop_macro("PREF_HEIGHT")
#pragma pop_macro("PREF_SIZE")
#pragma pop_macro("PREF_WIDTH")

#endif // _javax_swing_plaf_metal_MetalFileChooserUI_h_