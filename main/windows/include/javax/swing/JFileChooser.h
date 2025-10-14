#ifndef _javax_swing_JFileChooser_h_
#define _javax_swing_JFileChooser_h_
//$ class javax.swing.JFileChooser
//$ extends javax.swing.JComponent
//$ implements javax.accessibility.Accessible

#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComponent.h>

#pragma push_macro("ACCEPT_ALL_FILE_FILTER_USED_CHANGED_PROPERTY")
#undef ACCEPT_ALL_FILE_FILTER_USED_CHANGED_PROPERTY
#pragma push_macro("ACCESSORY_CHANGED_PROPERTY")
#undef ACCESSORY_CHANGED_PROPERTY
#pragma push_macro("APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY")
#undef APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY
#pragma push_macro("APPROVE_BUTTON_TEXT_CHANGED_PROPERTY")
#undef APPROVE_BUTTON_TEXT_CHANGED_PROPERTY
#pragma push_macro("APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY")
#undef APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY
#pragma push_macro("APPROVE_OPTION")
#undef APPROVE_OPTION
#pragma push_macro("APPROVE_SELECTION")
#undef APPROVE_SELECTION
#pragma push_macro("CANCEL_OPTION")
#undef CANCEL_OPTION
#pragma push_macro("CANCEL_SELECTION")
#undef CANCEL_SELECTION
#pragma push_macro("CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY")
#undef CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY
#pragma push_macro("CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY")
#undef CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY
#pragma push_macro("CUSTOM_DIALOG")
#undef CUSTOM_DIALOG
#pragma push_macro("DIALOG_TITLE_CHANGED_PROPERTY")
#undef DIALOG_TITLE_CHANGED_PROPERTY
#pragma push_macro("DIALOG_TYPE_CHANGED_PROPERTY")
#undef DIALOG_TYPE_CHANGED_PROPERTY
#pragma push_macro("DIRECTORIES_ONLY")
#undef DIRECTORIES_ONLY
#pragma push_macro("DIRECTORY_CHANGED_PROPERTY")
#undef DIRECTORY_CHANGED_PROPERTY
#pragma push_macro("ERROR_OPTION")
#undef ERROR_OPTION
#pragma push_macro("FILES_AND_DIRECTORIES")
#undef FILES_AND_DIRECTORIES
#pragma push_macro("FILES_ONLY")
#undef FILES_ONLY
#pragma push_macro("FILE_FILTER_CHANGED_PROPERTY")
#undef FILE_FILTER_CHANGED_PROPERTY
#pragma push_macro("FILE_HIDING_CHANGED_PROPERTY")
#undef FILE_HIDING_CHANGED_PROPERTY
#pragma push_macro("FILE_SELECTION_MODE_CHANGED_PROPERTY")
#undef FILE_SELECTION_MODE_CHANGED_PROPERTY
#pragma push_macro("FILE_SYSTEM_VIEW_CHANGED_PROPERTY")
#undef FILE_SYSTEM_VIEW_CHANGED_PROPERTY
#pragma push_macro("FILE_VIEW_CHANGED_PROPERTY")
#undef FILE_VIEW_CHANGED_PROPERTY
#pragma push_macro("MULTI_SELECTION_ENABLED_CHANGED_PROPERTY")
#undef MULTI_SELECTION_ENABLED_CHANGED_PROPERTY
#pragma push_macro("OPEN_DIALOG")
#undef OPEN_DIALOG
#pragma push_macro("SAVE_DIALOG")
#undef SAVE_DIALOG
#pragma push_macro("SELECTED_FILES_CHANGED_PROPERTY")
#undef SELECTED_FILES_CHANGED_PROPERTY
#pragma push_macro("SELECTED_FILE_CHANGED_PROPERTY")
#undef SELECTED_FILE_CHANGED_PROPERTY
#pragma push_macro("SHOW_HIDDEN_PROP")
#undef SHOW_HIDDEN_PROP

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionListener;
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
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}
namespace javax {
	namespace swing {
		class Icon;
		class JDialog;
	}
}
namespace javax {
	namespace swing {
		namespace filechooser {
			class FileFilter;
			class FileSystemView;
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

class $import JFileChooser : public ::javax::swing::JComponent, public ::javax::accessibility::Accessible {
	$class(JFileChooser, 0, ::javax::swing::JComponent, ::javax::accessibility::Accessible)
public:
	JFileChooser();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::JComponent::contains;
	using ::javax::swing::JComponent::enable;
	using ::javax::swing::JComponent::getBounds;
	using ::javax::swing::JComponent::getSize;
	using ::javax::swing::JComponent::getLocation;
	using ::javax::swing::JComponent::firePropertyChange;
	using ::javax::swing::JComponent::add;
	using ::javax::swing::JComponent::getMousePosition;
	using ::javax::swing::JComponent::getName;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* currentDirectoryPath);
	void init$(::java::io::File* currentDirectory);
	void init$(::javax::swing::filechooser::FileSystemView* fsv);
	void init$(::java::io::File* currentDirectory, ::javax::swing::filechooser::FileSystemView* fsv);
	void init$($String* currentDirectoryPath, ::javax::swing::filechooser::FileSystemView* fsv);
	virtual bool accept(::java::io::File* f);
	virtual void addActionListener(::java::awt::event::ActionListener* l);
	virtual void addChoosableFileFilter(::javax::swing::filechooser::FileFilter* filter);
	virtual void approveSelection();
	virtual void cancelSelection();
	virtual void changeToParentDirectory();
	static void checkDialogType(int32_t dialogType);
	static void checkDragEnabled(bool b);
	static void checkFileSelectionMode(int32_t mode);
	virtual ::javax::swing::JDialog* createDialog(::java::awt::Component* parent);
	virtual void ensureFileIsVisible(::java::io::File* f);
	virtual void fireActionPerformed($String* command);
	virtual ::javax::swing::filechooser::FileFilter* getAcceptAllFileFilter();
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::javax::swing::JComponent* getAccessory();
	virtual $Array<::java::awt::event::ActionListener>* getActionListeners();
	virtual int32_t getApproveButtonMnemonic();
	virtual $String* getApproveButtonText();
	virtual $String* getApproveButtonToolTipText();
	virtual $Array<::javax::swing::filechooser::FileFilter>* getChoosableFileFilters();
	virtual bool getControlButtonsAreShown();
	virtual ::java::io::File* getCurrentDirectory();
	virtual $String* getDescription(::java::io::File* f);
	virtual $String* getDialogTitle();
	virtual int32_t getDialogType();
	virtual bool getDragEnabled();
	virtual ::javax::swing::filechooser::FileFilter* getFileFilter();
	virtual int32_t getFileSelectionMode();
	virtual ::javax::swing::filechooser::FileSystemView* getFileSystemView();
	virtual ::javax::swing::filechooser::FileView* getFileView();
	virtual ::javax::swing::Icon* getIcon(::java::io::File* f);
	virtual $String* getName(::java::io::File* f);
	virtual ::java::io::File* getSelectedFile();
	virtual $Array<::java::io::File>* getSelectedFiles();
	virtual $String* getTypeDescription(::java::io::File* f);
	virtual ::javax::swing::plaf::ComponentUI* getUI() override;
	virtual $String* getUIClassID() override;
	void installHierarchyListener();
	void installShowFilesListener();
	virtual bool isAcceptAllFileFilterUsed();
	virtual bool isDirectorySelectionEnabled();
	virtual bool isFileHidingEnabled();
	virtual bool isFileSelectionEnabled();
	virtual bool isMultiSelectionEnabled();
	virtual bool isTraversable(::java::io::File* f);
	using ::javax::swing::JComponent::list;
	virtual $String* paramString() override;
	void readObject(::java::io::ObjectInputStream* in);
	using ::javax::swing::JComponent::remove;
	virtual void removeActionListener(::java::awt::event::ActionListener* l);
	virtual bool removeChoosableFileFilter(::javax::swing::filechooser::FileFilter* f);
	using ::javax::swing::JComponent::requestFocus;
	using ::javax::swing::JComponent::requestFocusInWindow;
	using ::javax::swing::JComponent::repaint;
	virtual void rescanCurrentDirectory();
	virtual void resetChoosableFileFilters();
	virtual void setAcceptAllFileFilterUsed(bool b);
	virtual void setAccessory(::javax::swing::JComponent* newAccessory);
	virtual void setApproveButtonMnemonic(int32_t mnemonic);
	virtual void setApproveButtonMnemonic(char16_t mnemonic);
	virtual void setApproveButtonText($String* approveButtonText);
	virtual void setApproveButtonToolTipText($String* toolTipText);
	virtual void setControlButtonsAreShown(bool b);
	virtual void setCurrentDirectory(::java::io::File* dir);
	virtual void setDialogTitle($String* dialogTitle);
	virtual void setDialogType(int32_t dialogType);
	virtual void setDragEnabled(bool b);
	virtual void setFileFilter(::javax::swing::filechooser::FileFilter* filter);
	virtual void setFileHidingEnabled(bool b);
	virtual void setFileSelectionMode(int32_t mode);
	virtual void setFileSystemView(::javax::swing::filechooser::FileSystemView* fsv);
	virtual void setFileView(::javax::swing::filechooser::FileView* fileView);
	virtual void setMultiSelectionEnabled(bool b);
	virtual void setSelectedFile(::java::io::File* file);
	virtual void setSelectedFiles($Array<::java::io::File>* selectedFiles);
	virtual void setup(::javax::swing::filechooser::FileSystemView* view);
	virtual int32_t showDialog(::java::awt::Component* parent, $String* approveButtonText);
	virtual int32_t showOpenDialog(::java::awt::Component* parent);
	virtual int32_t showSaveDialog(::java::awt::Component* parent);
	virtual $String* toString() override;
	virtual void updateUI() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static $String* uiClassID;
	static const int32_t OPEN_DIALOG = 0;
	static const int32_t SAVE_DIALOG = 1;
	static const int32_t CUSTOM_DIALOG = 2;
	static const int32_t CANCEL_OPTION = 1;
	static const int32_t APPROVE_OPTION = 0;
	static const int32_t ERROR_OPTION = (-1);
	static const int32_t FILES_ONLY = 0;
	static const int32_t DIRECTORIES_ONLY = 1;
	static const int32_t FILES_AND_DIRECTORIES = 2;
	static $String* CANCEL_SELECTION;
	static $String* APPROVE_SELECTION;
	static $String* APPROVE_BUTTON_TEXT_CHANGED_PROPERTY;
	static $String* APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY;
	static $String* APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY;
	static $String* CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY;
	static $String* DIRECTORY_CHANGED_PROPERTY;
	static $String* SELECTED_FILE_CHANGED_PROPERTY;
	static $String* SELECTED_FILES_CHANGED_PROPERTY;
	static $String* MULTI_SELECTION_ENABLED_CHANGED_PROPERTY;
	static $String* FILE_SYSTEM_VIEW_CHANGED_PROPERTY;
	static $String* FILE_VIEW_CHANGED_PROPERTY;
	static $String* FILE_HIDING_CHANGED_PROPERTY;
	static $String* FILE_FILTER_CHANGED_PROPERTY;
	static $String* FILE_SELECTION_MODE_CHANGED_PROPERTY;
	static $String* ACCESSORY_CHANGED_PROPERTY;
	static $String* ACCEPT_ALL_FILE_FILTER_USED_CHANGED_PROPERTY;
	static $String* DIALOG_TITLE_CHANGED_PROPERTY;
	static $String* DIALOG_TYPE_CHANGED_PROPERTY;
	static $String* CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY;
	$String* dialogTitle = nullptr;
	$String* approveButtonText = nullptr;
	$String* approveButtonToolTipText = nullptr;
	int32_t approveButtonMnemonic = 0;
	::java::util::Vector* filters = nullptr;
	::javax::swing::JDialog* dialog = nullptr;
	int32_t dialogType = 0;
	int32_t returnValue = 0;
	::javax::swing::JComponent* accessory = nullptr;
	::javax::swing::filechooser::FileView* fileView = nullptr;
	bool controlsShown = false;
	bool useFileHiding = false;
	static $String* SHOW_HIDDEN_PROP;
	::java::beans::PropertyChangeListener* showFilesListener = nullptr;
	int32_t fileSelectionMode = 0;
	bool multiSelectionEnabled = false;
	bool useAcceptAllFileFilter = false;
	bool dragEnabled = false;
	::javax::swing::filechooser::FileFilter* fileFilter = nullptr;
	::javax::swing::filechooser::FileSystemView* fileSystemView = nullptr;
	::java::io::File* currentDirectory = nullptr;
	::java::io::File* selectedFile = nullptr;
	$Array<::java::io::File>* selectedFiles = nullptr;
	::javax::accessibility::AccessibleContext* accessibleContext = nullptr;
};

	} // swing
} // javax

