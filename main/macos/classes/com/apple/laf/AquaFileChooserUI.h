#ifndef _com_apple_laf_AquaFileChooserUI_h_
#define _com_apple_laf_AquaFileChooserUI_h_
//$ class com.apple.laf.AquaFileChooserUI
//$ extends javax.swing.plaf.FileChooserUI

#include <java/lang/Array.h>
#include <javax/swing/plaf/FileChooserUI.h>

#pragma push_macro("APPLICATION_TRAVERSABLE_PROPERTY")
#undef APPLICATION_TRAVERSABLE_PROPERTY
#pragma push_macro("LIST_MIN_HEIGHT")
#undef LIST_MIN_HEIGHT
#pragma push_macro("LIST_MIN_SIZE")
#undef LIST_MIN_SIZE
#pragma push_macro("LIST_MIN_WIDTH")
#undef LIST_MIN_WIDTH
#pragma push_macro("MIN_HEIGHT")
#undef MIN_HEIGHT
#pragma push_macro("MIN_WIDTH")
#undef MIN_WIDTH
#pragma push_macro("PACKAGE_TRAVERSABLE_PROPERTY")
#undef PACKAGE_TRAVERSABLE_PROPERTY
#pragma push_macro("PREF_HEIGHT")
#undef PREF_HEIGHT
#pragma push_macro("PREF_WIDTH")
#undef PREF_WIDTH

