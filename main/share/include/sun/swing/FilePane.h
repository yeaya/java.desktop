#ifndef _sun_swing_FilePane_h_
#define _sun_swing_FilePane_h_
//$ class sun.swing.FilePane
//$ extends javax.swing.JPanel
//$ implements java.beans.PropertyChangeListener

#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <javax/swing/JPanel.h>

#pragma push_macro("ACTION_APPROVE_SELECTION")
#undef ACTION_APPROVE_SELECTION
#pragma push_macro("ACTION_CANCEL")
#undef ACTION_CANCEL
#pragma push_macro("ACTION_CHANGE_TO_PARENT_DIRECTORY")
#undef ACTION_CHANGE_TO_PARENT_DIRECTORY
#pragma push_macro("ACTION_EDIT_FILE_NAME")
#undef ACTION_EDIT_FILE_NAME
#pragma push_macro("ACTION_NEW_FOLDER")
#undef ACTION_NEW_FOLDER
#pragma push_macro("ACTION_REFRESH")
#undef ACTION_REFRESH
#pragma push_macro("ACTION_VIEW_DETAILS")
#undef ACTION_VIEW_DETAILS
#pragma push_macro("ACTION_VIEW_LIST")
#undef ACTION_VIEW_LIST
#pragma push_macro("COLUMN_FILENAME")
#undef COLUMN_FILENAME
#pragma push_macro("VIEWTYPE_COUNT")
#undef VIEWTYPE_COUNT
#pragma push_macro("VIEWTYPE_DETAILS")
#undef VIEWTYPE_DETAILS
#pragma push_macro("VIEWTYPE_LIST")
#undef VIEWTYPE_LIST

namespace java {
	namespace awt {
		class Color;
		class Container;
		class Cursor;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusListener;
			class KeyListener;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
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
		class ActionMap;
		class JFileChooser;
		class JList;
		class JMenu;
		class JPopupMenu;
		class JTable;
		class JTextField;
		class ListSelectionModel;
	}
}
namespace javax {
	namespace swing {
		namespace border {
			class Border;
		}
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
		namespace plaf {
			namespace basic {
				class BasicDirectoryModel;
			}
		}
	}
}
namespace sun {
	namespace swing {
		class FilePane$DetailsTableCellEditor;
		class FilePane$DetailsTableModel;
		class FilePane$DetailsTableRowSorter;
		class FilePane$FileChooserUIAccessor;
		class FilePane$Handler;
	}
}

