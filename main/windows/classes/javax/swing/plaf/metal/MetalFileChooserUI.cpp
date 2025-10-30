#include <javax/swing/plaf/metal/MetalFileChooserUI.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/File.h>
#include <java/util/Locale.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/Box.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/ButtonGroup.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FileChooserUI.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI$1.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI$2.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI$3.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI$4.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI$5.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI$AlignedLabel.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI$ButtonAreaLayout.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI$DirectoryComboBoxAction.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI$DirectoryComboBoxModel.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI$DirectoryComboBoxRenderer.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI$FilterComboBoxModel.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI$FilterComboBoxRenderer.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI$MetalFileChooserUIAccessor.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/swing/FilePane$FileChooserUIAccessor.h>
#include <sun/swing/FilePane.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ACCESSIBLE_DESCRIPTION_PROPERTY
#undef ACCESSIBLE_NAME_PROPERTY
#undef AFTER_LINE_ENDS
#undef BEFORE_LINE_BEGINS
#undef CENTER
#undef CENTER_ALIGNMENT
#undef DIRECTORIES_ONLY
#undef LEFT_ALIGNMENT
#undef LINE_AXIS
#undef LIST_PREF_HEIGHT
#undef LIST_PREF_SIZE
#undef LIST_PREF_WIDTH
#undef MAX_VALUE
#undef MIN_HEIGHT
#undef MIN_WIDTH
#undef NORTH
#undef PREF_HEIGHT
#undef PREF_SIZE
#undef PREF_WIDTH
#undef SAVE_DIALOG
#undef SOUTH
#undef TOP_ALIGNMENT
#undef TRUE
#undef VIEWTYPE_DETAILS
#undef VIEWTYPE_LIST
#undef Y_AXIS

