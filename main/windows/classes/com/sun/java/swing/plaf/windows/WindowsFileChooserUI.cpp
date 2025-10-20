#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$10.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$11.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$12.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$13.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$2.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$3.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$4.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$5.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$6.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$7.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$8.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$9.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$DirectoryComboBoxAction.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$DirectoryComboBoxModel.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$DirectoryComboBoxRenderer.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$FilterComboBoxModel.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$FilterComboBoxRenderer.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$WindowsFileChooserUIAccessor.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$WindowsFileView.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/image/BufferedImage.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/Box.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JRadioButtonMenuItem.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/event/PopupMenuListener.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/filechooser/FileView.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FileChooserUI.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$BasicFileView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/swing/FilePane$FileChooserUIAccessor.h>
#include <sun/swing/FilePane.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/WindowsPlacesBar.h>
#include <jcpp.h>

#undef ACCESSIBLE_NAME_PROPERTY
#undef AFTER_LINE_ENDS
#undef BEFORE_LINE_BEGINS
#undef BLACK
#undef CENTER
#undef CENTER_ALIGNMENT
#undef DIRECTORIES_ONLY
#undef HI_RES_DISABLED_ICON_CLIENT_KEY
#undef LEFT_ALIGNMENT
#undef LINE_AXIS
#undef LIST_PREF_HEIGHT
#undef LIST_PREF_SIZE
#undef LIST_PREF_WIDTH
#undef MAX_VALUE
#undef MIN_HEIGHT
#undef MIN_WIDTH
#undef NORTH
#undef PAGE_AXIS
#undef PREF_HEIGHT
#undef PREF_SIZE
#undef PREF_WIDTH
#undef SAVE_DIALOG
#undef SOUTH
#undef TRAILING
#undef TRUE
#undef TYPE_INT_ARGB
#undef VIEWTYPE_DETAILS
#undef VIEWTYPE_LIST
#undef Y_AXIS