#pragma pop_macro("ACCEPT_ALL_FILE_FILTER_USED_CHANGED_PROPERTY")
#pragma pop_macro("ACCESSORY_CHANGED_PROPERTY")
#pragma pop_macro("APPROVE_BUTTON_MNEMONIC_CHANGED_PROPERTY")
#pragma pop_macro("APPROVE_BUTTON_TEXT_CHANGED_PROPERTY")
#pragma pop_macro("APPROVE_BUTTON_TOOL_TIP_TEXT_CHANGED_PROPERTY")
#pragma pop_macro("APPROVE_OPTION")
#pragma pop_macro("APPROVE_SELECTION")
#pragma pop_macro("CANCEL_OPTION")
#pragma pop_macro("CANCEL_SELECTION")
#pragma pop_macro("CHOOSABLE_FILE_FILTER_CHANGED_PROPERTY")
#pragma pop_macro("CONTROL_BUTTONS_ARE_SHOWN_CHANGED_PROPERTY")
#pragma pop_macro("CUSTOM_DIALOG")
#pragma pop_macro("DIALOG_TITLE_CHANGED_PROPERTY")
#pragma pop_macro("DIALOG_TYPE_CHANGED_PROPERTY")
#pragma pop_macro("DIRECTORIES_ONLY")
#pragma pop_macro("DIRECTORY_CHANGED_PROPERTY")
#pragma pop_macro("ERROR_OPTION")
#pragma pop_macro("FILES_AND_DIRECTORIES")
#pragma pop_macro("FILES_ONLY")
#pragma pop_macro("FILE_FILTER_CHANGED_PROPERTY")
#pragma pop_macro("FILE_HIDING_CHANGED_PROPERTY")
#pragma pop_macro("FILE_SELECTION_MODE_CHANGED_PROPERTY")
#pragma pop_macro("FILE_SYSTEM_VIEW_CHANGED_PROPERTY")
#pragma pop_macro("FILE_VIEW_CHANGED_PROPERTY")
#pragma pop_macro("MULTI_SELECTION_ENABLED_CHANGED_PROPERTY")
#pragma pop_macro("OPEN_DIALOG")
#pragma pop_macro("SAVE_DIALOG")
#pragma pop_macro("SELECTED_FILES_CHANGED_PROPERTY")
#pragma pop_macro("SELECTED_FILE_CHANGED_PROPERTY")
#pragma pop_macro("SHOW_HIDDEN_PROP")

#endif // _javax_swing_JFileChooser_h_