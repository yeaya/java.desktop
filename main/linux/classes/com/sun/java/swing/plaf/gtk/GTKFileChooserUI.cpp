#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>

#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$1.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$2.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$3.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$DirectoryCellRenderer.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$DirectoryComboBoxAction.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$DirectoryComboBoxModel.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$DoubleClickListener.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$FileCellRenderer.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$FilterComboBoxModel.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$FilterComboBoxRenderer.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKApproveSelectionAction.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKDirectoryListModel.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKDirectoryModel.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKFCPropertyChangeListener.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKFileListModel.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKFileView.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$NewFolderAction.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$RenameFileAction.h>
#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$SelectionListener.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/GridLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/HashSet.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/Box.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/DefaultListSelectionModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/filechooser/FileView.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FileChooserUI.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$ApproveSelectionAction.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$BasicFileView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI.h>
#include <jcpp.h>

#undef ACCESSIBLE_NAME_PROPERTY
#undef AFTER_LINE_ENDS
#undef BOTH
#undef CENTER
#undef CENTER_ALIGNMENT
#undef DIRECTORIES_ONLY
#undef EAST
#undef FORWARD_TRAVERSAL_KEYS
#undef HORIZONTAL
#undef LEADING
#undef LEFT
#undef LEFT_ALIGNMENT
#undef MAX_SIZE
#undef MAX_VALUE
#undef MIN_HEIGHT
#undef MIN_WIDTH
#undef MULTIPLE_INTERVAL_SELECTION
#undef NORTH
#undef PAGE_AXIS
#undef PREF_SIZE
#undef RIGHT
#undef SINGLE_SELECTION
#undef SOUTH
#undef TOP_ALIGNMENT
#undef TRAILING
#undef TRUE
#undef VERTICAL_SCROLLBAR_ALWAYS
#undef VK_TAB
#undef WEST
#undef ZERO_ACC_SIZE