using $FileArray = $Array<::java::io::File>;
using $ActionArray = $Array<::javax::swing::Action>;
using $WindowsFileChooserUI$1 = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$1;
using $WindowsFileChooserUI$10 = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$10;
using $WindowsFileChooserUI$11 = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$11;
using $WindowsFileChooserUI$12 = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$12;
using $WindowsFileChooserUI$13 = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$13;
using $WindowsFileChooserUI$2 = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$2;
using $WindowsFileChooserUI$3 = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$3;
using $WindowsFileChooserUI$4 = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$4;
using $WindowsFileChooserUI$5 = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$5;
using $WindowsFileChooserUI$6 = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$6;
using $WindowsFileChooserUI$7 = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$7;
using $WindowsFileChooserUI$8 = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$8;
using $WindowsFileChooserUI$9 = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$9;
using $WindowsFileChooserUI$DirectoryComboBoxAction = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$DirectoryComboBoxAction;
using $WindowsFileChooserUI$DirectoryComboBoxModel = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$DirectoryComboBoxModel;
using $WindowsFileChooserUI$DirectoryComboBoxRenderer = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$DirectoryComboBoxRenderer;
using $WindowsFileChooserUI$FilterComboBoxModel = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$FilterComboBoxModel;
using $WindowsFileChooserUI$FilterComboBoxRenderer = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$FilterComboBoxRenderer;
using $WindowsFileChooserUI$WindowsFileChooserUIAccessor = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$WindowsFileChooserUIAccessor;
using $WindowsFileChooserUI$WindowsFileView = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$WindowsFileView;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusListener = ::java::awt::event::FocusListener;
using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyListener = ::java::awt::event::KeyListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $Box = ::javax::swing::Box;
using $BoxLayout = ::javax::swing::BoxLayout;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $ButtonModel = ::javax::swing::ButtonModel;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPanel = ::javax::swing::JPanel;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JRadioButtonMenuItem = ::javax::swing::JRadioButtonMenuItem;
using $JTextField = ::javax::swing::JTextField;
using $JToolBar = ::javax::swing::JToolBar;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $PopupMenuListener = ::javax::swing::event::PopupMenuListener;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $FileView = ::javax::swing::filechooser::FileView;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $FileChooserUI = ::javax::swing::plaf::FileChooserUI;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $BasicFileChooserUI$BasicFileView = ::javax::swing::plaf::basic::BasicFileChooserUI$BasicFileView;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$FileChooserUIAccessor = ::sun::swing::FilePane$FileChooserUIAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $WindowsPlacesBar = ::sun::swing::WindowsPlacesBar;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI_FieldInfo_[] = {
	{"centerPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, centerPanel)},
	{"lookInLabel", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, lookInLabel)},
	{"directoryComboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/io/File;>;", $PRIVATE, $field(WindowsFileChooserUI, directoryComboBox)},
	{"directoryComboBoxModel", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI$DirectoryComboBoxModel;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, directoryComboBoxModel)},
	{"directoryComboBoxAction", "Ljava/awt/event/ActionListener;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, directoryComboBoxAction)},
	{"filterComboBoxModel", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI$FilterComboBoxModel;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, filterComboBoxModel)},
	{"filenameTextField", "Ljavax/swing/JTextField;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, filenameTextField)},
	{"filePane", "Lsun/swing/FilePane;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, filePane)},
	{"placesBar", "Lsun/swing/WindowsPlacesBar;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, placesBar)},
	{"approveButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, approveButton)},
	{"cancelButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, cancelButton)},
	{"buttonPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, buttonPanel)},
	{"bottomPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, bottomPanel)},
	{"filterComboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljavax/swing/filechooser/FileFilter;>;", $PRIVATE, $field(WindowsFileChooserUI, filterComboBox)},
	{"hstrut10", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsFileChooserUI, hstrut10)},
	{"vstrut4", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsFileChooserUI, vstrut4)},
	{"vstrut6", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsFileChooserUI, vstrut6)},
	{"vstrut8", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsFileChooserUI, vstrut8)},
	{"shrinkwrap", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsFileChooserUI, shrinkwrap)},
	{"PREF_WIDTH", "I", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFileChooserUI, PREF_WIDTH)},
	{"PREF_HEIGHT", "I", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFileChooserUI, PREF_HEIGHT)},
	{"PREF_SIZE", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFileChooserUI, PREF_SIZE)},
	{"MIN_WIDTH", "I", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFileChooserUI, MIN_WIDTH)},
	{"MIN_HEIGHT", "I", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFileChooserUI, MIN_HEIGHT)},
	{"LIST_PREF_WIDTH", "I", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFileChooserUI, LIST_PREF_WIDTH)},
	{"LIST_PREF_HEIGHT", "I", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFileChooserUI, LIST_PREF_HEIGHT)},
	{"LIST_PREF_SIZE", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsFileChooserUI, LIST_PREF_SIZE)},
	{"lookInLabelMnemonic", "I", nullptr, $PRIVATE, $field(WindowsFileChooserUI, lookInLabelMnemonic)},
	{"lookInLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, lookInLabelText)},
	{"saveInLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, saveInLabelText)},
	{"fileNameLabelMnemonic", "I", nullptr, $PRIVATE, $field(WindowsFileChooserUI, fileNameLabelMnemonic)},
	{"fileNameLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, fileNameLabelText)},
	{"folderNameLabelMnemonic", "I", nullptr, $PRIVATE, $field(WindowsFileChooserUI, folderNameLabelMnemonic)},
	{"folderNameLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, folderNameLabelText)},
	{"filesOfTypeLabelMnemonic", "I", nullptr, $PRIVATE, $field(WindowsFileChooserUI, filesOfTypeLabelMnemonic)},
	{"filesOfTypeLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, filesOfTypeLabelText)},
	{"upFolderToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, upFolderToolTipText)},
	{"upFolderAccessibleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, upFolderAccessibleName)},
	{"newFolderToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, newFolderToolTipText)},
	{"newFolderAccessibleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, newFolderAccessibleName)},
	{"viewMenuButtonToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, viewMenuButtonToolTipText)},
	{"viewMenuButtonAccessibleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, viewMenuButtonAccessibleName)},
	{"fileView", "Ljavax/swing/plaf/basic/BasicFileChooserUI$BasicFileView;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, fileView)},
	{"fileNameLabel", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(WindowsFileChooserUI, fileNameLabel)},
	{"space", "I", nullptr, $STATIC | $FINAL, $constField(WindowsFileChooserUI, space)},
	{}
};

$MethodInfo _WindowsFileChooserUI_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsFileChooserUI::*)($JFileChooser*)>(&WindowsFileChooserUI::init$))},
	{"access$000", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;)Z", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(WindowsFileChooserUI*)>(&WindowsFileChooserUI::access$000))},
	{"access$100", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;)Ljava/io/File;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$File*(*)(WindowsFileChooserUI*)>(&WindowsFileChooserUI::access$100))},
	{"access$200", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;Ljavax/swing/JFileChooser;Ljavax/swing/JList;)Ljava/awt/event/MouseListener;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$MouseListener*(*)(WindowsFileChooserUI*,$JFileChooser*,$JList*)>(&WindowsFileChooserUI::access$200))},
	{"addControlButtons", "()V", nullptr, $PROTECTED},
	{"createActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PROTECTED},
	{"createDetailsView", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JPanel;", nullptr, $PROTECTED},
	{"createDirectoryComboBoxModel", "(Ljavax/swing/JFileChooser;)Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI$DirectoryComboBoxModel;", nullptr, $PROTECTED},
	{"createDirectoryComboBoxRenderer", "(Ljavax/swing/JFileChooser;)Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI$DirectoryComboBoxRenderer;", nullptr, $PROTECTED},
	{"createFilterComboBoxModel", "()Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI$FilterComboBoxModel;", nullptr, $PROTECTED},
	{"createFilterComboBoxRenderer", "()Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI$FilterComboBoxRenderer;", nullptr, $PROTECTED},
	{"createList", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JPanel;", nullptr, $PROTECTED},
	{"createListSelectionListener", "(Ljavax/swing/JFileChooser;)Ljavax/swing/event/ListSelectionListener;", nullptr, $PUBLIC},
	{"createPropertyChangeListener", "(Ljavax/swing/JFileChooser;)Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC},
	{"createToolButton", "(Ljavax/swing/Action;Ljavax/swing/Icon;Ljava/lang/String;Ljava/lang/String;)Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JButton*(*)($Action*,$Icon*,$String*,$String*)>(&WindowsFileChooserUI::createToolButton))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsFileChooserUI::createUI))},
	{"doAccessoryChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileChooserUI::*)($PropertyChangeEvent*)>(&WindowsFileChooserUI::doAccessoryChanged))},
	{"doApproveButtonMnemonicChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileChooserUI::*)($PropertyChangeEvent*)>(&WindowsFileChooserUI::doApproveButtonMnemonicChanged))},
	{"doApproveButtonTextChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileChooserUI::*)($PropertyChangeEvent*)>(&WindowsFileChooserUI::doApproveButtonTextChanged))},
	{"doControlButtonsChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileChooserUI::*)($PropertyChangeEvent*)>(&WindowsFileChooserUI::doControlButtonsChanged))},
	{"doDialogTypeChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileChooserUI::*)($PropertyChangeEvent*)>(&WindowsFileChooserUI::doDialogTypeChanged))},
	{"doDirectoryChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileChooserUI::*)($PropertyChangeEvent*)>(&WindowsFileChooserUI::doDirectoryChanged))},
	{"doFileSelectionModeChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileChooserUI::*)($PropertyChangeEvent*)>(&WindowsFileChooserUI::doFileSelectionModeChanged))},
	{"doFilterChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileChooserUI::*)($PropertyChangeEvent*)>(&WindowsFileChooserUI::doFilterChanged))},
	{"doSelectedFileChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileChooserUI::*)($PropertyChangeEvent*)>(&WindowsFileChooserUI::doSelectedFileChanged))},
	{"doSelectedFilesChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileChooserUI::*)($PropertyChangeEvent*)>(&WindowsFileChooserUI::doSelectedFilesChanged))},
	{"ensureFileIsVisible", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, $PUBLIC},
	{"fileNameString", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(WindowsFileChooserUI::*)($File*)>(&WindowsFileChooserUI::fileNameString))},
	{"fileNameString", "([Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(WindowsFileChooserUI::*)($FileArray*)>(&WindowsFileChooserUI::fileNameString))},
	{"getActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PROTECTED},
	{"getApproveButton", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"getBottomPanel", "()Ljavax/swing/JPanel;", nullptr, $PROTECTED},
	{"getButtonPanel", "()Ljavax/swing/JPanel;", nullptr, $PROTECTED},
	{"getDirectoryName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileView", "(Ljavax/swing/JFileChooser;)Ljavax/swing/filechooser/FileView;", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMnemonic", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/Integer;", nullptr, $PRIVATE, $method(static_cast<$Integer*(WindowsFileChooserUI::*)($String*,$Locale*)>(&WindowsFileChooserUI::getMnemonic))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installComponents", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"installListeners", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installStrings", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"populateFileNameLabel", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileChooserUI::*)()>(&WindowsFileChooserUI::populateFileNameLabel))},
	{"removeControlButtons", "()V", nullptr, $PROTECTED},
	{"rescanCurrentDirectory", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"setDirectoryName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setDirectorySelected", "(Z)V", nullptr, $PROTECTED},
	{"setFileName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"uninstallComponents", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateUseShellFolder", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsFileChooserUI::*)()>(&WindowsFileChooserUI::updateUseShellFolder))},
	{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsFileChooserUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$WindowsFileView", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "WindowsFileView", $PROTECTED},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxAction", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "DirectoryComboBoxAction", $PROTECTED},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$FilterComboBoxModel", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "FilterComboBoxModel", $PROTECTED},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$FilterComboBoxRenderer", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "FilterComboBoxRenderer", $PUBLIC},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxModel", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "DirectoryComboBoxModel", $PROTECTED},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$IndentIcon", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "IndentIcon", 0},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxRenderer", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "DirectoryComboBoxRenderer", 0},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$WindowsFileChooserUIAccessor", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "WindowsFileChooserUIAccessor", $PRIVATE},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$13", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$12", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$11", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$10", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$9", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$8", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$7", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$6", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$5", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$4", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$3", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$2", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileChooserUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
	"javax.swing.plaf.basic.BasicFileChooserUI",
	nullptr,
	_WindowsFileChooserUI_FieldInfo_,
	_WindowsFileChooserUI_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsFileChooserUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$WindowsFileView,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxAction,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$FilterComboBoxModel,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$FilterComboBoxRenderer,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxModel,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$IndentIcon,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxRenderer,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$WindowsFileChooserUIAccessor,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$13,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$12,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$11,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$10,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$9,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$8,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$7,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$6,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$5,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$5$1,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$4,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$3,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$2,com.sun.java.swing.plaf.windows.WindowsFileChooserUI$1"
};

$Object* allocate$WindowsFileChooserUI($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI));
}

$Dimension* WindowsFileChooserUI::hstrut10 = nullptr;
$Dimension* WindowsFileChooserUI::vstrut4 = nullptr;
$Dimension* WindowsFileChooserUI::vstrut6 = nullptr;
$Dimension* WindowsFileChooserUI::vstrut8 = nullptr;
$Insets* WindowsFileChooserUI::shrinkwrap = nullptr;
int32_t WindowsFileChooserUI::PREF_WIDTH = 0;
int32_t WindowsFileChooserUI::PREF_HEIGHT = 0;
$Dimension* WindowsFileChooserUI::PREF_SIZE = nullptr;
int32_t WindowsFileChooserUI::MIN_WIDTH = 0;
int32_t WindowsFileChooserUI::MIN_HEIGHT = 0;
int32_t WindowsFileChooserUI::LIST_PREF_WIDTH = 0;
int32_t WindowsFileChooserUI::LIST_PREF_HEIGHT = 0;
$Dimension* WindowsFileChooserUI::LIST_PREF_SIZE = nullptr;

$MouseListener* WindowsFileChooserUI::access$200(WindowsFileChooserUI* x0, $JFileChooser* x1, $JList* x2) {
	$init(WindowsFileChooserUI);
	return $nc(x0)->createDoubleClickListener(x1, x2);
}

$File* WindowsFileChooserUI::access$100(WindowsFileChooserUI* x0) {
	$init(WindowsFileChooserUI);
	return $nc(x0)->getDirectory();
}

bool WindowsFileChooserUI::access$000(WindowsFileChooserUI* x0) {
	$init(WindowsFileChooserUI);
	return $nc(x0)->isDirectorySelected();
}

void WindowsFileChooserUI::populateFileNameLabel() {
	if ($nc($(getFileChooser()))->getFileSelectionMode() == $JFileChooser::DIRECTORIES_ONLY) {
		$nc(this->fileNameLabel)->setText(this->folderNameLabelText);
		$nc(this->fileNameLabel)->setDisplayedMnemonic(this->folderNameLabelMnemonic);
	} else {
		$nc(this->fileNameLabel)->setText(this->fileNameLabelText);
		$nc(this->fileNameLabel)->setDisplayedMnemonic(this->fileNameLabelMnemonic);
	}
}

$ComponentUI* WindowsFileChooserUI::createUI($JComponent* c) {
	$init(WindowsFileChooserUI);
	return $new(WindowsFileChooserUI, $cast($JFileChooser, c));
}

void WindowsFileChooserUI::init$($JFileChooser* filechooser) {
	$BasicFileChooserUI::init$(filechooser);
	$set(this, directoryComboBoxAction, $new($WindowsFileChooserUI$DirectoryComboBoxAction, this));
	this->lookInLabelMnemonic = 0;
	$set(this, lookInLabelText, nullptr);
	$set(this, saveInLabelText, nullptr);
	this->fileNameLabelMnemonic = 0;
	$set(this, fileNameLabelText, nullptr);
	this->folderNameLabelMnemonic = 0;
	$set(this, folderNameLabelText, nullptr);
	this->filesOfTypeLabelMnemonic = 0;
	$set(this, filesOfTypeLabelText, nullptr);
	$set(this, upFolderToolTipText, nullptr);
	$set(this, upFolderAccessibleName, nullptr);
	$set(this, newFolderToolTipText, nullptr);
	$set(this, newFolderAccessibleName, nullptr);
	$set(this, viewMenuButtonToolTipText, nullptr);
	$set(this, viewMenuButtonAccessibleName, nullptr);
	$set(this, fileView, $new($WindowsFileChooserUI$WindowsFileView, this));
}

void WindowsFileChooserUI::installUI($JComponent* c) {
	$BasicFileChooserUI::installUI(c);
}

void WindowsFileChooserUI::uninstallComponents($JFileChooser* fc) {
	$nc(fc)->removeAll();
}

void WindowsFileChooserUI::installComponents($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$set(this, filePane, $new($FilePane, $$new($WindowsFileChooserUI$WindowsFileChooserUIAccessor, this)));
	$nc(fc)->addPropertyChangeListener(this->filePane);
	$var($FileSystemView, fsv, fc->getFileSystemView());
	fc->setBorder($$new($EmptyBorder, 4, 10, 10, 10));
	fc->setLayout($$new($BorderLayout, 8, 8));
	updateUseShellFolder();
	$var($JToolBar, topPanel, $new($JToolBar));
	topPanel->setFloatable(false);
	$init($Boolean);
	topPanel->putClientProperty("JToolBar.isRollover"_s, $Boolean::TRUE);
	$init($BorderLayout);
	fc->add(static_cast<$Component*>(topPanel), $of($BorderLayout::NORTH));
	$var($JLabel, tmp1, $new($WindowsFileChooserUI$1, this, this->lookInLabelText, $JLabel::TRAILING));
	$set(this, lookInLabel, tmp1);
	$nc(this->lookInLabel)->setDisplayedMnemonic(this->lookInLabelMnemonic);
	$init($JComponent);
	$nc(this->lookInLabel)->setAlignmentX($JComponent::LEFT_ALIGNMENT);
	$nc(this->lookInLabel)->setAlignmentY($JComponent::CENTER_ALIGNMENT);
	topPanel->add(static_cast<$Component*>(this->lookInLabel));
	topPanel->add($($Box::createRigidArea($$new($Dimension, 8, 0))));
	$var($JComboBox, tmp2, $new($WindowsFileChooserUI$2, this));
	$set(this, directoryComboBox, tmp2);
	$nc(this->directoryComboBox)->putClientProperty("JComboBox.lightweightKeyboardNavigation"_s, "Lightweight"_s);
	$nc(this->directoryComboBox)->putClientProperty("JComboBox.isTableCellEditor"_s, $Boolean::TRUE);
	$nc(this->lookInLabel)->setLabelFor(this->directoryComboBox);
	$set(this, directoryComboBoxModel, createDirectoryComboBoxModel(fc));
	$nc(this->directoryComboBox)->setModel(this->directoryComboBoxModel);
	$nc(this->directoryComboBox)->addActionListener(this->directoryComboBoxAction);
	$nc(this->directoryComboBox)->setRenderer($(createDirectoryComboBoxRenderer(fc)));
	$nc(this->directoryComboBox)->setAlignmentX($JComponent::LEFT_ALIGNMENT);
	$nc(this->directoryComboBox)->setAlignmentY($JComponent::CENTER_ALIGNMENT);
	$nc(this->directoryComboBox)->setMaximumRowCount(8);
	topPanel->add(static_cast<$Component*>(this->directoryComboBox));
	topPanel->add($($Box::createRigidArea(WindowsFileChooserUI::hstrut10)));
	$var($JButton, upFolderButton, createToolButton($(getChangeToParentDirectoryAction()), this->upFolderIcon, this->upFolderToolTipText, this->upFolderAccessibleName));
	topPanel->add(static_cast<$Component*>(upFolderButton));
	if (!$UIManager::getBoolean("FileChooser.readOnly"_s)) {
		$var($JButton, newFolderButton, createToolButton($($nc(this->filePane)->getNewFolderAction()), this->newFolderIcon, this->newFolderToolTipText, this->newFolderAccessibleName));
		topPanel->add(static_cast<$Component*>(newFolderButton));
	}
	$var($ButtonGroup, viewButtonGroup, $new($ButtonGroup));
	$var($JPopupMenu, viewTypePopupMenu, $new($JPopupMenu));
	$var($JRadioButtonMenuItem, listViewMenuItem, $new($JRadioButtonMenuItem, $($nc(this->filePane)->getViewTypeAction($FilePane::VIEWTYPE_LIST))));
	listViewMenuItem->setSelected($nc(this->filePane)->getViewType() == $FilePane::VIEWTYPE_LIST);
	viewTypePopupMenu->add(static_cast<$JMenuItem*>(listViewMenuItem));
	viewButtonGroup->add(listViewMenuItem);
	$var($JRadioButtonMenuItem, detailsViewMenuItem, $new($JRadioButtonMenuItem, $($nc(this->filePane)->getViewTypeAction($FilePane::VIEWTYPE_DETAILS))));
	detailsViewMenuItem->setSelected($nc(this->filePane)->getViewType() == $FilePane::VIEWTYPE_DETAILS);
	viewTypePopupMenu->add(static_cast<$JMenuItem*>(detailsViewMenuItem));
	viewButtonGroup->add(detailsViewMenuItem);
	int32_t var$0 = $nc(this->viewMenuIcon)->getIconWidth() + 7;
	$var($BufferedImage, image, $new($BufferedImage, var$0, $nc(this->viewMenuIcon)->getIconHeight(), $BufferedImage::TYPE_INT_ARGB));
	$var($Graphics, graphics, image->getGraphics());
	$nc(this->viewMenuIcon)->paintIcon(this->filePane, graphics, 0, 0);
	int32_t x = image->getWidth() - 5;
	int32_t y = image->getHeight() / 2 - 1;
	$init($Color);
	$nc(graphics)->setColor($Color::BLACK);
	graphics->fillPolygon($$new($ints, {
		x,
		x + 5,
		x + 2
	}), $$new($ints, {
		y,
		y,
		y + 3
	}), 3);
	$var($JButton, viewMenuButton, createToolButton(nullptr, $$new($ImageIcon, static_cast<$Image*>(image)), this->viewMenuButtonToolTipText, this->viewMenuButtonAccessibleName));
	$nc(viewMenuButton)->addMouseListener($$new($WindowsFileChooserUI$3, this, viewMenuButton, viewTypePopupMenu));
	viewMenuButton->addKeyListener($$new($WindowsFileChooserUI$4, this, viewMenuButton, viewTypePopupMenu));
	viewTypePopupMenu->addPopupMenuListener($$new($WindowsFileChooserUI$5, this, viewMenuButton));
	topPanel->add(static_cast<$Component*>(viewMenuButton));
	topPanel->add($($Box::createRigidArea($$new($Dimension, 80, 0))));
	$nc(this->filePane)->addPropertyChangeListener($$new($WindowsFileChooserUI$6, this, listViewMenuItem, detailsViewMenuItem));
	$set(this, centerPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$nc(this->centerPanel)->add($(static_cast<$Component*>(getAccessoryPanel())), $of($BorderLayout::AFTER_LINE_ENDS));
	$var($JComponent, accessory, fc->getAccessory());
	if (accessory != nullptr) {
		$nc($(getAccessoryPanel()))->add(static_cast<$Component*>(accessory));
	}
	$nc(this->filePane)->setPreferredSize(WindowsFileChooserUI::LIST_PREF_SIZE);
	$nc(this->centerPanel)->add(static_cast<$Component*>(this->filePane), $of($BorderLayout::CENTER));
	fc->add(static_cast<$Component*>(this->centerPanel), $of($BorderLayout::CENTER));
	$nc($(getBottomPanel()))->setLayout($$new($BoxLayout, $(getBottomPanel()), $BoxLayout::LINE_AXIS));
	$nc(this->centerPanel)->add($(static_cast<$Component*>(getBottomPanel())), $of($BorderLayout::SOUTH));
	$var($JPanel, labelPanel, $new($JPanel));
	labelPanel->setLayout($$new($BoxLayout, labelPanel, $BoxLayout::PAGE_AXIS));
	labelPanel->add($($Box::createRigidArea(WindowsFileChooserUI::vstrut4)));
	$set(this, fileNameLabel, $new($JLabel));
	populateFileNameLabel();
	$nc(this->fileNameLabel)->setAlignmentY((float)0);
	labelPanel->add(static_cast<$Component*>(this->fileNameLabel));
	labelPanel->add($($Box::createRigidArea($$new($Dimension, 1, 12))));
	$var($JLabel, ftl, $new($JLabel, this->filesOfTypeLabelText));
	ftl->setDisplayedMnemonic(this->filesOfTypeLabelMnemonic);
	labelPanel->add(static_cast<$Component*>(ftl));
	$nc($(getBottomPanel()))->add(static_cast<$Component*>(labelPanel));
	$nc($(getBottomPanel()))->add($($Box::createRigidArea($$new($Dimension, 15, 0))));
	$var($JPanel, fileAndFilterPanel, $new($JPanel));
	fileAndFilterPanel->add($($Box::createRigidArea(WindowsFileChooserUI::vstrut8)));
	fileAndFilterPanel->setLayout($$new($BoxLayout, fileAndFilterPanel, $BoxLayout::Y_AXIS));
	$var($JTextField, tmp3, $new($WindowsFileChooserUI$7, this, 35));
	$set(this, filenameTextField, tmp3);
	$nc(this->fileNameLabel)->setLabelFor(this->filenameTextField);
	$nc(this->filenameTextField)->addFocusListener($$new($WindowsFileChooserUI$8, this));
	if (fc->isMultiSelectionEnabled()) {
		setFileName($(fileNameString($(fc->getSelectedFiles()))));
	} else {
		setFileName($(fileNameString($(fc->getSelectedFile()))));
	}
	fileAndFilterPanel->add(static_cast<$Component*>(this->filenameTextField));
	fileAndFilterPanel->add($($Box::createRigidArea(WindowsFileChooserUI::vstrut8)));
	$set(this, filterComboBoxModel, createFilterComboBoxModel());
	fc->addPropertyChangeListener(this->filterComboBoxModel);
	$set(this, filterComboBox, $new($JComboBox, static_cast<$ComboBoxModel*>(this->filterComboBoxModel)));
	ftl->setLabelFor(this->filterComboBox);
	$nc(this->filterComboBox)->setRenderer($(createFilterComboBoxRenderer()));
	fileAndFilterPanel->add(static_cast<$Component*>(this->filterComboBox));
	$nc($(getBottomPanel()))->add(static_cast<$Component*>(fileAndFilterPanel));
	$nc($(getBottomPanel()))->add($($Box::createRigidArea($$new($Dimension, 30, 0))));
	$nc($(getButtonPanel()))->setLayout($$new($BoxLayout, $(getButtonPanel()), $BoxLayout::Y_AXIS));
	$var($JButton, tmp4, $new($WindowsFileChooserUI$9, this, $(getApproveButtonText(fc))));
	$set(this, approveButton, tmp4);
	$var($Insets, buttonMargin, $nc(this->approveButton)->getMargin());
	$assign(buttonMargin, $new($InsetsUIResource, $nc(buttonMargin)->top, buttonMargin->left + 5, buttonMargin->bottom, buttonMargin->right + 5));
	$nc(this->approveButton)->setMargin(buttonMargin);
	$nc(this->approveButton)->setMnemonic(getApproveButtonMnemonic(fc));
	$nc(this->approveButton)->addActionListener($(getApproveSelectionAction()));
	$nc(this->approveButton)->setToolTipText($(getApproveButtonToolTipText(fc)));
	$nc($(getButtonPanel()))->add($($Box::createRigidArea(WindowsFileChooserUI::vstrut6)));
	$nc($(getButtonPanel()))->add(static_cast<$Component*>(this->approveButton));
	$nc($(getButtonPanel()))->add($($Box::createRigidArea(WindowsFileChooserUI::vstrut4)));
	$var($JButton, tmp5, $new($WindowsFileChooserUI$10, this, this->cancelButtonText));
	$set(this, cancelButton, tmp5);
	$nc(this->cancelButton)->setMargin(buttonMargin);
	$nc(this->cancelButton)->setToolTipText(this->cancelButtonToolTipText);
	$nc(this->cancelButton)->addActionListener($(getCancelSelectionAction()));
	$nc($(getButtonPanel()))->add(static_cast<$Component*>(this->cancelButton));
	if (fc->getControlButtonsAreShown()) {
		addControlButtons();
	}
}

void WindowsFileChooserUI::updateUseShellFolder() {
	$var($JFileChooser, fc, getFileChooser());
	if ($FilePane::usesShellFolder(fc)) {
		if (this->placesBar == nullptr && !$UIManager::getBoolean("FileChooser.noPlacesBar"_s)) {
			$set(this, placesBar, $new($WindowsPlacesBar, fc, $XPStyle::getXP() != nullptr));
			$init($BorderLayout);
			$nc(fc)->add(static_cast<$Component*>(this->placesBar), $of($BorderLayout::BEFORE_LINE_BEGINS));
			fc->addPropertyChangeListener(this->placesBar);
		}
	} else if (this->placesBar != nullptr) {
		$nc(fc)->remove(static_cast<$Component*>(this->placesBar));
		fc->removePropertyChangeListener(this->placesBar);
		$set(this, placesBar, nullptr);
	}
}

$JPanel* WindowsFileChooserUI::getButtonPanel() {
	if (this->buttonPanel == nullptr) {
		$set(this, buttonPanel, $new($JPanel));
	}
	return this->buttonPanel;
}

$JPanel* WindowsFileChooserUI::getBottomPanel() {
	if (this->bottomPanel == nullptr) {
		$set(this, bottomPanel, $new($JPanel));
	}
	return this->bottomPanel;
}

void WindowsFileChooserUI::installStrings($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$BasicFileChooserUI::installStrings(fc);
	$var($Locale, l, $nc(fc)->getLocale());
	this->lookInLabelMnemonic = $nc($(getMnemonic("FileChooser.lookInLabelMnemonic"_s, l)))->intValue();
	$set(this, lookInLabelText, $UIManager::getString($of("FileChooser.lookInLabelText"_s), l));
	$set(this, saveInLabelText, $UIManager::getString($of("FileChooser.saveInLabelText"_s), l));
	this->fileNameLabelMnemonic = $nc($(getMnemonic("FileChooser.fileNameLabelMnemonic"_s, l)))->intValue();
	$set(this, fileNameLabelText, $UIManager::getString($of("FileChooser.fileNameLabelText"_s), l));
	this->folderNameLabelMnemonic = $nc($(getMnemonic("FileChooser.folderNameLabelMnemonic"_s, l)))->intValue();
	$set(this, folderNameLabelText, $UIManager::getString($of("FileChooser.folderNameLabelText"_s), l));
	this->filesOfTypeLabelMnemonic = $nc($(getMnemonic("FileChooser.filesOfTypeLabelMnemonic"_s, l)))->intValue();
	$set(this, filesOfTypeLabelText, $UIManager::getString($of("FileChooser.filesOfTypeLabelText"_s), l));
	$set(this, upFolderToolTipText, $UIManager::getString($of("FileChooser.upFolderToolTipText"_s), l));
	$set(this, upFolderAccessibleName, $UIManager::getString($of("FileChooser.upFolderAccessibleName"_s), l));
	$set(this, newFolderToolTipText, $UIManager::getString($of("FileChooser.newFolderToolTipText"_s), l));
	$set(this, newFolderAccessibleName, $UIManager::getString($of("FileChooser.newFolderAccessibleName"_s), l));
	$set(this, viewMenuButtonToolTipText, $UIManager::getString($of("FileChooser.viewMenuButtonToolTipText"_s), l));
	$set(this, viewMenuButtonAccessibleName, $UIManager::getString($of("FileChooser.viewMenuButtonAccessibleName"_s), l));
}

$Integer* WindowsFileChooserUI::getMnemonic($String* key, $Locale* l) {
	return $Integer::valueOf($SwingUtilities2::getUIDefaultsInt($of(key), l));
}

void WindowsFileChooserUI::installListeners($JFileChooser* fc) {
	$BasicFileChooserUI::installListeners(fc);
	$var($ActionMap, actionMap, getActionMap());
	$SwingUtilities::replaceUIActionMap(fc, actionMap);
}

$ActionMap* WindowsFileChooserUI::getActionMap() {
	return createActionMap();
}

$ActionMap* WindowsFileChooserUI::createActionMap() {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, map, $new($ActionMapUIResource));
	$FilePane::addActionsToMap(map, $($nc(this->filePane)->getActions()));
	return map;
}

$JPanel* WindowsFileChooserUI::createList($JFileChooser* fc) {
	return $nc(this->filePane)->createList();
}

$JPanel* WindowsFileChooserUI::createDetailsView($JFileChooser* fc) {
	return $nc(this->filePane)->createDetailsView();
}

$ListSelectionListener* WindowsFileChooserUI::createListSelectionListener($JFileChooser* fc) {
	return $BasicFileChooserUI::createListSelectionListener(fc);
}

void WindowsFileChooserUI::uninstallUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$nc(c)->removePropertyChangeListener(this->filterComboBoxModel);
	c->removePropertyChangeListener(this->filePane);
	if (this->placesBar != nullptr) {
		c->removePropertyChangeListener(this->placesBar);
	}
	$nc(this->cancelButton)->removeActionListener($(getCancelSelectionAction()));
	$nc(this->approveButton)->removeActionListener($(getApproveSelectionAction()));
	$nc(this->filenameTextField)->removeActionListener($(getApproveSelectionAction()));
	if (this->filePane != nullptr) {
		$nc(this->filePane)->uninstallUI();
		$set(this, filePane, nullptr);
	}
	$BasicFileChooserUI::uninstallUI(c);
}

$Dimension* WindowsFileChooserUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	int32_t prefWidth = $nc(WindowsFileChooserUI::PREF_SIZE)->width;
	$var($Dimension, d, $nc($($nc(c)->getLayout()))->preferredLayoutSize(c));
	if (d != nullptr) {
		return $new($Dimension, d->width < prefWidth ? prefWidth : d->width, d->height < $nc(WindowsFileChooserUI::PREF_SIZE)->height ? $nc(WindowsFileChooserUI::PREF_SIZE)->height : d->height);
	} else {
		return $new($Dimension, prefWidth, $nc(WindowsFileChooserUI::PREF_SIZE)->height);
	}
}

$Dimension* WindowsFileChooserUI::getMinimumSize($JComponent* c) {
	return $new($Dimension, WindowsFileChooserUI::MIN_WIDTH, WindowsFileChooserUI::MIN_HEIGHT);
}

$Dimension* WindowsFileChooserUI::getMaximumSize($JComponent* c) {
	return $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

$String* WindowsFileChooserUI::fileNameString($File* file) {
	$useLocalCurrentObjectStackCache();
	if (file == nullptr) {
		return nullptr;
	} else {
		$var($JFileChooser, fc, getFileChooser());
		bool var$1 = $nc(fc)->isDirectorySelectionEnabled();
		bool var$0 = (var$1 && !fc->isFileSelectionEnabled());
		if (!var$0) {
			bool var$3 = $nc(fc)->isDirectorySelectionEnabled();
			bool var$2 = var$3 && fc->isFileSelectionEnabled();
			var$0 = (var$2 && $nc($(fc->getFileSystemView()))->isFileSystemRoot(file));
		}
		if (var$0) {
			return $nc(file)->getPath();
		} else {
			return $nc(file)->getName();
		}
	}
}

$String* WindowsFileChooserUI::fileNameString($FileArray* files) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	for (int32_t i = 0; files != nullptr && i < files->length; ++i) {
		if (i > 0) {
			buf->append(" "_s);
		}
		if (files->length > 1) {
			buf->append("\""_s);
		}
		buf->append($(fileNameString(files->get(i))));
		if (files->length > 1) {
			buf->append("\""_s);
		}
	}
	return buf->toString();
}

void WindowsFileChooserUI::doSelectedFileChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
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
		setFileName($(fileNameString(f)));
	}
}

void WindowsFileChooserUI::doSelectedFilesChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($FileArray, files, $cast($FileArray, $nc(e)->getNewValue()));
	$var($JFileChooser, fc, getFileChooser());
	bool var$0 = files != nullptr && files->length > 0;
	if (var$0) {
		bool var$1 = files->length > 1 || $nc(fc)->isDirectorySelectionEnabled();
		var$0 = (var$1 || !$nc(files->get(0))->isDirectory());
	}
	if (var$0) {
		setFileName($(fileNameString(files)));
	}
}

void WindowsFileChooserUI::doDirectoryChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JFileChooser, fc, getFileChooser());
	$var($FileSystemView, fsv, $nc(fc)->getFileSystemView());
	clearIconCache();
	$var($File, currentDirectory, fc->getCurrentDirectory());
	if (currentDirectory != nullptr) {
		$nc(this->directoryComboBoxModel)->addItem(currentDirectory);
		bool var$0 = fc->isDirectorySelectionEnabled();
		if (var$0 && !fc->isFileSelectionEnabled()) {
			if ($nc(fsv)->isFileSystem(currentDirectory)) {
				setFileName($(currentDirectory->getPath()));
			} else {
				setFileName(nullptr);
			}
		}
	}
}

void WindowsFileChooserUI::doFilterChanged($PropertyChangeEvent* e) {
	clearIconCache();
}

void WindowsFileChooserUI::doFileSelectionModeChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->fileNameLabel != nullptr) {
		populateFileNameLabel();
	}
	clearIconCache();
	$var($JFileChooser, fc, getFileChooser());
	$var($File, currentDirectory, $nc(fc)->getCurrentDirectory());
	bool var$1 = currentDirectory != nullptr && fc->isDirectorySelectionEnabled();
	bool var$0 = var$1 && !fc->isFileSelectionEnabled();
	if (var$0 && $nc($(fc->getFileSystemView()))->isFileSystem(currentDirectory)) {
		setFileName($(currentDirectory->getPath()));
	} else {
		setFileName(nullptr);
	}
}

void WindowsFileChooserUI::doAccessoryChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (getAccessoryPanel() != nullptr) {
		if ($nc(e)->getOldValue() != nullptr) {
			$nc($(getAccessoryPanel()))->remove($cast($JComponent, $(e->getOldValue())));
		}
		$var($JComponent, accessory, $cast($JComponent, $nc(e)->getNewValue()));
		if (accessory != nullptr) {
			$init($BorderLayout);
			$nc($(getAccessoryPanel()))->add(static_cast<$Component*>(accessory), $of($BorderLayout::CENTER));
		}
	}
}

