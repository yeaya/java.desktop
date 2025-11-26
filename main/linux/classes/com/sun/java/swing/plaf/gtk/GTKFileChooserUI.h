#ifndef _com_sun_java_swing_plaf_gtk_GTKFileChooserUI_h_
#define _com_sun_java_swing_plaf_gtk_GTKFileChooserUI_h_
//$ class com.sun.java.swing.plaf.gtk.GTKFileChooserUI
//$ extends sun.swing.plaf.synth.SynthFileChooserUI

#include <sun/swing/plaf/synth/SynthFileChooserUI.h>

#pragma push_macro("MAX_SIZE")
#undef MAX_SIZE
#pragma push_macro("MIN_HEIGHT")
#undef MIN_HEIGHT
#pragma push_macro("MIN_WIDTH")
#undef MIN_WIDTH
#pragma push_macro("PREF_SIZE")
#undef PREF_SIZE
#pragma push_macro("ZERO_ACC_SIZE")
#undef ZERO_ACC_SIZE

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {
						class GTKFileChooserUI$DirectoryComboBoxModel;
						class GTKFileChooserUI$FilterComboBoxModel;
						class GTKFileChooserUI$FilterComboBoxRenderer;
						class GTKFileChooserUI$GTKDirectoryListModel;
						class GTKFileChooserUI$GTKDirectoryModel;
						class GTKFileChooserUI$GTKFileView;
					}
				}
			}
		}
	}
}
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
		class Icon;
		class JComboBox;
		class JComponent;
		class JFileChooser;
		class JLabel;
		class JList;
		class JPanel;
		class JScrollPane;
		class JTextField;
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
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