using $GTKFileChooserUI$1 = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$1;
using $GTKFileChooserUI$2 = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$2;
using $GTKFileChooserUI$3 = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$3;
using $GTKFileChooserUI$DirectoryCellRenderer = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$DirectoryCellRenderer;
using $GTKFileChooserUI$DirectoryComboBoxAction = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$DirectoryComboBoxAction;
using $GTKFileChooserUI$DirectoryComboBoxModel = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$DirectoryComboBoxModel;
using $GTKFileChooserUI$DoubleClickListener = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$DoubleClickListener;
using $GTKFileChooserUI$FileCellRenderer = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$FileCellRenderer;
using $GTKFileChooserUI$FilterComboBoxModel = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$FilterComboBoxModel;
using $GTKFileChooserUI$FilterComboBoxRenderer = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$FilterComboBoxRenderer;
using $GTKFileChooserUI$GTKApproveSelectionAction = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$GTKApproveSelectionAction;
using $GTKFileChooserUI$GTKDirectoryListModel = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$GTKDirectoryListModel;
using $GTKFileChooserUI$GTKDirectoryModel = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$GTKDirectoryModel;
using $GTKFileChooserUI$GTKFCPropertyChangeListener = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$GTKFCPropertyChangeListener;
using $GTKFileChooserUI$GTKFileListModel = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$GTKFileListModel;
using $GTKFileChooserUI$GTKFileView = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$GTKFileView;
using $GTKFileChooserUI$NewFolderAction = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$NewFolderAction;
using $GTKFileChooserUI$RenameFileAction = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$RenameFileAction;
using $GTKFileChooserUI$SelectionListener = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI$SelectionListener;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $GridLayout = ::java::awt::GridLayout;
using $Insets = ::java::awt::Insets;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionListener = ::java::awt::event::ActionListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Locale = ::java::util::Locale;
using $Set = ::java::util::Set;
using $Vector = ::java::util::Vector;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $Box = ::javax::swing::Box;
using $BoxLayout = ::javax::swing::BoxLayout;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $DefaultListSelectionModel = ::javax::swing::DefaultListSelectionModel;
using $Icon = ::javax::swing::Icon;
using $InputMap = ::javax::swing::InputMap;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $JPanel = ::javax::swing::JPanel;
using $JRootPane = ::javax::swing::JRootPane;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JSplitPane = ::javax::swing::JSplitPane;
using $JTable = ::javax::swing::JTable;
using $JTextField = ::javax::swing::JTextField;
using $KeyStroke = ::javax::swing::KeyStroke;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $FileView = ::javax::swing::filechooser::FileView;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $FileChooserUI = ::javax::swing::plaf::FileChooserUI;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $BasicFileChooserUI$ApproveSelectionAction = ::javax::swing::plaf::basic::BasicFileChooserUI$ApproveSelectionAction;
using $BasicFileChooserUI$BasicFileView = ::javax::swing::plaf::basic::BasicFileChooserUI$BasicFileView;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $SynthFileChooserUI = ::sun::swing::plaf::synth::SynthFileChooserUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKFileChooserUI_FieldInfo_[] = {
	{"accessoryPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(GTKFileChooserUI, accessoryPanel)},
	{"newFolderButtonText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, newFolderButtonText)},
	{"newFolderErrorSeparator", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, newFolderErrorSeparator)},
	{"newFolderErrorText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, newFolderErrorText)},
	{"newFolderDialogText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, newFolderDialogText)},
	{"newFolderNoDirectoryErrorTitleText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, newFolderNoDirectoryErrorTitleText)},
	{"newFolderNoDirectoryErrorText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, newFolderNoDirectoryErrorText)},
	{"deleteFileButtonText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, deleteFileButtonText)},
	{"renameFileButtonText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, renameFileButtonText)},
	{"newFolderButtonToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, newFolderButtonToolTipText)},
	{"deleteFileButtonToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, deleteFileButtonToolTipText)},
	{"renameFileButtonToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, renameFileButtonToolTipText)},
	{"newFolderButtonMnemonic", "I", nullptr, $PRIVATE, $field(GTKFileChooserUI, newFolderButtonMnemonic)},
	{"deleteFileButtonMnemonic", "I", nullptr, $PRIVATE, $field(GTKFileChooserUI, deleteFileButtonMnemonic)},
	{"renameFileButtonMnemonic", "I", nullptr, $PRIVATE, $field(GTKFileChooserUI, renameFileButtonMnemonic)},
	{"foldersLabelMnemonic", "I", nullptr, $PRIVATE, $field(GTKFileChooserUI, foldersLabelMnemonic)},
	{"filesLabelMnemonic", "I", nullptr, $PRIVATE, $field(GTKFileChooserUI, filesLabelMnemonic)},
	{"renameFileDialogText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, renameFileDialogText)},
	{"renameFileErrorTitle", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, renameFileErrorTitle)},
	{"renameFileErrorText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, renameFileErrorText)},
	{"filterComboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljavax/swing/filechooser/FileFilter;>;", $PRIVATE, $field(GTKFileChooserUI, filterComboBox)},
	{"filterComboBoxModel", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI$FilterComboBoxModel;", nullptr, $PRIVATE, $field(GTKFileChooserUI, filterComboBoxModel)},
	{"rightPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(GTKFileChooserUI, rightPanel)},
	{"directoryList", "Ljavax/swing/JList;", "Ljavax/swing/JList<Ljava/io/File;>;", $PRIVATE, $field(GTKFileChooserUI, directoryList)},
	{"fileList", "Ljavax/swing/JList;", "Ljavax/swing/JList<Ljava/io/File;>;", $PRIVATE, $field(GTKFileChooserUI, fileList)},
	{"pathField", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(GTKFileChooserUI, pathField)},
	{"fileNameTextField", "Ljavax/swing/JTextField;", nullptr, $PRIVATE, $field(GTKFileChooserUI, fileNameTextField)},
	{"hstrut3", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKFileChooserUI, hstrut3)},
	{"vstrut10", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKFileChooserUI, vstrut10)},
	{"prefListSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticField(GTKFileChooserUI, prefListSize)},
	{"PREF_SIZE", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticField(GTKFileChooserUI, PREF_SIZE)},
	{"MIN_WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GTKFileChooserUI, MIN_WIDTH)},
	{"MIN_HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(GTKFileChooserUI, MIN_HEIGHT)},
	{"ZERO_ACC_SIZE", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticField(GTKFileChooserUI, ZERO_ACC_SIZE)},
	{"MAX_SIZE", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticField(GTKFileChooserUI, MAX_SIZE)},
	{"buttonMargin", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKFileChooserUI, buttonMargin)},
	{"filesLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, filesLabelText)},
	{"foldersLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, foldersLabelText)},
	{"pathLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, pathLabelText)},
	{"filterLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(GTKFileChooserUI, filterLabelText)},
	{"pathLabelMnemonic", "I", nullptr, $PRIVATE, $field(GTKFileChooserUI, pathLabelMnemonic)},
	{"filterLabelMnemonic", "I", nullptr, $PRIVATE, $field(GTKFileChooserUI, filterLabelMnemonic)},
	{"directoryComboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/io/File;>;", $PRIVATE, $field(GTKFileChooserUI, directoryComboBox)},
	{"directoryComboBoxModel", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI$DirectoryComboBoxModel;", nullptr, $PRIVATE, $field(GTKFileChooserUI, directoryComboBoxModel)},
	{"directoryComboBoxAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(GTKFileChooserUI, directoryComboBoxAction)},
	{"bottomButtonPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(GTKFileChooserUI, bottomButtonPanel)},
	{"model", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKDirectoryModel;", nullptr, $PRIVATE, $field(GTKFileChooserUI, model)},
	{"newFolderAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(GTKFileChooserUI, newFolderAction)},
	{"readOnly", "Z", nullptr, $PRIVATE, $field(GTKFileChooserUI, readOnly)},
	{"showDirectoryIcons", "Z", nullptr, $PRIVATE, $field(GTKFileChooserUI, showDirectoryIcons)},
	{"showFileIcons", "Z", nullptr, $PRIVATE, $field(GTKFileChooserUI, showFileIcons)},
	{"fileView", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKFileView;", nullptr, $PRIVATE, $field(GTKFileChooserUI, fileView)},
	{"gtkFCPropertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(GTKFileChooserUI, gtkFCPropertyChangeListener)},
	{"approveSelectionAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(GTKFileChooserUI, approveSelectionAction)},
	{"directoryListModel", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI$GTKDirectoryListModel;", nullptr, $PRIVATE, $field(GTKFileChooserUI, directoryListModel)},
	{}
};

$MethodInfo _GTKFileChooserUI_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC, $method(static_cast<void(GTKFileChooserUI::*)($JFileChooser*)>(&GTKFileChooserUI::init$))},
	{"access$000", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)Ljavax/swing/Icon;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Icon*(*)(GTKFileChooserUI*)>(&GTKFileChooserUI::access$000))},
	{"access$100", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)Ljavax/swing/Icon;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Icon*(*)(GTKFileChooserUI*)>(&GTKFileChooserUI::access$100))},
	{"access$200", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;Z)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(GTKFileChooserUI*,bool)>(&GTKFileChooserUI::access$200))},
	{"access$300", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;Ljava/io/File;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(GTKFileChooserUI*,$File*)>(&GTKFileChooserUI::access$300))},
	{"access$400", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;Z)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(GTKFileChooserUI*,bool)>(&GTKFileChooserUI::access$400))},
	{"access$500", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;Z)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(GTKFileChooserUI*,bool)>(&GTKFileChooserUI::access$500))},
	{"access$600", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;Ljava/io/File;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(GTKFileChooserUI*,$File*)>(&GTKFileChooserUI::access$600))},
	{"access$700", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;Z)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(GTKFileChooserUI*,bool)>(&GTKFileChooserUI::access$700))},
	{"access$800", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)Z", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(GTKFileChooserUI*)>(&GTKFileChooserUI::access$800))},
	{"access$900", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)Ljava/io/File;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$File*(*)(GTKFileChooserUI*)>(&GTKFileChooserUI::access$900))},
	{"align", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"createActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PROTECTED},
	{"createDirectoryComboBoxModel", "(Ljavax/swing/JFileChooser;)Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI$DirectoryComboBoxModel;", nullptr, $PROTECTED},
	{"createDirectoryList", "()Ljavax/swing/JScrollPane;", nullptr, $PROTECTED},
	{"createDoubleClickListener", "(Ljavax/swing/JFileChooser;Ljavax/swing/JList;)Ljava/awt/event/MouseListener;", "(Ljavax/swing/JFileChooser;Ljavax/swing/JList<*>;)Ljava/awt/event/MouseListener;", $PROTECTED},
	{"createFilesList", "()Ljavax/swing/JScrollPane;", nullptr, $PROTECTED},
	{"createFilterComboBoxModel", "()Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI$FilterComboBoxModel;", nullptr, $PROTECTED},
	{"createFilterComboBoxRenderer", "()Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI$FilterComboBoxRenderer;", nullptr, $PROTECTED},
	{"createListSelectionListener", "(Ljavax/swing/JFileChooser;)Ljavax/swing/event/ListSelectionListener;", nullptr, $PUBLIC},
	{"createModel", "()V", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&GTKFileChooserUI::createUI))},
	{"doAccessoryChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doAncestorChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doControlButtonsChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doDirectoryChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doFileSelectionModeChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doMultiSelectionChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doSelectedFileChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"ensureFileIsVisible", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, $PUBLIC},
	{"getAccessoryPanel", "()Ljavax/swing/JPanel;", nullptr, $PUBLIC},
	{"getApproveSelectionAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getFileName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileView", "(Ljavax/swing/JFileChooser;)Ljavax/swing/filechooser/FileView;", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMnemonic", "(Ljava/lang/String;Ljava/util/Locale;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(GTKFileChooserUI::*)($String*,$Locale*)>(&GTKFileChooserUI::getMnemonic))},
	{"getModel", "()Ljavax/swing/plaf/basic/BasicDirectoryModel;", nullptr, $PUBLIC},
	{"getNewFolderAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installComponents", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installIcons", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installStrings", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"rescanCurrentDirectory", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"setDirectoryName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setFileName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"uninstallListeners", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"uninstallStrings", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateDefaultButton", "()V", nullptr, $PRIVATE, $method(static_cast<void(GTKFileChooserUI::*)()>(&GTKFileChooserUI::updateDefaultButton))},
	{}
};

$InnerClassInfo _GTKFileChooserUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$FilterComboBoxModel", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "FilterComboBoxModel", $PROTECTED},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$FilterComboBoxRenderer", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "FilterComboBoxRenderer", $PUBLIC},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$RenameFileAction", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "RenameFileAction", $PRIVATE},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKApproveSelectionAction", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "GTKApproveSelectionAction", $PRIVATE},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$NewFolderAction", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "NewFolderAction", $PRIVATE},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$DirectoryComboBoxAction", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "DirectoryComboBoxAction", $PROTECTED},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$DirectoryComboBoxModel", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "DirectoryComboBoxModel", $PROTECTED},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$DirectoryCellRenderer", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "DirectoryCellRenderer", $PROTECTED},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$FileCellRenderer", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "FileCellRenderer", $PROTECTED},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFileListModel", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "GTKFileListModel", $PROTECTED},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKDirectoryListModel", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "GTKDirectoryListModel", $PROTECTED},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKDirectoryModel", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "GTKDirectoryModel", $PRIVATE | $FINAL},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFCPropertyChangeListener", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "GTKFCPropertyChangeListener", $PRIVATE},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$SelectionListener", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "SelectionListener", $PROTECTED},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$DoubleClickListener", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "DoubleClickListener", 0},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFileView", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "GTKFileView", $PRIVATE},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$3", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$2", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GTKFileChooserUI_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI",
	"sun.swing.plaf.synth.SynthFileChooserUI",
	nullptr,
	_GTKFileChooserUI_FieldInfo_,
	_GTKFileChooserUI_MethodInfo_,
	nullptr,
	nullptr,
	_GTKFileChooserUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$FilterComboBoxModel,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$FilterComboBoxRenderer,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$RenameFileAction,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKApproveSelectionAction,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$NewFolderAction,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$DirectoryComboBoxAction,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$DirectoryComboBoxModel,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$DirectoryCellRenderer,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$FileCellRenderer,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFileListModel,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKDirectoryListModel,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKDirectoryModel,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFCPropertyChangeListener,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$SelectionListener,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$DoubleClickListener,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$GTKFileView,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$3,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$2,com.sun.java.swing.plaf.gtk.GTKFileChooserUI$1"
};