void WindowsFileChooserUI::doApproveButtonTextChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JFileChooser, chooser, getFileChooser());
	$nc(this->approveButton)->setText($(getApproveButtonText(chooser)));
	$nc(this->approveButton)->setToolTipText($(getApproveButtonToolTipText(chooser)));
	$nc(this->approveButton)->setMnemonic(getApproveButtonMnemonic(chooser));
}

void WindowsFileChooserUI::doDialogTypeChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JFileChooser, chooser, getFileChooser());
	$nc(this->approveButton)->setText($(getApproveButtonText(chooser)));
	$nc(this->approveButton)->setToolTipText($(getApproveButtonToolTipText(chooser)));
	$nc(this->approveButton)->setMnemonic(getApproveButtonMnemonic(chooser));
	if ($nc(chooser)->getDialogType() == $JFileChooser::SAVE_DIALOG) {
		$nc(this->lookInLabel)->setText(this->saveInLabelText);
	} else {
		$nc(this->lookInLabel)->setText(this->lookInLabelText);
	}
}

void WindowsFileChooserUI::doApproveButtonMnemonicChanged($PropertyChangeEvent* e) {
	$nc(this->approveButton)->setMnemonic(getApproveButtonMnemonic($(getFileChooser())));
}

void WindowsFileChooserUI::doControlButtonsChanged($PropertyChangeEvent* e) {
	if ($nc($(getFileChooser()))->getControlButtonsAreShown()) {
		addControlButtons();
	} else {
		removeControlButtons();
	}
}