class GTKFileChooserUI : public ::sun::swing::plaf::synth::SynthFileChooserUI {
	$class(GTKFileChooserUI, 0, ::sun::swing::plaf::synth::SynthFileChooserUI)
public:
	GTKFileChooserUI();
	void init$(::javax::swing::JFileChooser* filechooser);
	static ::javax::swing::Icon* access$000(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* x0);
	static ::javax::swing::Icon* access$100(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* x0);
	static void access$200(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* x0, bool x1);
	static void access$300(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* x0, ::java::io::File* x1);
	static void access$400(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* x0, bool x1);
	static void access$500(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* x0, bool x1);
	static void access$600(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* x0, ::java::io::File* x1);
	static void access$700(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* x0, bool x1);
	static bool access$800(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* x0);
	static ::java::io::File* access$900(::com::sun::java::swing::plaf::gtk::GTKFileChooserUI* x0);
	virtual void align(::javax::swing::JComponent* c);
	virtual ::javax::swing::ActionMap* createActionMap() override;
	virtual ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$DirectoryComboBoxModel* createDirectoryComboBoxModel(::javax::swing::JFileChooser* fc);
	virtual ::javax::swing::JScrollPane* createDirectoryList();
	virtual ::java::awt::event::MouseListener* createDoubleClickListener(::javax::swing::JFileChooser* fc, ::javax::swing::JList* list) override;
	virtual ::javax::swing::JScrollPane* createFilesList();
	virtual ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$FilterComboBoxModel* createFilterComboBoxModel();
	virtual ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$FilterComboBoxRenderer* createFilterComboBoxRenderer();
	virtual ::javax::swing::event::ListSelectionListener* createListSelectionListener(::javax::swing::JFileChooser* fc) override;
	virtual void createModel() override;
	static ::javax::swing::plaf::ComponentUI* createUI(::javax::swing::JComponent* c);
	virtual void doAccessoryChanged(::java::beans::PropertyChangeEvent* e) override;
	virtual void doAncestorChanged(::java::beans::PropertyChangeEvent* e) override;
	virtual void doControlButtonsChanged(::java::beans::PropertyChangeEvent* e) override;
	virtual void doDirectoryChanged(::java::beans::PropertyChangeEvent* e) override;
	virtual void doFileSelectionModeChanged(::java::beans::PropertyChangeEvent* e) override;
	virtual void doMultiSelectionChanged(::java::beans::PropertyChangeEvent* e) override;
	virtual void doSelectedFileChanged(::java::beans::PropertyChangeEvent* e) override;
	virtual void ensureFileIsVisible(::javax::swing::JFileChooser* fc, ::java::io::File* f) override;
	virtual ::javax::swing::JPanel* getAccessoryPanel() override;
	virtual ::javax::swing::Action* getApproveSelectionAction() override;
	virtual $String* getFileName() override;
	virtual ::javax::swing::filechooser::FileView* getFileView(::javax::swing::JFileChooser* fc) override;
	virtual ::java::awt::Dimension* getMaximumSize(::javax::swing::JComponent* x) override;
	virtual ::java::awt::Dimension* getMinimumSize(::javax::swing::JComponent* x) override;
	int32_t getMnemonic($String* key, ::java::util::Locale* l);
	virtual ::javax::swing::plaf::basic::BasicDirectoryModel* getModel() override;
	virtual ::javax::swing::Action* getNewFolderAction() override;
	virtual ::java::awt::Dimension* getPreferredSize(::javax::swing::JComponent* c) override;
	virtual void installComponents(::javax::swing::JFileChooser* fc) override;
	virtual void installDefaults(::javax::swing::JFileChooser* fc) override;
	virtual void installIcons(::javax::swing::JFileChooser* fc) override;
	virtual void installListeners(::javax::swing::JFileChooser* fc) override;
	virtual void installStrings(::javax::swing::JFileChooser* fc) override;
	virtual void installUI(::javax::swing::JComponent* c) override;
	virtual void rescanCurrentDirectory(::javax::swing::JFileChooser* fc) override;
	virtual void setDirectoryName($String* dirname) override;
	virtual void setFileName($String* fileName) override;
	virtual void uninstallListeners(::javax::swing::JFileChooser* fc) override;
	virtual void uninstallStrings(::javax::swing::JFileChooser* fc) override;
	virtual void uninstallUI(::javax::swing::JComponent* c) override;
	void updateDefaultButton();
	::javax::swing::JPanel* accessoryPanel = nullptr;
	$String* newFolderButtonText = nullptr;
	$String* newFolderErrorSeparator = nullptr;
	$String* newFolderErrorText = nullptr;
	$String* newFolderDialogText = nullptr;
	$String* newFolderNoDirectoryErrorTitleText = nullptr;
	$String* newFolderNoDirectoryErrorText = nullptr;
	$String* deleteFileButtonText = nullptr;
	$String* renameFileButtonText = nullptr;
	$String* newFolderButtonToolTipText = nullptr;
	$String* deleteFileButtonToolTipText = nullptr;
	$String* renameFileButtonToolTipText = nullptr;
	int32_t newFolderButtonMnemonic = 0;
	int32_t deleteFileButtonMnemonic = 0;
	int32_t renameFileButtonMnemonic = 0;
	int32_t foldersLabelMnemonic = 0;
	int32_t filesLabelMnemonic = 0;
	$String* renameFileDialogText = nullptr;
	$String* renameFileErrorTitle = nullptr;
	$String* renameFileErrorText = nullptr;
	::javax::swing::JComboBox* filterComboBox = nullptr;
	::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$FilterComboBoxModel* filterComboBoxModel = nullptr;
	::javax::swing::JPanel* rightPanel = nullptr;
	::javax::swing::JList* directoryList = nullptr;
	::javax::swing::JList* fileList = nullptr;
	::javax::swing::JLabel* pathField = nullptr;
	::javax::swing::JTextField* fileNameTextField = nullptr;
	static ::java::awt::Dimension* hstrut3;
	static ::java::awt::Dimension* vstrut10;
	static ::java::awt::Dimension* prefListSize;
	static ::java::awt::Dimension* PREF_SIZE;
	static const int32_t MIN_WIDTH = 200;
	static const int32_t MIN_HEIGHT = 300;
	static ::java::awt::Dimension* ZERO_ACC_SIZE;
	static ::java::awt::Dimension* MAX_SIZE;
	static ::java::awt::Insets* buttonMargin;
	$String* filesLabelText = nullptr;
	$String* foldersLabelText = nullptr;
	$String* pathLabelText = nullptr;
	$String* filterLabelText = nullptr;
	int32_t pathLabelMnemonic = 0;
	int32_t filterLabelMnemonic = 0;
	::javax::swing::JComboBox* directoryComboBox = nullptr;
	::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$DirectoryComboBoxModel* directoryComboBoxModel = nullptr;
	::javax::swing::Action* directoryComboBoxAction = nullptr;
	::javax::swing::JPanel* bottomButtonPanel = nullptr;
	::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$GTKDirectoryModel* model = nullptr;
	::javax::swing::Action* newFolderAction = nullptr;
	bool readOnly = false;
	bool showDirectoryIcons = false;
	bool showFileIcons = false;
	::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$GTKFileView* fileView = nullptr;
	::java::beans::PropertyChangeListener* gtkFCPropertyChangeListener = nullptr;
	::javax::swing::Action* approveSelectionAction = nullptr;
	::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$GTKDirectoryListModel* directoryListModel = nullptr;
};

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com

#pragma pop_macro("MAX_SIZE")
#pragma pop_macro("MIN_HEIGHT")
#pragma pop_macro("MIN_WIDTH")
#pragma pop_macro("PREF_SIZE")
#pragma pop_macro("ZERO_ACC_SIZE")

#endif // _com_sun_java_swing_plaf_gtk_GTKFileChooserUI_h_