$Object* allocate$GTKFileChooserUI($Class* clazz) {
	return $of($alloc(GTKFileChooserUI));
}

$Dimension* GTKFileChooserUI::hstrut3 = nullptr;
$Dimension* GTKFileChooserUI::vstrut10 = nullptr;
$Dimension* GTKFileChooserUI::prefListSize = nullptr;
$Dimension* GTKFileChooserUI::PREF_SIZE = nullptr;
$Dimension* GTKFileChooserUI::ZERO_ACC_SIZE = nullptr;
$Dimension* GTKFileChooserUI::MAX_SIZE = nullptr;
$Insets* GTKFileChooserUI::buttonMargin = nullptr;

$File* GTKFileChooserUI::access$900(GTKFileChooserUI* x0) {
	$init(GTKFileChooserUI);
	return $nc(x0)->getDirectory();
}

bool GTKFileChooserUI::access$800(GTKFileChooserUI* x0) {
	$init(GTKFileChooserUI);
	return $nc(x0)->isDirectorySelected();
}

void GTKFileChooserUI::access$700(GTKFileChooserUI* x0, bool x1) {
	$init(GTKFileChooserUI);
	$nc(x0)->setDirectorySelected(x1);
}

void GTKFileChooserUI::access$600(GTKFileChooserUI* x0, $File* x1) {
	$init(GTKFileChooserUI);
	$nc(x0)->setDirectory(x1);
}

void GTKFileChooserUI::access$500(GTKFileChooserUI* x0, bool x1) {
	$init(GTKFileChooserUI);
	$nc(x0)->setDirectorySelected(x1);
}

void GTKFileChooserUI::access$400(GTKFileChooserUI* x0, bool x1) {
	$init(GTKFileChooserUI);
	$nc(x0)->setDirectorySelected(x1);
}

void GTKFileChooserUI::access$300(GTKFileChooserUI* x0, $File* x1) {
	$init(GTKFileChooserUI);
	$nc(x0)->setDirectory(x1);
}

void GTKFileChooserUI::access$200(GTKFileChooserUI* x0, bool x1) {
	$init(GTKFileChooserUI);
	$nc(x0)->setDirectorySelected(x1);
}

$Icon* GTKFileChooserUI::access$100(GTKFileChooserUI* x0) {
	$init(GTKFileChooserUI);
	return $nc(x0)->fileIcon;
}

$Icon* GTKFileChooserUI::access$000(GTKFileChooserUI* x0) {
	$init(GTKFileChooserUI);
	return $nc(x0)->directoryIcon;
}

void GTKFileChooserUI::init$($JFileChooser* filechooser) {
	$SynthFileChooserUI::init$(filechooser);
	$set(this, accessoryPanel, nullptr);
	$set(this, newFolderButtonText, nullptr);
	$set(this, newFolderErrorSeparator, nullptr);
	$set(this, newFolderErrorText, nullptr);
	$set(this, newFolderDialogText, nullptr);
	$set(this, newFolderNoDirectoryErrorTitleText, nullptr);
	$set(this, newFolderNoDirectoryErrorText, nullptr);
	$set(this, deleteFileButtonText, nullptr);
	$set(this, renameFileButtonText, nullptr);
	$set(this, newFolderButtonToolTipText, nullptr);
	$set(this, deleteFileButtonToolTipText, nullptr);
	$set(this, renameFileButtonToolTipText, nullptr);
	this->newFolderButtonMnemonic = 0;
	this->deleteFileButtonMnemonic = 0;
	this->renameFileButtonMnemonic = 0;
	this->foldersLabelMnemonic = 0;
	this->filesLabelMnemonic = 0;
	$set(this, renameFileDialogText, nullptr);
	$set(this, renameFileErrorTitle, nullptr);
	$set(this, renameFileErrorText, nullptr);
	$set(this, filesLabelText, nullptr);
	$set(this, foldersLabelText, nullptr);
	$set(this, pathLabelText, nullptr);
	$set(this, filterLabelText, nullptr);
	this->pathLabelMnemonic = 0;
	this->filterLabelMnemonic = 0;
	$set(this, directoryComboBoxAction, $new($GTKFileChooserUI$DirectoryComboBoxAction, this));
	$set(this, model, nullptr);
	$set(this, fileView, $new($GTKFileChooserUI$GTKFileView, this));
	$set(this, approveSelectionAction, $new($GTKFileChooserUI$GTKApproveSelectionAction, this));
}