$PropertyChangeListener* WindowsFileChooserUI::createPropertyChangeListener($JFileChooser* fc) {
	return $new($WindowsFileChooserUI$11, this);
}

void WindowsFileChooserUI::removeControlButtons() {
	$useLocalCurrentObjectStackCache();
	$nc($(getBottomPanel()))->remove($(static_cast<$Component*>(getButtonPanel())));
}

void WindowsFileChooserUI::addControlButtons() {
	$useLocalCurrentObjectStackCache();
	$nc($(getBottomPanel()))->add($(static_cast<$Component*>(getButtonPanel())));
}

void WindowsFileChooserUI::ensureFileIsVisible($JFileChooser* fc, $File* f) {
	$nc(this->filePane)->ensureFileIsVisible(fc, f);
}

void WindowsFileChooserUI::rescanCurrentDirectory($JFileChooser* fc) {
	$nc(this->filePane)->rescanCurrentDirectory();
}

$String* WindowsFileChooserUI::getFileName() {
	if (this->filenameTextField != nullptr) {
		return $nc(this->filenameTextField)->getText();
	} else {
		return nullptr;
	}
}

void WindowsFileChooserUI::setFileName($String* filename) {
	if (this->filenameTextField != nullptr) {
		$nc(this->filenameTextField)->setText(filename);
	}
}

