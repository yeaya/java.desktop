#ifndef _javax_swing_plaf_basic_BasicFileChooserUI_h_
#define _javax_swing_plaf_basic_BasicFileChooserUI_h_
//$ class javax.swing.plaf.basic.BasicFileChooserUI
//$ extends javax.swing.plaf.FileChooserUI

#include <javax/swing/plaf/FileChooserUI.h>

namespace java {
	namespace awt {
		namespace event {
			class MouseListener;
		}
	}
}
namespace java {
	namespace beans {
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
		class Icon;
		class InputMap;
		class JButton;
		class JComponent;
		class JFileChooser;
		class JList;
		class JPanel;
		class TransferHandler;
	}
}
namespace javax {
	namespace swing {
		namespace event {
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
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicDirectoryModel;
				class BasicFileChooserUI$AcceptAllFileFilter;
				class BasicFileChooserUI$BasicFileView;
				class BasicFileChooserUI$GlobFilter;
				class BasicFileChooserUI$Handler;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $import BasicFileChooserUI : public ::javax::swing::plaf::FileChooserUI {
	$class(BasicFileChooserUI, 0, ::javax::swing::plaf::FileChooserUI)
public:
	BasicFileChooserUI();
	void init$(::javax::swing::JFileChooser* b);
	void changeDirectory(::java::io::File* dir);
	virtual void clearIconCache();
	virtual ::javax::swing::ActionMap* createActionMap();
	virtual ::java::awt::event::MouseListener* createDoubleClickListener(::javax::swing::JFileChooser* fc, ::javax::swing::JList* list);
	virtual ::javax::swing::event::ListSelectionListener* createListSelectionListener(::javax::swing::JFileChooser* fc);
	virtual void createModel();
	virtual ::java::beans::PropertyChangeListener* createPropertyChangeListener(::javax::swing::JFileChooser* fc);
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void ensureFileIsVisible(::javax::swing::JFileChooser* fc, ::java::io::File* f) override;
	virtual ::javax::swing::filechooser::FileFilter* getAcceptAllFileFilter(::javax::swing::JFileChooser* fc) override;
	virtual ::javax::swing::JPanel* getAccessoryPanel();
	virtual ::javax::swing::ActionMap* getActionMap();
	virtual ::javax::swing::JButton* getApproveButton(::javax::swing::JFileChooser* fc);
	virtual int32_t getApproveButtonMnemonic(::javax::swing::JFileChooser* fc);
	virtual $String* getApproveButtonText(::javax::swing::JFileChooser* fc) override;
	virtual $String* getApproveButtonToolTipText(::javax::swing::JFileChooser* fc);
	virtual ::javax::swing::Action* getApproveSelectionAction();
	virtual ::javax::swing::Action* getCancelSelectionAction();
	virtual ::javax::swing::Action* getChangeToParentDirectoryAction();
	virtual ::javax::swing::JButton* getDefaultButton(::javax::swing::JFileChooser* fc) override;
	virtual $String* getDialogTitle(::javax::swing::JFileChooser* fc) override;
	virtual ::java::io::File* getDirectory();
	virtual $String* getDirectoryName();
	virtual ::javax::swing::JFileChooser* getFileChooser();
	virtual $String* getFileName();
	virtual ::javax::swing::filechooser::FileView* getFileView(::javax::swing::JFileChooser* fc) override;
	virtual ::javax::swing::Action* getGoHomeAction();
	::javax::swing::plaf::basic::BasicFileChooserUI$Handler* getHandler();
	virtual ::javax::swing::InputMap* getInputMap(int32_t condition);
	int32_t getMnemonic($String* key, ::java::util::Locale* l);
	virtual ::javax::swing::plaf::basic::BasicDirectoryModel* getModel();
	virtual ::javax::swing::Action* getNewFolderAction();
	virtual ::javax::swing::Action* getUpdateAction();
	virtual void installComponents(::javax::swing::JFileChooser* fc);
	virtual void installDefaults(::javax::swing::JFileChooser* fc);
	virtual void installIcons(::javax::swing::JFileChooser* fc);
	virtual void installListeners(::javax::swing::JFileChooser* fc);
	virtual void installStrings(::javax::swing::JFileChooser* fc);
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual bool isDirectorySelected();
	static bool isGlobPattern($String* filename);
	virtual void rescanCurrentDirectory(::javax::swing::JFileChooser* fc) override;
	void resetGlobFilter();
	virtual void setDirectory(::java::io::File* f);
	virtual void setDirectoryName($String* dirname);
	virtual void setDirectorySelected(bool b);
	virtual void setFileName($String* filename);
	virtual void uninstallComponents(::javax::swing::JFileChooser* fc);
	virtual void uninstallDefaults(::javax::swing::JFileChooser* fc);
	virtual void uninstallIcons(::javax::swing::JFileChooser* fc);
	virtual void uninstallListeners(::javax::swing::JFileChooser* fc);
	virtual void uninstallStrings(::javax::swing::JFileChooser* fc);
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	::javax::swing::Icon* directoryIcon = nullptr;
	::javax::swing::Icon* fileIcon = nullptr;
	::javax::swing::Icon* computerIcon = nullptr;
	::javax::swing::Icon* hardDriveIcon = nullptr;
	::javax::swing::Icon* floppyDriveIcon = nullptr;
	::javax::swing::Icon* newFolderIcon = nullptr;
	::javax::swing::Icon* upFolderIcon = nullptr;
	::javax::swing::Icon* homeFolderIcon = nullptr;
	::javax::swing::Icon* listViewIcon = nullptr;
	::javax::swing::Icon* detailsViewIcon = nullptr;
	::javax::swing::Icon* viewMenuIcon = nullptr;
	int32_t saveButtonMnemonic = 0;
	int32_t openButtonMnemonic = 0;
	int32_t cancelButtonMnemonic = 0;
	int32_t updateButtonMnemonic = 0;
	int32_t helpButtonMnemonic = 0;
	int32_t directoryOpenButtonMnemonic = 0;
	$String* saveButtonText = nullptr;
	$String* openButtonText = nullptr;
	$String* cancelButtonText = nullptr;
	$String* updateButtonText = nullptr;
	$String* helpButtonText = nullptr;
	$String* directoryOpenButtonText = nullptr;
	$String* openDialogTitleText = nullptr;
	$String* saveDialogTitleText = nullptr;
	$String* saveButtonToolTipText = nullptr;
	$String* openButtonToolTipText = nullptr;
	$String* cancelButtonToolTipText = nullptr;
	$String* updateButtonToolTipText = nullptr;
	$String* helpButtonToolTipText = nullptr;
	$String* directoryOpenButtonToolTipText = nullptr;
	::javax::swing::Action* approveSelectionAction = nullptr;
	::javax::swing::Action* cancelSelectionAction = nullptr;
	::javax::swing::Action* updateAction = nullptr;
	::javax::swing::Action* newFolderAction = nullptr;
	::javax::swing::Action* goHomeAction = nullptr;
	::javax::swing::Action* changeToParentDirectoryAction = nullptr;
	$String* newFolderErrorSeparator = nullptr;
	$String* newFolderErrorText = nullptr;
	$String* newFolderParentDoesntExistTitleText = nullptr;
	$String* newFolderParentDoesntExistText = nullptr;
	$String* fileDescriptionText = nullptr;
	$String* directoryDescriptionText = nullptr;
	::javax::swing::JFileChooser* filechooser = nullptr;
	bool directorySelected = false;
	::java::io::File* directory = nullptr;
	::java::beans::PropertyChangeListener* propertyChangeListener = nullptr;
	::javax::swing::plaf::basic::BasicFileChooserUI$AcceptAllFileFilter* acceptAllFileFilter = nullptr;
	::javax::swing::filechooser::FileFilter* actualFileFilter = nullptr;
	::javax::swing::plaf::basic::BasicFileChooserUI$GlobFilter* globFilter = nullptr;
	::javax::swing::plaf::basic::BasicDirectoryModel* model = nullptr;
	::javax::swing::plaf::basic::BasicFileChooserUI$BasicFileView* fileView = nullptr;
	bool usesSingleFilePane = false;
	bool readOnly = false;
	::javax::swing::JPanel* accessoryPanel = nullptr;
	::javax::swing::plaf::basic::BasicFileChooserUI$Handler* handler = nullptr;
	static ::javax::swing::TransferHandler* defaultTransferHandler;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicFileChooserUI_h_