$ActionMap* GTKFileChooserUI::createActionMap() {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, map, $new($ActionMapUIResource));
	map->put("approveSelection"_s, $(getApproveSelectionAction()));
	map->put("cancelSelection"_s, $(getCancelSelectionAction()));
	map->put("Go Up"_s, $(getChangeToParentDirectoryAction()));
	map->put("fileNameCompletion"_s, $(getFileNameCompletionAction()));
	return map;
}

$String* GTKFileChooserUI::getFileName() {
	$useLocalCurrentObjectStackCache();
	$var($JFileChooser, fc, getFileChooser());
	$var($String, typedInName, this->fileNameTextField != nullptr ? $nc(this->fileNameTextField)->getText() : ($String*)nullptr);
	if (!$nc(fc)->isMultiSelectionEnabled()) {
		return typedInName;
	}
	int32_t mode = $nc(fc)->getFileSelectionMode();
	$var($JList, list, mode == $JFileChooser::DIRECTORIES_ONLY ? this->directoryList : this->fileList);
	$var($ObjectArray, files, $nc(list)->getSelectedValues());
	int32_t len = $nc(files)->length;
	$var($Vector, result, $new($Vector, len + 1));
	for (int32_t i = 0; i < len; ++i) {
		$var($File, file, $cast($File, files->get(i)));
		result->add($($nc(file)->getName()));
	}
	if (typedInName != nullptr && !result->contains(typedInName)) {
		result->add(typedInName);
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	len = result->size();
	for (int32_t i = 0; i < len; ++i) {
		if (i > 0) {
			sb->append(" "_s);
		}
		if (len > 1) {
			sb->append("\""_s);
		}
		sb->append($cast($String, $(result->get(i))));
		if (len > 1) {
			sb->append("\""_s);
		}
	}
	return sb->toString();
}

void GTKFileChooserUI::setFileName($String* fileName) {
	if (this->fileNameTextField != nullptr) {
		$nc(this->fileNameTextField)->setText(fileName);
	}
}

void GTKFileChooserUI::setDirectoryName($String* dirname) {
	$nc(this->pathField)->setText(dirname);
}

void GTKFileChooserUI::ensureFileIsVisible($JFileChooser* fc, $File* f) {
}

void GTKFileChooserUI::rescanCurrentDirectory($JFileChooser* fc) {
	$nc($(getModel()))->validateFileCache();
}

$JPanel* GTKFileChooserUI::getAccessoryPanel() {
	return this->accessoryPanel;
}

$FileView* GTKFileChooserUI::getFileView($JFileChooser* fc) {
	return this->fileView;
}

void GTKFileChooserUI::updateDefaultButton() {
	$useLocalCurrentObjectStackCache();
	$var($JFileChooser, filechooser, getFileChooser());
	$var($JRootPane, root, $SwingUtilities::getRootPane(filechooser));
	if (root == nullptr) {
		return;
	}
	if ($nc(filechooser)->getControlButtonsAreShown()) {
		if ($nc(root)->getDefaultButton() == nullptr) {
			root->setDefaultButton($(getApproveButton(filechooser)));
			$nc($(getCancelButton(filechooser)))->setDefaultCapable(false);
		}
	} else if ($nc(root)->getDefaultButton() == getApproveButton(filechooser)) {
		root->setDefaultButton(nullptr);
	}
}

void GTKFileChooserUI::doSelectedFileChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$SynthFileChooserUI::doSelectedFileChanged(e);
	$var($File, f, $cast($File, $nc(e)->getNewValue()));
	if (f != nullptr) {
		setFileName($($nc($(getFileChooser()))->getName(f)));
	}
}

void GTKFileChooserUI::doDirectoryChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$nc(this->directoryList)->clearSelection();
	$var($ListSelectionModel, sm, $nc(this->directoryList)->getSelectionModel());
	if ($instanceOf($DefaultListSelectionModel, sm)) {
		$nc(($cast($DefaultListSelectionModel, sm)))->moveLeadSelectionIndex(0);
		$nc(sm)->setAnchorSelectionIndex(0);
	}
	$nc(this->fileList)->clearSelection();
	$assign(sm, $nc(this->fileList)->getSelectionModel());
	if ($instanceOf($DefaultListSelectionModel, sm)) {
		$nc(($cast($DefaultListSelectionModel, sm)))->moveLeadSelectionIndex(0);
		$nc(sm)->setAnchorSelectionIndex(0);
	}
	$var($File, currentDirectory, $nc($(getFileChooser()))->getCurrentDirectory());
	if (currentDirectory != nullptr) {
		try {
			setDirectoryName($($nc($($ShellFolder::getNormalizedFile($cast($File, $($nc(e)->getNewValue())))))->getPath()));
		} catch ($IOException& ioe) {
			setDirectoryName($($nc(($cast($File, $($nc(e)->getNewValue()))))->getAbsolutePath()));
		}
		bool var$0 = ($nc($(getFileChooser()))->getFileSelectionMode() == $JFileChooser::DIRECTORIES_ONLY);
		if (var$0 && !$nc($(getFileChooser()))->isMultiSelectionEnabled()) {
			setFileName($($nc(this->pathField)->getText()));
		}
		$nc(this->directoryComboBoxModel)->addItem(currentDirectory);
		$nc(this->directoryListModel)->directoryChanged();
	}
	$SynthFileChooserUI::doDirectoryChanged(e);
}

void GTKFileChooserUI::doAccessoryChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (getAccessoryPanel() != nullptr) {
		if ($nc(e)->getOldValue() != nullptr) {
			$nc($(getAccessoryPanel()))->remove($cast($JComponent, $(e->getOldValue())));
		}
		$var($JComponent, accessory, $cast($JComponent, $nc(e)->getNewValue()));
		if (accessory != nullptr) {
			$init($BorderLayout);
			$nc($(getAccessoryPanel()))->add(static_cast<$Component*>(accessory), $of($BorderLayout::CENTER));
			$nc($(getAccessoryPanel()))->setPreferredSize($(accessory->getPreferredSize()));
			$nc($(getAccessoryPanel()))->setMaximumSize(GTKFileChooserUI::MAX_SIZE);
		} else {
			$nc($(getAccessoryPanel()))->setPreferredSize(GTKFileChooserUI::ZERO_ACC_SIZE);
			$nc($(getAccessoryPanel()))->setMaximumSize(GTKFileChooserUI::ZERO_ACC_SIZE);
		}
	}
}

void GTKFileChooserUI::doFileSelectionModeChanged($PropertyChangeEvent* e) {
	$nc(this->directoryList)->clearSelection();
	$nc(this->rightPanel)->setVisible($nc(($cast($Integer, $($nc(e)->getNewValue()))))->intValue() != $JFileChooser::DIRECTORIES_ONLY);
	$SynthFileChooserUI::doFileSelectionModeChanged(e);
}

void GTKFileChooserUI::doMultiSelectionChanged($PropertyChangeEvent* e) {
	if ($nc($(getFileChooser()))->isMultiSelectionEnabled()) {
		$nc(this->fileList)->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	} else {
		$nc(this->fileList)->setSelectionMode($ListSelectionModel::SINGLE_SELECTION);
		$nc(this->fileList)->clearSelection();
	}
	$SynthFileChooserUI::doMultiSelectionChanged(e);
}