void WindowsFileChooserUI::setDirectorySelected(bool directorySelected) {
	$useLocalCurrentObjectStackCache();
	$BasicFileChooserUI::setDirectorySelected(directorySelected);
	$var($JFileChooser, chooser, getFileChooser());
	if (directorySelected) {
		$nc(this->approveButton)->setText(this->directoryOpenButtonText);
		$nc(this->approveButton)->setToolTipText(this->directoryOpenButtonToolTipText);
		$nc(this->approveButton)->setMnemonic(this->directoryOpenButtonMnemonic);
	} else {
		$nc(this->approveButton)->setText($(getApproveButtonText(chooser)));
		$nc(this->approveButton)->setToolTipText($(getApproveButtonToolTipText(chooser)));
		$nc(this->approveButton)->setMnemonic(getApproveButtonMnemonic(chooser));
	}
}

$String* WindowsFileChooserUI::getDirectoryName() {
	return nullptr;
}

void WindowsFileChooserUI::setDirectoryName($String* dirname) {
}

$WindowsFileChooserUI$DirectoryComboBoxRenderer* WindowsFileChooserUI::createDirectoryComboBoxRenderer($JFileChooser* fc) {
	return $new($WindowsFileChooserUI$DirectoryComboBoxRenderer, this);
}

$JButton* WindowsFileChooserUI::createToolButton($Action* a, $Icon* defaultIcon, $String* toolTipText, $String* accessibleName) {
	$init(WindowsFileChooserUI);
	$useLocalCurrentObjectStackCache();
	$var($JButton, result, $new($JButton, a));
	result->setText(nullptr);
	result->setIcon(defaultIcon);
	result->setToolTipText(toolTipText);
	result->setRequestFocusEnabled(false);
	$init($AccessibleContext);
	result->putClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY, accessibleName);
	$init($WindowsLookAndFeel);
	$init($Boolean);
	result->putClientProperty($WindowsLookAndFeel::HI_RES_DISABLED_ICON_CLIENT_KEY, $Boolean::TRUE);
	$init($JComponent);
	result->setAlignmentX($JComponent::LEFT_ALIGNMENT);
	result->setAlignmentY($JComponent::CENTER_ALIGNMENT);
	result->setMargin(WindowsFileChooserUI::shrinkwrap);
	result->setFocusPainted(false);
	result->setModel($$new($WindowsFileChooserUI$12, result));
	result->addFocusListener($$new($WindowsFileChooserUI$13, result));
	return result;
}