namespace com {
	namespace apple {
		namespace laf {
			class AquaFileChooserUI$AcceptAllFileFilter;
			class AquaFileChooserUI$ApproveSelectionAction;
			class AquaFileChooserUI$DirectoryComboBoxModel;
			class AquaFileChooserUI$FCSubpanel;
			class AquaFileChooserUI$FilterComboBoxModel;
			class AquaFileChooserUI$JTableExtension;
			class AquaFileSystemModel;
			class AquaFileView;
		}
	}
}
namespace java {
	namespace awt {
		class Component;
		class Dimension;
	}
}
namespace java {
	namespace awt {
		namespace dnd {
			class DropTarget;
		}
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
namespace javax {
	namespace swing {
		class AbstractAction;
		class Action;
		class Icon;
		class JButton;
		class JComboBox;
		class JComponent;
		class JFileChooser;
		class JLabel;
		class JPanel;
		class JTextField;
		class ListCellRenderer;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class AncestorListener;
			class ListSelectionListener;
		}
	}
}
namespace javax {
	namespace swing {
		namespace filechooser {
			class FileFilter;
			class FileView;
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

namespace com {
	namespace apple {
		namespace laf {

class AquaFileChooserUI : public ::javax::swing::plaf::FileChooserUI {
	$class(AquaFileChooserUI, 0, ::javax::swing::plaf::FileChooserUI)
public:
	AquaFileChooserUI();
	void init$(::javax::swing::JFileChooser* filechooser);
	bool containsFileFilter(Object$* fileFilter);
	virtual ::javax::swing::JButton* createButton(int32_t which, $String* label);
	virtual ::com::apple::laf::AquaFileChooserUI$DirectoryComboBoxModel* createDirectoryComboBoxModel(::javax::swing::JFileChooser* fc);
	virtual ::javax::swing::ListCellRenderer* createDirectoryComboBoxRenderer(::javax::swing::JFileChooser* fc);
	virtual ::java::awt::event::MouseListener* createDoubleClickListener(::javax::swing::JFileChooser* fc, ::com::apple::laf::AquaFileChooserUI$JTableExtension* list);
	virtual ::com::apple::laf::AquaFileChooserUI$FilterComboBoxModel* createFilterComboBoxModel();
	virtual ::javax::swing::ListCellRenderer* createFilterComboBoxRenderer();
	virtual ::javax::swing::JPanel* createList(::javax::swing::JFileChooser* fc);
	virtual ::javax::swing::event::ListSelectionListener* createListSelectionListener(::javax::swing::JFileChooser* fc);
	virtual void createModel();
	virtual ::javax::swing::JButton* createNewFolderButton();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener(::javax::swing::JFileChooser* fc);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void doControlButtonsChanged(::java::beans::PropertyChangeEvent* e);
	virtual void ensureFileIsVisible(::javax::swing::JFileChooser* fc, ::java::io::File* f) override;
	virtual ::javax::swing::filechooser::FileFilter* getAcceptAllFileFilter(::javax::swing::JFileChooser* fc) override;
	virtual ::javax::swing::JPanel* getAccessoryPanel();
	virtual ::javax::swing::AbstractAction* getAction(int32_t which);
	virtual ::javax::swing::JButton* getApproveButton(::javax::swing::JFileChooser* fc);
	virtual int32_t getApproveButtonMnemonic(::javax::swing::JFileChooser* fc);
	virtual $String* getApproveButtonText(::javax::swing::JFileChooser* fc) override;
	virtual $String* getApproveButtonToolTipText(::javax::swing::JFileChooser* fc);
	virtual $String* getCancelButtonToolTipText(::javax::swing::JFileChooser* fc);
	virtual ::com::apple::laf::AquaFileChooserUI$FCSubpanel* getCustomDirOrAnyPanel();
	virtual ::com::apple::laf::AquaFileChooserUI$FCSubpanel* getCustomFilePanel();
	virtual $String* getDialogTitle(::javax::swing::JFileChooser* fc) override;
	virtual $String* getDirectoryName();
	virtual ::javax::swing::JFileChooser* getFileChooser();
	virtual $String* getFileName();
	virtual ::javax::swing::filechooser::FileView* getFileView(::javax::swing::JFileChooser* fc) override;
	virtual ::java::io::File* getFirstSelectedItem();
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* c) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* c) override;
	virtual ::com::apple::laf::AquaFileSystemModel* getModel();
	virtual ::com::apple::laf::AquaFileChooserUI$FCSubpanel* getOpenDirOrAnyPanel();
	virtual ::com::apple::laf::AquaFileChooserUI$FCSubpanel* getOpenFilePanel();
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual ::com::apple::laf::AquaFileChooserUI$FCSubpanel* getSaveFilePanel();
	virtual $String* getString($String* uiKey, $String* fallback);
	virtual void installComponents(::javax::swing::JFileChooser* fc);
	virtual void installDefaults(::javax::swing::JFileChooser* fc);
	virtual void installIcons(::javax::swing::JFileChooser* fc);
	virtual void installListeners(::javax::swing::JFileChooser* fc);
	virtual void installStrings(::javax::swing::JFileChooser* fc);
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual bool isSelectableForMode(::javax::swing::JFileChooser* fc, ::java::io::File* f);
	virtual bool isSelectableInList(::java::io::File* f);
	virtual ::java::io::File* makeFile(::javax::swing::JFileChooser* fc, $String* filename);
	virtual bool openDirectory(::java::io::File* f);
	static int32_t parseTraversableProperty($String* s);
	virtual void rescanCurrentDirectory(::javax::swing::JFileChooser* fc) override;
	virtual void setApplicationIsTraversable(Object$* o);
	virtual void setBottomPanelForMode(::javax::swing::JFileChooser* fc);
	virtual void setDefaultButtonForMode(::javax::swing::JFileChooser* fc);
	virtual void setDirectoryName($String* dirname);
	virtual void setFileName($String* filename);
	virtual void setFocusForMode(::javax::swing::JFileChooser* fc);
	virtual void setPackageIsTraversable(Object$* o);
	virtual bool textfieldIsValid();
	virtual void uninstallComponents(::javax::swing::JFileChooser* fc);
	virtual void uninstallDefaults(::javax::swing::JFileChooser* fc);
	virtual void uninstallIcons(::javax::swing::JFileChooser* fc);
	virtual void uninstallListeners(::javax::swing::JFileChooser* fc);
	virtual void uninstallStrings(::javax::swing::JFileChooser* fc);
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	virtual void updateApproveButton(::javax::swing::JFileChooser* chooser);
	virtual void updateButtonState(::javax::swing::JFileChooser* fc);
	::javax::swing::Icon* directoryIcon = nullptr;
	::javax::swing::Icon* fileIcon = nullptr;
	::javax::swing::Icon* computerIcon = nullptr;
	::javax::swing::Icon* hardDriveIcon = nullptr;
	::javax::swing::Icon* floppyDriveIcon = nullptr;
	::javax::swing::Icon* upFolderIcon = nullptr;
	::javax::swing::Icon* homeFolderIcon = nullptr;
	::javax::swing::Icon* listViewIcon = nullptr;
	::javax::swing::Icon* detailsViewIcon = nullptr;
	int32_t saveButtonMnemonic = 0;
	int32_t openButtonMnemonic = 0;
	int32_t cancelButtonMnemonic = 0;
	int32_t updateButtonMnemonic = 0;
	int32_t helpButtonMnemonic = 0;
	int32_t chooseButtonMnemonic = 0;
	$String* saveTitleText = nullptr;
	$String* openTitleText = nullptr;
	$String* newFolderTitleText = nullptr;
	$String* saveButtonText = nullptr;
	$String* openButtonText = nullptr;
	$String* cancelButtonText = nullptr;
	$String* updateButtonText = nullptr;
	$String* helpButtonText = nullptr;
	$String* newFolderButtonText = nullptr;
	$String* chooseButtonText = nullptr;
	$String* newFolderErrorText = nullptr;
	$String* newFolderExistsErrorText = nullptr;
	$String* fileDescriptionText = nullptr;
	$String* directoryDescriptionText = nullptr;
	$String* saveButtonToolTipText = nullptr;
	$String* openButtonToolTipText = nullptr;
	$String* cancelButtonToolTipText = nullptr;
	$String* updateButtonToolTipText = nullptr;
	$String* helpButtonToolTipText = nullptr;
	$String* chooseItemButtonToolTipText = nullptr;
	$String* chooseFolderButtonToolTipText = nullptr;
	$String* directoryComboBoxToolTipText = nullptr;
	$String* filenameTextFieldToolTipText = nullptr;
	$String* filterComboBoxToolTipText = nullptr;
	$String* openDirectoryButtonToolTipText = nullptr;
	$String* cancelOpenButtonToolTipText = nullptr;
	$String* cancelSaveButtonToolTipText = nullptr;
	$String* cancelChooseButtonToolTipText = nullptr;
	$String* cancelNewFolderButtonToolTipText = nullptr;
	$String* desktopName = nullptr;
	$String* newFolderDialogPrompt = nullptr;
	$String* newFolderDefaultName = nullptr;
	$String* newFileDefaultName = nullptr;
	$String* createButtonText = nullptr;
	::javax::swing::JFileChooser* filechooser = nullptr;
	::java::awt::event::MouseListener* doubleClickListener = nullptr;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
	::javax::swing::event::AncestorListener* ancestorListener = nullptr;
	::java::awt::dnd::DropTarget* dragAndDropTarget = nullptr;
	static ::com::apple::laf::AquaFileChooserUI$AcceptAllFileFilter* acceptAllFileFilter;
	::com::apple::laf::AquaFileSystemModel* model = nullptr;
	::com::apple::laf::AquaFileView* fileView = nullptr;
	bool selectionInProgress = false;
	::javax::swing::JPanel* accessoryPanel = nullptr;
	::javax::swing::JComboBox* directoryComboBox = nullptr;
	::com::apple::laf::AquaFileChooserUI$DirectoryComboBoxModel* fDirectoryComboBoxModel = nullptr;
	::javax::swing::Action* directoryComboBoxAction = nullptr;
	::javax::swing::JTextField* filenameTextField = nullptr;
	::com::apple::laf::AquaFileChooserUI$JTableExtension* fFileList = nullptr;
	::com::apple::laf::AquaFileChooserUI$FilterComboBoxModel* filterComboBoxModel = nullptr;
	::javax::swing::JComboBox* filterComboBox = nullptr;
	::javax::swing::Action* filterComboBoxAction = nullptr;
	static ::java::awt::Dimension* hstrut10;
	static ::java::awt::Dimension* vstrut10;
	static const int32_t PREF_WIDTH = 550;
	static const int32_t PREF_HEIGHT = 400;
	static const int32_t MIN_WIDTH = 400;
	static const int32_t MIN_HEIGHT = 250;
	static const int32_t LIST_MIN_WIDTH = 400;
	static const int32_t LIST_MIN_HEIGHT = 100;
	static ::java::awt::Dimension* LIST_MIN_SIZE;
	static $String* fileNameLabelText;
	::javax::swing::JLabel* fTextFieldLabel = nullptr;
	static $String* filesOfTypeLabelText;
	static $String* newFolderToolTipText;
	static $String* newFolderAccessibleName;
	static $StringArray* fColumnNames;
	::javax::swing::JPanel* fTextfieldPanel = nullptr;
	::javax::swing::JPanel* fDirectoryPanel = nullptr;
	::java::awt::Component* fDirectoryPanelSpacer = nullptr;
	::javax::swing::JPanel* fBottomPanel = nullptr;
	::com::apple::laf::AquaFileChooserUI$FCSubpanel* fSaveFilePanel = nullptr;
	::com::apple::laf::AquaFileChooserUI$FCSubpanel* fOpenFilePanel = nullptr;
	::com::apple::laf::AquaFileChooserUI$FCSubpanel* fOpenDirOrAnyPanel = nullptr;
	::com::apple::laf::AquaFileChooserUI$FCSubpanel* fCustomFilePanel = nullptr;
	::com::apple::laf::AquaFileChooserUI$FCSubpanel* fCustomDirOrAnyPanel = nullptr;
	::com::apple::laf::AquaFileChooserUI$FCSubpanel* fSubPanel = nullptr;
	::javax::swing::JButton* fApproveButton = nullptr;
	::javax::swing::JButton* fOpenButton = nullptr;
	::javax::swing::JButton* fNewFolderButton = nullptr;
	::javax::swing::JButton* fCancelButton = nullptr;
	::com::apple::laf::AquaFileChooserUI$ApproveSelectionAction* fApproveSelectionAction = nullptr;
	int32_t fSortColumn = 0;
	int32_t fPackageIsTraversable = 0;
	int32_t fApplicationIsTraversable = 0;
	static int32_t sGlobalPackageIsTraversable;
	static int32_t sGlobalApplicationIsTraversable;
	static $String* PACKAGE_TRAVERSABLE_PROPERTY;
	static $String* APPLICATION_TRAVERSABLE_PROPERTY;
	static $StringArray* sTraversableProperties;
	static const int32_t kOpenAlways = 0;
	static const int32_t kOpenNever = 1;
	static const int32_t kOpenConditional = 2;
	$Array<::javax::swing::AbstractAction>* fButtonActions = nullptr;
	static $String* sDataPrefix;
	static $StringArray* sButtonKinds;
	static $StringArray* sButtonData;
	static const int32_t kOpen = 0;
	static const int32_t kSave = 1;
	static const int32_t kCancel = 2;
	static const int32_t kOpenDirectory = 3;
	static const int32_t kHelp = 4;
	static const int32_t kNewFolder = 5;
};

		} // laf
	} // apple
} // com

#pragma pop_macro("APPLICATION_TRAVERSABLE_PROPERTY")
#pragma pop_macro("LIST_MIN_HEIGHT")
#pragma pop_macro("LIST_MIN_SIZE")
#pragma pop_macro("LIST_MIN_WIDTH")
#pragma pop_macro("MIN_HEIGHT")
#pragma pop_macro("MIN_WIDTH")
#pragma pop_macro("PACKAGE_TRAVERSABLE_PROPERTY")
#pragma pop_macro("PREF_HEIGHT")
#pragma pop_macro("PREF_WIDTH")

#endif // _com_apple_laf_AquaFileChooserUI_h_