void GTKFileChooserUI::doControlButtonsChanged($PropertyChangeEvent* e) {
	$SynthFileChooserUI::doControlButtonsChanged(e);
	$var($JFileChooser, filechooser, getFileChooser());
	if ($nc(filechooser)->getControlButtonsAreShown()) {
		$init($BorderLayout);
		filechooser->add(static_cast<$Component*>(this->bottomButtonPanel), $of($BorderLayout::SOUTH));
	} else {
		filechooser->remove(static_cast<$Component*>(this->bottomButtonPanel));
	}
	updateDefaultButton();
}

void GTKFileChooserUI::doAncestorChanged($PropertyChangeEvent* e) {
	bool var$0 = $nc(e)->getOldValue() == nullptr;
	if (var$0 && e->getNewValue() != nullptr) {
		$nc(this->fileNameTextField)->selectAll();
		$nc(this->fileNameTextField)->requestFocus();
		updateDefaultButton();
	}
	$SynthFileChooserUI::doAncestorChanged(e);
}

$ListSelectionListener* GTKFileChooserUI::createListSelectionListener($JFileChooser* fc) {
	return $new($GTKFileChooserUI$SelectionListener, this);
}

$MouseListener* GTKFileChooserUI::createDoubleClickListener($JFileChooser* fc, $JList* list) {
	return $new($GTKFileChooserUI$DoubleClickListener, this, list);
}

$ComponentUI* GTKFileChooserUI::createUI($JComponent* c) {
	$init(GTKFileChooserUI);
	return $new(GTKFileChooserUI, $cast($JFileChooser, c));
}

void GTKFileChooserUI::installUI($JComponent* c) {
	$set(this, accessoryPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout, 10, 10))));
	$nc(this->accessoryPanel)->setName("GTKFileChooser.accessoryPanel"_s);
	$SynthFileChooserUI::installUI(c);
}

void GTKFileChooserUI::uninstallUI($JComponent* c) {
	$nc(c)->removePropertyChangeListener(this->filterComboBoxModel);
	$SynthFileChooserUI::uninstallUI(c);
	if (this->accessoryPanel != nullptr) {
		$nc(this->accessoryPanel)->removeAll();
	}
	$set(this, accessoryPanel, nullptr);
	$nc($(getFileChooser()))->removeAll();
}