$WindowsFileChooserUI$DirectoryComboBoxModel* WindowsFileChooserUI::createDirectoryComboBoxModel($JFileChooser* fc) {
	return $new($WindowsFileChooserUI$DirectoryComboBoxModel, this);
}

$WindowsFileChooserUI$FilterComboBoxRenderer* WindowsFileChooserUI::createFilterComboBoxRenderer() {
	return $new($WindowsFileChooserUI$FilterComboBoxRenderer, this);
}

$WindowsFileChooserUI$FilterComboBoxModel* WindowsFileChooserUI::createFilterComboBoxModel() {
	return $new($WindowsFileChooserUI$FilterComboBoxModel, this);
}

void WindowsFileChooserUI::valueChanged($ListSelectionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JFileChooser, fc, getFileChooser());
	$var($File, f, $nc(fc)->getSelectedFile());
	bool var$0 = !$nc(e)->getValueIsAdjusting() && f != nullptr;
	if (var$0 && !$nc($(getFileChooser()))->isTraversable(f)) {
		setFileName($(fileNameString(f)));
	}
}

$JButton* WindowsFileChooserUI::getApproveButton($JFileChooser* fc) {
	return this->approveButton;
}

$FileView* WindowsFileChooserUI::getFileView($JFileChooser* fc) {
	return this->fileView;
}

