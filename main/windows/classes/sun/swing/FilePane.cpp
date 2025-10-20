#include <sun/swing/FilePane.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/DefaultKeyboardFocusManager.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/MessageFormat.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/DefaultListSelectionModel.h>
#include <javax/swing/DefaultRowSorter.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JList.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JRadioButtonMenuItem.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/DefaultTableColumnModel.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <javax/swing/table/TableModel.h>
#include <javax/swing/table/TableRowSorter.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/ShellFolderColumnInfo.h>
#include <sun/swing/FilePane$1.h>
#include <sun/swing/FilePane$1FilePaneAction.h>
#include <sun/swing/FilePane$2.h>
#include <sun/swing/FilePane$3.h>
#include <sun/swing/FilePane$4.h>
#include <sun/swing/FilePane$5.h>
#include <sun/swing/FilePane$6.h>
#include <sun/swing/FilePane$7.h>
#include <sun/swing/FilePane$8.h>
#include <sun/swing/FilePane$9.h>
#include <sun/swing/FilePane$AlignableTableHeaderRenderer.h>
#include <sun/swing/FilePane$DetailsTableCellEditor.h>
#include <sun/swing/FilePane$DetailsTableCellRenderer.h>
#include <sun/swing/FilePane$DetailsTableModel.h>
#include <sun/swing/FilePane$DetailsTableRowSorter.h>
#include <sun/swing/FilePane$EditActionListener.h>
#include <sun/swing/FilePane$FileChooserUIAccessor.h>
#include <sun/swing/FilePane$FileRenderer.h>
#include <sun/swing/FilePane$Handler.h>
#include <sun/swing/FilePane$SortableListModel.h>
#include <sun/swing/FilePane$ViewTypeAction.h>
#include <jcpp.h>

#undef ACCESSIBLE_NAME_PROPERTY
#undef ACTION_APPROVE_SELECTION
#undef ACTION_CANCEL
#undef ACTION_CHANGE_TO_PARENT_DIRECTORY
#undef ACTION_COMMAND_KEY
#undef ACTION_EDIT_FILE_NAME
#undef ACTION_NEW_FOLDER
#undef ACTION_REFRESH
#undef ACTION_VIEW_DETAILS
#undef ACTION_VIEW_LIST
#undef AUTO_RESIZE_OFF
#undef BACKWARD_TRAVERSAL_KEYS
#undef CANCEL_SELECTION
#undef CENTER
#undef COLUMN_FILENAME
#undef DIRECTORY_CHANGED_PROPERTY
#undef ERROR_MESSAGE
#undef FALSE
#undef FILE_FILTER_CHANGED_PROPERTY
#undef FILE_SELECTION_MODE_CHANGED_PROPERTY
#undef FORWARD_TRAVERSAL_KEYS
#undef MULTIPLE_INTERVAL_SELECTION
#undef MULTI_SELECTION_ENABLED_CHANGED_PROPERTY
#undef NAME
#undef SELECTED_FILES_CHANGED_PROPERTY
#undef SELECTED_FILE_CHANGED_PROPERTY
#undef SINGLE_SELECTION
#undef TRUE
#undef VERTICAL_WRAP
#undef VIEWTYPE_COUNT
#undef VIEWTYPE_DETAILS
#undef VIEWTYPE_LIST
#undef WAIT_CURSOR

using $ComponentArray = $Array<::java::awt::Component>;
using $FileArray = $Array<::java::io::File>;
using $ActionArray = $Array<::javax::swing::Action>;
using $JPanelArray = $Array<::javax::swing::JPanel>;
using $ShellFolderColumnInfoArray = $Array<::sun::awt::shell::ShellFolderColumnInfo>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $DefaultKeyboardFocusManager = ::java::awt::DefaultKeyboardFocusManager;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Rectangle = ::java::awt::Rectangle;
using $ActionListener = ::java::awt::event::ActionListener;
using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusListener = ::java::awt::event::FocusListener;
using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyListener = ::java::awt::event::KeyListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $MessageFormat = ::java::text::MessageFormat;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $EventObject = ::java::util::EventObject;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $CellEditor = ::javax::swing::CellEditor;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $DefaultListSelectionModel = ::javax::swing::DefaultListSelectionModel;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JList = ::javax::swing::JList;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JOptionPane = ::javax::swing::JOptionPane;
using $JPanel = ::javax::swing::JPanel;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $JTextField = ::javax::swing::JTextField;
using $JViewport = ::javax::swing::JViewport;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $RowSorter = ::javax::swing::RowSorter;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ListDataListener = ::javax::swing::event::ListDataListener;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $DefaultTableColumnModel = ::javax::swing::table::DefaultTableColumnModel;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;
using $TableModel = ::javax::swing::table::TableModel;
using $TableRowSorter = ::javax::swing::table::TableRowSorter;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $ShellFolderColumnInfo = ::sun::awt::shell::ShellFolderColumnInfo;
using $FilePane$1 = ::sun::swing::FilePane$1;
using $FilePane$1FilePaneAction = ::sun::swing::FilePane$1FilePaneAction;
using $FilePane$2 = ::sun::swing::FilePane$2;
using $FilePane$3 = ::sun::swing::FilePane$3;
using $FilePane$4 = ::sun::swing::FilePane$4;
using $FilePane$5 = ::sun::swing::FilePane$5;
using $FilePane$6 = ::sun::swing::FilePane$6;
using $FilePane$7 = ::sun::swing::FilePane$7;
using $FilePane$8 = ::sun::swing::FilePane$8;
using $FilePane$9 = ::sun::swing::FilePane$9;
using $FilePane$AlignableTableHeaderRenderer = ::sun::swing::FilePane$AlignableTableHeaderRenderer;
using $FilePane$DetailsTableCellEditor = ::sun::swing::FilePane$DetailsTableCellEditor;
using $FilePane$DetailsTableCellRenderer = ::sun::swing::FilePane$DetailsTableCellRenderer;
using $FilePane$DetailsTableModel = ::sun::swing::FilePane$DetailsTableModel;
using $FilePane$DetailsTableRowSorter = ::sun::swing::FilePane$DetailsTableRowSorter;
using $FilePane$EditActionListener = ::sun::swing::FilePane$EditActionListener;
using $FilePane$FileChooserUIAccessor = ::sun::swing::FilePane$FileChooserUIAccessor;
using $FilePane$FileRenderer = ::sun::swing::FilePane$FileRenderer;
using $FilePane$Handler = ::sun::swing::FilePane$Handler;
using $FilePane$SortableListModel = ::sun::swing::FilePane$SortableListModel;
using $FilePane$ViewTypeAction = ::sun::swing::FilePane$ViewTypeAction;

namespace sun {
	namespace swing {

$FieldInfo _FilePane_FieldInfo_[] = {
	{"ACTION_APPROVE_SELECTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FilePane, ACTION_APPROVE_SELECTION)},
	{"ACTION_CANCEL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FilePane, ACTION_CANCEL)},
	{"ACTION_EDIT_FILE_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FilePane, ACTION_EDIT_FILE_NAME)},
	{"ACTION_REFRESH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FilePane, ACTION_REFRESH)},
	{"ACTION_CHANGE_TO_PARENT_DIRECTORY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FilePane, ACTION_CHANGE_TO_PARENT_DIRECTORY)},
	{"ACTION_NEW_FOLDER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FilePane, ACTION_NEW_FOLDER)},
	{"ACTION_VIEW_LIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FilePane, ACTION_VIEW_LIST)},
	{"ACTION_VIEW_DETAILS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FilePane, ACTION_VIEW_DETAILS)},
	{"actions", "[Ljavax/swing/Action;", nullptr, $PRIVATE, $field(FilePane, actions)},
	{"VIEWTYPE_LIST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FilePane, VIEWTYPE_LIST)},
	{"VIEWTYPE_DETAILS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FilePane, VIEWTYPE_DETAILS)},
	{"VIEWTYPE_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FilePane, VIEWTYPE_COUNT)},
	{"viewType", "I", nullptr, $PRIVATE, $field(FilePane, viewType)},
	{"viewPanels", "[Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(FilePane, viewPanels)},
	{"currentViewPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(FilePane, currentViewPanel)},
	{"viewTypeActionNames", "[Ljava/lang/String;", nullptr, $PRIVATE, $field(FilePane, viewTypeActionNames)},
	{"filesListAccessibleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FilePane, filesListAccessibleName)},
	{"filesDetailsAccessibleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FilePane, filesDetailsAccessibleName)},
	{"contextMenu", "Ljavax/swing/JPopupMenu;", nullptr, $PRIVATE, $field(FilePane, contextMenu)},
	{"viewMenu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE, $field(FilePane, viewMenu)},
	{"viewMenuLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FilePane, viewMenuLabelText)},
	{"refreshActionLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FilePane, refreshActionLabelText)},
	{"newFolderActionLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FilePane, newFolderActionLabelText)},
	{"kiloByteString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FilePane, kiloByteString)},
	{"megaByteString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FilePane, megaByteString)},
	{"gigaByteString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FilePane, gigaByteString)},
	{"renameErrorTitleText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FilePane, renameErrorTitleText)},
	{"renameErrorText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FilePane, renameErrorText)},
	{"renameErrorFileExistsText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FilePane, renameErrorFileExistsText)},
	{"waitCursor", "Ljava/awt/Cursor;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FilePane, waitCursor)},
	{"detailsKeyListener", "Ljava/awt/event/KeyListener;", nullptr, $PRIVATE | $FINAL, $field(FilePane, detailsKeyListener)},
	{"editorFocusListener", "Ljava/awt/event/FocusListener;", nullptr, $PRIVATE, $field(FilePane, editorFocusListener)},
	{"repaintListener", "Ljava/awt/event/FocusListener;", nullptr, $PRIVATE | $STATIC, $staticField(FilePane, repaintListener)},
	{"smallIconsView", "Z", nullptr, $PRIVATE, $field(FilePane, smallIconsView)},
	{"listViewBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE, $field(FilePane, listViewBorder)},
	{"listViewBackground", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(FilePane, listViewBackground)},
	{"listViewWindowsStyle", "Z", nullptr, $PRIVATE, $field(FilePane, listViewWindowsStyle)},
	{"readOnly", "Z", nullptr, $PRIVATE, $field(FilePane, readOnly)},
	{"fullRowSelection", "Z", nullptr, $PRIVATE, $field(FilePane, fullRowSelection)},
	{"listSelectionModel", "Ljavax/swing/ListSelectionModel;", nullptr, $PRIVATE, $field(FilePane, listSelectionModel)},
	{"list", "Ljavax/swing/JList;", "Ljavax/swing/JList<*>;", $PRIVATE, $field(FilePane, list$)},
	{"detailsTable", "Ljavax/swing/JTable;", nullptr, $PRIVATE, $field(FilePane, detailsTable)},
	{"COLUMN_FILENAME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FilePane, COLUMN_FILENAME)},
	{"newFolderFile", "Ljava/io/File;", nullptr, $PRIVATE, $field(FilePane, newFolderFile)},
	{"fileChooserUIAccessor", "Lsun/swing/FilePane$FileChooserUIAccessor;", nullptr, $PRIVATE, $field(FilePane, fileChooserUIAccessor)},
	{"detailsTableModel", "Lsun/swing/FilePane$DetailsTableModel;", nullptr, $PRIVATE, $field(FilePane, detailsTableModel)},
	{"rowSorter", "Lsun/swing/FilePane$DetailsTableRowSorter;", nullptr, $PRIVATE, $field(FilePane, rowSorter)},
	{"tableCellEditor", "Lsun/swing/FilePane$DetailsTableCellEditor;", nullptr, $PRIVATE, $field(FilePane, tableCellEditor)},
	{"lastIndex", "I", nullptr, 0, $field(FilePane, lastIndex)},
	{"editFile", "Ljava/io/File;", nullptr, 0, $field(FilePane, editFile)},
	{"editCell", "Ljavax/swing/JTextField;", nullptr, 0, $field(FilePane, editCell)},
	{"newFolderAction", "Ljavax/swing/Action;", nullptr, $PROTECTED, $field(FilePane, newFolderAction)},
	{"handler", "Lsun/swing/FilePane$Handler;", nullptr, $PRIVATE, $field(FilePane, handler)},
	{}
};

$MethodInfo _FilePane_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/swing/FilePane$FileChooserUIAccessor;)V", nullptr, $PUBLIC, $method(static_cast<void(FilePane::*)($FilePane$FileChooserUIAccessor*)>(&FilePane::init$))},
	{"addActionsToMap", "(Ljavax/swing/ActionMap;[Ljavax/swing/Action;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ActionMap*,$ActionArray*)>(&FilePane::addActionsToMap))},
	{"applyEdit", "()V", nullptr, $PRIVATE, $method(static_cast<void(FilePane::*)()>(&FilePane::applyEdit))},
	{"canWrite", "(Ljava/io/File;)Z", nullptr, $PUBLIC},
	{"cancelEdit", "()V", nullptr, $PRIVATE, $method(static_cast<void(FilePane::*)()>(&FilePane::cancelEdit))},
	{"clearSelection", "()V", nullptr, $PUBLIC},
	{"createActionMap", "()V", nullptr, $PROTECTED},
	{"createDetailsView", "()Ljavax/swing/JPanel;", nullptr, $PUBLIC},
	{"createList", "()Ljavax/swing/JPanel;", nullptr, $PUBLIC},
	{"createListSelectionListener", "()Ljavax/swing/event/ListSelectionListener;", nullptr, $PUBLIC},
	{"doDeselectFile", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePane::*)(Object$*)>(&FilePane::doDeselectFile))},
	{"doDirectoryChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePane::*)($PropertyChangeEvent*)>(&FilePane::doDirectoryChanged))},
	{"doFileSelectionModeChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePane::*)($PropertyChangeEvent*)>(&FilePane::doFileSelectionModeChanged))},
	{"doFilterChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePane::*)($PropertyChangeEvent*)>(&FilePane::doFilterChanged))},
	{"doMultiSelectionChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePane::*)($PropertyChangeEvent*)>(&FilePane::doMultiSelectionChanged))},
	{"doSelectFile", "(Ljava/io/File;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePane::*)($File*)>(&FilePane::doSelectFile))},
	{"doSelectedFileChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePane::*)($PropertyChangeEvent*)>(&FilePane::doSelectedFileChanged))},
	{"doSelectedFilesChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePane::*)($PropertyChangeEvent*)>(&FilePane::doSelectedFilesChanged))},
	{"editFileName", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(FilePane::*)(int32_t)>(&FilePane::editFileName))},
	{"ensureFileIsVisible", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, $PUBLIC},
	{"ensureIndexIsVisible", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(FilePane::*)(int32_t)>(&FilePane::ensureIndexIsVisible))},
	{"findChildComponent", "(Ljava/awt/Container;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/awt/Container;Ljava/lang/Class<TT;>;)TT;", $PRIVATE, $method(static_cast<$Object*(FilePane::*)($Container*,$Class*)>(&FilePane::findChildComponent))},
	{"fixNameColumnWidth", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(FilePane::*)(int32_t)>(&FilePane::fixNameColumnWidth))},
	{"getActions", "()[Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getComponentPopupMenu", "()Ljavax/swing/JPopupMenu;", nullptr, $PUBLIC},
	{"getDetailsTableCellEditor", "()Lsun/swing/FilePane$DetailsTableCellEditor;", nullptr, $PRIVATE, $method(static_cast<$FilePane$DetailsTableCellEditor*(FilePane::*)()>(&FilePane::getDetailsTableCellEditor))},
	{"getDetailsTableModel", "()Lsun/swing/FilePane$DetailsTableModel;", nullptr, $PRIVATE, $method(static_cast<$FilePane$DetailsTableModel*(FilePane::*)()>(&FilePane::getDetailsTableModel))},
	{"getDirectory", "()Ljava/io/File;", nullptr, $PROTECTED},
	{"getEditIndex", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(FilePane::*)()>(&FilePane::getEditIndex))},
	{"getFileChooser", "()Ljavax/swing/JFileChooser;", nullptr, $PROTECTED},
	{"getModel", "()Ljavax/swing/plaf/basic/BasicDirectoryModel;", nullptr, $PROTECTED},
	{"getMouseHandler", "()Lsun/swing/FilePane$Handler;", nullptr, $PROTECTED},
	{"getNewFolderAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getRowSorter", "()Lsun/swing/FilePane$DetailsTableRowSorter;", nullptr, $PRIVATE, $method(static_cast<$FilePane$DetailsTableRowSorter*(FilePane::*)()>(&FilePane::getRowSorter))},
	{"getViewMenu", "()Ljavax/swing/JMenu;", nullptr, $PUBLIC},
	{"getViewType", "()I", nullptr, $PUBLIC},
	{"getViewTypeAction", "(I)Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"isDirectorySelected", "()Z", nullptr, $PROTECTED},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"recursivelySetInheritsPopupMenu", "(Ljava/awt/Container;Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Container*,bool)>(&FilePane::recursivelySetInheritsPopupMenu))},
	{"rescanCurrentDirectory", "()V", nullptr, $PUBLIC},
	{"resetEditIndex", "()V", nullptr, $PRIVATE, $method(static_cast<void(FilePane::*)()>(&FilePane::resetEditIndex))},
	{"setEditIndex", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(FilePane::*)(int32_t)>(&FilePane::setEditIndex))},
	{"setFileSelected", "()V", nullptr, 0},
	{"setViewType", "(I)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallUI", "()V", nullptr, $PUBLIC},
	{"updateDetailsColumnModel", "(Ljavax/swing/JTable;)V", nullptr, $PRIVATE, $method(static_cast<void(FilePane::*)($JTable*)>(&FilePane::updateDetailsColumnModel))},
	{"updateListRowCount", "(Ljavax/swing/JList;)V", "(Ljavax/swing/JList<*>;)V", $PRIVATE, $method(static_cast<void(FilePane::*)($JList*)>(&FilePane::updateListRowCount))},
	{"updateViewMenu", "()V", nullptr, $PRIVATE, $method(static_cast<void(FilePane::*)()>(&FilePane::updateViewMenu))},
	{"usesShellFolder", "(Ljavax/swing/JFileChooser;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($JFileChooser*)>(&FilePane::usesShellFolder))},
	{}
};

$InnerClassInfo _FilePane_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$FileChooserUIAccessor", "sun.swing.FilePane", "FileChooserUIAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.swing.FilePane$Handler", "sun.swing.FilePane", "Handler", $PRIVATE},
	{"sun.swing.FilePane$FileRenderer", "sun.swing.FilePane", "FileRenderer", $PROTECTED},
	{"sun.swing.FilePane$EditActionListener", "sun.swing.FilePane", "EditActionListener", 0},
	{"sun.swing.FilePane$DelayedSelectionUpdater", "sun.swing.FilePane", "DelayedSelectionUpdater", $PRIVATE},
	{"sun.swing.FilePane$AlignableTableHeaderRenderer", "sun.swing.FilePane", "AlignableTableHeaderRenderer", $PRIVATE},
	{"sun.swing.FilePane$DetailsTableCellRenderer", "sun.swing.FilePane", "DetailsTableCellRenderer", 0},
	{"sun.swing.FilePane$DetailsTableCellEditor", "sun.swing.FilePane", "DetailsTableCellEditor", $PRIVATE},
	{"sun.swing.FilePane$DirectoriesFirstComparatorWrapper", "sun.swing.FilePane", "DirectoriesFirstComparatorWrapper", $PRIVATE},
	{"sun.swing.FilePane$DetailsTableRowSorter", "sun.swing.FilePane", "DetailsTableRowSorter", $PRIVATE},
	{"sun.swing.FilePane$DetailsTableModel", "sun.swing.FilePane", "DetailsTableModel", 0},
	{"sun.swing.FilePane$SortableListModel", "sun.swing.FilePane", "SortableListModel", $PRIVATE},
	{"sun.swing.FilePane$ViewTypeAction", "sun.swing.FilePane", "ViewTypeAction", 0},
	{"sun.swing.FilePane$9", nullptr, nullptr, 0},
	{"sun.swing.FilePane$8", nullptr, nullptr, 0},
	{"sun.swing.FilePane$7", nullptr, nullptr, 0},
	{"sun.swing.FilePane$6", nullptr, nullptr, 0},
	{"sun.swing.FilePane$5", nullptr, nullptr, 0},
	{"sun.swing.FilePane$4", nullptr, nullptr, 0},
	{"sun.swing.FilePane$1FilePaneAction", nullptr, "FilePaneAction", 0},
	{"sun.swing.FilePane$3", nullptr, nullptr, 0},
	{"sun.swing.FilePane$2", nullptr, nullptr, 0},
	{"sun.swing.FilePane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FilePane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.FilePane",
	"javax.swing.JPanel",
	"java.beans.PropertyChangeListener",
	_FilePane_FieldInfo_,
	_FilePane_MethodInfo_,
	nullptr,
	nullptr,
	_FilePane_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.swing.FilePane$FileChooserUIAccessor,sun.swing.FilePane$Handler,sun.swing.FilePane$FileRenderer,sun.swing.FilePane$EditActionListener,sun.swing.FilePane$DelayedSelectionUpdater,sun.swing.FilePane$AlignableTableHeaderRenderer,sun.swing.FilePane$DetailsTableCellRenderer,sun.swing.FilePane$DetailsTableCellEditor,sun.swing.FilePane$DirectoriesFirstComparatorWrapper,sun.swing.FilePane$DetailsTableRowSorter,sun.swing.FilePane$DetailsTableRowSorter$SorterModelWrapper,sun.swing.FilePane$DetailsTableRowSorter$2,sun.swing.FilePane$DetailsTableRowSorter$1,sun.swing.FilePane$DetailsTableModel,sun.swing.FilePane$DetailsTableModel$1,sun.swing.FilePane$SortableListModel,sun.swing.FilePane$ViewTypeAction,sun.swing.FilePane$9,sun.swing.FilePane$8,sun.swing.FilePane$7,sun.swing.FilePane$6,sun.swing.FilePane$5,sun.swing.FilePane$4,sun.swing.FilePane$1FilePaneAction,sun.swing.FilePane$3,sun.swing.FilePane$2,sun.swing.FilePane$1"
};

$Object* allocate$FilePane($Class* clazz) {
	return $of($alloc(FilePane));
}

$String* FilePane::toString() {
	 return this->$JPanel::toString();
}

int32_t FilePane::hashCode() {
	 return this->$JPanel::hashCode();
}

bool FilePane::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* FilePane::clone() {
	 return this->$JPanel::clone();
}

void FilePane::finalize() {
	this->$JPanel::finalize();
}

$String* FilePane::ACTION_APPROVE_SELECTION = nullptr;
$String* FilePane::ACTION_CANCEL = nullptr;
$String* FilePane::ACTION_EDIT_FILE_NAME = nullptr;
$String* FilePane::ACTION_REFRESH = nullptr;
$String* FilePane::ACTION_CHANGE_TO_PARENT_DIRECTORY = nullptr;
$String* FilePane::ACTION_NEW_FOLDER = nullptr;
$String* FilePane::ACTION_VIEW_LIST = nullptr;
$String* FilePane::ACTION_VIEW_DETAILS = nullptr;
$Cursor* FilePane::waitCursor = nullptr;
$FocusListener* FilePane::repaintListener = nullptr;

void FilePane::init$($FilePane$FileChooserUIAccessor* fileChooserUIAccessor) {
	$JPanel::init$(static_cast<$LayoutManager*>($$new($BorderLayout)));
	this->viewType = -1;
	$set(this, viewPanels, $new($JPanelArray, FilePane::VIEWTYPE_COUNT));
	$set(this, filesListAccessibleName, nullptr);
	$set(this, filesDetailsAccessibleName, nullptr);
	$set(this, detailsKeyListener, $new($FilePane$1, this));
	$set(this, editorFocusListener, $new($FilePane$2, this));
	this->smallIconsView = false;
	this->fullRowSelection = false;
	this->lastIndex = -1;
	$set(this, editFile, nullptr);
	$set(this, editCell, nullptr);
	$set(this, fileChooserUIAccessor, fileChooserUIAccessor);
	installDefaults();
	createActionMap();
}

void FilePane::uninstallUI() {
	if (getModel() != nullptr) {
		$nc($(getModel()))->removePropertyChangeListener(this);
	}
}

$JFileChooser* FilePane::getFileChooser() {
	return $nc(this->fileChooserUIAccessor)->getFileChooser();
}

$BasicDirectoryModel* FilePane::getModel() {
	return $nc(this->fileChooserUIAccessor)->getModel();
}

int32_t FilePane::getViewType() {
	return this->viewType;
}

void FilePane::setViewType(int32_t viewType) {
	$useLocalCurrentObjectStackCache();
	if (viewType == this->viewType) {
		return;
	}
	int32_t oldValue = this->viewType;
	this->viewType = viewType;
	$var($JPanel, createdViewPanel, nullptr);
	$var($Component, newFocusOwner, nullptr);
	switch (viewType) {
	case FilePane::VIEWTYPE_LIST:
		{
			if ($nc(this->viewPanels)->get(viewType) == nullptr) {
				$assign(createdViewPanel, $nc(this->fileChooserUIAccessor)->createList());
				if (createdViewPanel == nullptr) {
					$assign(createdViewPanel, createList());
				}
				$load($JList);
				$set(this, list$, $cast($JList, findChildComponent(createdViewPanel, $JList::class$)));
				if (this->listSelectionModel == nullptr) {
					$set(this, listSelectionModel, $nc(this->list$)->getSelectionModel());
					if (this->detailsTable != nullptr) {
						$nc(this->detailsTable)->setSelectionModel(this->listSelectionModel);
					}
				} else {
					$nc(this->list$)->setSelectionModel(this->listSelectionModel);
				}
			}
			$nc(this->list$)->setLayoutOrientation($JList::VERTICAL_WRAP);
			$assign(newFocusOwner, this->list$);
			break;
		}
	case FilePane::VIEWTYPE_DETAILS:
		{
			if ($nc(this->viewPanels)->get(viewType) == nullptr) {
				$assign(createdViewPanel, $nc(this->fileChooserUIAccessor)->createDetailsView());
				if (createdViewPanel == nullptr) {
					$assign(createdViewPanel, createDetailsView());
				}
				$load($JTable);
				$set(this, detailsTable, $cast($JTable, findChildComponent(createdViewPanel, $JTable::class$)));
				$nc(this->detailsTable)->setRowHeight($Math::max($nc($($nc(this->detailsTable)->getFont()))->getSize() + 4, 16 + 1));
				if (this->listSelectionModel != nullptr) {
					$nc(this->detailsTable)->setSelectionModel(this->listSelectionModel);
				}
			}
			$assign(newFocusOwner, this->detailsTable);
			break;
		}
	}
	if (createdViewPanel != nullptr) {
		$nc(this->viewPanels)->set(viewType, createdViewPanel);
		recursivelySetInheritsPopupMenu(createdViewPanel, true);
	}
	bool isFocusOwner = false;
	if (this->currentViewPanel != nullptr) {
		$var($Component, owner, $nc($($DefaultKeyboardFocusManager::getCurrentKeyboardFocusManager()))->getPermanentFocusOwner());
		isFocusOwner = $equals(owner, this->detailsTable) || $equals(owner, this->list$);
		remove(static_cast<$Component*>(this->currentViewPanel));
	}
	$set(this, currentViewPanel, $nc(this->viewPanels)->get(viewType));
	$init($BorderLayout);
	add(static_cast<$Component*>(this->currentViewPanel), $of($BorderLayout::CENTER));
	if (isFocusOwner && newFocusOwner != nullptr) {
		newFocusOwner->requestFocusInWindow();
	}
	revalidate();
	repaint();
	updateViewMenu();
	firePropertyChange("viewType"_s, oldValue, viewType);
}

$Action* FilePane::getViewTypeAction(int32_t viewType) {
	return $new($FilePane$ViewTypeAction, this, viewType);
}

void FilePane::recursivelySetInheritsPopupMenu($Container* container, bool b) {
	$init(FilePane);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JComponent, container)) {
		$nc(($cast($JComponent, container)))->setInheritsPopupMenu(b);
	}
	int32_t n = $nc(container)->getComponentCount();
	for (int32_t i = 0; i < n; ++i) {
		recursivelySetInheritsPopupMenu($cast($Container, $(container->getComponent(i))), b);
	}
}

void FilePane::installDefaults() {
	$useLocalCurrentObjectStackCache();
	$var($Locale, l, $nc($(getFileChooser()))->getLocale());
	$set(this, listViewBorder, $UIManager::getBorder("FileChooser.listViewBorder"_s));
	$set(this, listViewBackground, $UIManager::getColor("FileChooser.listViewBackground"_s));
	this->listViewWindowsStyle = $UIManager::getBoolean("FileChooser.listViewWindowsStyle"_s);
	this->readOnly = $UIManager::getBoolean("FileChooser.readOnly"_s);
	$set(this, viewMenuLabelText, $UIManager::getString($of("FileChooser.viewMenuLabelText"_s), l));
	$set(this, refreshActionLabelText, $UIManager::getString($of("FileChooser.refreshActionLabelText"_s), l));
	$set(this, newFolderActionLabelText, $UIManager::getString($of("FileChooser.newFolderActionLabelText"_s), l));
	$set(this, viewTypeActionNames, $new($StringArray, FilePane::VIEWTYPE_COUNT));
	$nc(this->viewTypeActionNames)->set(FilePane::VIEWTYPE_LIST, $($UIManager::getString($of("FileChooser.listViewActionLabelText"_s), l)));
	$nc(this->viewTypeActionNames)->set(FilePane::VIEWTYPE_DETAILS, $($UIManager::getString($of("FileChooser.detailsViewActionLabelText"_s), l)));
	$set(this, kiloByteString, $UIManager::getString($of("FileChooser.fileSizeKiloBytes"_s), l));
	$set(this, megaByteString, $UIManager::getString($of("FileChooser.fileSizeMegaBytes"_s), l));
	$set(this, gigaByteString, $UIManager::getString($of("FileChooser.fileSizeGigaBytes"_s), l));
	this->fullRowSelection = $UIManager::getBoolean("FileView.fullRowSelection"_s);
	$set(this, filesListAccessibleName, $UIManager::getString($of("FileChooser.filesListAccessibleName"_s), l));
	$set(this, filesDetailsAccessibleName, $UIManager::getString($of("FileChooser.filesDetailsAccessibleName"_s), l));
	$set(this, renameErrorTitleText, $UIManager::getString($of("FileChooser.renameErrorTitleText"_s), l));
	$set(this, renameErrorText, $UIManager::getString($of("FileChooser.renameErrorText"_s), l));
	$set(this, renameErrorFileExistsText, $UIManager::getString($of("FileChooser.renameErrorFileExistsText"_s), l));
}

$ActionArray* FilePane::getActions() {
	$useLocalCurrentObjectStackCache();
	if (this->actions == nullptr) {
		{
		}
		$var($ArrayList, actionList, $new($ArrayList, 8));
		$var($Action, action, nullptr);
		actionList->add($$new($FilePane$1FilePaneAction, this, FilePane::ACTION_CANCEL));
		actionList->add($$new($FilePane$1FilePaneAction, this, FilePane::ACTION_EDIT_FILE_NAME));
		actionList->add($$new($FilePane$1FilePaneAction, this, this->refreshActionLabelText, FilePane::ACTION_REFRESH));
		$assign(action, $nc(this->fileChooserUIAccessor)->getApproveSelectionAction());
		if (action != nullptr) {
			actionList->add(action);
		}
		$assign(action, $nc(this->fileChooserUIAccessor)->getChangeToParentDirectoryAction());
		if (action != nullptr) {
			actionList->add(action);
		}
		$assign(action, getNewFolderAction());
		if (action != nullptr) {
			actionList->add(action);
		}
		$assign(action, getViewTypeAction(FilePane::VIEWTYPE_LIST));
		if (action != nullptr) {
			actionList->add(action);
		}
		$assign(action, getViewTypeAction(FilePane::VIEWTYPE_DETAILS));
		if (action != nullptr) {
			actionList->add(action);
		}
		$set(this, actions, $fcast($ActionArray, actionList->toArray($$new($ActionArray, actionList->size()))));
	}
	return $fcast($ActionArray, $Arrays::copyOf(this->actions, $nc(this->actions)->length));
}

void FilePane::createActionMap() {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, var$0, $JPanel::getActionMap());
	addActionsToMap(var$0, $(getActions()));
}

void FilePane::addActionsToMap($ActionMap* map, $ActionArray* actions) {
	$init(FilePane);
	$useLocalCurrentObjectStackCache();
	if (map != nullptr && actions != nullptr) {
		{
			$var($ActionArray, arr$, actions);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Action, a, arr$->get(i$));
				{
					$init($Action);
					$var($String, cmd, $cast($String, $nc(a)->getValue($Action::ACTION_COMMAND_KEY)));
					if (cmd == nullptr) {
						$assign(cmd, $cast($String, a->getValue($Action::NAME)));
					}
					map->put(cmd, a);
				}
			}
		}
	}
}

void FilePane::updateListRowCount($JList* list) {
	if (this->smallIconsView) {
		$nc(list)->setVisibleRowCount($nc($(getModel()))->getSize() / 3);
	} else {
		$nc(list)->setVisibleRowCount(-1);
	}
}

$JPanel* FilePane::createList() {
	$useLocalCurrentObjectStackCache();
	$var($JPanel, p, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$var($JFileChooser, fileChooser, getFileChooser());
	$var($JList, list, $new($FilePane$4, this, fileChooser));
	list->setCellRenderer($$new($FilePane$FileRenderer, this));
	list->setLayoutOrientation($JList::VERTICAL_WRAP);
	$init($Boolean);
	list->putClientProperty("List.isFileList"_s, $Boolean::TRUE);
	if (this->listViewWindowsStyle) {
		list->addFocusListener(FilePane::repaintListener);
	}
	updateListRowCount(list);
	$nc($(getModel()))->addListDataListener($$new($FilePane$5, this, list));
	$nc($(getModel()))->addPropertyChangeListener(this);
	if ($nc(fileChooser)->isMultiSelectionEnabled()) {
		list->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	} else {
		list->setSelectionMode($ListSelectionModel::SINGLE_SELECTION);
	}
	list->setModel($$new($FilePane$SortableListModel, this));
	list->addListSelectionListener($(createListSelectionListener()));
	list->addMouseListener($(getMouseHandler()));
	$var($JScrollPane, scrollpane, $new($JScrollPane, list));
	if (this->listViewBackground != nullptr) {
		list->setBackground(this->listViewBackground);
	}
	if (this->listViewBorder != nullptr) {
		scrollpane->setBorder(this->listViewBorder);
	}
	$init($AccessibleContext);
	list->putClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY, this->filesListAccessibleName);
	$init($BorderLayout);
	p->add(static_cast<$Component*>(scrollpane), $of($BorderLayout::CENTER));
	return p;
}

$FilePane$DetailsTableModel* FilePane::getDetailsTableModel() {
	if (this->detailsTableModel == nullptr) {
		$set(this, detailsTableModel, $new($FilePane$DetailsTableModel, this, $(getFileChooser())));
	}
	return this->detailsTableModel;
}

void FilePane::updateDetailsColumnModel($JTable* table) {
	$useLocalCurrentObjectStackCache();
	if (table != nullptr) {
		$var($ShellFolderColumnInfoArray, columns, $nc(this->detailsTableModel)->getColumns());
		$var($TableColumnModel, columnModel, $new($DefaultTableColumnModel));
		for (int32_t i = 0; i < $nc(columns)->length; ++i) {
			$var($ShellFolderColumnInfo, dataItem, columns->get(i));
			$var($TableColumn, column, $new($TableColumn, i));
			$var($String, title, $nc(dataItem)->getTitle());
			bool var$0 = title != nullptr && title->startsWith("FileChooser."_s);
			if (var$0 && title->endsWith("HeaderText"_s)) {
				$var($String, uiTitle, $UIManager::getString($of(title), $(table->getLocale())));
				if (uiTitle != nullptr) {
					$assign(title, uiTitle);
				}
			}
			column->setHeaderValue(title);
			$var($Integer, width, dataItem->getWidth());
			if (width != nullptr) {
				column->setPreferredWidth(width->intValue());
			}
			columnModel->addColumn(column);
		}
		if (!this->readOnly && columnModel->getColumnCount() > FilePane::COLUMN_FILENAME) {
			$nc($(columnModel->getColumn(FilePane::COLUMN_FILENAME)))->setCellEditor($(getDetailsTableCellEditor()));
		}
		table->setColumnModel(columnModel);
	}
}

$FilePane$DetailsTableRowSorter* FilePane::getRowSorter() {
	if (this->rowSorter == nullptr) {
		$set(this, rowSorter, $new($FilePane$DetailsTableRowSorter, this));
	}
	return this->rowSorter;
}

$FilePane$DetailsTableCellEditor* FilePane::getDetailsTableCellEditor() {
	if (this->tableCellEditor == nullptr) {
		$set(this, tableCellEditor, $new($FilePane$DetailsTableCellEditor, this, $$new($JTextField)));
	}
	return this->tableCellEditor;
}

$JPanel* FilePane::createDetailsView() {
	$useLocalCurrentObjectStackCache();
	$var($JFileChooser, chooser, getFileChooser());
	$var($JPanel, p, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$var($JTable, detailsTable, $new($FilePane$6, this, $(getDetailsTableModel()), chooser));
	detailsTable->setRowSorter($(getRowSorter()));
	detailsTable->setAutoCreateColumnsFromModel(false);
	detailsTable->setComponentOrientation($($nc(chooser)->getComponentOrientation()));
	detailsTable->setAutoResizeMode($JTable::AUTO_RESIZE_OFF);
	detailsTable->setShowGrid(false);
	$init($Boolean);
	detailsTable->putClientProperty("JTable.autoStartsEdit"_s, $Boolean::FALSE);
	detailsTable->addKeyListener(this->detailsKeyListener);
	$var($Font, font, $nc(this->list$)->getFont());
	detailsTable->setFont(font);
	detailsTable->setIntercellSpacing($$new($Dimension, 0, 0));
	$var($TableCellRenderer, headerRenderer, $new($FilePane$AlignableTableHeaderRenderer, this, $($nc($(detailsTable->getTableHeader()))->getDefaultRenderer())));
	$nc($(detailsTable->getTableHeader()))->setDefaultRenderer(headerRenderer);
	$var($TableCellRenderer, cellRenderer, $new($FilePane$DetailsTableCellRenderer, this, chooser));
	$load($Object);
	detailsTable->setDefaultRenderer($Object::class$, cellRenderer);
	$nc($($nc($(detailsTable->getColumnModel()))->getSelectionModel()))->setSelectionMode($ListSelectionModel::SINGLE_SELECTION);
	detailsTable->addMouseListener($(getMouseHandler()));
	detailsTable->putClientProperty("Table.isFileList"_s, $Boolean::TRUE);
	if (this->listViewWindowsStyle) {
		detailsTable->addFocusListener(FilePane::repaintListener);
	}
	$var($ActionMap, am, $SwingUtilities::getUIActionMap(detailsTable));
	$nc(am)->remove("selectNextRowCell"_s);
	am->remove("selectPreviousRowCell"_s);
	am->remove("selectNextColumnCell"_s);
	am->remove("selectPreviousColumnCell"_s);
	detailsTable->setFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS, nullptr);
	detailsTable->setFocusTraversalKeys($KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS, nullptr);
	$var($JScrollPane, scrollpane, $new($JScrollPane, detailsTable));
	scrollpane->setComponentOrientation($($nc(chooser)->getComponentOrientation()));
	$LookAndFeel::installColors($(scrollpane->getViewport()), "Table.background"_s, "Table.foreground"_s);
	scrollpane->addComponentListener($$new($FilePane$7, this));
	scrollpane->addMouseListener($$new($FilePane$8, this));
	detailsTable->setForeground($($nc(this->list$)->getForeground()));
	detailsTable->setBackground($($nc(this->list$)->getBackground()));
	if (this->listViewBorder != nullptr) {
		scrollpane->setBorder(this->listViewBorder);
	}
	$init($BorderLayout);
	p->add(static_cast<$Component*>(scrollpane), $of($BorderLayout::CENTER));
	$nc(this->detailsTableModel)->fireTableStructureChanged();
	$init($AccessibleContext);
	detailsTable->putClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY, this->filesDetailsAccessibleName);
	return p;
}

void FilePane::fixNameColumnWidth(int32_t viewWidth) {
	$useLocalCurrentObjectStackCache();
	$var($TableColumn, nameCol, $nc($($nc(this->detailsTable)->getColumnModel()))->getColumn(FilePane::COLUMN_FILENAME));
	int32_t tableWidth = $nc($($nc(this->detailsTable)->getPreferredSize()))->width;
	if (tableWidth < viewWidth) {
		$nc(nameCol)->setPreferredWidth(nameCol->getPreferredWidth() + viewWidth - tableWidth);
	}
}

$ListSelectionListener* FilePane::createListSelectionListener() {
	return $nc(this->fileChooserUIAccessor)->createListSelectionListener();
}

int32_t FilePane::getEditIndex() {
	return this->lastIndex;
}

void FilePane::setEditIndex(int32_t i) {
	this->lastIndex = i;
}

void FilePane::resetEditIndex() {
	this->lastIndex = -1;
}

void FilePane::cancelEdit() {
	if (this->editFile != nullptr) {
		$set(this, editFile, nullptr);
		$nc(this->list$)->remove(static_cast<$Component*>(this->editCell));
		repaint();
	} else if (this->detailsTable != nullptr && $nc(this->detailsTable)->isEditing()) {
		$nc($($nc(this->detailsTable)->getCellEditor()))->cancelCellEditing();
	}
}

void FilePane::editFileName(int32_t index) {
	$useLocalCurrentObjectStackCache();
	$var($JFileChooser, chooser, getFileChooser());
	$var($File, currentDirectory, $nc(chooser)->getCurrentDirectory());
	if (this->readOnly || !canWrite(currentDirectory)) {
		return;
	}
	ensureIndexIsVisible(index);
	{
		$var($Rectangle, r, nullptr)
		$var($ComponentOrientation, orientation, nullptr)
		$var($Icon, icon, nullptr)
		int32_t editX = 0;
		switch (this->viewType) {
		case FilePane::VIEWTYPE_LIST:
			{
				$set(this, editFile, $cast($File, $nc($(getModel()))->getElementAt($nc($(getRowSorter()))->convertRowIndexToModel(index))));
				$assign(r, $nc(this->list$)->getCellBounds(index, index));
				if (this->editCell == nullptr) {
					$set(this, editCell, $new($JTextField));
					$nc(this->editCell)->setName("Tree.cellEditor"_s);
					$nc(this->editCell)->addActionListener($$new($FilePane$EditActionListener, this));
					$nc(this->editCell)->addFocusListener(this->editorFocusListener);
					$nc(this->editCell)->setNextFocusableComponent(this->list$);
				}
				$nc(this->list$)->add(static_cast<$Component*>(this->editCell));
				$nc(this->editCell)->setText($(chooser->getName(this->editFile)));
				$assign(orientation, $nc(this->list$)->getComponentOrientation());
				$nc(this->editCell)->setComponentOrientation(orientation);
				$assign(icon, chooser->getIcon(this->editFile));
				editX = icon == nullptr ? 20 : $nc(icon)->getIconWidth() + 4;
				if ($nc(orientation)->isLeftToRight()) {
					$nc(this->editCell)->setBounds(editX + $nc(r)->x, r->y, r->width - editX, r->height);
				} else {
					$nc(this->editCell)->setBounds($nc(r)->x, r->y, r->width - editX, r->height);
				}
				$nc(this->editCell)->requestFocus();
				$nc(this->editCell)->selectAll();
				break;
			}
		case FilePane::VIEWTYPE_DETAILS:
			{
				$nc(this->detailsTable)->editCellAt(index, FilePane::COLUMN_FILENAME);
				break;
			}
		}
	}
}

void FilePane::applyEdit() {
	$useLocalCurrentObjectStackCache();
	if (this->editFile != nullptr && $nc(this->editFile)->exists()) {
		$var($JFileChooser, chooser, getFileChooser());
		$var($String, oldDisplayName, $nc(chooser)->getName(this->editFile));
		$var($String, oldFileName, $nc(this->editFile)->getName());
		$var($String, newDisplayName, $nc($($nc(this->editCell)->getText()))->trim());
		$var($String, newFileName, nullptr);
		if (!newDisplayName->equals(oldDisplayName)) {
			$assign(newFileName, newDisplayName);
			int32_t i1 = $nc(oldFileName)->length();
			int32_t i2 = $nc(oldDisplayName)->length();
			if (i1 > i2 && oldFileName->charAt(i2) == u'.') {
				$assign(newFileName, $str({newDisplayName, $(oldFileName->substring(i2))}));
			}
			$var($FileSystemView, fsv, chooser->getFileSystemView());
			$var($File, f2, $nc(fsv)->createFileObject($($nc(this->editFile)->getParentFile()), newFileName));
			if ($nc(f2)->exists()) {
				$JOptionPane::showMessageDialog(chooser, $($MessageFormat::format(this->renameErrorFileExistsText, $$new($ObjectArray, {$of(oldFileName)}))), this->renameErrorTitleText, $JOptionPane::ERROR_MESSAGE);
			} else if ($nc($(getModel()))->renameFile(this->editFile, f2)) {
				if (fsv->isParent($(chooser->getCurrentDirectory()), f2)) {
					if (chooser->isMultiSelectionEnabled()) {
						chooser->setSelectedFiles($$new($FileArray, {f2}));
					} else {
						chooser->setSelectedFile(f2);
					}
				} else {
				}
			} else {
				$JOptionPane::showMessageDialog(chooser, $($MessageFormat::format(this->renameErrorText, $$new($ObjectArray, {$of(oldFileName)}))), this->renameErrorTitleText, $JOptionPane::ERROR_MESSAGE);
			}
		}
	}
	if (this->detailsTable != nullptr && $nc(this->detailsTable)->isEditing()) {
		$nc($($nc(this->detailsTable)->getCellEditor()))->stopCellEditing();
	}
	cancelEdit();
}

$Action* FilePane::getNewFolderAction() {
	if (!this->readOnly && this->newFolderAction == nullptr) {
		$set(this, newFolderAction, $new($FilePane$9, this, this->newFolderActionLabelText));
	}
	return this->newFolderAction;
}

void FilePane::setFileSelected() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc($(getFileChooser()))->isMultiSelectionEnabled();
	if (var$0 && !isDirectorySelected()) {
		$var($FileArray, files, $nc($(getFileChooser()))->getSelectedFiles());
		$var($ObjectArray, selectedObjects, $nc(this->list$)->getSelectedValues());
		$nc(this->listSelectionModel)->setValueIsAdjusting(true);
		{
			$var($Throwable, var$1, nullptr);
			try {
				int32_t lead = $nc(this->listSelectionModel)->getLeadSelectionIndex();
				int32_t anchor = $nc(this->listSelectionModel)->getAnchorSelectionIndex();
				$Arrays::sort(files);
				$Arrays::sort(selectedObjects);
				int32_t shouldIndex = 0;
				int32_t actuallyIndex = 0;
				while (shouldIndex < $nc(files)->length && actuallyIndex < $nc(selectedObjects)->length) {
					int32_t comparison = $nc(files->get(shouldIndex))->compareTo($cast($File, selectedObjects->get(actuallyIndex)));
					if (comparison < 0) {
						doSelectFile(files->get(shouldIndex++));
					} else if (comparison > 0) {
						doDeselectFile(selectedObjects->get(actuallyIndex++));
					} else {
						++shouldIndex;
						++actuallyIndex;
					}
				}
				while (shouldIndex < $nc(files)->length) {
					doSelectFile(files->get(shouldIndex++));
				}
				while (actuallyIndex < $nc(selectedObjects)->length) {
					doDeselectFile(selectedObjects->get(actuallyIndex++));
				}
				if ($instanceOf($DefaultListSelectionModel, this->listSelectionModel)) {
					$nc(($cast($DefaultListSelectionModel, this->listSelectionModel)))->moveLeadSelectionIndex(lead);
					$nc(this->listSelectionModel)->setAnchorSelectionIndex(anchor);
				}
			} catch ($Throwable&) {
				$assign(var$1, $catch());
			} /*finally*/ {
				$nc(this->listSelectionModel)->setValueIsAdjusting(false);
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	} else {
		$var($JFileChooser, chooser, getFileChooser());
		$var($File, f, nullptr);
		if (isDirectorySelected()) {
			$assign(f, getDirectory());
		} else {
			$assign(f, $nc(chooser)->getSelectedFile());
		}
		int32_t i = 0;
		if (f != nullptr && (i = $nc($(getModel()))->indexOf(f)) >= 0) {
			int32_t viewIndex = $nc($(getRowSorter()))->convertRowIndexToView(i);
			$nc(this->listSelectionModel)->setSelectionInterval(viewIndex, viewIndex);
			ensureIndexIsVisible(viewIndex);
		} else {
			clearSelection();
		}
	}
}

void FilePane::doSelectFile($File* fileToSelect) {
	$useLocalCurrentObjectStackCache();
	int32_t index = $nc($(getModel()))->indexOf(fileToSelect);
	if (index >= 0) {
		index = $nc($(getRowSorter()))->convertRowIndexToView(index);
		$nc(this->listSelectionModel)->addSelectionInterval(index, index);
	}
}

void FilePane::doDeselectFile(Object$* fileToDeselect) {
	$useLocalCurrentObjectStackCache();
	int32_t index = $nc($(getRowSorter()))->convertRowIndexToView($nc($(getModel()))->indexOf(fileToDeselect));
	$nc(this->listSelectionModel)->removeSelectionInterval(index, index);
}

void FilePane::doSelectedFileChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	applyEdit();
	$var($File, f, $cast($File, $nc(e)->getNewValue()));
	$var($JFileChooser, fc, getFileChooser());
	bool var$0 = f != nullptr;
	if (var$0) {
		bool var$2 = $nc(fc)->isFileSelectionEnabled();
		bool var$1 = (var$2 && !f->isDirectory());
		if (!var$1) {
			bool var$3 = $nc(f)->isDirectory();
			var$1 = (var$3 && $nc(fc)->isDirectorySelectionEnabled());
		}
		var$0 = (var$1);
	}
	if (var$0) {
		setFileSelected();
	}
}

void FilePane::doSelectedFilesChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	applyEdit();
	$var($FileArray, files, $cast($FileArray, $nc(e)->getNewValue()));
	$var($JFileChooser, fc, getFileChooser());
	bool var$0 = files != nullptr && files->length > 0;
	if (var$0) {
		bool var$1 = files->length > 1 || $nc(fc)->isDirectorySelectionEnabled();
		var$0 = (var$1 || !$nc(files->get(0))->isDirectory());
	}
	if (var$0) {
		setFileSelected();
	}
}

void FilePane::doDirectoryChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$nc($(getDetailsTableModel()))->updateColumnInfo();
	$var($JFileChooser, fc, getFileChooser());
	$var($FileSystemView, fsv, $nc(fc)->getFileSystemView());
	applyEdit();
	resetEditIndex();
	ensureIndexIsVisible(0);
	$var($File, currentDirectory, fc->getCurrentDirectory());
	if (currentDirectory != nullptr) {
		if (!this->readOnly) {
			$nc($(getNewFolderAction()))->setEnabled(canWrite(currentDirectory));
		}
		$nc($($nc(this->fileChooserUIAccessor)->getChangeToParentDirectoryAction()))->setEnabled(!$nc(fsv)->isRoot(currentDirectory));
	}
	if (this->list$ != nullptr) {
		$nc(this->list$)->clearSelection();
	}
}

void FilePane::doFilterChanged($PropertyChangeEvent* e) {
	applyEdit();
	resetEditIndex();
	clearSelection();
}

void FilePane::doFileSelectionModeChanged($PropertyChangeEvent* e) {
	applyEdit();
	resetEditIndex();
	clearSelection();
}

void FilePane::doMultiSelectionChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($nc($(getFileChooser()))->isMultiSelectionEnabled()) {
		$nc(this->listSelectionModel)->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	} else {
		$nc(this->listSelectionModel)->setSelectionMode($ListSelectionModel::SINGLE_SELECTION);
		clearSelection();
		$nc($(getFileChooser()))->setSelectedFiles(nullptr);
	}
}

void FilePane::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->viewType == -1) {
		setViewType(FilePane::VIEWTYPE_LIST);
	}
	$var($String, s, $nc(e)->getPropertyName());
	$init($JFileChooser);
	if ($nc(s)->equals($JFileChooser::SELECTED_FILE_CHANGED_PROPERTY)) {
		doSelectedFileChanged(e);
	} else {
		if (s->equals($JFileChooser::SELECTED_FILES_CHANGED_PROPERTY)) {
			doSelectedFilesChanged(e);
		} else {
			if (s->equals($JFileChooser::DIRECTORY_CHANGED_PROPERTY)) {
				doDirectoryChanged(e);
			} else {
				if (s->equals($JFileChooser::FILE_FILTER_CHANGED_PROPERTY)) {
					doFilterChanged(e);
				} else {
					if (s->equals($JFileChooser::FILE_SELECTION_MODE_CHANGED_PROPERTY)) {
						doFileSelectionModeChanged(e);
					} else {
						if (s->equals($JFileChooser::MULTI_SELECTION_ENABLED_CHANGED_PROPERTY)) {
							doMultiSelectionChanged(e);
						} else {
							if (s->equals($JFileChooser::CANCEL_SELECTION)) {
								applyEdit();
							} else if (s->equals("busy"_s)) {
								setCursor($nc(($cast($Boolean, $(e->getNewValue()))))->booleanValue() ? FilePane::waitCursor : ($Cursor*)nullptr);
							} else if (s->equals("componentOrientation"_s)) {
								$var($ComponentOrientation, o, $cast($ComponentOrientation, e->getNewValue()));
								$var($JFileChooser, cc, $cast($JFileChooser, e->getSource()));
								if (!$equals(o, e->getOldValue())) {
									$nc(cc)->applyComponentOrientation(o);
								}
								if (this->detailsTable != nullptr) {
									$nc(this->detailsTable)->setComponentOrientation(o);
									$nc($($nc($($nc(this->detailsTable)->getParent()))->getParent()))->setComponentOrientation(o);
								}
							}
						}
					}
				}
			}
		}
	}
}

void FilePane::ensureIndexIsVisible(int32_t i) {
	if (i >= 0) {
		if (this->list$ != nullptr) {
			$nc(this->list$)->ensureIndexIsVisible(i);
		}
		if (this->detailsTable != nullptr) {
			$nc(this->detailsTable)->scrollRectToVisible($($nc(this->detailsTable)->getCellRect(i, FilePane::COLUMN_FILENAME, true)));
		}
	}
}

void FilePane::ensureFileIsVisible($JFileChooser* fc, $File* f) {
	$useLocalCurrentObjectStackCache();
	int32_t modelIndex = $nc($(getModel()))->indexOf(f);
	if (modelIndex >= 0) {
		ensureIndexIsVisible($nc($(getRowSorter()))->convertRowIndexToView(modelIndex));
	}
}

void FilePane::rescanCurrentDirectory() {
	$nc($(getModel()))->validateFileCache();
}

void FilePane::clearSelection() {
	if (this->listSelectionModel != nullptr) {
		$nc(this->listSelectionModel)->clearSelection();
		if ($instanceOf($DefaultListSelectionModel, this->listSelectionModel)) {
			$nc(($cast($DefaultListSelectionModel, this->listSelectionModel)))->moveLeadSelectionIndex(-1);
			$nc(this->listSelectionModel)->setAnchorSelectionIndex(-1);
		}
	}
}

$JMenu* FilePane::getViewMenu() {
	$useLocalCurrentObjectStackCache();
	if (this->viewMenu == nullptr) {
		$set(this, viewMenu, $new($JMenu, this->viewMenuLabelText));
		$var($ButtonGroup, viewButtonGroup, $new($ButtonGroup));
		for (int32_t i = 0; i < FilePane::VIEWTYPE_COUNT; ++i) {
			$var($JRadioButtonMenuItem, mi, $new($JRadioButtonMenuItem, static_cast<$Action*>($$new($FilePane$ViewTypeAction, this, i))));
			viewButtonGroup->add(mi);
			$nc(this->viewMenu)->add(static_cast<$JMenuItem*>(mi));
		}
		updateViewMenu();
	}
	return this->viewMenu;
}

void FilePane::updateViewMenu() {
	$useLocalCurrentObjectStackCache();
	if (this->viewMenu != nullptr) {
		$var($ComponentArray, comps, $nc(this->viewMenu)->getMenuComponents());
		{
			$var($ComponentArray, arr$, comps);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, comp, arr$->get(i$));
				{
					if ($instanceOf($JRadioButtonMenuItem, comp)) {
						$var($JRadioButtonMenuItem, mi, $cast($JRadioButtonMenuItem, comp));
						if ($nc(($cast($FilePane$ViewTypeAction, $($nc(mi)->getAction()))))->viewType == this->viewType) {
							mi->setSelected(true);
						}
					}
				}
			}
		}
	}
}

$JPopupMenu* FilePane::getComponentPopupMenu() {
	$useLocalCurrentObjectStackCache();
	$var($JPopupMenu, popupMenu, $nc($(getFileChooser()))->getComponentPopupMenu());
	if (popupMenu != nullptr) {
		return popupMenu;
	}
	$var($JMenu, viewMenu, getViewMenu());
	if (this->contextMenu == nullptr) {
		$set(this, contextMenu, $new($JPopupMenu));
		if (viewMenu != nullptr) {
			$nc(this->contextMenu)->add(static_cast<$JMenuItem*>(viewMenu));
			if (this->listViewWindowsStyle) {
				$nc(this->contextMenu)->addSeparator();
			}
		}
		$var($ActionMap, actionMap, getActionMap());
		$var($Action, refreshAction, $nc(actionMap)->get(FilePane::ACTION_REFRESH));
		$var($Action, newFolderAction, actionMap->get(FilePane::ACTION_NEW_FOLDER));
		if (refreshAction != nullptr) {
			$nc(this->contextMenu)->add(refreshAction);
			if (this->listViewWindowsStyle && newFolderAction != nullptr) {
				$nc(this->contextMenu)->addSeparator();
			}
		}
		if (newFolderAction != nullptr) {
			$nc(this->contextMenu)->add(newFolderAction);
		}
	}
	if (viewMenu != nullptr) {
		$nc($(viewMenu->getPopupMenu()))->setInvoker(viewMenu);
	}
	return this->contextMenu;
}

$FilePane$Handler* FilePane::getMouseHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($FilePane$Handler, this));
	}
	return this->handler;
}

bool FilePane::isDirectorySelected() {
	return $nc(this->fileChooserUIAccessor)->isDirectorySelected();
}

$File* FilePane::getDirectory() {
	return $nc(this->fileChooserUIAccessor)->getDirectory();
}

$Object* FilePane::findChildComponent($Container* container, $Class* cls) {
	$useLocalCurrentObjectStackCache();
	int32_t n = $nc(container)->getComponentCount();
	for (int32_t i = 0; i < n; ++i) {
		$var($Component, comp, container->getComponent(i));
		if ($nc(cls)->isInstance(comp)) {
			return $of(cls->cast(comp));
		} else if ($instanceOf($Container, comp)) {
			$var($Object, c, findChildComponent($cast($Container, comp), cls));
			if (c != nullptr) {
				return $of(c);
			}
		}
	}
	return $of(nullptr);
}

bool FilePane::canWrite($File* f) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(f)->exists()) {
		return false;
	}
	try {
		if ($instanceOf($ShellFolder, f)) {
			return $nc(f)->canWrite();
		} else if (usesShellFolder($(getFileChooser()))) {
			try {
				return $nc($($ShellFolder::getShellFolder(f)))->canWrite();
			} catch ($FileNotFoundException&) {
				$var($FileNotFoundException, ex, $catch());
				return false;
			}
		} else {
			return $nc(f)->canWrite();
		}
	} catch ($SecurityException&) {
		$var($SecurityException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

bool FilePane::usesShellFolder($JFileChooser* chooser) {
	$init(FilePane);
	$useLocalCurrentObjectStackCache();
	$var($Boolean, prop, $cast($Boolean, $nc(chooser)->getClientProperty("FileChooser.useShellFolder"_s)));
	return prop == nullptr ? $nc($of($(chooser->getFileSystemView())))->equals($($FileSystemView::getFileSystemView())) : $nc(prop)->booleanValue();
}

void clinit$FilePane($Class* class$) {
	$assignStatic(FilePane::ACTION_APPROVE_SELECTION, "approveSelection"_s);
	$assignStatic(FilePane::ACTION_CANCEL, "cancelSelection"_s);
	$assignStatic(FilePane::ACTION_EDIT_FILE_NAME, "editFileName"_s);
	$assignStatic(FilePane::ACTION_REFRESH, "refresh"_s);
	$assignStatic(FilePane::ACTION_CHANGE_TO_PARENT_DIRECTORY, "Go Up"_s);
	$assignStatic(FilePane::ACTION_NEW_FOLDER, "New Folder"_s);
	$assignStatic(FilePane::ACTION_VIEW_LIST, "viewTypeList"_s);
	$assignStatic(FilePane::ACTION_VIEW_DETAILS, "viewTypeDetails"_s);
	$assignStatic(FilePane::waitCursor, $Cursor::getPredefinedCursor($Cursor::WAIT_CURSOR));
	$assignStatic(FilePane::repaintListener, $new($FilePane$3));
}

FilePane::FilePane() {
}

$Class* FilePane::load$($String* name, bool initialize) {
	$loadClass(FilePane, name, initialize, &_FilePane_ClassInfo_, clinit$FilePane, allocate$FilePane);
	return class$;
}

$Class* FilePane::class$ = nullptr;

	} // swing
} // sun