void GTKFileChooserUI::installComponents($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$SynthFileChooserUI::installComponents(fc);
	bool leftToRight = $nc($($nc(fc)->getComponentOrientation()))->isLeftToRight();
	fc->setLayout($$new($BorderLayout));
	$init($JComponent);
	fc->setAlignmentX($JComponent::CENTER_ALIGNMENT);
	$var($JPanel, topButtonPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout, $FlowLayout::LEADING, 0, 0))));
	topButtonPanel->setBorder($$new($EmptyBorder, 10, 10, 0, 10));
	topButtonPanel->setName("GTKFileChooser.topButtonPanel"_s);
	if (!$UIManager::getBoolean("FileChooser.readOnly"_s)) {
		$var($JButton, newFolderButton, $new($JButton, $(getNewFolderAction())));
		newFolderButton->setName("GTKFileChooser.newFolderButton"_s);
		newFolderButton->setMnemonic(this->newFolderButtonMnemonic);
		newFolderButton->setToolTipText(this->newFolderButtonToolTipText);
		newFolderButton->setText(this->newFolderButtonText);
		topButtonPanel->add(static_cast<$Component*>(newFolderButton));
	}
	$var($JButton, deleteFileButton, $new($JButton, this->deleteFileButtonText));
	deleteFileButton->setName("GTKFileChooser.deleteFileButton"_s);
	deleteFileButton->setMnemonic(this->deleteFileButtonMnemonic);
	deleteFileButton->setToolTipText(this->deleteFileButtonToolTipText);
	deleteFileButton->setEnabled(false);
	topButtonPanel->add(static_cast<$Component*>(deleteFileButton));
	$var($GTKFileChooserUI$RenameFileAction, rfa, $new($GTKFileChooserUI$RenameFileAction, this));
	$var($JButton, renameFileButton, $new($JButton, static_cast<$Action*>(rfa)));
	if (this->readOnly) {
		rfa->setEnabled(false);
	}
	renameFileButton->setText(this->renameFileButtonText);
	renameFileButton->setName("GTKFileChooser.renameFileButton"_s);
	renameFileButton->setMnemonic(this->renameFileButtonMnemonic);
	renameFileButton->setToolTipText(this->renameFileButtonToolTipText);
	topButtonPanel->add(static_cast<$Component*>(renameFileButton));
	$init($BorderLayout);
	fc->add(static_cast<$Component*>(topButtonPanel), $of($BorderLayout::NORTH));
	$var($JPanel, interior, $new($JPanel));
	interior->setBorder($$new($EmptyBorder, 0, 10, 10, 10));
	interior->setName("GTKFileChooser.interiorPanel"_s);
	align(interior);
	interior->setLayout($$new($BoxLayout, interior, $BoxLayout::PAGE_AXIS));
	fc->add(static_cast<$Component*>(interior), $of($BorderLayout::CENTER));
	$var($JPanel, comboBoxPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($GTKFileChooserUI$1, this, $FlowLayout::CENTER, 0, 0))));
	comboBoxPanel->setBorder($$new($EmptyBorder, 0, 0, 4, 0));
	comboBoxPanel->setName("GTKFileChooser.directoryComboBoxPanel"_s);
	$set(this, directoryComboBoxModel, createDirectoryComboBoxModel(fc));
	$set(this, directoryComboBox, $new($JComboBox, static_cast<$ComboBoxModel*>(this->directoryComboBoxModel)));
	$nc(this->directoryComboBox)->setName("GTKFileChooser.directoryComboBox"_s);
	$nc(this->directoryComboBox)->putClientProperty("JComboBox.lightweightKeyboardNavigation"_s, "Lightweight"_s);
	$nc(this->directoryComboBox)->addActionListener(this->directoryComboBoxAction);
	$nc(this->directoryComboBox)->setMaximumRowCount(8);
	comboBoxPanel->add(static_cast<$Component*>(this->directoryComboBox));
	interior->add(static_cast<$Component*>(comboBoxPanel));
	$var($JPanel, centerPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	centerPanel->setName("GTKFileChooser.centerPanel"_s);
	$var($JSplitPane, splitPanel, $new($JSplitPane));
	splitPanel->setName("GTKFileChooser.splitPanel"_s);
	splitPanel->setDividerLocation(($nc(GTKFileChooserUI::PREF_SIZE)->width - 8) / 2);
	$var($JPanel, leftPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($GridBagLayout))));
	leftPanel->setName("GTKFileChooser.directoryListPanel"_s);
	$var($TableCellRenderer, headerRenderer, $$new($JTableHeader)->getDefaultRenderer());
	$var($JLabel, directoryListLabel, $cast($JLabel, $nc(headerRenderer)->getTableCellRendererComponent(nullptr, this->foldersLabelText, false, false, 0, 0)));
	$nc(directoryListLabel)->setName("GTKFileChooser.directoryListLabel"_s);
	leftPanel->add(static_cast<$Component*>(directoryListLabel), $of($$new($GridBagConstraints, 0, 0, 1, 1, (double)1, (double)0, $GridBagConstraints::WEST, $GridBagConstraints::HORIZONTAL, $$new($Insets, 0, 0, 0, 0), 0, 0)));
	$var($Component, var$0, static_cast<$Component*>(createDirectoryList()));
	leftPanel->add(var$0, $of($$new($GridBagConstraints, 0, 1, 1, 1, (double)1, (double)1, $GridBagConstraints::EAST, $GridBagConstraints::BOTH, $$new($Insets, 0, 0, 0, 0), 0, 0)));
	directoryListLabel->setDisplayedMnemonic(this->foldersLabelMnemonic);
	directoryListLabel->setLabelFor(this->directoryList);
	$set(this, rightPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($GridBagLayout))));
	$nc(this->rightPanel)->setName("GTKFileChooser.fileListPanel"_s);
	$assign(headerRenderer, $$new($JTableHeader)->getDefaultRenderer());
	$var($JLabel, fileListLabel, $cast($JLabel, headerRenderer->getTableCellRendererComponent(nullptr, this->filesLabelText, false, false, 0, 0)));
	$nc(fileListLabel)->setName("GTKFileChooser.fileListLabel"_s);
	$nc(this->rightPanel)->add(static_cast<$Component*>(fileListLabel), $of($$new($GridBagConstraints, 0, 0, 1, 1, (double)1, (double)0, $GridBagConstraints::WEST, $GridBagConstraints::HORIZONTAL, $$new($Insets, 0, 0, 0, 0), 0, 0)));
	$var($Component, var$1, static_cast<$Component*>(createFilesList()));
	$nc(this->rightPanel)->add(var$1, $of($$new($GridBagConstraints, 0, 1, 1, 1, (double)1, (double)1, $GridBagConstraints::EAST, $GridBagConstraints::BOTH, $$new($Insets, 0, 0, 0, 0), 0, 0)));
	fileListLabel->setDisplayedMnemonic(this->filesLabelMnemonic);
	fileListLabel->setLabelFor(this->fileList);
	splitPanel->add(static_cast<$Component*>(leftPanel), leftToRight ? $of($JSplitPane::LEFT) : $of($JSplitPane::RIGHT));
	splitPanel->add(static_cast<$Component*>(this->rightPanel), leftToRight ? $of($JSplitPane::RIGHT) : $of($JSplitPane::LEFT));
	centerPanel->add(static_cast<$Component*>(splitPanel), $of($BorderLayout::CENTER));
	$var($JComponent, accessoryPanel, getAccessoryPanel());
	$var($JComponent, accessory, fc->getAccessory());
	if (accessoryPanel != nullptr) {
		if (accessory == nullptr) {
			accessoryPanel->setPreferredSize(GTKFileChooserUI::ZERO_ACC_SIZE);
			accessoryPanel->setMaximumSize(GTKFileChooserUI::ZERO_ACC_SIZE);
		} else {
			$nc($(getAccessoryPanel()))->add(static_cast<$Component*>(accessory), $of($BorderLayout::CENTER));
			accessoryPanel->setPreferredSize($($nc(accessory)->getPreferredSize()));
			accessoryPanel->setMaximumSize(GTKFileChooserUI::MAX_SIZE);
		}
		align(accessoryPanel);
		centerPanel->add(static_cast<$Component*>(accessoryPanel), $of($BorderLayout::AFTER_LINE_ENDS));
	}
	interior->add(static_cast<$Component*>(centerPanel));
	interior->add($($Box::createRigidArea(GTKFileChooserUI::vstrut10)));
	$var($JPanel, pathFieldPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout, $FlowLayout::LEADING, 0, 0))));
	pathFieldPanel->setBorder($$new($EmptyBorder, 0, 0, 4, 0));
	$var($JLabel, pathFieldLabel, $new($JLabel, this->pathLabelText));
	pathFieldLabel->setName("GTKFileChooser.pathFieldLabel"_s);
	pathFieldLabel->setDisplayedMnemonic(this->pathLabelMnemonic);
	align(pathFieldLabel);
	pathFieldPanel->add(static_cast<$Component*>(pathFieldLabel));
	pathFieldPanel->add($($Box::createRigidArea(GTKFileChooserUI::hstrut3)));
	$var($File, currentDirectory, fc->getCurrentDirectory());
	$var($String, curDirName, nullptr);
	if (currentDirectory != nullptr) {
		$assign(curDirName, currentDirectory->getPath());
	}
	$var($JLabel, tmp, $new($GTKFileChooserUI$2, this, curDirName));
	$set(this, pathField, tmp);
	$nc(this->pathField)->setName("GTKFileChooser.pathField"_s);
	align(this->pathField);
	pathFieldPanel->add(static_cast<$Component*>(this->pathField));
	interior->add(static_cast<$Component*>(pathFieldPanel));
	$var($JTextField, tmp2, $new($GTKFileChooserUI$3, this));
	$set(this, fileNameTextField, tmp2);
	pathFieldLabel->setLabelFor(this->fileNameTextField);
	$var($Set, forwardTraversalKeys, $nc(this->fileNameTextField)->getFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS));
	$assign(forwardTraversalKeys, $new($HashSet, static_cast<$Collection*>(forwardTraversalKeys)));
	forwardTraversalKeys->remove($($KeyStroke::getKeyStroke($KeyEvent::VK_TAB, 0)));
	$nc(this->fileNameTextField)->setFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS, forwardTraversalKeys);
	$nc(this->fileNameTextField)->setName("GTKFileChooser.fileNameTextField"_s);
	$nc($($nc(this->fileNameTextField)->getActionMap()))->put("fileNameCompletionAction"_s, $(getFileNameCompletionAction()));
	$nc($($nc(this->fileNameTextField)->getInputMap()))->put($($KeyStroke::getKeyStroke($KeyEvent::VK_TAB, 0)), "fileNameCompletionAction"_s);
	interior->add(static_cast<$Component*>(this->fileNameTextField));
	$var($JPanel, panel, $new($JPanel));
	panel->setLayout($$new($FlowLayout, $FlowLayout::LEADING, 0, 0));
	panel->setBorder($$new($EmptyBorder, 0, 0, 4, 0));
	$var($JLabel, filterLabel, $new($JLabel, this->filterLabelText));
	filterLabel->setName("GTKFileChooser.filterLabel"_s);
	filterLabel->setDisplayedMnemonic(this->filterLabelMnemonic);
	panel->add(static_cast<$Component*>(filterLabel));
	$set(this, filterComboBoxModel, createFilterComboBoxModel());
	fc->addPropertyChangeListener(this->filterComboBoxModel);
	$set(this, filterComboBox, $new($JComboBox, static_cast<$ComboBoxModel*>(this->filterComboBoxModel)));
	$nc(this->filterComboBox)->setRenderer($(createFilterComboBoxRenderer()));
	filterLabel->setLabelFor(this->filterComboBox);
	interior->add($($Box::createRigidArea(GTKFileChooserUI::vstrut10)));
	interior->add(static_cast<$Component*>(panel));
	interior->add(static_cast<$Component*>(this->filterComboBox));
	$set(this, bottomButtonPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($FlowLayout, $FlowLayout::TRAILING))));
	$nc(this->bottomButtonPanel)->setName("GTKFileChooser.bottomButtonPanel"_s);
	align(this->bottomButtonPanel);
	$var($JPanel, pnButtons, $new($JPanel, static_cast<$LayoutManager*>($$new($GridLayout, 1, 2, 5, 0))));
	$var($JButton, cancelButton, getCancelButton(fc));
	align(cancelButton);
	$nc(cancelButton)->setMargin(GTKFileChooserUI::buttonMargin);
	pnButtons->add(static_cast<$Component*>(cancelButton));
	$var($JButton, approveButton, getApproveButton(fc));
	align(approveButton);
	$nc(approveButton)->setMargin(GTKFileChooserUI::buttonMargin);
	pnButtons->add(static_cast<$Component*>(approveButton));
	$nc(this->bottomButtonPanel)->add(static_cast<$Component*>(pnButtons));
	if (fc->getControlButtonsAreShown()) {
		fc->add(static_cast<$Component*>(this->bottomButtonPanel), $of($BorderLayout::SOUTH));
	}
}