namespace sun {
	namespace swing {

class $import FilePane : public ::javax::swing::JPanel, public ::java::beans::PropertyChangeListener {
	$class(FilePane, 0, ::javax::swing::JPanel, ::java::beans::PropertyChangeListener)
public:
	FilePane();
	using ::javax::swing::JPanel::contains;
	using ::javax::swing::JPanel::enable;
	using ::javax::swing::JPanel::getBounds;
	using ::javax::swing::JPanel::getSize;
	using ::javax::swing::JPanel::getLocation;
	using ::javax::swing::JPanel::firePropertyChange;
	using ::javax::swing::JPanel::add;
	using ::javax::swing::JPanel::getMousePosition;
	using ::javax::swing::JPanel::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::sun::swing::FilePane$FileChooserUIAccessor* fileChooserUIAccessor);
	static void addActionsToMap(::javax::swing::ActionMap* map, $Array<::javax::swing::Action>* actions);
	void applyEdit();
	virtual bool canWrite(::java::io::File* f);
	void cancelEdit();
	virtual void clearSelection();
	virtual void createActionMap();
	virtual ::javax::swing::JPanel* createDetailsView();
	virtual ::javax::swing::JPanel* createList();
	virtual ::javax::swing::event::ListSelectionListener* createListSelectionListener();
	void doDeselectFile(Object$* fileToDeselect);
	void doDirectoryChanged(::java::beans::PropertyChangeEvent* e);
	void doFileSelectionModeChanged(::java::beans::PropertyChangeEvent* e);
	void doFilterChanged(::java::beans::PropertyChangeEvent* e);
	void doMultiSelectionChanged(::java::beans::PropertyChangeEvent* e);
	void doSelectFile(::java::io::File* fileToSelect);
	void doSelectedFileChanged(::java::beans::PropertyChangeEvent* e);
	void doSelectedFilesChanged(::java::beans::PropertyChangeEvent* e);
	void editFileName(int32_t index);
	virtual void ensureFileIsVisible(::javax::swing::JFileChooser* fc, ::java::io::File* f);
	void ensureIndexIsVisible(int32_t i);
	$Object* findChildComponent(::java::awt::Container* container, $Class* cls);
	void fixNameColumnWidth(int32_t viewWidth);
	virtual $Array<::javax::swing::Action>* getActions();
	virtual ::javax::swing::JPopupMenu* getComponentPopupMenu() override;
	::sun::swing::FilePane$DetailsTableCellEditor* getDetailsTableCellEditor();
	::sun::swing::FilePane$DetailsTableModel* getDetailsTableModel();
	virtual ::java::io::File* getDirectory();
	int32_t getEditIndex();
	virtual ::javax::swing::JFileChooser* getFileChooser();
	virtual ::javax::swing::plaf::basic::BasicDirectoryModel* getModel();
	virtual ::sun::swing::FilePane$Handler* getMouseHandler();
	virtual ::javax::swing::Action* getNewFolderAction();
	::sun::swing::FilePane$DetailsTableRowSorter* getRowSorter();
	virtual ::javax::swing::JMenu* getViewMenu();
	virtual int32_t getViewType();
	virtual ::javax::swing::Action* getViewTypeAction(int32_t viewType);
	virtual void installDefaults();
	virtual bool isDirectorySelected();
	virtual void propertyChange(::java::beans::PropertyChangeEvent* e) override;
	static void recursivelySetInheritsPopupMenu(::java::awt::Container* container, bool b);
	using ::javax::swing::JPanel::requestFocus;
	using ::javax::swing::JPanel::requestFocusInWindow;
	using ::javax::swing::JPanel::repaint;
	using ::javax::swing::JPanel::remove;
	virtual void rescanCurrentDirectory();
	void resetEditIndex();
	void setEditIndex(int32_t i);
	virtual void setFileSelected();
	using ::javax::swing::JPanel::setUI;
	virtual void setViewType(int32_t viewType);
	virtual $String* toString() override;
	virtual void uninstallUI();
	void updateDetailsColumnModel(::javax::swing::JTable* table);
	void updateListRowCount(::javax::swing::JList* list);
	void updateViewMenu();
	static bool usesShellFolder(::javax::swing::JFileChooser* chooser);
	static $String* ACTION_APPROVE_SELECTION;
	static $String* ACTION_CANCEL;
	static $String* ACTION_EDIT_FILE_NAME;
	static $String* ACTION_REFRESH;
	static $String* ACTION_CHANGE_TO_PARENT_DIRECTORY;
	static $String* ACTION_NEW_FOLDER;
	static $String* ACTION_VIEW_LIST;
	static $String* ACTION_VIEW_DETAILS;
	$Array<::javax::swing::Action>* actions = nullptr;
	static const int32_t VIEWTYPE_LIST = 0;
	static const int32_t VIEWTYPE_DETAILS = 1;
	static const int32_t VIEWTYPE_COUNT = 2;
	int32_t viewType = 0;
	$Array<::javax::swing::JPanel>* viewPanels = nullptr;
	::javax::swing::JPanel* currentViewPanel = nullptr;
	$StringArray* viewTypeActionNames = nullptr;
	$String* filesListAccessibleName = nullptr;
	$String* filesDetailsAccessibleName = nullptr;
	::javax::swing::JPopupMenu* contextMenu = nullptr;
	::javax::swing::JMenu* viewMenu = nullptr;
	$String* viewMenuLabelText = nullptr;
	$String* refreshActionLabelText = nullptr;
	$String* newFolderActionLabelText = nullptr;
	$String* kiloByteString = nullptr;
	$String* megaByteString = nullptr;
	$String* gigaByteString = nullptr;
	$String* renameErrorTitleText = nullptr;
	$String* renameErrorText = nullptr;
	$String* renameErrorFileExistsText = nullptr;
	static ::java::awt::Cursor* waitCursor;
	::java::awt::event::KeyListener* detailsKeyListener = nullptr;
	::java::awt::event::FocusListener* editorFocusListener = nullptr;
	static ::java::awt::event::FocusListener* repaintListener;
	bool smallIconsView = false;
	::javax::swing::border::Border* listViewBorder = nullptr;
	::java::awt::Color* listViewBackground = nullptr;
	bool listViewWindowsStyle = false;
	bool readOnly = false;
	bool fullRowSelection = false;
	::javax::swing::ListSelectionModel* listSelectionModel = nullptr;
	::javax::swing::JList* list$ = nullptr;
	::javax::swing::JTable* detailsTable = nullptr;
	static const int32_t COLUMN_FILENAME = 0;
	::java::io::File* newFolderFile = nullptr;
	::sun::swing::FilePane$FileChooserUIAccessor* fileChooserUIAccessor = nullptr;
	::sun::swing::FilePane$DetailsTableModel* detailsTableModel = nullptr;
	::sun::swing::FilePane$DetailsTableRowSorter* rowSorter = nullptr;
	::sun::swing::FilePane$DetailsTableCellEditor* tableCellEditor = nullptr;
	int32_t lastIndex = 0;
	::java::io::File* editFile = nullptr;
	::javax::swing::JTextField* editCell = nullptr;
	::javax::swing::Action* newFolderAction = nullptr;
	::sun::swing::FilePane$Handler* handler = nullptr;
};

	} // swing
} // sun

#pragma pop_macro("ACTION_APPROVE_SELECTION")
#pragma pop_macro("ACTION_CANCEL")
#pragma pop_macro("ACTION_CHANGE_TO_PARENT_DIRECTORY")
#pragma pop_macro("ACTION_EDIT_FILE_NAME")
#pragma pop_macro("ACTION_NEW_FOLDER")
#pragma pop_macro("ACTION_REFRESH")
#pragma pop_macro("ACTION_VIEW_DETAILS")
#pragma pop_macro("ACTION_VIEW_LIST")
#pragma pop_macro("COLUMN_FILENAME")
#pragma pop_macro("VIEWTYPE_COUNT")
#pragma pop_macro("VIEWTYPE_DETAILS")
#pragma pop_macro("VIEWTYPE_LIST")

#endif // _sun_swing_FilePane_h_