void clinit$WindowsFileChooserUI($Class* class$) {
	$assignStatic(WindowsFileChooserUI::hstrut10, $new($Dimension, 10, 1));
	$assignStatic(WindowsFileChooserUI::vstrut4, $new($Dimension, 1, 4));
	$assignStatic(WindowsFileChooserUI::vstrut6, $new($Dimension, 1, 6));
	$assignStatic(WindowsFileChooserUI::vstrut8, $new($Dimension, 1, 8));
	$assignStatic(WindowsFileChooserUI::shrinkwrap, $new($Insets, 0, 0, 0, 0));
	WindowsFileChooserUI::PREF_WIDTH = 425;
	WindowsFileChooserUI::PREF_HEIGHT = 245;
	$assignStatic(WindowsFileChooserUI::PREF_SIZE, $new($Dimension, WindowsFileChooserUI::PREF_WIDTH, WindowsFileChooserUI::PREF_HEIGHT));
	WindowsFileChooserUI::MIN_WIDTH = 425;
	WindowsFileChooserUI::MIN_HEIGHT = 245;
	WindowsFileChooserUI::LIST_PREF_WIDTH = 444;
	WindowsFileChooserUI::LIST_PREF_HEIGHT = 138;
	$assignStatic(WindowsFileChooserUI::LIST_PREF_SIZE, $new($Dimension, WindowsFileChooserUI::LIST_PREF_WIDTH, WindowsFileChooserUI::LIST_PREF_HEIGHT));
}

WindowsFileChooserUI::WindowsFileChooserUI() {
}

$Class* WindowsFileChooserUI::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI, name, initialize, &_WindowsFileChooserUI_ClassInfo_, clinit$WindowsFileChooserUI, allocate$WindowsFileChooserUI);
	return class$;
}

$Class* WindowsFileChooserUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com