void GTKFileChooserUI::installListeners($JFileChooser* fc) {
	$SynthFileChooserUI::installListeners(fc);
	$set(this, gtkFCPropertyChangeListener, $new($GTKFileChooserUI$GTKFCPropertyChangeListener, this));
	$nc(fc)->addPropertyChangeListener(this->gtkFCPropertyChangeListener);
}

int32_t GTKFileChooserUI::getMnemonic($String* key, $Locale* l) {
	return $SwingUtilities2::getUIDefaultsInt($of(key), l);
}

void GTKFileChooserUI::uninstallListeners($JFileChooser* fc) {
	$SynthFileChooserUI::uninstallListeners(fc);
	if (this->gtkFCPropertyChangeListener != nullptr) {
		$nc(fc)->removePropertyChangeListener(this->gtkFCPropertyChangeListener);
	}
}

void GTKFileChooserUI::installDefaults($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$SynthFileChooserUI::installDefaults(fc);
	this->readOnly = $UIManager::getBoolean("FileChooser.readOnly"_s);
	$init($Boolean);
	this->showDirectoryIcons = $nc($Boolean::TRUE)->equals($($nc(fc)->getClientProperty("GTKFileChooser.showDirectoryIcons"_s)));
	this->showFileIcons = $nc($Boolean::TRUE)->equals($($nc(fc)->getClientProperty("GTKFileChooser.showFileIcons"_s)));
}

void GTKFileChooserUI::installIcons($JFileChooser* fc) {
	$set(this, directoryIcon, $UIManager::getIcon("FileView.directoryIcon"_s));
	$set(this, fileIcon, $UIManager::getIcon("FileView.fileIcon"_s));
}

void GTKFileChooserUI::installStrings($JFileChooser* fc) {
	$SynthFileChooserUI::installStrings(fc);
	$var($Locale, l, $nc(fc)->getLocale());
	$set(this, newFolderDialogText, $UIManager::getString($of("FileChooser.newFolderDialogText"_s), l));
	$set(this, newFolderErrorText, $UIManager::getString($of("FileChooser.newFolderErrorText"_s), l));
	$set(this, newFolderErrorSeparator, $UIManager::getString($of("FileChooser.newFolderErrorSeparator"_s), l));
	$set(this, newFolderButtonText, $UIManager::getString($of("FileChooser.newFolderButtonText"_s), l));
	$set(this, newFolderNoDirectoryErrorTitleText, $UIManager::getString($of("FileChooser.newFolderNoDirectoryErrorTitleText"_s), l));
	$set(this, newFolderNoDirectoryErrorText, $UIManager::getString($of("FileChooser.newFolderNoDirectoryErrorText"_s), l));
	$set(this, deleteFileButtonText, $UIManager::getString($of("FileChooser.deleteFileButtonText"_s), l));
	$set(this, renameFileButtonText, $UIManager::getString($of("FileChooser.renameFileButtonText"_s), l));
	this->newFolderButtonMnemonic = getMnemonic("FileChooser.newFolderButtonMnemonic"_s, l);
	this->deleteFileButtonMnemonic = getMnemonic("FileChooser.deleteFileButtonMnemonic"_s, l);
	this->renameFileButtonMnemonic = getMnemonic("FileChooser.renameFileButtonMnemonic"_s, l);
	$set(this, newFolderButtonToolTipText, $UIManager::getString($of("FileChooser.newFolderButtonToolTipText"_s), l));
	$set(this, deleteFileButtonToolTipText, $UIManager::getString($of("FileChooser.deleteFileButtonToolTipText"_s), l));
	$set(this, renameFileButtonToolTipText, $UIManager::getString($of("FileChooser.renameFileButtonToolTipText"_s), l));
	$set(this, renameFileDialogText, $UIManager::getString($of("FileChooser.renameFileDialogText"_s), l));
	$set(this, renameFileErrorTitle, $UIManager::getString($of("FileChooser.renameFileErrorTitle"_s), l));
	$set(this, renameFileErrorText, $UIManager::getString($of("FileChooser.renameFileErrorText"_s), l));
	$set(this, foldersLabelText, $UIManager::getString($of("FileChooser.foldersLabelText"_s), l));
	this->foldersLabelMnemonic = getMnemonic("FileChooser.foldersLabelMnemonic"_s, l);
	$set(this, filesLabelText, $UIManager::getString($of("FileChooser.filesLabelText"_s), l));
	this->filesLabelMnemonic = getMnemonic("FileChooser.filesLabelMnemonic"_s, l);
	$set(this, pathLabelText, $UIManager::getString($of("FileChooser.pathLabelText"_s), l));
	this->pathLabelMnemonic = getMnemonic("FileChooser.pathLabelMnemonic"_s, l);
	$set(this, filterLabelText, $UIManager::getString($of("FileChooser.filterLabelText"_s), l));
	this->filterLabelMnemonic = $UIManager::getInt("FileChooser.filterLabelMnemonic"_s);
}

void GTKFileChooserUI::uninstallStrings($JFileChooser* fc) {
	$SynthFileChooserUI::uninstallStrings(fc);
	$set(this, newFolderButtonText, nullptr);
	$set(this, deleteFileButtonText, nullptr);
	$set(this, renameFileButtonText, nullptr);
	$set(this, newFolderButtonToolTipText, nullptr);
	$set(this, deleteFileButtonToolTipText, nullptr);
	$set(this, renameFileButtonToolTipText, nullptr);
	$set(this, renameFileDialogText, nullptr);
	$set(this, renameFileErrorTitle, nullptr);
	$set(this, renameFileErrorText, nullptr);
	$set(this, foldersLabelText, nullptr);
	$set(this, filesLabelText, nullptr);
	$set(this, pathLabelText, nullptr);
	$set(this, newFolderDialogText, nullptr);
	$set(this, newFolderErrorText, nullptr);
	$set(this, newFolderErrorSeparator, nullptr);
}