using $FileArray = $Array<::java::io::File>;
using $ActionArray = $Array<::javax::swing::Action>;
using $MetalFileChooserUI$AlignedLabelArray = $Array<::javax::swing::plaf::metal::MetalFileChooserUI$AlignedLabel>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusListener = ::java::awt::event::FocusListener;
using $MouseListener = ::java::awt::event::MouseListener;
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
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $Box = ::javax::swing::Box;
using $BoxLayout = ::javax::swing::BoxLayout;
using $ButtonGroup = ::javax::swing::ButtonGroup;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $JPanel = ::javax::swing::JPanel;
using $JTextField = ::javax::swing::JTextField;
using $JToggleButton = ::javax::swing::JToggleButton;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $FileChooserUI = ::javax::swing::plaf::FileChooserUI;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $MetalFileChooserUI$1 = ::javax::swing::plaf::metal::MetalFileChooserUI$1;
using $MetalFileChooserUI$2 = ::javax::swing::plaf::metal::MetalFileChooserUI$2;
using $MetalFileChooserUI$3 = ::javax::swing::plaf::metal::MetalFileChooserUI$3;
using $MetalFileChooserUI$4 = ::javax::swing::plaf::metal::MetalFileChooserUI$4;
using $MetalFileChooserUI$5 = ::javax::swing::plaf::metal::MetalFileChooserUI$5;
using $MetalFileChooserUI$AlignedLabel = ::javax::swing::plaf::metal::MetalFileChooserUI$AlignedLabel;
using $MetalFileChooserUI$ButtonAreaLayout = ::javax::swing::plaf::metal::MetalFileChooserUI$ButtonAreaLayout;
using $MetalFileChooserUI$DirectoryComboBoxAction = ::javax::swing::plaf::metal::MetalFileChooserUI$DirectoryComboBoxAction;
using $MetalFileChooserUI$DirectoryComboBoxModel = ::javax::swing::plaf::metal::MetalFileChooserUI$DirectoryComboBoxModel;
using $MetalFileChooserUI$DirectoryComboBoxRenderer = ::javax::swing::plaf::metal::MetalFileChooserUI$DirectoryComboBoxRenderer;
using $MetalFileChooserUI$FilterComboBoxModel = ::javax::swing::plaf::metal::MetalFileChooserUI$FilterComboBoxModel;
using $MetalFileChooserUI$FilterComboBoxRenderer = ::javax::swing::plaf::metal::MetalFileChooserUI$FilterComboBoxRenderer;
using $MetalFileChooserUI$MetalFileChooserUIAccessor = ::javax::swing::plaf::metal::MetalFileChooserUI$MetalFileChooserUIAccessor;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$FileChooserUIAccessor = ::sun::swing::FilePane$FileChooserUIAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalFileChooserUI_FieldInfo_[] = {
	{"lookInLabel", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(MetalFileChooserUI, lookInLabel)},
	{"directoryComboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/lang/Object;>;", $PRIVATE, $field(MetalFileChooserUI, directoryComboBox)},
	{"directoryComboBoxModel", "Ljavax/swing/plaf/metal/MetalFileChooserUI$DirectoryComboBoxModel;", nullptr, $PRIVATE, $field(MetalFileChooserUI, directoryComboBoxModel)},
	{"directoryComboBoxAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(MetalFileChooserUI, directoryComboBoxAction)},
	{"filterComboBoxModel", "Ljavax/swing/plaf/metal/MetalFileChooserUI$FilterComboBoxModel;", nullptr, $PRIVATE, $field(MetalFileChooserUI, filterComboBoxModel)},
	{"fileNameTextField", "Ljavax/swing/JTextField;", nullptr, $PRIVATE, $field(MetalFileChooserUI, fileNameTextField)},
	{"filePane", "Lsun/swing/FilePane;", nullptr, $PRIVATE, $field(MetalFileChooserUI, filePane)},
	{"listViewButton", "Ljavax/swing/JToggleButton;", nullptr, $PRIVATE, $field(MetalFileChooserUI, listViewButton)},
	{"detailsViewButton", "Ljavax/swing/JToggleButton;", nullptr, $PRIVATE, $field(MetalFileChooserUI, detailsViewButton)},
	{"approveButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(MetalFileChooserUI, approveButton)},
	{"cancelButton", "Ljavax/swing/JButton;", nullptr, $PRIVATE, $field(MetalFileChooserUI, cancelButton)},
	{"buttonPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(MetalFileChooserUI, buttonPanel)},
	{"bottomPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(MetalFileChooserUI, bottomPanel)},
	{"filterComboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<*>;", $PRIVATE, $field(MetalFileChooserUI, filterComboBox)},
	{"hstrut5", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalFileChooserUI, hstrut5)},
	{"hstrut11", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalFileChooserUI, hstrut11)},
	{"vstrut5", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalFileChooserUI, vstrut5)},
	{"shrinkwrap", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalFileChooserUI, shrinkwrap)},
	{"PREF_WIDTH", "I", nullptr, $PRIVATE | $STATIC, $staticField(MetalFileChooserUI, PREF_WIDTH)},
	{"PREF_HEIGHT", "I", nullptr, $PRIVATE | $STATIC, $staticField(MetalFileChooserUI, PREF_HEIGHT)},
	{"PREF_SIZE", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticField(MetalFileChooserUI, PREF_SIZE)},
	{"MIN_WIDTH", "I", nullptr, $PRIVATE | $STATIC, $staticField(MetalFileChooserUI, MIN_WIDTH)},
	{"MIN_HEIGHT", "I", nullptr, $PRIVATE | $STATIC, $staticField(MetalFileChooserUI, MIN_HEIGHT)},
	{"LIST_PREF_WIDTH", "I", nullptr, $PRIVATE | $STATIC, $staticField(MetalFileChooserUI, LIST_PREF_WIDTH)},
	{"LIST_PREF_HEIGHT", "I", nullptr, $PRIVATE | $STATIC, $staticField(MetalFileChooserUI, LIST_PREF_HEIGHT)},
	{"LIST_PREF_SIZE", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticField(MetalFileChooserUI, LIST_PREF_SIZE)},
	{"lookInLabelMnemonic", "I", nullptr, $PRIVATE, $field(MetalFileChooserUI, lookInLabelMnemonic)},
	{"lookInLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalFileChooserUI, lookInLabelText)},
	{"saveInLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalFileChooserUI, saveInLabelText)},
	{"fileNameLabelMnemonic", "I", nullptr, $PRIVATE, $field(MetalFileChooserUI, fileNameLabelMnemonic)},
	{"fileNameLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalFileChooserUI, fileNameLabelText)},
	{"folderNameLabelMnemonic", "I", nullptr, $PRIVATE, $field(MetalFileChooserUI, folderNameLabelMnemonic)},
	{"folderNameLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalFileChooserUI, folderNameLabelText)},
	{"filesOfTypeLabelMnemonic", "I", nullptr, $PRIVATE, $field(MetalFileChooserUI, filesOfTypeLabelMnemonic)},
	{"filesOfTypeLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalFileChooserUI, filesOfTypeLabelText)},
	{"upFolderToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalFileChooserUI, upFolderToolTipText)},
	{"upFolderAccessibleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalFileChooserUI, upFolderAccessibleName)},
	{"homeFolderToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalFileChooserUI, homeFolderToolTipText)},
	{"homeFolderAccessibleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalFileChooserUI, homeFolderAccessibleName)},
	{"newFolderToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalFileChooserUI, newFolderToolTipText)},
	{"newFolderAccessibleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalFileChooserUI, newFolderAccessibleName)},
	{"listViewButtonToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalFileChooserUI, listViewButtonToolTipText)},
	{"listViewButtonAccessibleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalFileChooserUI, listViewButtonAccessibleName)},
	{"detailsViewButtonToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalFileChooserUI, detailsViewButtonToolTipText)},
	{"detailsViewButtonAccessibleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalFileChooserUI, detailsViewButtonAccessibleName)},
	{"fileNameLabel", "Ljavax/swing/plaf/metal/MetalFileChooserUI$AlignedLabel;", nullptr, $PRIVATE, $field(MetalFileChooserUI, fileNameLabel)},
	{"space", "I", nullptr, $STATIC | $FINAL, $constField(MetalFileChooserUI, space)},
	{}
};

$MethodInfo _MetalFileChooserUI_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC, $method(static_cast<void(MetalFileChooserUI::*)($JFileChooser*)>(&MetalFileChooserUI::init$))},
	{"access$000", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)Z", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(MetalFileChooserUI*)>(&MetalFileChooserUI::access$000))},
	{"access$100", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)Ljava/io/File;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$File*(*)(MetalFileChooserUI*)>(&MetalFileChooserUI::access$100))},
	{"access$200", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;Ljavax/swing/JFileChooser;Ljavax/swing/JList;)Ljava/awt/event/MouseListener;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$MouseListener*(*)(MetalFileChooserUI*,$JFileChooser*,$JList*)>(&MetalFileChooserUI::access$200))},
	{"addControlButtons", "()V", nullptr, $PROTECTED},
	{"createActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PROTECTED},
	{"createDetailsView", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JPanel;", nullptr, $PROTECTED},
	{"createDirectoryComboBoxModel", "(Ljavax/swing/JFileChooser;)Ljavax/swing/plaf/metal/MetalFileChooserUI$DirectoryComboBoxModel;", nullptr, $PROTECTED},
	{"createDirectoryComboBoxRenderer", "(Ljavax/swing/JFileChooser;)Ljavax/swing/DefaultListCellRenderer;", nullptr, $PRIVATE, $method(static_cast<$DefaultListCellRenderer*(MetalFileChooserUI::*)($JFileChooser*)>(&MetalFileChooserUI::createDirectoryComboBoxRenderer))},
	{"createFilterComboBoxModel", "()Ljavax/swing/plaf/metal/MetalFileChooserUI$FilterComboBoxModel;", nullptr, $PROTECTED},
	{"createFilterComboBoxRenderer", "()Ljavax/swing/plaf/metal/MetalFileChooserUI$FilterComboBoxRenderer;", nullptr, $PROTECTED},
	{"createList", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JPanel;", nullptr, $PROTECTED},
	{"createListSelectionListener", "(Ljavax/swing/JFileChooser;)Ljavax/swing/event/ListSelectionListener;", nullptr, $PUBLIC},
	{"createPropertyChangeListener", "(Ljavax/swing/JFileChooser;)Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalFileChooserUI::createUI))},
	{"doAccessoryChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalFileChooserUI::*)($PropertyChangeEvent*)>(&MetalFileChooserUI::doAccessoryChanged))},
	{"doApproveButtonMnemonicChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalFileChooserUI::*)($PropertyChangeEvent*)>(&MetalFileChooserUI::doApproveButtonMnemonicChanged))},
	{"doApproveButtonTextChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalFileChooserUI::*)($PropertyChangeEvent*)>(&MetalFileChooserUI::doApproveButtonTextChanged))},
	{"doControlButtonsChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalFileChooserUI::*)($PropertyChangeEvent*)>(&MetalFileChooserUI::doControlButtonsChanged))},
	{"doDialogTypeChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalFileChooserUI::*)($PropertyChangeEvent*)>(&MetalFileChooserUI::doDialogTypeChanged))},
	{"doDirectoryChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalFileChooserUI::*)($PropertyChangeEvent*)>(&MetalFileChooserUI::doDirectoryChanged))},
	{"doFileSelectionModeChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalFileChooserUI::*)($PropertyChangeEvent*)>(&MetalFileChooserUI::doFileSelectionModeChanged))},
	{"doFilterChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalFileChooserUI::*)($PropertyChangeEvent*)>(&MetalFileChooserUI::doFilterChanged))},
	{"doSelectedFileChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalFileChooserUI::*)($PropertyChangeEvent*)>(&MetalFileChooserUI::doSelectedFileChanged))},
	{"doSelectedFilesChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalFileChooserUI::*)($PropertyChangeEvent*)>(&MetalFileChooserUI::doSelectedFilesChanged))},
	{"ensureFileIsVisible", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, $PUBLIC},
	{"fileNameString", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(MetalFileChooserUI::*)($File*)>(&MetalFileChooserUI::fileNameString))},
	{"fileNameString", "([Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(MetalFileChooserUI::*)($FileArray*)>(&MetalFileChooserUI::fileNameString))},
	{"getActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PROTECTED},
	{"getApproveButton", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"getBottomPanel", "()Ljavax/swing/JPanel;", nullptr, $PROTECTED},
	{"getButtonPanel", "()Ljavax/swing/JPanel;", nullptr, $PROTECTED},
	{"getDirectoryName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMnemonic", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/Integer;", nullptr, $PRIVATE, $method(static_cast<$Integer*(MetalFileChooserUI::*)($String*,$Locale*)>(&MetalFileChooserUI::getMnemonic))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"groupLabels", "([Ljavax/swing/plaf/metal/MetalFileChooserUI$AlignedLabel;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($MetalFileChooserUI$AlignedLabelArray*)>(&MetalFileChooserUI::groupLabels))},
	{"installComponents", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"installListeners", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installStrings", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"populateFileNameLabel", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalFileChooserUI::*)()>(&MetalFileChooserUI::populateFileNameLabel))},
	{"removeControlButtons", "()V", nullptr, $PROTECTED},
	{"rescanCurrentDirectory", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"setDirectoryName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setDirectorySelected", "(Z)V", nullptr, $PROTECTED},
	{"setFileName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"uninstallComponents", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalFileChooserUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalFileChooserUI$AlignedLabel", "javax.swing.plaf.metal.MetalFileChooserUI", "AlignedLabel", $PRIVATE},
	{"javax.swing.plaf.metal.MetalFileChooserUI$ButtonAreaLayout", "javax.swing.plaf.metal.MetalFileChooserUI", "ButtonAreaLayout", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxAction", "javax.swing.plaf.metal.MetalFileChooserUI", "DirectoryComboBoxAction", $PROTECTED},
	{"javax.swing.plaf.metal.MetalFileChooserUI$FilterComboBoxModel", "javax.swing.plaf.metal.MetalFileChooserUI", "FilterComboBoxModel", $PROTECTED},
	{"javax.swing.plaf.metal.MetalFileChooserUI$FilterComboBoxRenderer", "javax.swing.plaf.metal.MetalFileChooserUI", "FilterComboBoxRenderer", $PUBLIC},
	{"javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxModel", "javax.swing.plaf.metal.MetalFileChooserUI", "DirectoryComboBoxModel", $PROTECTED},
	{"javax.swing.plaf.metal.MetalFileChooserUI$IndentIcon", "javax.swing.plaf.metal.MetalFileChooserUI", "IndentIcon", 0},
	{"javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxRenderer", "javax.swing.plaf.metal.MetalFileChooserUI", "DirectoryComboBoxRenderer", 0},
	{"javax.swing.plaf.metal.MetalFileChooserUI$FileRenderer", "javax.swing.plaf.metal.MetalFileChooserUI", "FileRenderer", $PROTECTED},
	{"javax.swing.plaf.metal.MetalFileChooserUI$SingleClickListener", "javax.swing.plaf.metal.MetalFileChooserUI", "SingleClickListener", $PROTECTED},
	{"javax.swing.plaf.metal.MetalFileChooserUI$MetalFileChooserUIAccessor", "javax.swing.plaf.metal.MetalFileChooserUI", "MetalFileChooserUIAccessor", $PRIVATE},
	{"javax.swing.plaf.metal.MetalFileChooserUI$5", nullptr, nullptr, 0},
	{"javax.swing.plaf.metal.MetalFileChooserUI$4", nullptr, nullptr, 0},
	{"javax.swing.plaf.metal.MetalFileChooserUI$3", nullptr, nullptr, 0},
	{"javax.swing.plaf.metal.MetalFileChooserUI$2", nullptr, nullptr, 0},
	{"javax.swing.plaf.metal.MetalFileChooserUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalFileChooserUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalFileChooserUI",
	"javax.swing.plaf.basic.BasicFileChooserUI",
	nullptr,
	_MetalFileChooserUI_FieldInfo_,
	_MetalFileChooserUI_MethodInfo_,
	nullptr,
	nullptr,
	_MetalFileChooserUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalFileChooserUI$AlignedLabel,javax.swing.plaf.metal.MetalFileChooserUI$ButtonAreaLayout,javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxAction,javax.swing.plaf.metal.MetalFileChooserUI$FilterComboBoxModel,javax.swing.plaf.metal.MetalFileChooserUI$FilterComboBoxRenderer,javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxModel,javax.swing.plaf.metal.MetalFileChooserUI$IndentIcon,javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxRenderer,javax.swing.plaf.metal.MetalFileChooserUI$FileRenderer,javax.swing.plaf.metal.MetalFileChooserUI$SingleClickListener,javax.swing.plaf.metal.MetalFileChooserUI$MetalFileChooserUIAccessor,javax.swing.plaf.metal.MetalFileChooserUI$5,javax.swing.plaf.metal.MetalFileChooserUI$4,javax.swing.plaf.metal.MetalFileChooserUI$3,javax.swing.plaf.metal.MetalFileChooserUI$2,javax.swing.plaf.metal.MetalFileChooserUI$1"
};

$Object* allocate$MetalFileChooserUI($Class* clazz) {
	return $of($alloc(MetalFileChooserUI));
}

$Dimension* MetalFileChooserUI::hstrut5 = nullptr;
$Dimension* MetalFileChooserUI::hstrut11 = nullptr;
$Dimension* MetalFileChooserUI::vstrut5 = nullptr;
$Insets* MetalFileChooserUI::shrinkwrap = nullptr;
int32_t MetalFileChooserUI::PREF_WIDTH = 0;
int32_t MetalFileChooserUI::PREF_HEIGHT = 0;
$Dimension* MetalFileChooserUI::PREF_SIZE = nullptr;
int32_t MetalFileChooserUI::MIN_WIDTH = 0;
int32_t MetalFileChooserUI::MIN_HEIGHT = 0;
int32_t MetalFileChooserUI::LIST_PREF_WIDTH = 0;
int32_t MetalFileChooserUI::LIST_PREF_HEIGHT = 0;
$Dimension* MetalFileChooserUI::LIST_PREF_SIZE = nullptr;

$MouseListener* MetalFileChooserUI::access$200(MetalFileChooserUI* x0, $JFileChooser* x1, $JList* x2) {
	$init(MetalFileChooserUI);
	return $nc(x0)->createDoubleClickListener(x1, x2);
}

$File* MetalFileChooserUI::access$100(MetalFileChooserUI* x0) {
	$init(MetalFileChooserUI);
	return $nc(x0)->getDirectory();
}

bool MetalFileChooserUI::access$000(MetalFileChooserUI* x0) {
	$init(MetalFileChooserUI);
	return $nc(x0)->isDirectorySelected();
}

void MetalFileChooserUI::populateFileNameLabel() {
	if ($nc($(getFileChooser()))->getFileSelectionMode() == $JFileChooser::DIRECTORIES_ONLY) {
		$nc(this->fileNameLabel)->setText(this->folderNameLabelText);
		$nc(this->fileNameLabel)->setDisplayedMnemonic(this->folderNameLabelMnemonic);
	} else {
		$nc(this->fileNameLabel)->setText(this->fileNameLabelText);
		$nc(this->fileNameLabel)->setDisplayedMnemonic(this->fileNameLabelMnemonic);
	}
}

$ComponentUI* MetalFileChooserUI::createUI($JComponent* c) {
	$init(MetalFileChooserUI);
	return $new(MetalFileChooserUI, $cast($JFileChooser, c));
}

void MetalFileChooserUI::init$($JFileChooser* filechooser) {
	$BasicFileChooserUI::init$(filechooser);
	$set(this, directoryComboBoxAction, $new($MetalFileChooserUI$DirectoryComboBoxAction, this));
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
	$set(this, homeFolderToolTipText, nullptr);
	$set(this, homeFolderAccessibleName, nullptr);
	$set(this, newFolderToolTipText, nullptr);
	$set(this, newFolderAccessibleName, nullptr);
	$set(this, listViewButtonToolTipText, nullptr);
	$set(this, listViewButtonAccessibleName, nullptr);
	$set(this, detailsViewButtonToolTipText, nullptr);
	$set(this, detailsViewButtonAccessibleName, nullptr);
}

void MetalFileChooserUI::installUI($JComponent* c) {
	$BasicFileChooserUI::installUI(c);
}

void MetalFileChooserUI::uninstallComponents($JFileChooser* fc) {
	$nc(fc)->removeAll();
	$set(this, bottomPanel, nullptr);
	$set(this, buttonPanel, nullptr);
}

void MetalFileChooserUI::installComponents($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$var($FileSystemView, fsv, $nc(fc)->getFileSystemView());
	fc->setBorder($$new($EmptyBorder, 12, 12, 11, 11));
	fc->setLayout($$new($BorderLayout, 0, 11));
	$set(this, filePane, $new($FilePane, $$new($MetalFileChooserUI$MetalFileChooserUIAccessor, this)));
	fc->addPropertyChangeListener(this->filePane);
	$var($JPanel, topPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout, 11, 0))));
	$var($JPanel, topButtonPanel, $new($JPanel));
	topButtonPanel->setLayout($$new($BoxLayout, topButtonPanel, $BoxLayout::LINE_AXIS));
	$init($BorderLayout);
	topPanel->add(static_cast<$Component*>(topButtonPanel), $of($BorderLayout::AFTER_LINE_ENDS));
	fc->add(static_cast<$Component*>(topPanel), $of($BorderLayout::NORTH));
	$set(this, lookInLabel, $new($JLabel, this->lookInLabelText));
	$nc(this->lookInLabel)->setDisplayedMnemonic(this->lookInLabelMnemonic);
	topPanel->add(static_cast<$Component*>(this->lookInLabel), $of($BorderLayout::BEFORE_LINE_BEGINS));
	$var($JComboBox, tmp1, $new($MetalFileChooserUI$1, this));
	$set(this, directoryComboBox, tmp1);
	$init($AccessibleContext);
	$nc(this->directoryComboBox)->putClientProperty($AccessibleContext::ACCESSIBLE_DESCRIPTION_PROPERTY, this->lookInLabelText);
	$init($Boolean);
	$nc(this->directoryComboBox)->putClientProperty("JComboBox.isTableCellEditor"_s, $Boolean::TRUE);
	$nc(this->lookInLabel)->setLabelFor(this->directoryComboBox);
	$set(this, directoryComboBoxModel, createDirectoryComboBoxModel(fc));
	$nc(this->directoryComboBox)->setModel(this->directoryComboBoxModel);
	$nc(this->directoryComboBox)->addActionListener(this->directoryComboBoxAction);
	$nc(this->directoryComboBox)->setRenderer($(createDirectoryComboBoxRenderer(fc)));
	$init($JComponent);
	$nc(this->directoryComboBox)->setAlignmentX($JComponent::LEFT_ALIGNMENT);
	$nc(this->directoryComboBox)->setAlignmentY($JComponent::TOP_ALIGNMENT);
	$nc(this->directoryComboBox)->setMaximumRowCount(8);
	topPanel->add(static_cast<$Component*>(this->directoryComboBox), $of($BorderLayout::CENTER));
	$var($JButton, upFolderButton, $new($JButton, $(getChangeToParentDirectoryAction())));
	upFolderButton->setText(nullptr);
	upFolderButton->setIcon(this->upFolderIcon);
	upFolderButton->setToolTipText(this->upFolderToolTipText);
	upFolderButton->putClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY, this->upFolderAccessibleName);
	upFolderButton->setAlignmentX($JComponent::LEFT_ALIGNMENT);
	upFolderButton->setAlignmentY($JComponent::CENTER_ALIGNMENT);
	upFolderButton->setMargin(MetalFileChooserUI::shrinkwrap);
	topButtonPanel->add(static_cast<$Component*>(upFolderButton));
	topButtonPanel->add($($Box::createRigidArea(MetalFileChooserUI::hstrut5)));
	$var($File, homeDir, $nc(fsv)->getHomeDirectory());
	$var($String, toolTipText, this->homeFolderToolTipText);
	$var($JButton, b, $new($JButton, this->homeFolderIcon));
	b->setToolTipText(toolTipText);
	b->putClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY, this->homeFolderAccessibleName);
	b->setAlignmentX($JComponent::LEFT_ALIGNMENT);
	b->setAlignmentY($JComponent::CENTER_ALIGNMENT);
	b->setMargin(MetalFileChooserUI::shrinkwrap);
	b->addActionListener($(getGoHomeAction()));
	topButtonPanel->add(static_cast<$Component*>(b));
	topButtonPanel->add($($Box::createRigidArea(MetalFileChooserUI::hstrut5)));
	if (!$UIManager::getBoolean("FileChooser.readOnly"_s)) {
		$assign(b, $new($JButton, $($nc(this->filePane)->getNewFolderAction())));
		b->setText(nullptr);
		b->setIcon(this->newFolderIcon);
		b->setToolTipText(this->newFolderToolTipText);
		b->putClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY, this->newFolderAccessibleName);
		b->setAlignmentX($JComponent::LEFT_ALIGNMENT);
		b->setAlignmentY($JComponent::CENTER_ALIGNMENT);
		b->setMargin(MetalFileChooserUI::shrinkwrap);
	}
	topButtonPanel->add(static_cast<$Component*>(b));
	topButtonPanel->add($($Box::createRigidArea(MetalFileChooserUI::hstrut5)));
	$var($ButtonGroup, viewButtonGroup, $new($ButtonGroup));
	$set(this, listViewButton, $new($JToggleButton, this->listViewIcon));
	$nc(this->listViewButton)->setToolTipText(this->listViewButtonToolTipText);
	$nc(this->listViewButton)->putClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY, this->listViewButtonAccessibleName);
	$nc(this->listViewButton)->setSelected(true);
	$nc(this->listViewButton)->setAlignmentX($JComponent::LEFT_ALIGNMENT);
	$nc(this->listViewButton)->setAlignmentY($JComponent::CENTER_ALIGNMENT);
	$nc(this->listViewButton)->setMargin(MetalFileChooserUI::shrinkwrap);
	$nc(this->listViewButton)->addActionListener($($nc(this->filePane)->getViewTypeAction($FilePane::VIEWTYPE_LIST)));
	topButtonPanel->add(static_cast<$Component*>(this->listViewButton));
	viewButtonGroup->add(this->listViewButton);
	$set(this, detailsViewButton, $new($JToggleButton, this->detailsViewIcon));
	$nc(this->detailsViewButton)->setToolTipText(this->detailsViewButtonToolTipText);
	$nc(this->detailsViewButton)->putClientProperty($AccessibleContext::ACCESSIBLE_NAME_PROPERTY, this->detailsViewButtonAccessibleName);
	$nc(this->detailsViewButton)->setAlignmentX($JComponent::LEFT_ALIGNMENT);
	$nc(this->detailsViewButton)->setAlignmentY($JComponent::CENTER_ALIGNMENT);
	$nc(this->detailsViewButton)->setMargin(MetalFileChooserUI::shrinkwrap);
	$nc(this->detailsViewButton)->addActionListener($($nc(this->filePane)->getViewTypeAction($FilePane::VIEWTYPE_DETAILS)));
	topButtonPanel->add(static_cast<$Component*>(this->detailsViewButton));
	viewButtonGroup->add(this->detailsViewButton);
	$nc(this->filePane)->addPropertyChangeListener($$new($MetalFileChooserUI$2, this));
	fc->add($(static_cast<$Component*>(getAccessoryPanel())), $of($BorderLayout::AFTER_LINE_ENDS));
	$var($JComponent, accessory, fc->getAccessory());
	if (accessory != nullptr) {
		$nc($(getAccessoryPanel()))->add(static_cast<$Component*>(accessory));
	}
	$nc(this->filePane)->setPreferredSize(MetalFileChooserUI::LIST_PREF_SIZE);
	fc->add(static_cast<$Component*>(this->filePane), $of($BorderLayout::CENTER));
	$var($JPanel, bottomPanel, getBottomPanel());
	$nc(bottomPanel)->setLayout($$new($BoxLayout, bottomPanel, $BoxLayout::Y_AXIS));
	fc->add(static_cast<$Component*>(bottomPanel), $of($BorderLayout::SOUTH));
	$var($JPanel, fileNamePanel, $new($JPanel));
	fileNamePanel->setLayout($$new($BoxLayout, fileNamePanel, $BoxLayout::LINE_AXIS));
	bottomPanel->add(static_cast<$Component*>(fileNamePanel));
	bottomPanel->add($($Box::createRigidArea(MetalFileChooserUI::vstrut5)));
	$set(this, fileNameLabel, $new($MetalFileChooserUI$AlignedLabel, this));
	populateFileNameLabel();
	fileNamePanel->add(static_cast<$Component*>(this->fileNameLabel));
	$var($JTextField, tmp2, $new($MetalFileChooserUI$3, this, 35));
	$set(this, fileNameTextField, tmp2);
	fileNamePanel->add(static_cast<$Component*>(this->fileNameTextField));
	$nc(this->fileNameLabel)->setLabelFor(this->fileNameTextField);
	$nc(this->fileNameTextField)->addFocusListener($$new($MetalFileChooserUI$4, this));
	if (fc->isMultiSelectionEnabled()) {
		setFileName($(fileNameString($(fc->getSelectedFiles()))));
	} else {
		setFileName($(fileNameString($(fc->getSelectedFile()))));
	}
	$var($JPanel, filesOfTypePanel, $new($JPanel));
	filesOfTypePanel->setLayout($$new($BoxLayout, filesOfTypePanel, $BoxLayout::LINE_AXIS));
	bottomPanel->add(static_cast<$Component*>(filesOfTypePanel));
	$var($MetalFileChooserUI$AlignedLabel, filesOfTypeLabel, $new($MetalFileChooserUI$AlignedLabel, this, this->filesOfTypeLabelText));
	filesOfTypeLabel->setDisplayedMnemonic(this->filesOfTypeLabelMnemonic);
	filesOfTypePanel->add(static_cast<$Component*>(filesOfTypeLabel));
	$set(this, filterComboBoxModel, createFilterComboBoxModel());
	fc->addPropertyChangeListener(this->filterComboBoxModel);
	$set(this, filterComboBox, $new($JComboBox, static_cast<$ComboBoxModel*>(this->filterComboBoxModel)));
	$nc(this->filterComboBox)->putClientProperty($AccessibleContext::ACCESSIBLE_DESCRIPTION_PROPERTY, this->filesOfTypeLabelText);
	filesOfTypeLabel->setLabelFor(this->filterComboBox);
	$nc(this->filterComboBox)->setRenderer($(createFilterComboBoxRenderer()));
	filesOfTypePanel->add(static_cast<$Component*>(this->filterComboBox));
	$nc($(getButtonPanel()))->setLayout($$new($MetalFileChooserUI$ButtonAreaLayout));
	$set(this, approveButton, $new($JButton, $(getApproveButtonText(fc))));
	$nc(this->approveButton)->addActionListener($(getApproveSelectionAction()));
	$nc(this->approveButton)->setToolTipText($(getApproveButtonToolTipText(fc)));
	$nc($(getButtonPanel()))->add(static_cast<$Component*>(this->approveButton));
	$set(this, cancelButton, $new($JButton, this->cancelButtonText));
	$nc(this->cancelButton)->setToolTipText(this->cancelButtonToolTipText);
	$nc(this->cancelButton)->addActionListener($(getCancelSelectionAction()));
	$nc($(getButtonPanel()))->add(static_cast<$Component*>(this->cancelButton));
	if (fc->getControlButtonsAreShown()) {
		addControlButtons();
	}
	groupLabels($$new($MetalFileChooserUI$AlignedLabelArray, {
		this->fileNameLabel,
		filesOfTypeLabel
	}));
}

$JPanel* MetalFileChooserUI::getButtonPanel() {
	if (this->buttonPanel == nullptr) {
		$set(this, buttonPanel, $new($JPanel));
	}
	return this->buttonPanel;
}

$JPanel* MetalFileChooserUI::getBottomPanel() {
	if (this->bottomPanel == nullptr) {
		$set(this, bottomPanel, $new($JPanel));
	}
	return this->bottomPanel;
}

void MetalFileChooserUI::installStrings($JFileChooser* fc) {
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
	$set(this, homeFolderToolTipText, $UIManager::getString($of("FileChooser.homeFolderToolTipText"_s), l));
	$set(this, homeFolderAccessibleName, $UIManager::getString($of("FileChooser.homeFolderAccessibleName"_s), l));
	$set(this, newFolderToolTipText, $UIManager::getString($of("FileChooser.newFolderToolTipText"_s), l));
	$set(this, newFolderAccessibleName, $UIManager::getString($of("FileChooser.newFolderAccessibleName"_s), l));
	$set(this, listViewButtonToolTipText, $UIManager::getString($of("FileChooser.listViewButtonToolTipText"_s), l));
	$set(this, listViewButtonAccessibleName, $UIManager::getString($of("FileChooser.listViewButtonAccessibleName"_s), l));
	$set(this, detailsViewButtonToolTipText, $UIManager::getString($of("FileChooser.detailsViewButtonToolTipText"_s), l));
	$set(this, detailsViewButtonAccessibleName, $UIManager::getString($of("FileChooser.detailsViewButtonAccessibleName"_s), l));
}

$Integer* MetalFileChooserUI::getMnemonic($String* key, $Locale* l) {
	return $Integer::valueOf($SwingUtilities2::getUIDefaultsInt($of(key), l));
}

void MetalFileChooserUI::installListeners($JFileChooser* fc) {
	$BasicFileChooserUI::installListeners(fc);
	$var($ActionMap, actionMap, getActionMap());
	$SwingUtilities::replaceUIActionMap(fc, actionMap);
}

$ActionMap* MetalFileChooserUI::getActionMap() {
	return createActionMap();
}

$ActionMap* MetalFileChooserUI::createActionMap() {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, map, $new($ActionMapUIResource));
	$FilePane::addActionsToMap(map, $($nc(this->filePane)->getActions()));
	return map;
}

$JPanel* MetalFileChooserUI::createList($JFileChooser* fc) {
	return $nc(this->filePane)->createList();
}

$JPanel* MetalFileChooserUI::createDetailsView($JFileChooser* fc) {
	return $nc(this->filePane)->createDetailsView();
}

$ListSelectionListener* MetalFileChooserUI::createListSelectionListener($JFileChooser* fc) {
	return $BasicFileChooserUI::createListSelectionListener(fc);
}

void MetalFileChooserUI::uninstallUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$nc(c)->removePropertyChangeListener(this->filterComboBoxModel);
	c->removePropertyChangeListener(this->filePane);
	$nc(this->cancelButton)->removeActionListener($(getCancelSelectionAction()));
	$nc(this->approveButton)->removeActionListener($(getApproveSelectionAction()));
	$nc(this->fileNameTextField)->removeActionListener($(getApproveSelectionAction()));
	if (this->filePane != nullptr) {
		$nc(this->filePane)->uninstallUI();
		$set(this, filePane, nullptr);
	}
	$BasicFileChooserUI::uninstallUI(c);
}

$Dimension* MetalFileChooserUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	int32_t prefWidth = $nc(MetalFileChooserUI::PREF_SIZE)->width;
	$var($Dimension, d, $nc($($nc(c)->getLayout()))->preferredLayoutSize(c));
	if (d != nullptr) {
		return $new($Dimension, d->width < prefWidth ? prefWidth : d->width, d->height < $nc(MetalFileChooserUI::PREF_SIZE)->height ? $nc(MetalFileChooserUI::PREF_SIZE)->height : d->height);
	} else {
		return $new($Dimension, prefWidth, $nc(MetalFileChooserUI::PREF_SIZE)->height);
	}
}

$Dimension* MetalFileChooserUI::getMinimumSize($JComponent* c) {
	return $new($Dimension, MetalFileChooserUI::MIN_WIDTH, MetalFileChooserUI::MIN_HEIGHT);
}

$Dimension* MetalFileChooserUI::getMaximumSize($JComponent* c) {
	return $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

$String* MetalFileChooserUI::fileNameString($File* file) {
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

$String* MetalFileChooserUI::fileNameString($FileArray* files) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	for (int32_t i = 0; files != nullptr && i < files->length; ++i) {
		if (i > 0) {
			sb->append(" "_s);
		}
		if (files->length > 1) {
			sb->append("\""_s);
		}
		sb->append($(fileNameString(files->get(i))));
		if (files->length > 1) {
			sb->append("\""_s);
		}
	}
	return sb->toString();
}

void MetalFileChooserUI::doSelectedFileChanged($PropertyChangeEvent* e) {
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

void MetalFileChooserUI::doSelectedFilesChanged($PropertyChangeEvent* e) {
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

void MetalFileChooserUI::doDirectoryChanged($PropertyChangeEvent* e) {
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

void MetalFileChooserUI::doFilterChanged($PropertyChangeEvent* e) {
	clearIconCache();
}

void MetalFileChooserUI::doFileSelectionModeChanged($PropertyChangeEvent* e) {
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

void MetalFileChooserUI::doAccessoryChanged($PropertyChangeEvent* e) {
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

void MetalFileChooserUI::doApproveButtonTextChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JFileChooser, chooser, getFileChooser());
	$nc(this->approveButton)->setText($(getApproveButtonText(chooser)));
	$nc(this->approveButton)->setToolTipText($(getApproveButtonToolTipText(chooser)));
}

void MetalFileChooserUI::doDialogTypeChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JFileChooser, chooser, getFileChooser());
	$nc(this->approveButton)->setText($(getApproveButtonText(chooser)));
	$nc(this->approveButton)->setToolTipText($(getApproveButtonToolTipText(chooser)));
	if ($nc(chooser)->getDialogType() == $JFileChooser::SAVE_DIALOG) {
		$nc(this->lookInLabel)->setText(this->saveInLabelText);
	} else {
		$nc(this->lookInLabel)->setText(this->lookInLabelText);
	}
}

void MetalFileChooserUI::doApproveButtonMnemonicChanged($PropertyChangeEvent* e) {
}

void MetalFileChooserUI::doControlButtonsChanged($PropertyChangeEvent* e) {
	if ($nc($(getFileChooser()))->getControlButtonsAreShown()) {
		addControlButtons();
	} else {
		removeControlButtons();
	}
}

$PropertyChangeListener* MetalFileChooserUI::createPropertyChangeListener($JFileChooser* fc) {
	return $new($MetalFileChooserUI$5, this);
}

void MetalFileChooserUI::removeControlButtons() {
	$useLocalCurrentObjectStackCache();
	$nc($(getBottomPanel()))->remove($(static_cast<$Component*>(getButtonPanel())));
}

void MetalFileChooserUI::addControlButtons() {
	$useLocalCurrentObjectStackCache();
	$nc($(getBottomPanel()))->add($(static_cast<$Component*>(getButtonPanel())));
}

void MetalFileChooserUI::ensureFileIsVisible($JFileChooser* fc, $File* f) {
	$nc(this->filePane)->ensureFileIsVisible(fc, f);
}

void MetalFileChooserUI::rescanCurrentDirectory($JFileChooser* fc) {
	$nc(this->filePane)->rescanCurrentDirectory();
}

$String* MetalFileChooserUI::getFileName() {
	if (this->fileNameTextField != nullptr) {
		return $nc(this->fileNameTextField)->getText();
	} else {
		return nullptr;
	}
}

void MetalFileChooserUI::setFileName($String* filename) {
	if (this->fileNameTextField != nullptr) {
		$nc(this->fileNameTextField)->setText(filename);
	}
}

void MetalFileChooserUI::setDirectorySelected(bool directorySelected) {
	$useLocalCurrentObjectStackCache();
	$BasicFileChooserUI::setDirectorySelected(directorySelected);
	$var($JFileChooser, chooser, getFileChooser());
	if (directorySelected) {
		if (this->approveButton != nullptr) {
			$nc(this->approveButton)->setText(this->directoryOpenButtonText);
			$nc(this->approveButton)->setToolTipText(this->directoryOpenButtonToolTipText);
		}
	} else if (this->approveButton != nullptr) {
		$nc(this->approveButton)->setText($(getApproveButtonText(chooser)));
		$nc(this->approveButton)->setToolTipText($(getApproveButtonToolTipText(chooser)));
	}
}

$String* MetalFileChooserUI::getDirectoryName() {
	return nullptr;
}

void MetalFileChooserUI::setDirectoryName($String* dirname) {
}

$DefaultListCellRenderer* MetalFileChooserUI::createDirectoryComboBoxRenderer($JFileChooser* fc) {
	return $new($MetalFileChooserUI$DirectoryComboBoxRenderer, this);
}

$MetalFileChooserUI$DirectoryComboBoxModel* MetalFileChooserUI::createDirectoryComboBoxModel($JFileChooser* fc) {
	return $new($MetalFileChooserUI$DirectoryComboBoxModel, this);
}

$MetalFileChooserUI$FilterComboBoxRenderer* MetalFileChooserUI::createFilterComboBoxRenderer() {
	return $new($MetalFileChooserUI$FilterComboBoxRenderer, this);
}

$MetalFileChooserUI$FilterComboBoxModel* MetalFileChooserUI::createFilterComboBoxModel() {
	return $new($MetalFileChooserUI$FilterComboBoxModel, this);
}

void MetalFileChooserUI::valueChanged($ListSelectionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JFileChooser, fc, getFileChooser());
	$var($File, f, $nc(fc)->getSelectedFile());
	bool var$0 = !$nc(e)->getValueIsAdjusting() && f != nullptr;
	if (var$0 && !$nc($(getFileChooser()))->isTraversable(f)) {
		setFileName($(fileNameString(f)));
	}
}

$JButton* MetalFileChooserUI::getApproveButton($JFileChooser* fc) {
	return this->approveButton;
}

void MetalFileChooserUI::groupLabels($MetalFileChooserUI$AlignedLabelArray* group) {
	$init(MetalFileChooserUI);
	for (int32_t i = 0; i < $nc(group)->length; ++i) {
		$set($nc(group->get(i)), group, group);
	}
}

void clinit$MetalFileChooserUI($Class* class$) {
	$assignStatic(MetalFileChooserUI::hstrut5, $new($Dimension, 5, 1));
	$assignStatic(MetalFileChooserUI::hstrut11, $new($Dimension, 11, 1));
	$assignStatic(MetalFileChooserUI::vstrut5, $new($Dimension, 1, 5));
	$assignStatic(MetalFileChooserUI::shrinkwrap, $new($Insets, 0, 0, 0, 0));
	MetalFileChooserUI::PREF_WIDTH = 500;
	MetalFileChooserUI::PREF_HEIGHT = 326;
	$assignStatic(MetalFileChooserUI::PREF_SIZE, $new($Dimension, MetalFileChooserUI::PREF_WIDTH, MetalFileChooserUI::PREF_HEIGHT));
	MetalFileChooserUI::MIN_WIDTH = 500;
	MetalFileChooserUI::MIN_HEIGHT = 326;
	MetalFileChooserUI::LIST_PREF_WIDTH = 405;
	MetalFileChooserUI::LIST_PREF_HEIGHT = 135;
	$assignStatic(MetalFileChooserUI::LIST_PREF_SIZE, $new($Dimension, MetalFileChooserUI::LIST_PREF_WIDTH, MetalFileChooserUI::LIST_PREF_HEIGHT));
}

MetalFileChooserUI::MetalFileChooserUI() {
}

$Class* MetalFileChooserUI::load$($String* name, bool initialize) {
	$loadClass(MetalFileChooserUI, name, initialize, &_MetalFileChooserUI_ClassInfo_, clinit$MetalFileChooserUI, allocate$MetalFileChooserUI);
	return class$;
}

$Class* MetalFileChooserUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax