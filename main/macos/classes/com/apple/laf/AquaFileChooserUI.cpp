#include <com/apple/laf/AquaFileChooserUI.h>

#include <com/apple/laf/AquaComboBoxRendererInternal.h>
#include <com/apple/laf/AquaFileChooserUI$1.h>
#include <com/apple/laf/AquaFileChooserUI$2.h>
#include <com/apple/laf/AquaFileChooserUI$3.h>
#include <com/apple/laf/AquaFileChooserUI$4.h>
#include <com/apple/laf/AquaFileChooserUI$5.h>
#include <com/apple/laf/AquaFileChooserUI$6.h>
#include <com/apple/laf/AquaFileChooserUI$AcceptAllFileFilter.h>
#include <com/apple/laf/AquaFileChooserUI$ApproveSelectionAction.h>
#include <com/apple/laf/AquaFileChooserUI$CancelSelectionAction.h>
#include <com/apple/laf/AquaFileChooserUI$CustomDirOrAnyPanel.h>
#include <com/apple/laf/AquaFileChooserUI$CustomFilePanel.h>
#include <com/apple/laf/AquaFileChooserUI$DateRenderer.h>
#include <com/apple/laf/AquaFileChooserUI$DefaultButtonAction.h>
#include <com/apple/laf/AquaFileChooserUI$DirOrAnyPanel.h>
#include <com/apple/laf/AquaFileChooserUI$DirectoryComboBoxAction.h>
#include <com/apple/laf/AquaFileChooserUI$DirectoryComboBoxModel.h>
#include <com/apple/laf/AquaFileChooserUI$DnDHandler.h>
#include <com/apple/laf/AquaFileChooserUI$DoubleClickListener.h>
#include <com/apple/laf/AquaFileChooserUI$FCSubpanel.h>
#include <com/apple/laf/AquaFileChooserUI$FileListMouseListener.h>
#include <com/apple/laf/AquaFileChooserUI$FileRenderer.h>
#include <com/apple/laf/AquaFileChooserUI$FilterComboBoxAction.h>
#include <com/apple/laf/AquaFileChooserUI$FilterComboBoxModel.h>
#include <com/apple/laf/AquaFileChooserUI$JSortingTableHeader.h>
#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>
#include <com/apple/laf/AquaFileChooserUI$MacFCTableCellRenderer.h>
#include <com/apple/laf/AquaFileChooserUI$MacListSelectionModel.h>
#include <com/apple/laf/AquaFileChooserUI$NewFolderAction.h>
#include <com/apple/laf/AquaFileChooserUI$OpenDirOrAnyPanel.h>
#include <com/apple/laf/AquaFileChooserUI$OpenFilePanel.h>
#include <com/apple/laf/AquaFileChooserUI$OpenSelectionAction.h>
#include <com/apple/laf/AquaFileChooserUI$SaveFilePanel.h>
#include <com/apple/laf/AquaFileChooserUI$SaveTextDocumentListener.h>
#include <com/apple/laf/AquaFileChooserUI$SaveTextFocusListener.h>
#include <com/apple/laf/AquaFileChooserUI$ScrollPaneCornerPanel.h>
#include <com/apple/laf/AquaFileChooserUI$SelectionListener.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <com/apple/laf/AquaFileView.h>
#include <com/apple/laf/AquaGroupBorder.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/dnd/DnDConstants.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/dnd/DropTargetAdapter.h>
#include <java/awt/dnd/DropTargetListener.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/File.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <java/util/Objects.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/Box.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/DefaultListSelectionModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/ScrollPaneConstants.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/AncestorListener.h>
#include <javax/swing/event/DocumentListener.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/filechooser/FileView.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FileChooserUI.h>
#include <javax/swing/table/AbstractTableModel.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumnModel.h>
#include <javax/swing/table/TableModel.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef ACTION_COPY
#undef APPLICATION_TRAVERSABLE_PROPERTY
#undef CENTER
#undef CENTER_ALIGNMENT
#undef CUSTOM_DIALOG
#undef DIRECTORIES_ONLY
#undef FILES_AND_DIRECTORIES
#undef FILES_ONLY
#undef HORIZONTAL_SCROLLBAR_AS_NEEDED
#undef LEADING
#undef LEFT
#undef LEFT_ALIGNMENT
#undef LINE_END
#undef LINE_START
#undef LIST_MIN_HEIGHT
#undef LIST_MIN_SIZE
#undef LIST_MIN_WIDTH
#undef MAX_VALUE
#undef MIN_HEIGHT
#undef MIN_WIDTH
#undef MULTIPLE_INTERVAL_SELECTION
#undef OPEN_DIALOG
#undef PACKAGE_TRAVERSABLE_PROPERTY
#undef PAGE_AXIS
#undef PREF_HEIGHT
#undef PREF_WIDTH
#undef SAVE_DIALOG
#undef SINGLE_SELECTION
#undef TRAILING
#undef UPPER_TRAILING_CORNER
#undef VERTICAL_SCROLLBAR_ALWAYS
#undef VK_ENTER
#undef VK_ESCAPE
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#undef WHEN_FOCUSED
#undef Y_AXIS

using $AbstractActionArray = $Array<::javax::swing::AbstractAction>;
using $AquaComboBoxRendererInternal = ::com::apple::laf::AquaComboBoxRendererInternal;
using $AquaFileChooserUI$1 = ::com::apple::laf::AquaFileChooserUI$1;
using $AquaFileChooserUI$2 = ::com::apple::laf::AquaFileChooserUI$2;
using $AquaFileChooserUI$3 = ::com::apple::laf::AquaFileChooserUI$3;
using $AquaFileChooserUI$4 = ::com::apple::laf::AquaFileChooserUI$4;
using $AquaFileChooserUI$5 = ::com::apple::laf::AquaFileChooserUI$5;
using $AquaFileChooserUI$6 = ::com::apple::laf::AquaFileChooserUI$6;
using $AquaFileChooserUI$AcceptAllFileFilter = ::com::apple::laf::AquaFileChooserUI$AcceptAllFileFilter;
using $AquaFileChooserUI$ApproveSelectionAction = ::com::apple::laf::AquaFileChooserUI$ApproveSelectionAction;
using $AquaFileChooserUI$CancelSelectionAction = ::com::apple::laf::AquaFileChooserUI$CancelSelectionAction;
using $AquaFileChooserUI$CustomDirOrAnyPanel = ::com::apple::laf::AquaFileChooserUI$CustomDirOrAnyPanel;
using $AquaFileChooserUI$CustomFilePanel = ::com::apple::laf::AquaFileChooserUI$CustomFilePanel;
using $AquaFileChooserUI$DateRenderer = ::com::apple::laf::AquaFileChooserUI$DateRenderer;
using $AquaFileChooserUI$DefaultButtonAction = ::com::apple::laf::AquaFileChooserUI$DefaultButtonAction;
using $AquaFileChooserUI$DirOrAnyPanel = ::com::apple::laf::AquaFileChooserUI$DirOrAnyPanel;
using $AquaFileChooserUI$DirectoryComboBoxAction = ::com::apple::laf::AquaFileChooserUI$DirectoryComboBoxAction;
using $AquaFileChooserUI$DirectoryComboBoxModel = ::com::apple::laf::AquaFileChooserUI$DirectoryComboBoxModel;
using $AquaFileChooserUI$DnDHandler = ::com::apple::laf::AquaFileChooserUI$DnDHandler;
using $AquaFileChooserUI$DoubleClickListener = ::com::apple::laf::AquaFileChooserUI$DoubleClickListener;
using $AquaFileChooserUI$FCSubpanel = ::com::apple::laf::AquaFileChooserUI$FCSubpanel;
using $AquaFileChooserUI$FileListMouseListener = ::com::apple::laf::AquaFileChooserUI$FileListMouseListener;
using $AquaFileChooserUI$FileRenderer = ::com::apple::laf::AquaFileChooserUI$FileRenderer;
using $AquaFileChooserUI$FilterComboBoxAction = ::com::apple::laf::AquaFileChooserUI$FilterComboBoxAction;
using $AquaFileChooserUI$FilterComboBoxModel = ::com::apple::laf::AquaFileChooserUI$FilterComboBoxModel;
using $AquaFileChooserUI$JSortingTableHeader = ::com::apple::laf::AquaFileChooserUI$JSortingTableHeader;
using $AquaFileChooserUI$JTableExtension = ::com::apple::laf::AquaFileChooserUI$JTableExtension;
using $AquaFileChooserUI$MacFCTableCellRenderer = ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer;
using $AquaFileChooserUI$MacListSelectionModel = ::com::apple::laf::AquaFileChooserUI$MacListSelectionModel;
using $AquaFileChooserUI$NewFolderAction = ::com::apple::laf::AquaFileChooserUI$NewFolderAction;
using $AquaFileChooserUI$OpenDirOrAnyPanel = ::com::apple::laf::AquaFileChooserUI$OpenDirOrAnyPanel;
using $AquaFileChooserUI$OpenFilePanel = ::com::apple::laf::AquaFileChooserUI$OpenFilePanel;
using $AquaFileChooserUI$OpenSelectionAction = ::com::apple::laf::AquaFileChooserUI$OpenSelectionAction;
using $AquaFileChooserUI$SaveFilePanel = ::com::apple::laf::AquaFileChooserUI$SaveFilePanel;
using $AquaFileChooserUI$SaveTextDocumentListener = ::com::apple::laf::AquaFileChooserUI$SaveTextDocumentListener;
using $AquaFileChooserUI$SaveTextFocusListener = ::com::apple::laf::AquaFileChooserUI$SaveTextFocusListener;
using $AquaFileChooserUI$ScrollPaneCornerPanel = ::com::apple::laf::AquaFileChooserUI$ScrollPaneCornerPanel;
using $AquaFileChooserUI$SelectionListener = ::com::apple::laf::AquaFileChooserUI$SelectionListener;
using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $AquaFileView = ::com::apple::laf::AquaFileView;
using $AquaGroupBorder = ::com::apple::laf::AquaGroupBorder;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $DnDConstants = ::java::awt::dnd::DnDConstants;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $DropTargetAdapter = ::java::awt::dnd::DropTargetAdapter;
using $DropTargetListener = ::java::awt::dnd::DropTargetListener;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusListener = ::java::awt::event::FocusListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;
using $Objects = ::java::util::Objects;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $Box = ::javax::swing::Box;
using $BoxLayout = ::javax::swing::BoxLayout;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $DefaultListSelectionModel = ::javax::swing::DefaultListSelectionModel;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JRootPane = ::javax::swing::JRootPane;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JSeparator = ::javax::swing::JSeparator;
using $JTable = ::javax::swing::JTable;
using $JTextField = ::javax::swing::JTextField;
using $KeyStroke = ::javax::swing::KeyStroke;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $ScrollPaneConstants = ::javax::swing::ScrollPaneConstants;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $AncestorListener = ::javax::swing::event::AncestorListener;
using $DocumentListener = ::javax::swing::event::DocumentListener;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $FileView = ::javax::swing::filechooser::FileView;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $FileChooserUI = ::javax::swing::plaf::FileChooserUI;
using $AbstractTableModel = ::javax::swing::table::AbstractTableModel;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableModel = ::javax::swing::table::TableModel;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI_FieldInfo_[] = {
	{"directoryIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(AquaFileChooserUI, directoryIcon)},
	{"fileIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(AquaFileChooserUI, fileIcon)},
	{"computerIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(AquaFileChooserUI, computerIcon)},
	{"hardDriveIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(AquaFileChooserUI, hardDriveIcon)},
	{"floppyDriveIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(AquaFileChooserUI, floppyDriveIcon)},
	{"upFolderIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(AquaFileChooserUI, upFolderIcon)},
	{"homeFolderIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(AquaFileChooserUI, homeFolderIcon)},
	{"listViewIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(AquaFileChooserUI, listViewIcon)},
	{"detailsViewIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(AquaFileChooserUI, detailsViewIcon)},
	{"saveButtonMnemonic", "I", nullptr, $PROTECTED, $field(AquaFileChooserUI, saveButtonMnemonic)},
	{"openButtonMnemonic", "I", nullptr, $PROTECTED, $field(AquaFileChooserUI, openButtonMnemonic)},
	{"cancelButtonMnemonic", "I", nullptr, $PROTECTED, $field(AquaFileChooserUI, cancelButtonMnemonic)},
	{"updateButtonMnemonic", "I", nullptr, $PROTECTED, $field(AquaFileChooserUI, updateButtonMnemonic)},
	{"helpButtonMnemonic", "I", nullptr, $PROTECTED, $field(AquaFileChooserUI, helpButtonMnemonic)},
	{"chooseButtonMnemonic", "I", nullptr, $PROTECTED, $field(AquaFileChooserUI, chooseButtonMnemonic)},
	{"saveTitleText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AquaFileChooserUI, saveTitleText)},
	{"openTitleText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AquaFileChooserUI, openTitleText)},
	{"newFolderTitleText", "Ljava/lang/String;", nullptr, 0, $field(AquaFileChooserUI, newFolderTitleText)},
	{"saveButtonText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, saveButtonText)},
	{"openButtonText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, openButtonText)},
	{"cancelButtonText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, cancelButtonText)},
	{"updateButtonText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, updateButtonText)},
	{"helpButtonText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, helpButtonText)},
	{"newFolderButtonText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, newFolderButtonText)},
	{"chooseButtonText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, chooseButtonText)},
	{"newFolderErrorText", "Ljava/lang/String;", nullptr, 0, $field(AquaFileChooserUI, newFolderErrorText)},
	{"newFolderExistsErrorText", "Ljava/lang/String;", nullptr, 0, $field(AquaFileChooserUI, newFolderExistsErrorText)},
	{"fileDescriptionText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, fileDescriptionText)},
	{"directoryDescriptionText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, directoryDescriptionText)},
	{"saveButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, saveButtonToolTipText)},
	{"openButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, openButtonToolTipText)},
	{"cancelButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, cancelButtonToolTipText)},
	{"updateButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, updateButtonToolTipText)},
	{"helpButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, helpButtonToolTipText)},
	{"chooseItemButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, chooseItemButtonToolTipText)},
	{"chooseFolderButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, chooseFolderButtonToolTipText)},
	{"directoryComboBoxToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, directoryComboBoxToolTipText)},
	{"filenameTextFieldToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, filenameTextFieldToolTipText)},
	{"filterComboBoxToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, filterComboBoxToolTipText)},
	{"openDirectoryButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, openDirectoryButtonToolTipText)},
	{"cancelOpenButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, cancelOpenButtonToolTipText)},
	{"cancelSaveButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, cancelSaveButtonToolTipText)},
	{"cancelChooseButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, cancelChooseButtonToolTipText)},
	{"cancelNewFolderButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, cancelNewFolderButtonToolTipText)},
	{"desktopName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AquaFileChooserUI, desktopName)},
	{"newFolderDialogPrompt", "Ljava/lang/String;", nullptr, 0, $field(AquaFileChooserUI, newFolderDialogPrompt)},
	{"newFolderDefaultName", "Ljava/lang/String;", nullptr, 0, $field(AquaFileChooserUI, newFolderDefaultName)},
	{"newFileDefaultName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AquaFileChooserUI, newFileDefaultName)},
	{"createButtonText", "Ljava/lang/String;", nullptr, 0, $field(AquaFileChooserUI, createButtonText)},
	{"filechooser", "Ljavax/swing/JFileChooser;", nullptr, 0, $field(AquaFileChooserUI, filechooser)},
	{"doubleClickListener", "Ljava/awt/event/MouseListener;", nullptr, $PRIVATE, $field(AquaFileChooserUI, doubleClickListener)},
	{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(AquaFileChooserUI, propertyChangeListener)},
	{"ancestorListener", "Ljavax/swing/event/AncestorListener;", nullptr, $PRIVATE, $field(AquaFileChooserUI, ancestorListener)},
	{"dragAndDropTarget", "Ljava/awt/dnd/DropTarget;", nullptr, $PRIVATE, $field(AquaFileChooserUI, dragAndDropTarget)},
	{"acceptAllFileFilter", "Lcom/apple/laf/AquaFileChooserUI$AcceptAllFileFilter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaFileChooserUI, acceptAllFileFilter)},
	{"model", "Lcom/apple/laf/AquaFileSystemModel;", nullptr, $PRIVATE, $field(AquaFileChooserUI, model)},
	{"fileView", "Lcom/apple/laf/AquaFileView;", nullptr, $FINAL, $field(AquaFileChooserUI, fileView)},
	{"selectionInProgress", "Z", nullptr, 0, $field(AquaFileChooserUI, selectionInProgress)},
	{"accessoryPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(AquaFileChooserUI, accessoryPanel)},
	{"directoryComboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/io/File;>;", 0, $field(AquaFileChooserUI, directoryComboBox)},
	{"fDirectoryComboBoxModel", "Lcom/apple/laf/AquaFileChooserUI$DirectoryComboBoxModel;", nullptr, 0, $field(AquaFileChooserUI, fDirectoryComboBoxModel)},
	{"directoryComboBoxAction", "Ljavax/swing/Action;", nullptr, $PRIVATE | $FINAL, $field(AquaFileChooserUI, directoryComboBoxAction)},
	{"filenameTextField", "Ljavax/swing/JTextField;", nullptr, 0, $field(AquaFileChooserUI, filenameTextField)},
	{"fFileList", "Lcom/apple/laf/AquaFileChooserUI$JTableExtension;", nullptr, 0, $field(AquaFileChooserUI, fFileList)},
	{"filterComboBoxModel", "Lcom/apple/laf/AquaFileChooserUI$FilterComboBoxModel;", nullptr, $PRIVATE, $field(AquaFileChooserUI, filterComboBoxModel)},
	{"filterComboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljavax/swing/filechooser/FileFilter;>;", 0, $field(AquaFileChooserUI, filterComboBox)},
	{"filterComboBoxAction", "Ljavax/swing/Action;", nullptr, $PRIVATE | $FINAL, $field(AquaFileChooserUI, filterComboBoxAction)},
	{"hstrut10", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaFileChooserUI, hstrut10)},
	{"vstrut10", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaFileChooserUI, vstrut10)},
	{"PREF_WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaFileChooserUI, PREF_WIDTH)},
	{"PREF_HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaFileChooserUI, PREF_HEIGHT)},
	{"MIN_WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaFileChooserUI, MIN_WIDTH)},
	{"MIN_HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaFileChooserUI, MIN_HEIGHT)},
	{"LIST_MIN_WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaFileChooserUI, LIST_MIN_WIDTH)},
	{"LIST_MIN_HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaFileChooserUI, LIST_MIN_HEIGHT)},
	{"LIST_MIN_SIZE", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaFileChooserUI, LIST_MIN_SIZE)},
	{"fileNameLabelText", "Ljava/lang/String;", nullptr, $STATIC, $staticField(AquaFileChooserUI, fileNameLabelText)},
	{"fTextFieldLabel", "Ljavax/swing/JLabel;", nullptr, 0, $field(AquaFileChooserUI, fTextFieldLabel)},
	{"filesOfTypeLabelText", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(AquaFileChooserUI, filesOfTypeLabelText)},
	{"newFolderToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(AquaFileChooserUI, newFolderToolTipText)},
	{"newFolderAccessibleName", "Ljava/lang/String;", nullptr, $STATIC, $staticField(AquaFileChooserUI, newFolderAccessibleName)},
	{"fColumnNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaFileChooserUI, fColumnNames)},
	{"fTextfieldPanel", "Ljavax/swing/JPanel;", nullptr, 0, $field(AquaFileChooserUI, fTextfieldPanel)},
	{"fDirectoryPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(AquaFileChooserUI, fDirectoryPanel)},
	{"fDirectoryPanelSpacer", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(AquaFileChooserUI, fDirectoryPanelSpacer)},
	{"fBottomPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(AquaFileChooserUI, fBottomPanel)},
	{"fSaveFilePanel", "Lcom/apple/laf/AquaFileChooserUI$FCSubpanel;", nullptr, $PRIVATE, $field(AquaFileChooserUI, fSaveFilePanel)},
	{"fOpenFilePanel", "Lcom/apple/laf/AquaFileChooserUI$FCSubpanel;", nullptr, $PRIVATE, $field(AquaFileChooserUI, fOpenFilePanel)},
	{"fOpenDirOrAnyPanel", "Lcom/apple/laf/AquaFileChooserUI$FCSubpanel;", nullptr, $PRIVATE, $field(AquaFileChooserUI, fOpenDirOrAnyPanel)},
	{"fCustomFilePanel", "Lcom/apple/laf/AquaFileChooserUI$FCSubpanel;", nullptr, $PRIVATE, $field(AquaFileChooserUI, fCustomFilePanel)},
	{"fCustomDirOrAnyPanel", "Lcom/apple/laf/AquaFileChooserUI$FCSubpanel;", nullptr, $PRIVATE, $field(AquaFileChooserUI, fCustomDirOrAnyPanel)},
	{"fSubPanel", "Lcom/apple/laf/AquaFileChooserUI$FCSubpanel;", nullptr, 0, $field(AquaFileChooserUI, fSubPanel)},
	{"fApproveButton", "Ljavax/swing/JButton;", nullptr, 0, $field(AquaFileChooserUI, fApproveButton)},
	{"fOpenButton", "Ljavax/swing/JButton;", nullptr, 0, $field(AquaFileChooserUI, fOpenButton)},
	{"fNewFolderButton", "Ljavax/swing/JButton;", nullptr, 0, $field(AquaFileChooserUI, fNewFolderButton)},
	{"fCancelButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(AquaFileChooserUI, fCancelButton)},
	{"fApproveSelectionAction", "Lcom/apple/laf/AquaFileChooserUI$ApproveSelectionAction;", nullptr, $PRIVATE | $FINAL, $field(AquaFileChooserUI, fApproveSelectionAction)},
	{"fSortColumn", "I", nullptr, $PROTECTED, $field(AquaFileChooserUI, fSortColumn)},
	{"fPackageIsTraversable", "I", nullptr, $PROTECTED, $field(AquaFileChooserUI, fPackageIsTraversable)},
	{"fApplicationIsTraversable", "I", nullptr, $PROTECTED, $field(AquaFileChooserUI, fApplicationIsTraversable)},
	{"sGlobalPackageIsTraversable", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AquaFileChooserUI, sGlobalPackageIsTraversable)},
	{"sGlobalApplicationIsTraversable", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AquaFileChooserUI, sGlobalApplicationIsTraversable)},
	{"PACKAGE_TRAVERSABLE_PROPERTY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AquaFileChooserUI, PACKAGE_TRAVERSABLE_PROPERTY)},
	{"APPLICATION_TRAVERSABLE_PROPERTY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AquaFileChooserUI, APPLICATION_TRAVERSABLE_PROPERTY)},
	{"sTraversableProperties", "[Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AquaFileChooserUI, sTraversableProperties)},
	{"kOpenAlways", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AquaFileChooserUI, kOpenAlways)},
	{"kOpenNever", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AquaFileChooserUI, kOpenNever)},
	{"kOpenConditional", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AquaFileChooserUI, kOpenConditional)},
	{"fButtonActions", "[Ljavax/swing/AbstractAction;", nullptr, 0, $field(AquaFileChooserUI, fButtonActions)},
	{"sDataPrefix", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaFileChooserUI, sDataPrefix)},
	{"sButtonKinds", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaFileChooserUI, sButtonKinds)},
	{"sButtonData", "[Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(AquaFileChooserUI, sButtonData)},
	{"kOpen", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileChooserUI, kOpen)},
	{"kSave", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileChooserUI, kSave)},
	{"kCancel", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileChooserUI, kCancel)},
	{"kOpenDirectory", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileChooserUI, kOpenDirectory)},
	{"kHelp", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileChooserUI, kHelp)},
	{"kNewFolder", "I", nullptr, $STATIC | $FINAL, $constField(AquaFileChooserUI, kNewFolder)},
	{}
};

$MethodInfo _AquaFileChooserUI_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaFileChooserUI::*)($JFileChooser*)>(&AquaFileChooserUI::init$))},
	{"containsFileFilter", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(static_cast<bool(AquaFileChooserUI::*)(Object$*)>(&AquaFileChooserUI::containsFileFilter))},
	{"createButton", "(ILjava/lang/String;)Ljavax/swing/JButton;", nullptr, 0},
	{"createDirectoryComboBoxModel", "(Ljavax/swing/JFileChooser;)Lcom/apple/laf/AquaFileChooserUI$DirectoryComboBoxModel;", nullptr, $PROTECTED},
	{"createDirectoryComboBoxRenderer", "(Ljavax/swing/JFileChooser;)Ljavax/swing/ListCellRenderer;", "(Ljavax/swing/JFileChooser;)Ljavax/swing/ListCellRenderer<Ljava/io/File;>;", $PROTECTED},
	{"createDoubleClickListener", "(Ljavax/swing/JFileChooser;Lcom/apple/laf/AquaFileChooserUI$JTableExtension;)Ljava/awt/event/MouseListener;", nullptr, $PROTECTED},
	{"createFilterComboBoxModel", "()Lcom/apple/laf/AquaFileChooserUI$FilterComboBoxModel;", nullptr, $PROTECTED},
	{"createFilterComboBoxRenderer", "()Ljavax/swing/ListCellRenderer;", "()Ljavax/swing/ListCellRenderer<Ljavax/swing/filechooser/FileFilter;>;", $PROTECTED},
	{"createList", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JPanel;", nullptr, $PROTECTED},
	{"createListSelectionListener", "(Ljavax/swing/JFileChooser;)Ljavax/swing/event/ListSelectionListener;", nullptr, $PUBLIC},
	{"createModel", "()V", nullptr, $PROTECTED},
	{"createNewFolderButton", "()Ljavax/swing/JButton;", nullptr, 0},
	{"createPropertyChangeListener", "(Ljavax/swing/JFileChooser;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaFileChooserUI::createUI))},
	{"doControlButtonsChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, 0},
	{"ensureFileIsVisible", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, $PUBLIC},
	{"getAcceptAllFileFilter", "(Ljavax/swing/JFileChooser;)Ljavax/swing/filechooser/FileFilter;", nullptr, $PUBLIC},
	{"getAccessoryPanel", "()Ljavax/swing/JPanel;", nullptr, $PUBLIC},
	{"getAction", "(I)Ljavax/swing/AbstractAction;", nullptr, 0},
	{"getApproveButton", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"getApproveButtonMnemonic", "(Ljavax/swing/JFileChooser;)I", nullptr, $PUBLIC},
	{"getApproveButtonText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getApproveButtonToolTipText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCancelButtonToolTipText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getCustomDirOrAnyPanel", "()Lcom/apple/laf/AquaFileChooserUI$FCSubpanel;", nullptr, $SYNCHRONIZED},
	{"getCustomFilePanel", "()Lcom/apple/laf/AquaFileChooserUI$FCSubpanel;", nullptr, $SYNCHRONIZED},
	{"getDialogTitle", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDirectoryName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileChooser", "()Ljavax/swing/JFileChooser;", nullptr, $PUBLIC},
	{"getFileName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileView", "(Ljavax/swing/JFileChooser;)Ljavax/swing/filechooser/FileView;", nullptr, $PUBLIC},
	{"getFirstSelectedItem", "()Ljava/io/File;", nullptr, 0},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getModel", "()Lcom/apple/laf/AquaFileSystemModel;", nullptr, 0},
	{"getOpenDirOrAnyPanel", "()Lcom/apple/laf/AquaFileChooserUI$FCSubpanel;", nullptr, $SYNCHRONIZED},
	{"getOpenFilePanel", "()Lcom/apple/laf/AquaFileChooserUI$FCSubpanel;", nullptr, $SYNCHRONIZED},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSaveFilePanel", "()Lcom/apple/laf/AquaFileChooserUI$FCSubpanel;", nullptr, $SYNCHRONIZED},
	{"getString", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, 0},
	{"installComponents", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installIcons", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installStrings", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isSelectableForMode", "(Ljavax/swing/JFileChooser;Ljava/io/File;)Z", nullptr, 0},
	{"isSelectableInList", "(Ljava/io/File;)Z", nullptr, 0},
	{"makeFile", "(Ljavax/swing/JFileChooser;Ljava/lang/String;)Ljava/io/File;", nullptr, 0},
	{"openDirectory", "(Ljava/io/File;)Z", nullptr, $PROTECTED},
	{"parseTraversableProperty", "(Ljava/lang/String;)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($String*)>(&AquaFileChooserUI::parseTraversableProperty))},
	{"rescanCurrentDirectory", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"setApplicationIsTraversable", "(Ljava/lang/Object;)V", nullptr, 0},
	{"setBottomPanelForMode", "(Ljavax/swing/JFileChooser;)V", nullptr, 0},
	{"setDefaultButtonForMode", "(Ljavax/swing/JFileChooser;)V", nullptr, 0},
	{"setDirectoryName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setFileName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setFocusForMode", "(Ljavax/swing/JFileChooser;)V", nullptr, 0},
	{"setPackageIsTraversable", "(Ljava/lang/Object;)V", nullptr, 0},
	{"textfieldIsValid", "()Z", nullptr, 0},
	{"uninstallComponents", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"uninstallIcons", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"uninstallStrings", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateApproveButton", "(Ljavax/swing/JFileChooser;)V", nullptr, 0},
	{"updateButtonState", "(Ljavax/swing/JFileChooser;)V", nullptr, 0},
	{}
};

$InnerClassInfo _AquaFileChooserUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$JTableExtension", "com.apple.laf.AquaFileChooserUI", "JTableExtension", 0},
	{"com.apple.laf.AquaFileChooserUI$MacListSelectionModel", "com.apple.laf.AquaFileChooserUI", "MacListSelectionModel", 0},
	{"com.apple.laf.AquaFileChooserUI$CustomDirOrAnyPanel", "com.apple.laf.AquaFileChooserUI", "CustomDirOrAnyPanel", 0},
	{"com.apple.laf.AquaFileChooserUI$OpenDirOrAnyPanel", "com.apple.laf.AquaFileChooserUI", "OpenDirOrAnyPanel", 0},
	{"com.apple.laf.AquaFileChooserUI$DirOrAnyPanel", "com.apple.laf.AquaFileChooserUI", "DirOrAnyPanel", $ABSTRACT},
	{"com.apple.laf.AquaFileChooserUI$OpenFilePanel", "com.apple.laf.AquaFileChooserUI", "OpenFilePanel", 0},
	{"com.apple.laf.AquaFileChooserUI$SaveFilePanel", "com.apple.laf.AquaFileChooserUI", "SaveFilePanel", 0},
	{"com.apple.laf.AquaFileChooserUI$CustomFilePanel", "com.apple.laf.AquaFileChooserUI", "CustomFilePanel", 0},
	{"com.apple.laf.AquaFileChooserUI$FCSubpanel", "com.apple.laf.AquaFileChooserUI", "FCSubpanel", $ABSTRACT},
	{"com.apple.laf.AquaFileChooserUI$ScrollPaneCornerPanel", "com.apple.laf.AquaFileChooserUI", "ScrollPaneCornerPanel", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$FileListMouseListener", "com.apple.laf.AquaFileChooserUI", "FileListMouseListener", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$JSortingTableHeader", "com.apple.laf.AquaFileChooserUI", "JSortingTableHeader", 0},
	{"com.apple.laf.AquaFileChooserUI$DirectoryComboBoxAction", "com.apple.laf.AquaFileChooserUI", "DirectoryComboBoxAction", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$FilterComboBoxAction", "com.apple.laf.AquaFileChooserUI", "FilterComboBoxAction", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$FilterComboBoxModel", "com.apple.laf.AquaFileChooserUI", "FilterComboBoxModel", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$DirectoryComboBoxModel", "com.apple.laf.AquaFileChooserUI", "DirectoryComboBoxModel", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$DateRenderer", "com.apple.laf.AquaFileChooserUI", "DateRenderer", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$FileRenderer", "com.apple.laf.AquaFileChooserUI", "FileRenderer", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$MacFCTableCellRenderer", "com.apple.laf.AquaFileChooserUI", "MacFCTableCellRenderer", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$AcceptAllFileFilter", "com.apple.laf.AquaFileChooserUI", "AcceptAllFileFilter", $PRIVATE | $STATIC},
	{"com.apple.laf.AquaFileChooserUI$UpdateAction", "com.apple.laf.AquaFileChooserUI", "UpdateAction", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$CancelSelectionAction", "com.apple.laf.AquaFileChooserUI", "CancelSelectionAction", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$OpenSelectionAction", "com.apple.laf.AquaFileChooserUI", "OpenSelectionAction", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$ApproveSelectionAction", "com.apple.laf.AquaFileChooserUI", "ApproveSelectionAction", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$NewFolderAction", "com.apple.laf.AquaFileChooserUI", "NewFolderAction", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$DefaultButtonAction", "com.apple.laf.AquaFileChooserUI", "DefaultButtonAction", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$DnDHandler", "com.apple.laf.AquaFileChooserUI", "DnDHandler", 0},
	{"com.apple.laf.AquaFileChooserUI$DoubleClickListener", "com.apple.laf.AquaFileChooserUI", "DoubleClickListener", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$SaveTextDocumentListener", "com.apple.laf.AquaFileChooserUI", "SaveTextDocumentListener", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$SaveTextFocusListener", "com.apple.laf.AquaFileChooserUI", "SaveTextFocusListener", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$SelectionListener", "com.apple.laf.AquaFileChooserUI", "SelectionListener", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$6", nullptr, nullptr, 0},
	{"com.apple.laf.AquaFileChooserUI$5", nullptr, nullptr, 0},
	{"com.apple.laf.AquaFileChooserUI$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaFileChooserUI$3", nullptr, nullptr, 0},
	{"com.apple.laf.AquaFileChooserUI$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaFileChooserUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaFileChooserUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI",
	"javax.swing.plaf.FileChooserUI",
	nullptr,
	_AquaFileChooserUI_FieldInfo_,
	_AquaFileChooserUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI$JTableExtension,com.apple.laf.AquaFileChooserUI$MacListSelectionModel,com.apple.laf.AquaFileChooserUI$CustomDirOrAnyPanel,com.apple.laf.AquaFileChooserUI$OpenDirOrAnyPanel,com.apple.laf.AquaFileChooserUI$DirOrAnyPanel,com.apple.laf.AquaFileChooserUI$OpenFilePanel,com.apple.laf.AquaFileChooserUI$SaveFilePanel,com.apple.laf.AquaFileChooserUI$CustomFilePanel,com.apple.laf.AquaFileChooserUI$FCSubpanel,com.apple.laf.AquaFileChooserUI$ScrollPaneCornerPanel,com.apple.laf.AquaFileChooserUI$FileListMouseListener,com.apple.laf.AquaFileChooserUI$JSortingTableHeader,com.apple.laf.AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer,com.apple.laf.AquaFileChooserUI$DirectoryComboBoxAction,com.apple.laf.AquaFileChooserUI$FilterComboBoxAction,com.apple.laf.AquaFileChooserUI$FilterComboBoxModel,com.apple.laf.AquaFileChooserUI$DirectoryComboBoxModel,com.apple.laf.AquaFileChooserUI$DateRenderer,com.apple.laf.AquaFileChooserUI$FileRenderer,com.apple.laf.AquaFileChooserUI$MacFCTableCellRenderer,com.apple.laf.AquaFileChooserUI$AcceptAllFileFilter,com.apple.laf.AquaFileChooserUI$UpdateAction,com.apple.laf.AquaFileChooserUI$CancelSelectionAction,com.apple.laf.AquaFileChooserUI$OpenSelectionAction,com.apple.laf.AquaFileChooserUI$ApproveSelectionAction,com.apple.laf.AquaFileChooserUI$NewFolderAction,com.apple.laf.AquaFileChooserUI$DefaultButtonAction,com.apple.laf.AquaFileChooserUI$DnDHandler,com.apple.laf.AquaFileChooserUI$DnDHandler$1,com.apple.laf.AquaFileChooserUI$DoubleClickListener,com.apple.laf.AquaFileChooserUI$SaveTextDocumentListener,com.apple.laf.AquaFileChooserUI$SaveTextFocusListener,com.apple.laf.AquaFileChooserUI$SelectionListener,com.apple.laf.AquaFileChooserUI$6,com.apple.laf.AquaFileChooserUI$5,com.apple.laf.AquaFileChooserUI$4,com.apple.laf.AquaFileChooserUI$3,com.apple.laf.AquaFileChooserUI$2,com.apple.laf.AquaFileChooserUI$1"
};

$Object* allocate$AquaFileChooserUI($Class* clazz) {
	return $of($alloc(AquaFileChooserUI));
}

$AquaFileChooserUI$AcceptAllFileFilter* AquaFileChooserUI::acceptAllFileFilter = nullptr;
$Dimension* AquaFileChooserUI::hstrut10 = nullptr;
$Dimension* AquaFileChooserUI::vstrut10 = nullptr;
$Dimension* AquaFileChooserUI::LIST_MIN_SIZE = nullptr;
$String* AquaFileChooserUI::fileNameLabelText = nullptr;
$String* AquaFileChooserUI::filesOfTypeLabelText = nullptr;
$String* AquaFileChooserUI::newFolderToolTipText = nullptr;
$String* AquaFileChooserUI::newFolderAccessibleName = nullptr;
$StringArray* AquaFileChooserUI::fColumnNames = nullptr;
int32_t AquaFileChooserUI::sGlobalPackageIsTraversable = 0;
int32_t AquaFileChooserUI::sGlobalApplicationIsTraversable = 0;
$String* AquaFileChooserUI::PACKAGE_TRAVERSABLE_PROPERTY = nullptr;
$String* AquaFileChooserUI::APPLICATION_TRAVERSABLE_PROPERTY = nullptr;
$StringArray* AquaFileChooserUI::sTraversableProperties = nullptr;
$String* AquaFileChooserUI::sDataPrefix = nullptr;
$StringArray* AquaFileChooserUI::sButtonKinds = nullptr;
$StringArray* AquaFileChooserUI::sButtonData = nullptr;

$ComponentUI* AquaFileChooserUI::createUI($JComponent* c) {
	$init(AquaFileChooserUI);
	return $new(AquaFileChooserUI, $cast($JFileChooser, c));
}

void AquaFileChooserUI::init$($JFileChooser* filechooser) {
	$useLocalCurrentObjectStackCache();
	$FileChooserUI::init$();
	$set(this, directoryIcon, nullptr);
	$set(this, fileIcon, nullptr);
	$set(this, computerIcon, nullptr);
	$set(this, hardDriveIcon, nullptr);
	$set(this, floppyDriveIcon, nullptr);
	$set(this, upFolderIcon, nullptr);
	$set(this, homeFolderIcon, nullptr);
	$set(this, listViewIcon, nullptr);
	$set(this, detailsViewIcon, nullptr);
	this->saveButtonMnemonic = 0;
	this->openButtonMnemonic = 0;
	this->cancelButtonMnemonic = 0;
	this->updateButtonMnemonic = 0;
	this->helpButtonMnemonic = 0;
	this->chooseButtonMnemonic = 0;
	$set(this, saveTitleText, nullptr);
	$set(this, openTitleText, nullptr);
	$set(this, newFolderTitleText, nullptr);
	$set(this, saveButtonText, nullptr);
	$set(this, openButtonText, nullptr);
	$set(this, cancelButtonText, nullptr);
	$set(this, updateButtonText, nullptr);
	$set(this, helpButtonText, nullptr);
	$set(this, newFolderButtonText, nullptr);
	$set(this, chooseButtonText, nullptr);
	$set(this, newFolderErrorText, nullptr);
	$set(this, newFolderExistsErrorText, nullptr);
	$set(this, fileDescriptionText, nullptr);
	$set(this, directoryDescriptionText, nullptr);
	$set(this, saveButtonToolTipText, nullptr);
	$set(this, openButtonToolTipText, nullptr);
	$set(this, cancelButtonToolTipText, nullptr);
	$set(this, updateButtonToolTipText, nullptr);
	$set(this, helpButtonToolTipText, nullptr);
	$set(this, chooseItemButtonToolTipText, nullptr);
	$set(this, chooseFolderButtonToolTipText, nullptr);
	$set(this, directoryComboBoxToolTipText, nullptr);
	$set(this, filenameTextFieldToolTipText, nullptr);
	$set(this, filterComboBoxToolTipText, nullptr);
	$set(this, openDirectoryButtonToolTipText, nullptr);
	$set(this, cancelOpenButtonToolTipText, nullptr);
	$set(this, cancelSaveButtonToolTipText, nullptr);
	$set(this, cancelChooseButtonToolTipText, nullptr);
	$set(this, cancelNewFolderButtonToolTipText, nullptr);
	$set(this, desktopName, nullptr);
	$set(this, newFolderDialogPrompt, nullptr);
	$set(this, newFolderDefaultName, nullptr);
	$set(this, newFileDefaultName, nullptr);
	$set(this, createButtonText, nullptr);
	$set(this, filechooser, nullptr);
	$set(this, doubleClickListener, nullptr);
	$set(this, propertyChangeListener, nullptr);
	$set(this, ancestorListener, nullptr);
	$set(this, dragAndDropTarget, nullptr);
	$set(this, fileView, $new($AquaFileView, this));
	this->selectionInProgress = false;
	$set(this, accessoryPanel, nullptr);
	$set(this, directoryComboBoxAction, $new($AquaFileChooserUI$DirectoryComboBoxAction, this));
	$set(this, filterComboBoxAction, $new($AquaFileChooserUI$FilterComboBoxAction, this));
	$set(this, fTextFieldLabel, nullptr);
	$set(this, fSaveFilePanel, nullptr);
	$set(this, fOpenFilePanel, nullptr);
	$set(this, fOpenDirOrAnyPanel, nullptr);
	$set(this, fCustomFilePanel, nullptr);
	$set(this, fCustomDirOrAnyPanel, nullptr);
	$set(this, fSubPanel, nullptr);
	$set(this, fApproveSelectionAction, $new($AquaFileChooserUI$ApproveSelectionAction, this));
	this->fSortColumn = 0;
	this->fPackageIsTraversable = -1;
	this->fApplicationIsTraversable = -1;
	$set(this, fButtonActions, $new($AbstractActionArray, {
		static_cast<$AbstractAction*>(this->fApproveSelectionAction),
		static_cast<$AbstractAction*>(this->fApproveSelectionAction),
		static_cast<$AbstractAction*>($$new($AquaFileChooserUI$CancelSelectionAction, this)),
		static_cast<$AbstractAction*>($$new($AquaFileChooserUI$OpenSelectionAction, this)),
		($AbstractAction*)nullptr,
		static_cast<$AbstractAction*>($$new($AquaFileChooserUI$NewFolderAction, this))
	}));
}

void AquaFileChooserUI::installUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$set(this, accessoryPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$set(this, filechooser, $cast($JFileChooser, c));
	createModel();
	installDefaults(this->filechooser);
	installComponents(this->filechooser);
	installListeners(this->filechooser);
	$AquaUtils::enforceComponentOrientation(this->filechooser, $($ComponentOrientation::getOrientation($($Locale::getDefault()))));
}

void AquaFileChooserUI::uninstallUI($JComponent* c) {
	uninstallListeners(this->filechooser);
	uninstallComponents(this->filechooser);
	uninstallDefaults(this->filechooser);
	if (this->accessoryPanel != nullptr) {
		$nc(this->accessoryPanel)->removeAll();
	}
	$set(this, accessoryPanel, nullptr);
	$nc($(getFileChooser()))->removeAll();
}

void AquaFileChooserUI::installListeners($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$set(this, doubleClickListener, createDoubleClickListener(fc, this->fFileList));
	$nc(this->fFileList)->addMouseListener(this->doubleClickListener);
	$set(this, propertyChangeListener, createPropertyChangeListener(fc));
	if (this->propertyChangeListener != nullptr) {
		$nc(fc)->addPropertyChangeListener(this->propertyChangeListener);
	}
	$set(this, ancestorListener, $new($AquaFileChooserUI$1, this));
	$nc(fc)->addAncestorListener(this->ancestorListener);
	$var($ActionListener, var$0, static_cast<$ActionListener*>($new($AquaFileChooserUI$CancelSelectionAction, this)));
	fc->registerKeyboardAction(var$0, $($KeyStroke::getKeyStroke($KeyEvent::VK_ESCAPE, 0)), $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT);
	$set(this, dragAndDropTarget, $new($DropTarget, fc, $DnDConstants::ACTION_COPY, $$new($AquaFileChooserUI$DnDHandler, this), true));
	fc->setDropTarget(this->dragAndDropTarget);
}

void AquaFileChooserUI::uninstallListeners($JFileChooser* fc) {
	if (this->propertyChangeListener != nullptr) {
		$nc(fc)->removePropertyChangeListener(this->propertyChangeListener);
	}
	$nc(this->fFileList)->removeMouseListener(this->doubleClickListener);
	$nc(fc)->removePropertyChangeListener(this->filterComboBoxModel);
	fc->removePropertyChangeListener(this->model);
	fc->unregisterKeyboardAction($($KeyStroke::getKeyStroke($KeyEvent::VK_ESCAPE, 0)));
	fc->removeAncestorListener(this->ancestorListener);
	fc->setDropTarget(nullptr);
	$set(this, ancestorListener, nullptr);
}

void AquaFileChooserUI::installDefaults($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	installIcons(fc);
	installStrings(fc);
	setPackageIsTraversable($($nc(fc)->getClientProperty(AquaFileChooserUI::PACKAGE_TRAVERSABLE_PROPERTY)));
	setApplicationIsTraversable($($nc(fc)->getClientProperty(AquaFileChooserUI::APPLICATION_TRAVERSABLE_PROPERTY)));
}

void AquaFileChooserUI::installIcons($JFileChooser* fc) {
	$set(this, directoryIcon, $UIManager::getIcon("FileView.directoryIcon"_s));
	$set(this, fileIcon, $UIManager::getIcon("FileView.fileIcon"_s));
	$set(this, computerIcon, $UIManager::getIcon("FileView.computerIcon"_s));
	$set(this, hardDriveIcon, $UIManager::getIcon("FileView.hardDriveIcon"_s));
}

$String* AquaFileChooserUI::getString($String* uiKey, $String* fallback) {
	$var($String, result, $UIManager::getString(uiKey));
	return (result == nullptr ? fallback : result);
}

void AquaFileChooserUI::installStrings($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$set(this, fileDescriptionText, $UIManager::getString("FileChooser.fileDescriptionText"_s));
	$set(this, directoryDescriptionText, $UIManager::getString("FileChooser.directoryDescriptionText"_s));
	$set(this, newFolderErrorText, getString("FileChooser.newFolderErrorText"_s, "Error occurred during folder creation"_s));
	$set(this, saveButtonText, $UIManager::getString("FileChooser.saveButtonText"_s));
	$set(this, openButtonText, $UIManager::getString("FileChooser.openButtonText"_s));
	$set(this, cancelButtonText, $UIManager::getString("FileChooser.cancelButtonText"_s));
	$set(this, updateButtonText, $UIManager::getString("FileChooser.updateButtonText"_s));
	$set(this, helpButtonText, $UIManager::getString("FileChooser.helpButtonText"_s));
	this->saveButtonMnemonic = $UIManager::getInt("FileChooser.saveButtonMnemonic"_s);
	this->openButtonMnemonic = $UIManager::getInt("FileChooser.openButtonMnemonic"_s);
	this->cancelButtonMnemonic = $UIManager::getInt("FileChooser.cancelButtonMnemonic"_s);
	this->updateButtonMnemonic = $UIManager::getInt("FileChooser.updateButtonMnemonic"_s);
	this->helpButtonMnemonic = $UIManager::getInt("FileChooser.helpButtonMnemonic"_s);
	this->chooseButtonMnemonic = $UIManager::getInt("FileChooser.chooseButtonMnemonic"_s);
	$set(this, saveButtonToolTipText, $UIManager::getString("FileChooser.saveButtonToolTipText"_s));
	$set(this, openButtonToolTipText, $UIManager::getString("FileChooser.openButtonToolTipText"_s));
	$set(this, cancelButtonToolTipText, $UIManager::getString("FileChooser.cancelButtonToolTipText"_s));
	$set(this, updateButtonToolTipText, $UIManager::getString("FileChooser.updateButtonToolTipText"_s));
	$set(this, helpButtonToolTipText, $UIManager::getString("FileChooser.helpButtonToolTipText"_s));
	$set(this, saveTitleText, getString("FileChooser.saveTitleText"_s, this->saveButtonText));
	$set(this, openTitleText, getString("FileChooser.openTitleText"_s, this->openButtonText));
	$set(this, newFolderExistsErrorText, getString("FileChooser.newFolderExistsErrorText"_s, "That name is already taken"_s));
	$set(this, chooseButtonText, getString("FileChooser.chooseButtonText"_s, "Choose"_s));
	$set(this, newFolderButtonText, getString("FileChooser.newFolderButtonText"_s, "New"_s));
	$set(this, newFolderTitleText, getString("FileChooser.newFolderTitleText"_s, "New Folder"_s));
	if ($nc(fc)->getDialogType() == $JFileChooser::SAVE_DIALOG) {
		$assignStatic(AquaFileChooserUI::fileNameLabelText, getString("FileChooser.saveDialogFileNameLabelText"_s, "Save As:"_s));
	} else {
		$assignStatic(AquaFileChooserUI::fileNameLabelText, getString("FileChooser.fileNameLabelText"_s, "Name:"_s));
	}
	$assignStatic(AquaFileChooserUI::filesOfTypeLabelText, getString("FileChooser.filesOfTypeLabelText"_s, "Format:"_s));
	$set(this, desktopName, getString("FileChooser.desktopName"_s, "Desktop"_s));
	$set(this, newFolderDialogPrompt, getString("FileChooser.newFolderPromptText"_s, "Name of new folder:"_s));
	$set(this, newFolderDefaultName, getString("FileChooser.untitledFolderName"_s, "untitled folder"_s));
	$set(this, newFileDefaultName, getString("FileChooser.untitledFileName"_s, "untitled"_s));
	$set(this, createButtonText, getString("FileChooser.createButtonText"_s, "Create"_s));
	$nc(AquaFileChooserUI::fColumnNames)->set(1, $(getString("FileChooser.byDateText"_s, "Date Modified"_s)));
	$nc(AquaFileChooserUI::fColumnNames)->set(0, $(getString("FileChooser.byNameText"_s, "Name"_s)));
	$set(this, chooseItemButtonToolTipText, $UIManager::getString("FileChooser.chooseItemButtonToolTipText"_s));
	$set(this, chooseFolderButtonToolTipText, $UIManager::getString("FileChooser.chooseFolderButtonToolTipText"_s));
	$set(this, openDirectoryButtonToolTipText, $UIManager::getString("FileChooser.openDirectoryButtonToolTipText"_s));
	$set(this, directoryComboBoxToolTipText, $UIManager::getString("FileChooser.directoryComboBoxToolTipText"_s));
	$set(this, filenameTextFieldToolTipText, $UIManager::getString("FileChooser.filenameTextFieldToolTipText"_s));
	$set(this, filterComboBoxToolTipText, $UIManager::getString("FileChooser.filterComboBoxToolTipText"_s));
	$set(this, cancelOpenButtonToolTipText, $UIManager::getString("FileChooser.cancelOpenButtonToolTipText"_s));
	$set(this, cancelSaveButtonToolTipText, $UIManager::getString("FileChooser.cancelSaveButtonToolTipText"_s));
	$set(this, cancelChooseButtonToolTipText, $UIManager::getString("FileChooser.cancelChooseButtonToolTipText"_s));
	$set(this, cancelNewFolderButtonToolTipText, $UIManager::getString("FileChooser.cancelNewFolderButtonToolTipText"_s));
	$set(this, newFolderTitleText, $UIManager::getString("FileChooser.newFolderTitleText"_s));
	$assignStatic(AquaFileChooserUI::newFolderToolTipText, $UIManager::getString("FileChooser.newFolderToolTipText"_s));
	$assignStatic(AquaFileChooserUI::newFolderAccessibleName, getString("FileChooser.newFolderAccessibleName"_s, this->newFolderTitleText));
}

void AquaFileChooserUI::uninstallDefaults($JFileChooser* fc) {
	uninstallIcons(fc);
	uninstallStrings(fc);
}

void AquaFileChooserUI::uninstallIcons($JFileChooser* fc) {
	$set(this, directoryIcon, nullptr);
	$set(this, fileIcon, nullptr);
	$set(this, computerIcon, nullptr);
	$set(this, hardDriveIcon, nullptr);
	$set(this, floppyDriveIcon, nullptr);
	$set(this, upFolderIcon, nullptr);
	$set(this, homeFolderIcon, nullptr);
	$set(this, detailsViewIcon, nullptr);
	$set(this, listViewIcon, nullptr);
}

void AquaFileChooserUI::uninstallStrings($JFileChooser* fc) {
	$set(this, saveTitleText, nullptr);
	$set(this, openTitleText, nullptr);
	$set(this, newFolderTitleText, nullptr);
	$set(this, saveButtonText, nullptr);
	$set(this, openButtonText, nullptr);
	$set(this, cancelButtonText, nullptr);
	$set(this, updateButtonText, nullptr);
	$set(this, helpButtonText, nullptr);
	$set(this, newFolderButtonText, nullptr);
	$set(this, chooseButtonText, nullptr);
	$set(this, cancelOpenButtonToolTipText, nullptr);
	$set(this, cancelSaveButtonToolTipText, nullptr);
	$set(this, cancelChooseButtonToolTipText, nullptr);
	$set(this, cancelNewFolderButtonToolTipText, nullptr);
	$set(this, saveButtonToolTipText, nullptr);
	$set(this, openButtonToolTipText, nullptr);
	$set(this, cancelButtonToolTipText, nullptr);
	$set(this, updateButtonToolTipText, nullptr);
	$set(this, helpButtonToolTipText, nullptr);
	$set(this, chooseItemButtonToolTipText, nullptr);
	$set(this, chooseFolderButtonToolTipText, nullptr);
	$set(this, openDirectoryButtonToolTipText, nullptr);
	$set(this, directoryComboBoxToolTipText, nullptr);
	$set(this, filenameTextFieldToolTipText, nullptr);
	$set(this, filterComboBoxToolTipText, nullptr);
	$set(this, newFolderDefaultName, nullptr);
	$set(this, newFileDefaultName, nullptr);
	$set(this, desktopName, nullptr);
}

void AquaFileChooserUI::createModel() {
}

$AquaFileSystemModel* AquaFileChooserUI::getModel() {
	return this->model;
}

$PropertyChangeListener* AquaFileChooserUI::createPropertyChangeListener($JFileChooser* fc) {
	return $new($AquaFileChooserUI$2, this);
}

void AquaFileChooserUI::setPackageIsTraversable(Object$* o) {
	int32_t newProp = -1;
	if (o != nullptr && $instanceOf($String, o)) {
		newProp = parseTraversableProperty($cast($String, o));
	}
	if (newProp != -1) {
		this->fPackageIsTraversable = newProp;
	} else {
		this->fPackageIsTraversable = AquaFileChooserUI::sGlobalPackageIsTraversable;
	}
}

void AquaFileChooserUI::setApplicationIsTraversable(Object$* o) {
	int32_t newProp = -1;
	if (o != nullptr && $instanceOf($String, o)) {
		newProp = parseTraversableProperty($cast($String, o));
	}
	if (newProp != -1) {
		this->fApplicationIsTraversable = newProp;
	} else {
		this->fApplicationIsTraversable = AquaFileChooserUI::sGlobalApplicationIsTraversable;
	}
}

void AquaFileChooserUI::doControlButtonsChanged($PropertyChangeEvent* e) {
	if ($nc($(getFileChooser()))->getControlButtonsAreShown()) {
		$nc(this->fBottomPanel)->add(this->fDirectoryPanelSpacer);
		$nc(this->fBottomPanel)->add(static_cast<$Component*>(this->fDirectoryPanel));
	} else {
		$nc(this->fBottomPanel)->remove(this->fDirectoryPanelSpacer);
		$nc(this->fBottomPanel)->remove(static_cast<$Component*>(this->fDirectoryPanel));
	}
}

$String* AquaFileChooserUI::getFileName() {
	if (this->filenameTextField != nullptr) {
		return $nc(this->filenameTextField)->getText();
	}
	return nullptr;
}

$String* AquaFileChooserUI::getDirectoryName() {
	return nullptr;
}

void AquaFileChooserUI::setFileName($String* filename) {
	if (this->filenameTextField != nullptr) {
		$nc(this->filenameTextField)->setText(filename);
	}
}

void AquaFileChooserUI::setDirectoryName($String* dirname) {
}

void AquaFileChooserUI::rescanCurrentDirectory($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$nc($(getModel()))->invalidateFileCache();
	$nc($(getModel()))->validateFileCache();
}

void AquaFileChooserUI::ensureFileIsVisible($JFileChooser* fc, $File* f) {
	$useLocalCurrentObjectStackCache();
	if (f == nullptr) {
		$nc(this->fFileList)->requestFocusInWindow();
		$nc(this->fFileList)->ensureIndexIsVisible(-1);
		return;
	}
	$nc($(getModel()))->runWhenDone($$new($AquaFileChooserUI$3, this, f));
}

$JFileChooser* AquaFileChooserUI::getFileChooser() {
	return this->filechooser;
}

$JPanel* AquaFileChooserUI::getAccessoryPanel() {
	return this->accessoryPanel;
}

$JButton* AquaFileChooserUI::getApproveButton($JFileChooser* fc) {
	return this->fApproveButton;
}

int32_t AquaFileChooserUI::getApproveButtonMnemonic($JFileChooser* fc) {
	return $nc(this->fSubPanel)->getApproveButtonMnemonic(fc);
}

$String* AquaFileChooserUI::getApproveButtonToolTipText($JFileChooser* fc) {
	return $nc(this->fSubPanel)->getApproveButtonToolTipText(fc);
}

$String* AquaFileChooserUI::getApproveButtonText($JFileChooser* fc) {
	return $nc(this->fSubPanel)->getApproveButtonText(fc);
}

$String* AquaFileChooserUI::getCancelButtonToolTipText($JFileChooser* fc) {
	return $nc(this->fSubPanel)->getCancelButtonToolTipText(fc);
}

bool AquaFileChooserUI::isSelectableInList($File* f) {
	return $nc(this->fSubPanel)->isSelectableInList($(getFileChooser()), f);
}

bool AquaFileChooserUI::isSelectableForMode($JFileChooser* fc, $File* f) {
	if (f == nullptr) {
		return false;
	}
	int32_t mode = $nc(fc)->getFileSelectionMode();
	if (mode == $JFileChooser::FILES_AND_DIRECTORIES) {
		return true;
	}
	bool traversable = fc->isTraversable(f);
	if (mode == $JFileChooser::DIRECTORIES_ONLY) {
		return traversable;
	}
	return !traversable;
}

$ListSelectionListener* AquaFileChooserUI::createListSelectionListener($JFileChooser* fc) {
	return $new($AquaFileChooserUI$SelectionListener, this);
}

bool AquaFileChooserUI::openDirectory($File* f) {
	$useLocalCurrentObjectStackCache();
	if ($nc($(getFileChooser()))->isTraversable(f)) {
		$nc(this->fFileList)->clearSelection();
		$var($File, original, $nc(this->fileView)->resolveAlias(f));
		$nc($(getFileChooser()))->setCurrentDirectory(original);
		updateButtonState($(getFileChooser()));
		return true;
	}
	return false;
}

$MouseListener* AquaFileChooserUI::createDoubleClickListener($JFileChooser* fc, $AquaFileChooserUI$JTableExtension* list) {
	return $new($AquaFileChooserUI$DoubleClickListener, this, list);
}

$FileFilter* AquaFileChooserUI::getAcceptAllFileFilter($JFileChooser* fc) {
	return AquaFileChooserUI::acceptAllFileFilter;
}

$FileView* AquaFileChooserUI::getFileView($JFileChooser* fc) {
	return this->fileView;
}

$String* AquaFileChooserUI::getDialogTitle($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	if ($nc(fc)->getDialogTitle() == nullptr) {
		if ($nc($(getFileChooser()))->getDialogType() == $JFileChooser::OPEN_DIALOG) {
			return this->openTitleText;
		} else if ($nc($(getFileChooser()))->getDialogType() == $JFileChooser::SAVE_DIALOG) {
			return this->saveTitleText;
		}
	}
	return $nc(fc)->getDialogTitle();
}

$File* AquaFileChooserUI::getFirstSelectedItem() {
	$useLocalCurrentObjectStackCache();
	$var($File, selectedFile, nullptr);
	int32_t index = $nc(this->fFileList)->getSelectedRow();
	if (index >= 0) {
		$assign(selectedFile, $cast($File, $nc(($cast($AquaFileSystemModel, $($nc(this->fFileList)->getModel()))))->getElementAt(index)));
	}
	return selectedFile;
}

$File* AquaFileChooserUI::makeFile($JFileChooser* fc, $String* filename) {
	$useLocalCurrentObjectStackCache();
	$var($File, selectedFile, nullptr);
	if (filename != nullptr && !filename->isEmpty()) {
		$var($FileSystemView, fs, $nc(fc)->getFileSystemView());
		$assign(selectedFile, $nc(fs)->createFileObject(filename));
		if (!$nc(selectedFile)->isAbsolute()) {
			$assign(selectedFile, fs->createFileObject($(fc->getCurrentDirectory()), filename));
		}
	}
	return selectedFile;
}

bool AquaFileChooserUI::textfieldIsValid() {
	$var($String, s, getFileName());
	return (s != nullptr && !s->isEmpty());
}

$Dimension* AquaFileChooserUI::getPreferredSize($JComponent* c) {
	return $new($Dimension, AquaFileChooserUI::PREF_WIDTH, AquaFileChooserUI::PREF_HEIGHT);
}

$Dimension* AquaFileChooserUI::getMinimumSize($JComponent* c) {
	return $new($Dimension, AquaFileChooserUI::MIN_WIDTH, AquaFileChooserUI::MIN_HEIGHT);
}

$Dimension* AquaFileChooserUI::getMaximumSize($JComponent* c) {
	return $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

$ListCellRenderer* AquaFileChooserUI::createDirectoryComboBoxRenderer($JFileChooser* fc) {
	return $new($AquaFileChooserUI$4, this, this->directoryComboBox);
}

$AquaFileChooserUI$DirectoryComboBoxModel* AquaFileChooserUI::createDirectoryComboBoxModel($JFileChooser* fc) {
	return $new($AquaFileChooserUI$DirectoryComboBoxModel, this);
}

$ListCellRenderer* AquaFileChooserUI::createFilterComboBoxRenderer() {
	return $new($AquaFileChooserUI$5, this, this->filterComboBox);
}

$AquaFileChooserUI$FilterComboBoxModel* AquaFileChooserUI::createFilterComboBoxModel() {
	return $new($AquaFileChooserUI$FilterComboBoxModel, this);
}

bool AquaFileChooserUI::containsFileFilter(Object$* fileFilter) {
	$useLocalCurrentObjectStackCache();
	return $Objects::equals(fileFilter, $($nc($(getFileChooser()))->getFileFilter()));
}

void AquaFileChooserUI::installComponents($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$var($JPanel, tPanel, nullptr);
	$nc(fc)->setLayout($$new($BoxLayout, fc, $BoxLayout::Y_AXIS));
	fc->add($($Box::createRigidArea(AquaFileChooserUI::vstrut10)));
	$var($JPanel, topPanel, $new($JPanel));
	topPanel->setLayout($$new($BoxLayout, topPanel, $BoxLayout::Y_AXIS));
	fc->add(static_cast<$Component*>(topPanel));
	fc->add($($Box::createRigidArea(AquaFileChooserUI::vstrut10)));
	$set(this, fTextfieldPanel, $new($JPanel));
	$nc(this->fTextfieldPanel)->setLayout($$new($BorderLayout));
	$nc(this->fTextfieldPanel)->setVisible(false);
	topPanel->add(static_cast<$Component*>(this->fTextfieldPanel));
	$assign(tPanel, $new($JPanel));
	tPanel->setLayout($$new($BoxLayout, tPanel, $BoxLayout::Y_AXIS));
	$var($JPanel, labelArea, $new($JPanel));
	labelArea->setLayout($$new($FlowLayout, $FlowLayout::CENTER));
	$set(this, fTextFieldLabel, $new($JLabel, AquaFileChooserUI::fileNameLabelText));
	labelArea->add(static_cast<$Component*>(this->fTextFieldLabel));
	$set(this, filenameTextField, $new($JTextField));
	$nc(this->fTextFieldLabel)->setLabelFor(this->filenameTextField);
	$nc(this->filenameTextField)->addActionListener($(getAction(AquaFileChooserUI::kOpen)));
	$nc(this->filenameTextField)->addFocusListener($$new($AquaFileChooserUI$SaveTextFocusListener, this));
	$var($Dimension, minSize, $nc(this->filenameTextField)->getMinimumSize());
	$var($Dimension, d, $new($Dimension, 250, $cast(int32_t, $nc(minSize)->getHeight())));
	$nc(this->filenameTextField)->setPreferredSize(d);
	$nc(this->filenameTextField)->setMaximumSize(d);
	labelArea->add(static_cast<$Component*>(this->filenameTextField));
	$var($File, f, fc->getSelectedFile());
	if (f != nullptr) {
		setFileName($(fc->getName(f)));
	} else if (fc->getDialogType() == $JFileChooser::SAVE_DIALOG) {
		setFileName(this->newFileDefaultName);
	}
	tPanel->add(static_cast<$Component*>(labelArea));
	$var($JSeparator, sep, $new($AquaFileChooserUI$6, this));
	tPanel->add($($Box::createRigidArea($$new($Dimension, 1, 8))));
	tPanel->add(static_cast<$Component*>(sep));
	tPanel->add($($Box::createRigidArea($$new($Dimension, 1, 7))));
	$init($BorderLayout);
	$nc(this->fTextfieldPanel)->add(static_cast<$Component*>(tPanel), $of($BorderLayout::CENTER));
	$set(this, directoryComboBox, $new($JComboBox));
	$nc(this->directoryComboBox)->putClientProperty("JComboBox.lightweightKeyboardNavigation"_s, "Lightweight"_s);
	$set(this, fDirectoryComboBoxModel, createDirectoryComboBoxModel(fc));
	$nc(this->directoryComboBox)->setModel(this->fDirectoryComboBoxModel);
	$nc(this->directoryComboBox)->addActionListener(this->directoryComboBoxAction);
	$nc(this->directoryComboBox)->setRenderer($(createDirectoryComboBoxRenderer(fc)));
	$nc(this->directoryComboBox)->setToolTipText(this->directoryComboBoxToolTipText);
	$assign(d, $new($Dimension, 250, $cast(int32_t, $nc($($nc(this->directoryComboBox)->getMinimumSize()))->getHeight())));
	$nc(this->directoryComboBox)->setPreferredSize(d);
	$nc(this->directoryComboBox)->setMaximumSize(d);
	topPanel->add(static_cast<$Component*>(this->directoryComboBox));
	$var($JPanel, centerPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	fc->add(static_cast<$Component*>(centerPanel));
	$var($JComponent, accessory, fc->getAccessory());
	if (accessory != nullptr) {
		$nc($(getAccessoryPanel()))->add(static_cast<$Component*>(accessory));
	}
	centerPanel->add($(static_cast<$Component*>(getAccessoryPanel())), $of($BorderLayout::LINE_START));
	$var($JPanel, p, createList(fc));
	$nc(p)->setMinimumSize(AquaFileChooserUI::LIST_MIN_SIZE);
	centerPanel->add(static_cast<$Component*>(p), $of($BorderLayout::CENTER));
	$set(this, fBottomPanel, $new($JPanel));
	$nc(this->fBottomPanel)->setLayout($$new($BoxLayout, this->fBottomPanel, $BoxLayout::Y_AXIS));
	fc->add(static_cast<$Component*>(this->fBottomPanel));
	$assign(tPanel, $new($JPanel));
	tPanel->setLayout($$new($FlowLayout, $FlowLayout::CENTER));
	tPanel->setBorder($($AquaGroupBorder::getTitlelessBorder()));
	$var($JLabel, formatLabel, $new($JLabel, AquaFileChooserUI::filesOfTypeLabelText));
	tPanel->add(static_cast<$Component*>(formatLabel));
	$set(this, filterComboBoxModel, createFilterComboBoxModel());
	fc->addPropertyChangeListener(this->filterComboBoxModel);
	$set(this, filterComboBox, $new($JComboBox, static_cast<$ComboBoxModel*>(this->filterComboBoxModel)));
	formatLabel->setLabelFor(this->filterComboBox);
	$nc(this->filterComboBox)->setRenderer($(createFilterComboBoxRenderer()));
	$assign(d, $new($Dimension, 220, $cast(int32_t, $nc($($nc(this->filterComboBox)->getMinimumSize()))->getHeight())));
	$nc(this->filterComboBox)->setPreferredSize(d);
	$nc(this->filterComboBox)->setMaximumSize(d);
	$nc(this->filterComboBox)->addActionListener(this->filterComboBoxAction);
	$nc(this->filterComboBox)->setOpaque(false);
	tPanel->add(static_cast<$Component*>(this->filterComboBox));
	$nc(this->fBottomPanel)->add(static_cast<$Component*>(tPanel));
	$set(this, fDirectoryPanel, $new($JPanel));
	$nc(this->fDirectoryPanel)->setLayout($$new($BoxLayout, this->fDirectoryPanel, $BoxLayout::PAGE_AXIS));
	$var($JPanel, directoryPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$var($JPanel, newFolderButtonPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout, $FlowLayout::LEADING, 0, 0))));
	newFolderButtonPanel->add($($Box::createHorizontalStrut(20)));
	$set(this, fNewFolderButton, createNewFolderButton());
	newFolderButtonPanel->add(static_cast<$Component*>(this->fNewFolderButton));
	directoryPanel->add(static_cast<$Component*>(newFolderButtonPanel), $of($BorderLayout::LINE_START));
	$var($JPanel, approveCancelButtonPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout, $FlowLayout::TRAILING, 0, 0))));
	$set(this, fOpenButton, createButton(AquaFileChooserUI::kOpenDirectory, this->openButtonText));
	approveCancelButtonPanel->add(static_cast<$Component*>(this->fOpenButton));
	approveCancelButtonPanel->add($($Box::createHorizontalStrut(8)));
	$set(this, fCancelButton, createButton(AquaFileChooserUI::kCancel, nullptr));
	approveCancelButtonPanel->add(static_cast<$Component*>(this->fCancelButton));
	approveCancelButtonPanel->add($($Box::createHorizontalStrut(8)));
	$set(this, fApproveButton, $new($JButton));
	$nc(this->fApproveButton)->addActionListener(this->fApproveSelectionAction);
	approveCancelButtonPanel->add(static_cast<$Component*>(this->fApproveButton));
	approveCancelButtonPanel->add($($Box::createHorizontalStrut(20)));
	directoryPanel->add(static_cast<$Component*>(approveCancelButtonPanel), $of($BorderLayout::LINE_END));
	$nc(this->fDirectoryPanel)->add($($Box::createVerticalStrut(5)));
	$nc(this->fDirectoryPanel)->add(static_cast<$Component*>(directoryPanel));
	$nc(this->fDirectoryPanel)->add($($Box::createVerticalStrut(12)));
	$set(this, fDirectoryPanelSpacer, $Box::createRigidArea(AquaFileChooserUI::hstrut10));
	if (fc->getControlButtonsAreShown()) {
		$nc(this->fBottomPanel)->add(this->fDirectoryPanelSpacer);
		$nc(this->fBottomPanel)->add(static_cast<$Component*>(this->fDirectoryPanel));
	}
	setBottomPanelForMode(fc);
	$nc($($nc(this->filenameTextField)->getDocument()))->addDocumentListener($$new($AquaFileChooserUI$SaveTextDocumentListener, this));
}

void AquaFileChooserUI::setDefaultButtonForMode($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$var($JButton, defaultButton, $nc(this->fSubPanel)->getDefaultButton(fc));
	$var($JRootPane, root, $nc(defaultButton)->getRootPane());
	if (root != nullptr) {
		root->setDefaultButton(defaultButton);
	}
}

void AquaFileChooserUI::setFocusForMode($JFileChooser* fc) {
	$var($JComponent, focusComponent, $nc(this->fSubPanel)->getFocusComponent(fc));
	if (focusComponent != nullptr) {
		focusComponent->requestFocus();
	}
}

void AquaFileChooserUI::updateButtonState($JFileChooser* fc) {
	$nc(this->fSubPanel)->updateButtonState(fc, $(getFirstSelectedItem()));
	updateApproveButton(fc);
}

void AquaFileChooserUI::updateApproveButton($JFileChooser* chooser) {
	$useLocalCurrentObjectStackCache();
	$nc(this->fApproveButton)->setText($(getApproveButtonText(chooser)));
	$nc(this->fApproveButton)->setToolTipText($(getApproveButtonToolTipText(chooser)));
	$nc(this->fApproveButton)->setMnemonic(getApproveButtonMnemonic(chooser));
	$nc(this->fCancelButton)->setToolTipText($(getCancelButtonToolTipText(chooser)));
}

$AquaFileChooserUI$FCSubpanel* AquaFileChooserUI::getSaveFilePanel() {
	$synchronized(this) {
		if (this->fSaveFilePanel == nullptr) {
			$set(this, fSaveFilePanel, $new($AquaFileChooserUI$SaveFilePanel, this));
		}
		return this->fSaveFilePanel;
	}
}

$AquaFileChooserUI$FCSubpanel* AquaFileChooserUI::getOpenFilePanel() {
	$synchronized(this) {
		if (this->fOpenFilePanel == nullptr) {
			$set(this, fOpenFilePanel, $new($AquaFileChooserUI$OpenFilePanel, this));
		}
		return this->fOpenFilePanel;
	}
}

$AquaFileChooserUI$FCSubpanel* AquaFileChooserUI::getOpenDirOrAnyPanel() {
	$synchronized(this) {
		if (this->fOpenDirOrAnyPanel == nullptr) {
			$set(this, fOpenDirOrAnyPanel, $new($AquaFileChooserUI$OpenDirOrAnyPanel, this));
		}
		return this->fOpenDirOrAnyPanel;
	}
}

$AquaFileChooserUI$FCSubpanel* AquaFileChooserUI::getCustomFilePanel() {
	$synchronized(this) {
		if (this->fCustomFilePanel == nullptr) {
			$set(this, fCustomFilePanel, $new($AquaFileChooserUI$CustomFilePanel, this));
		}
		return this->fCustomFilePanel;
	}
}

$AquaFileChooserUI$FCSubpanel* AquaFileChooserUI::getCustomDirOrAnyPanel() {
	$synchronized(this) {
		if (this->fCustomDirOrAnyPanel == nullptr) {
			$set(this, fCustomDirOrAnyPanel, $new($AquaFileChooserUI$CustomDirOrAnyPanel, this));
		}
		return this->fCustomDirOrAnyPanel;
	}
}

void AquaFileChooserUI::setBottomPanelForMode($JFileChooser* fc) {
	if ($nc(fc)->getDialogType() == $JFileChooser::SAVE_DIALOG) {
		$set(this, fSubPanel, getSaveFilePanel());
	} else if (fc->getDialogType() == $JFileChooser::OPEN_DIALOG) {
		if (fc->getFileSelectionMode() == $JFileChooser::FILES_ONLY) {
			$set(this, fSubPanel, getOpenFilePanel());
		} else {
			$set(this, fSubPanel, getOpenDirOrAnyPanel());
		}
	} else if (fc->getDialogType() == $JFileChooser::CUSTOM_DIALOG) {
		if (fc->getFileSelectionMode() == $JFileChooser::FILES_ONLY) {
			$set(this, fSubPanel, getCustomFilePanel());
		} else {
			$set(this, fSubPanel, getCustomDirOrAnyPanel());
		}
	}
	$nc(this->fSubPanel)->installPanel(fc, true);
	updateApproveButton(fc);
	updateButtonState(fc);
	setDefaultButtonForMode(fc);
	setFocusForMode(fc);
	$nc(fc)->invalidate();
}

$JButton* AquaFileChooserUI::createNewFolderButton() {
	$useLocalCurrentObjectStackCache();
	$var($JButton, b, $new($JButton, this->newFolderButtonText));
	b->setToolTipText(AquaFileChooserUI::newFolderToolTipText);
	$nc($(b->getAccessibleContext()))->setAccessibleName(AquaFileChooserUI::newFolderAccessibleName);
	b->setHorizontalTextPosition($SwingConstants::LEFT);
	$init($Component);
	b->setAlignmentX($Component::LEFT_ALIGNMENT);
	b->setAlignmentY($Component::CENTER_ALIGNMENT);
	b->addActionListener($(getAction(AquaFileChooserUI::kNewFolder)));
	return b;
}

$JButton* AquaFileChooserUI::createButton(int32_t which, $String* label$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, label, label$renamed);
	if (label == nullptr) {
		$assign(label, $UIManager::getString($$str({AquaFileChooserUI::sDataPrefix, $nc(AquaFileChooserUI::sButtonKinds)->get(which), $nc(AquaFileChooserUI::sButtonData)->get(0)})));
	}
	int32_t mnemonic = $UIManager::getInt($$str({AquaFileChooserUI::sDataPrefix, $nc(AquaFileChooserUI::sButtonKinds)->get(which), $nc(AquaFileChooserUI::sButtonData)->get(1)}));
	$var($String, tipText, $UIManager::getString($$str({AquaFileChooserUI::sDataPrefix, $nc(AquaFileChooserUI::sButtonKinds)->get(which), $nc(AquaFileChooserUI::sButtonData)->get(2)})));
	$var($JButton, b, $new($JButton, label));
	b->setMnemonic(mnemonic);
	b->setToolTipText(tipText);
	b->addActionListener($(getAction(which)));
	return b;
}

$AbstractAction* AquaFileChooserUI::getAction(int32_t which) {
	return $nc(this->fButtonActions)->get(which);
}

void AquaFileChooserUI::uninstallComponents($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$nc($($cast($ButtonUI, $nc(this->fApproveButton)->getUI())))->uninstallUI(this->fApproveButton);
	$nc($($cast($ButtonUI, $nc(this->fOpenButton)->getUI())))->uninstallUI(this->fOpenButton);
	$nc($($cast($ButtonUI, $nc(this->fNewFolderButton)->getUI())))->uninstallUI(this->fNewFolderButton);
	$nc($($cast($ButtonUI, $nc(this->fCancelButton)->getUI())))->uninstallUI(this->fCancelButton);
	$nc($($cast($ComboBoxUI, $nc(this->directoryComboBox)->getUI())))->uninstallUI(this->directoryComboBox);
	$nc($($cast($ComboBoxUI, $nc(this->filterComboBox)->getUI())))->uninstallUI(this->filterComboBox);
}

$JPanel* AquaFileChooserUI::createList($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$var($JPanel, p, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$set(this, fFileList, $new($AquaFileChooserUI$JTableExtension, this));
	$nc(this->fFileList)->setToolTipText(nullptr);
	$nc(this->fFileList)->addMouseListener($$new($AquaFileChooserUI$FileListMouseListener, this));
	$set(this, model, $new($AquaFileSystemModel, fc, this->fFileList, AquaFileChooserUI::fColumnNames));
	$var($AquaFileChooserUI$MacListSelectionModel, listSelectionModel, $new($AquaFileChooserUI$MacListSelectionModel, this, this->model));
	if ($nc($(getFileChooser()))->isMultiSelectionEnabled()) {
		listSelectionModel->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	} else {
		listSelectionModel->setSelectionMode($ListSelectionModel::SINGLE_SELECTION);
	}
	$nc(this->fFileList)->setModel(this->model);
	$nc(this->fFileList)->setSelectionModel(listSelectionModel);
	$nc($($nc(this->fFileList)->getSelectionModel()))->addListSelectionListener($(createListSelectionListener(fc)));
	$nc(fc)->addPropertyChangeListener(this->model);
	$nc(this->fFileList)->addFocusListener($$new($AquaFileChooserUI$SaveTextFocusListener, this));
	$var($JTableHeader, th, $new($AquaFileChooserUI$JSortingTableHeader, this, $($nc(this->fFileList)->getColumnModel())));
	$nc(this->fFileList)->setTableHeader(th);
	$nc(this->fFileList)->setRowMargin(0);
	$nc(this->fFileList)->setIntercellSpacing($$new($Dimension, 0, 1));
	$nc(this->fFileList)->setShowVerticalLines(false);
	$nc(this->fFileList)->setShowHorizontalLines(false);
	$var($Font, f, $nc(this->fFileList)->getFont());
	$load($File);
	$nc(this->fFileList)->setDefaultRenderer($File::class$, $$new($AquaFileChooserUI$FileRenderer, this, f));
	$load($Date);
	$nc(this->fFileList)->setDefaultRenderer($Date::class$, $$new($AquaFileChooserUI$DateRenderer, this, f));
	$var($FontMetrics, fm, $nc(this->fFileList)->getFontMetrics(f));
	int32_t var$0 = $nc(fm)->getHeight();
	$nc(this->fFileList)->setRowHeight($Math::max(var$0, $nc(this->fileIcon)->getIconHeight() + 2));
	$var($ActionListener, var$1, static_cast<$ActionListener*>($new($AquaFileChooserUI$CancelSelectionAction, this)));
	$nc(this->fFileList)->registerKeyboardAction(var$1, $($KeyStroke::getKeyStroke($KeyEvent::VK_ESCAPE, 0)), $JComponent::WHEN_FOCUSED);
	$var($ActionListener, var$2, static_cast<$ActionListener*>($new($AquaFileChooserUI$DefaultButtonAction, this)));
	$nc(this->fFileList)->registerKeyboardAction(var$2, $($KeyStroke::getKeyStroke($KeyEvent::VK_ENTER, 0)), $JComponent::WHEN_FOCUSED);
	$nc(this->fFileList)->setDropTarget(this->dragAndDropTarget);
	$var($JScrollPane, scrollpane, $new($JScrollPane, this->fFileList, $ScrollPaneConstants::VERTICAL_SCROLLBAR_ALWAYS, $ScrollPaneConstants::HORIZONTAL_SCROLLBAR_AS_NEEDED));
	scrollpane->setComponentOrientation($($ComponentOrientation::getOrientation($($Locale::getDefault()))));
	$init($ScrollPaneConstants);
	scrollpane->setCorner($ScrollPaneConstants::UPPER_TRAILING_CORNER, $$new($AquaFileChooserUI$ScrollPaneCornerPanel, this));
	$init($BorderLayout);
	p->add(static_cast<$Component*>(scrollpane), $of($BorderLayout::CENTER));
	return p;
}

int32_t AquaFileChooserUI::parseTraversableProperty($String* s) {
	$init(AquaFileChooserUI);
	if (s == nullptr) {
		return -1;
	}
	for (int32_t i = 0; i < $nc(AquaFileChooserUI::sTraversableProperties)->length; ++i) {
		if ($nc(s)->equals($nc(AquaFileChooserUI::sTraversableProperties)->get(i))) {
			return i;
		}
	}
	return -1;
}

void clinit$AquaFileChooserUI($Class* class$) {
	$assignStatic(AquaFileChooserUI::PACKAGE_TRAVERSABLE_PROPERTY, "JFileChooser.packageIsTraversable"_s);
	$assignStatic(AquaFileChooserUI::APPLICATION_TRAVERSABLE_PROPERTY, "JFileChooser.appBundleIsTraversable"_s);
	$assignStatic(AquaFileChooserUI::sDataPrefix, "FileChooser."_s);
	$assignStatic(AquaFileChooserUI::acceptAllFileFilter, $new($AquaFileChooserUI$AcceptAllFileFilter));
	$assignStatic(AquaFileChooserUI::hstrut10, $new($Dimension, 10, 1));
	$assignStatic(AquaFileChooserUI::vstrut10, $new($Dimension, 1, 10));
	$assignStatic(AquaFileChooserUI::LIST_MIN_SIZE, $new($Dimension, AquaFileChooserUI::LIST_MIN_WIDTH, AquaFileChooserUI::LIST_MIN_HEIGHT));
	$assignStatic(AquaFileChooserUI::fileNameLabelText, nullptr);
	$assignStatic(AquaFileChooserUI::filesOfTypeLabelText, nullptr);
	$assignStatic(AquaFileChooserUI::newFolderToolTipText, nullptr);
	$assignStatic(AquaFileChooserUI::newFolderAccessibleName, nullptr);
	$assignStatic(AquaFileChooserUI::fColumnNames, $new($StringArray, 2));
	$assignStatic(AquaFileChooserUI::sTraversableProperties, $new($StringArray, {
		"always"_s,
		"never"_s,
		"conditional"_s
	}));
	{
		$var($Object, o, $UIManager::get(AquaFileChooserUI::PACKAGE_TRAVERSABLE_PROPERTY));
		if (o != nullptr && $instanceOf($String, o)) {
			AquaFileChooserUI::sGlobalPackageIsTraversable = AquaFileChooserUI::parseTraversableProperty($cast($String, o));
		} else {
			AquaFileChooserUI::sGlobalPackageIsTraversable = AquaFileChooserUI::kOpenConditional;
		}
		$assign(o, $UIManager::get(AquaFileChooserUI::APPLICATION_TRAVERSABLE_PROPERTY));
		if (o != nullptr && $instanceOf($String, o)) {
			AquaFileChooserUI::sGlobalApplicationIsTraversable = AquaFileChooserUI::parseTraversableProperty($cast($String, o));
		} else {
			AquaFileChooserUI::sGlobalApplicationIsTraversable = AquaFileChooserUI::kOpenConditional;
		}
	}
	$assignStatic(AquaFileChooserUI::sButtonKinds, $new($StringArray, {
		"openButton"_s,
		"saveButton"_s,
		"cancelButton"_s,
		"openDirectoryButton"_s,
		"helpButton"_s,
		"newFolderButton"_s
	}));
	$assignStatic(AquaFileChooserUI::sButtonData, $new($StringArray, {
		"Text"_s,
		"Mnemonic"_s,
		"ToolTipText"_s
	}));
}

AquaFileChooserUI::AquaFileChooserUI() {
}

$Class* AquaFileChooserUI::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI, name, initialize, &_AquaFileChooserUI_ClassInfo_, clinit$AquaFileChooserUI, allocate$AquaFileChooserUI);
	return class$;
}

$Class* AquaFileChooserUI::class$ = nullptr;

		} // laf
	} // apple
} // com