$JScrollPane* GTKFileChooserUI::createFilesList() {
	$useLocalCurrentObjectStackCache();
	$set(this, fileList, $new($JList));
	$nc(this->fileList)->setName("GTKFileChooser.fileList"_s);
	$init($AccessibleContext);
	$nc(this->fileList)->putClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY, this->filesLabelText);
	if ($nc($(getFileChooser()))->isMultiSelectionEnabled()) {
		$nc(this->fileList)->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	} else {
		$nc(this->fileList)->setSelectionMode($ListSelectionModel::SINGLE_SELECTION);
	}
	$nc(this->fileList)->setModel($$new($GTKFileChooserUI$GTKFileListModel, this));
	$nc($($nc(this->fileList)->getSelectionModel()))->removeSelectionInterval(0, 0);
	$nc(this->fileList)->setCellRenderer($$new($GTKFileChooserUI$FileCellRenderer, this));
	$nc(this->fileList)->addListSelectionListener($(createListSelectionListener($(getFileChooser()))));
	$nc(this->fileList)->addMouseListener($(createDoubleClickListener($(getFileChooser()), this->fileList)));
	align(this->fileList);
	$var($JScrollPane, scrollpane, $new($JScrollPane, this->fileList));
	scrollpane->setVerticalScrollBarPolicy($JScrollPane::VERTICAL_SCROLLBAR_ALWAYS);
	scrollpane->setName("GTKFileChooser.fileListScrollPane"_s);
	scrollpane->setPreferredSize(GTKFileChooserUI::prefListSize);
	scrollpane->setMaximumSize(GTKFileChooserUI::MAX_SIZE);
	align(scrollpane);
	return scrollpane;
}

$JScrollPane* GTKFileChooserUI::createDirectoryList() {
	$useLocalCurrentObjectStackCache();
	$set(this, directoryList, $new($JList));
	$nc(this->directoryList)->setName("GTKFileChooser.directoryList"_s);
	$init($AccessibleContext);
	$nc(this->directoryList)->putClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY, this->foldersLabelText);
	align(this->directoryList);
	$nc(this->directoryList)->setCellRenderer($$new($GTKFileChooserUI$DirectoryCellRenderer, this));
	$set(this, directoryListModel, $new($GTKFileChooserUI$GTKDirectoryListModel, this));
	$nc($($nc(this->directoryList)->getSelectionModel()))->removeSelectionInterval(0, 0);
	$nc(this->directoryList)->setModel(this->directoryListModel);
	$nc(this->directoryList)->addMouseListener($(createDoubleClickListener($(getFileChooser()), this->directoryList)));
	$nc(this->directoryList)->addListSelectionListener($(createListSelectionListener($(getFileChooser()))));
	$var($JScrollPane, scrollpane, $new($JScrollPane, this->directoryList));
	scrollpane->setVerticalScrollBarPolicy($JScrollPane::VERTICAL_SCROLLBAR_ALWAYS);
	scrollpane->setName("GTKFileChooser.directoryListScrollPane"_s);
	scrollpane->setMaximumSize(GTKFileChooserUI::MAX_SIZE);
	scrollpane->setPreferredSize(GTKFileChooserUI::prefListSize);
	align(scrollpane);
	return scrollpane;
}

void GTKFileChooserUI::createModel() {
	$set(this, model, $new($GTKFileChooserUI$GTKDirectoryModel, this));
}

$BasicDirectoryModel* GTKFileChooserUI::getModel() {
	return this->model;
}

$Action* GTKFileChooserUI::getApproveSelectionAction() {
	return this->approveSelectionAction;
}

$Dimension* GTKFileChooserUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, prefSize, $new($Dimension, GTKFileChooserUI::PREF_SIZE));
	$var($JComponent, accessory, $nc($(getFileChooser()))->getAccessory());
	if (accessory != nullptr) {
		prefSize->width += $nc($(accessory->getPreferredSize()))->width + 20;
	}
	$var($Dimension, d, $nc($($nc(c)->getLayout()))->preferredLayoutSize(c));
	if (d != nullptr) {
		return $new($Dimension, d->width < prefSize->width ? prefSize->width : d->width, d->height < prefSize->height ? prefSize->height : d->height);
	} else {
		return prefSize;
	}
}

$Dimension* GTKFileChooserUI::getMinimumSize($JComponent* x) {
	return $new($Dimension, GTKFileChooserUI::MIN_WIDTH, GTKFileChooserUI::MIN_HEIGHT);
}

$Dimension* GTKFileChooserUI::getMaximumSize($JComponent* x) {
	return $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

void GTKFileChooserUI::align($JComponent* c) {
	$init($JComponent);
	$nc(c)->setAlignmentX($JComponent::LEFT_ALIGNMENT);
	c->setAlignmentY($JComponent::TOP_ALIGNMENT);
}

$Action* GTKFileChooserUI::getNewFolderAction() {
	if (this->newFolderAction == nullptr) {
		$set(this, newFolderAction, $new($GTKFileChooserUI$NewFolderAction, this));
		$nc(this->newFolderAction)->setEnabled(!this->readOnly);
	}
	return this->newFolderAction;
}

$GTKFileChooserUI$DirectoryComboBoxModel* GTKFileChooserUI::createDirectoryComboBoxModel($JFileChooser* fc) {
	return $new($GTKFileChooserUI$DirectoryComboBoxModel, this);
}

$GTKFileChooserUI$FilterComboBoxRenderer* GTKFileChooserUI::createFilterComboBoxRenderer() {
	return $new($GTKFileChooserUI$FilterComboBoxRenderer, this);
}

$GTKFileChooserUI$FilterComboBoxModel* GTKFileChooserUI::createFilterComboBoxModel() {
	return $new($GTKFileChooserUI$FilterComboBoxModel, this);
}

void clinit$GTKFileChooserUI($Class* class$) {
	$assignStatic(GTKFileChooserUI::hstrut3, $new($Dimension, 3, 1));
	$assignStatic(GTKFileChooserUI::vstrut10, $new($Dimension, 1, 10));
	$assignStatic(GTKFileChooserUI::prefListSize, $new($Dimension, 75, 150));
	$assignStatic(GTKFileChooserUI::PREF_SIZE, $new($Dimension, 435, 360));
	$assignStatic(GTKFileChooserUI::ZERO_ACC_SIZE, $new($Dimension, 1, 1));
	$assignStatic(GTKFileChooserUI::MAX_SIZE, $new($Dimension, $Short::MAX_VALUE, $Short::MAX_VALUE));
	$assignStatic(GTKFileChooserUI::buttonMargin, $new($Insets, 3, 3, 3, 3));
}

GTKFileChooserUI::GTKFileChooserUI() {
}

$Class* GTKFileChooserUI::load$($String* name, bool initialize) {
	$loadClass(GTKFileChooserUI, name, initialize, &_GTKFileChooserUI_ClassInfo_, clinit$GTKFileChooserUI, allocate$GTKFileChooserUI);
	return class$;
}

$Class* GTKFileChooserUI::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com