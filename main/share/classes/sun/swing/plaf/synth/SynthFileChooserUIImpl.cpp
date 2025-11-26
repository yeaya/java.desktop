#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>

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
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/swing/FilePane$FileChooserUIAccessor.h>
#include <sun/swing/FilePane.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$1.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$2.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$3.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$4.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$AlignedLabel.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$ButtonAreaLayout.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$DirectoryComboBoxAction.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$DirectoryComboBoxModel.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$DirectoryComboBoxRenderer.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$FilterComboBoxModel.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$FilterComboBoxRenderer.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$SynthFileChooserUIAccessor.h>
#include <jcpp.h>

#undef AFTER_LINE_ENDS
#undef BEFORE_LINE_BEGINS
#undef CENTER
#undef CENTER_ALIGNMENT
#undef DIRECTORIES_ONLY
#undef ENABLED
#undef FILE_SELECTION_MODE_CHANGED_PROPERTY
#undef LEFT_ALIGNMENT
#undef LINE_AXIS
#undef LIST_PREF_SIZE
#undef NORTH
#undef SOUTH
#undef TOP_ALIGNMENT
#undef TRUE
#undef VIEWTYPE_DETAILS
#undef VIEWTYPE_LIST
#undef Y_AXIS

using $FileArray = $Array<::java::io::File>;
using $ActionArray = $Array<::javax::swing::Action>;
using $SynthFileChooserUIImpl$AlignedLabelArray = $Array<::sun::swing::plaf::synth::SynthFileChooserUIImpl$AlignedLabel>;
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
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $JPanel = ::javax::swing::JPanel;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JTextField = ::javax::swing::JTextField;
using $JToggleButton = ::javax::swing::JToggleButton;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $UIManager = ::javax::swing::UIManager;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$FileChooserUIAccessor = ::sun::swing::FilePane$FileChooserUIAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $SynthFileChooserUI = ::sun::swing::plaf::synth::SynthFileChooserUI;
using $SynthFileChooserUIImpl$1 = ::sun::swing::plaf::synth::SynthFileChooserUIImpl$1;
using $SynthFileChooserUIImpl$2 = ::sun::swing::plaf::synth::SynthFileChooserUIImpl$2;
using $SynthFileChooserUIImpl$3 = ::sun::swing::plaf::synth::SynthFileChooserUIImpl$3;
using $SynthFileChooserUIImpl$4 = ::sun::swing::plaf::synth::SynthFileChooserUIImpl$4;
using $SynthFileChooserUIImpl$AlignedLabel = ::sun::swing::plaf::synth::SynthFileChooserUIImpl$AlignedLabel;
using $SynthFileChooserUIImpl$ButtonAreaLayout = ::sun::swing::plaf::synth::SynthFileChooserUIImpl$ButtonAreaLayout;
using $SynthFileChooserUIImpl$DirectoryComboBoxAction = ::sun::swing::plaf::synth::SynthFileChooserUIImpl$DirectoryComboBoxAction;
using $SynthFileChooserUIImpl$DirectoryComboBoxModel = ::sun::swing::plaf::synth::SynthFileChooserUIImpl$DirectoryComboBoxModel;
using $SynthFileChooserUIImpl$DirectoryComboBoxRenderer = ::sun::swing::plaf::synth::SynthFileChooserUIImpl$DirectoryComboBoxRenderer;
using $SynthFileChooserUIImpl$FilterComboBoxModel = ::sun::swing::plaf::synth::SynthFileChooserUIImpl$FilterComboBoxModel;
using $SynthFileChooserUIImpl$FilterComboBoxRenderer = ::sun::swing::plaf::synth::SynthFileChooserUIImpl$FilterComboBoxRenderer;
using $SynthFileChooserUIImpl$SynthFileChooserUIAccessor = ::sun::swing::plaf::synth::SynthFileChooserUIImpl$SynthFileChooserUIAccessor;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUIImpl_FieldInfo_[] = {
	{"lookInLabel", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, lookInLabel)},
	{"directoryComboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/io/File;>;", $PRIVATE, $field(SynthFileChooserUIImpl, directoryComboBox)},
	{"directoryComboBoxModel", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl$DirectoryComboBoxModel;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, directoryComboBoxModel)},
	{"directoryComboBoxAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, directoryComboBoxAction)},
	{"filterComboBoxModel", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl$FilterComboBoxModel;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, filterComboBoxModel)},
	{"fileNameTextField", "Ljavax/swing/JTextField;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, fileNameTextField)},
	{"filePane", "Lsun/swing/FilePane;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, filePane)},
	{"listViewButton", "Ljavax/swing/JToggleButton;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, listViewButton)},
	{"detailsViewButton", "Ljavax/swing/JToggleButton;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, detailsViewButton)},
	{"readOnly", "Z", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, readOnly)},
	{"buttonPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, buttonPanel)},
	{"bottomPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, bottomPanel)},
	{"filterComboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljavax/swing/filechooser/FileFilter;>;", $PRIVATE, $field(SynthFileChooserUIImpl, filterComboBox)},
	{"hstrut5", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthFileChooserUIImpl, hstrut5)},
	{"shrinkwrap", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SynthFileChooserUIImpl, shrinkwrap)},
	{"LIST_PREF_SIZE", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticField(SynthFileChooserUIImpl, LIST_PREF_SIZE)},
	{"lookInLabelMnemonic", "I", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, lookInLabelMnemonic)},
	{"lookInLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, lookInLabelText)},
	{"saveInLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, saveInLabelText)},
	{"fileNameLabelMnemonic", "I", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, fileNameLabelMnemonic)},
	{"fileNameLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, fileNameLabelText)},
	{"folderNameLabelMnemonic", "I", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, folderNameLabelMnemonic)},
	{"folderNameLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, folderNameLabelText)},
	{"filesOfTypeLabelMnemonic", "I", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, filesOfTypeLabelMnemonic)},
	{"filesOfTypeLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, filesOfTypeLabelText)},
	{"upFolderToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, upFolderToolTipText)},
	{"upFolderAccessibleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, upFolderAccessibleName)},
	{"homeFolderToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, homeFolderToolTipText)},
	{"homeFolderAccessibleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, homeFolderAccessibleName)},
	{"newFolderToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, newFolderToolTipText)},
	{"newFolderAccessibleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, newFolderAccessibleName)},
	{"listViewButtonToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, listViewButtonToolTipText)},
	{"listViewButtonAccessibleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, listViewButtonAccessibleName)},
	{"detailsViewButtonToolTipText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, detailsViewButtonToolTipText)},
	{"detailsViewButtonAccessibleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, detailsViewButtonAccessibleName)},
	{"fileNameLabel", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl$AlignedLabel;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl, fileNameLabel)},
	{"modeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE | $FINAL, $field(SynthFileChooserUIImpl, modeListener)},
	{"space", "I", nullptr, $STATIC | $FINAL, $constField(SynthFileChooserUIImpl, space)},
	{}
};

$MethodInfo _SynthFileChooserUIImpl_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC, $method(static_cast<void(SynthFileChooserUIImpl::*)($JFileChooser*)>(&SynthFileChooserUIImpl::init$))},
	{"access$000", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;)Z", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(SynthFileChooserUIImpl*)>(&SynthFileChooserUIImpl::access$000))},
	{"access$100", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;)Ljava/io/File;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$File*(*)(SynthFileChooserUIImpl*)>(&SynthFileChooserUIImpl::access$100))},
	{"access$200", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;Ljavax/swing/JFileChooser;Ljavax/swing/JList;)Ljava/awt/event/MouseListener;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$MouseListener*(*)(SynthFileChooserUIImpl*,$JFileChooser*,$JList*)>(&SynthFileChooserUIImpl::access$200))},
	{"addControlButtons", "()V", nullptr, $PROTECTED},
	{"createActionMap", "()Ljavax/swing/ActionMap;", nullptr, $PROTECTED},
	{"createDirectoryComboBoxModel", "(Ljavax/swing/JFileChooser;)Lsun/swing/plaf/synth/SynthFileChooserUIImpl$DirectoryComboBoxModel;", nullptr, $PROTECTED},
	{"createDirectoryComboBoxRenderer", "(Ljavax/swing/JFileChooser;)Lsun/swing/plaf/synth/SynthFileChooserUIImpl$DirectoryComboBoxRenderer;", nullptr, $PROTECTED},
	{"createFilterComboBoxModel", "()Lsun/swing/plaf/synth/SynthFileChooserUIImpl$FilterComboBoxModel;", nullptr, $PROTECTED},
	{"createFilterComboBoxRenderer", "()Lsun/swing/plaf/synth/SynthFileChooserUIImpl$FilterComboBoxRenderer;", nullptr, $PROTECTED},
	{"doAccessoryChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doControlButtonsChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doDirectoryChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doFileSelectionModeChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doSelectedFileChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"doSelectedFilesChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"fileNameString", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(SynthFileChooserUIImpl::*)($File*)>(&SynthFileChooserUIImpl::fileNameString))},
	{"fileNameString", "([Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(SynthFileChooserUIImpl::*)($FileArray*)>(&SynthFileChooserUIImpl::fileNameString))},
	{"getDirectoryComboBox", "()Ljavax/swing/JComponent;", nullptr, $PROTECTED},
	{"getDirectoryComboBoxAction", "()Ljavax/swing/Action;", nullptr, $PROTECTED},
	{"getFileName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMnemonic", "(Ljava/lang/String;Ljava/util/Locale;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthFileChooserUIImpl::*)($String*,$Locale*)>(&SynthFileChooserUIImpl::getMnemonic))},
	{"groupLabels", "([Lsun/swing/plaf/synth/SynthFileChooserUIImpl$AlignedLabel;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($SynthFileChooserUIImpl$AlignedLabelArray*)>(&SynthFileChooserUIImpl::groupLabels))},
	{"installComponents", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installStrings", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"populateFileNameLabel", "()V", nullptr, $PRIVATE, $method(static_cast<void(SynthFileChooserUIImpl::*)()>(&SynthFileChooserUIImpl::populateFileNameLabel))},
	{"removeControlButtons", "()V", nullptr, $PROTECTED},
	{"rescanCurrentDirectory", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"setFileName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"uninstallListeners", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthFileChooserUIImpl_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$AlignedLabel", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "AlignedLabel", $PRIVATE},
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$ButtonAreaLayout", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "ButtonAreaLayout", $PRIVATE | $STATIC},
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$FilterComboBoxModel", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "FilterComboBoxModel", $PROTECTED},
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$FilterComboBoxRenderer", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "FilterComboBoxRenderer", $PUBLIC},
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$DirectoryComboBoxAction", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "DirectoryComboBoxAction", $PROTECTED},
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$DirectoryComboBoxModel", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "DirectoryComboBoxModel", $PROTECTED},
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$IndentIcon", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "IndentIcon", 0},
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$DirectoryComboBoxRenderer", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "DirectoryComboBoxRenderer", $PRIVATE},
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$SynthFileChooserUIAccessor", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "SynthFileChooserUIAccessor", $PRIVATE},
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$4", nullptr, nullptr, 0},
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$3", nullptr, nullptr, 0},
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$2", nullptr, nullptr, 0},
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthFileChooserUIImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl",
	"sun.swing.plaf.synth.SynthFileChooserUI",
	nullptr,
	_SynthFileChooserUIImpl_FieldInfo_,
	_SynthFileChooserUIImpl_MethodInfo_,
	nullptr,
	nullptr,
	_SynthFileChooserUIImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl$AlignedLabel,sun.swing.plaf.synth.SynthFileChooserUIImpl$ButtonAreaLayout,sun.swing.plaf.synth.SynthFileChooserUIImpl$FilterComboBoxModel,sun.swing.plaf.synth.SynthFileChooserUIImpl$FilterComboBoxRenderer,sun.swing.plaf.synth.SynthFileChooserUIImpl$DirectoryComboBoxAction,sun.swing.plaf.synth.SynthFileChooserUIImpl$DirectoryComboBoxModel,sun.swing.plaf.synth.SynthFileChooserUIImpl$IndentIcon,sun.swing.plaf.synth.SynthFileChooserUIImpl$DirectoryComboBoxRenderer,sun.swing.plaf.synth.SynthFileChooserUIImpl$SynthFileChooserUIAccessor,sun.swing.plaf.synth.SynthFileChooserUIImpl$4,sun.swing.plaf.synth.SynthFileChooserUIImpl$3,sun.swing.plaf.synth.SynthFileChooserUIImpl$2,sun.swing.plaf.synth.SynthFileChooserUIImpl$1"
};

$Object* allocate$SynthFileChooserUIImpl($Class* clazz) {
	return $of($alloc(SynthFileChooserUIImpl));
}

$Dimension* SynthFileChooserUIImpl::hstrut5 = nullptr;
$Insets* SynthFileChooserUIImpl::shrinkwrap = nullptr;
$Dimension* SynthFileChooserUIImpl::LIST_PREF_SIZE = nullptr;

$MouseListener* SynthFileChooserUIImpl::access$200(SynthFileChooserUIImpl* x0, $JFileChooser* x1, $JList* x2) {
	$init(SynthFileChooserUIImpl);
	return $nc(x0)->createDoubleClickListener(x1, x2);
}

$File* SynthFileChooserUIImpl::access$100(SynthFileChooserUIImpl* x0) {
	$init(SynthFileChooserUIImpl);
	return $nc(x0)->getDirectory();
}

bool SynthFileChooserUIImpl::access$000(SynthFileChooserUIImpl* x0) {
	$init(SynthFileChooserUIImpl);
	return $nc(x0)->isDirectorySelected();
}

void SynthFileChooserUIImpl::populateFileNameLabel() {
	if ($nc($(getFileChooser()))->getFileSelectionMode() == $JFileChooser::DIRECTORIES_ONLY) {
		$nc(this->fileNameLabel)->setText(this->folderNameLabelText);
		$nc(this->fileNameLabel)->setDisplayedMnemonic(this->folderNameLabelMnemonic);
	} else {
		$nc(this->fileNameLabel)->setText(this->fileNameLabelText);
		$nc(this->fileNameLabel)->setDisplayedMnemonic(this->fileNameLabelMnemonic);
	}
}

void SynthFileChooserUIImpl::init$($JFileChooser* b) {
	$SynthFileChooserUI::init$(b);
	$set(this, directoryComboBoxAction, $new($SynthFileChooserUIImpl$DirectoryComboBoxAction, this));
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
	$set(this, modeListener, $new($SynthFileChooserUIImpl$1, this));
}

void SynthFileChooserUIImpl::installDefaults($JFileChooser* fc) {
	$SynthFileChooserUI::installDefaults(fc);
	this->readOnly = $UIManager::getBoolean("FileChooser.readOnly"_s);
}

void SynthFileChooserUIImpl::installComponents($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$SynthFileChooserUI::installComponents(fc);
	$var($SynthContext, context, getContext(fc, $SynthConstants::ENABLED));
	$nc(fc)->setLayout($$new($BorderLayout, 0, 11));
	$var($JPanel, topPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout, 11, 0))));
	$var($JPanel, topButtonPanel, $new($JPanel));
	topButtonPanel->setLayout($$new($BoxLayout, topButtonPanel, $BoxLayout::LINE_AXIS));
	$init($BorderLayout);
	topPanel->add(static_cast<$Component*>(topButtonPanel), $of($BorderLayout::AFTER_LINE_ENDS));
	fc->add(static_cast<$Component*>(topPanel), $of($BorderLayout::NORTH));
	$set(this, lookInLabel, $new($JLabel, this->lookInLabelText));
	$nc(this->lookInLabel)->setDisplayedMnemonic(this->lookInLabelMnemonic);
	topPanel->add(static_cast<$Component*>(this->lookInLabel), $of($BorderLayout::BEFORE_LINE_BEGINS));
	$set(this, directoryComboBox, $new($JComboBox));
	$nc($($nc(this->directoryComboBox)->getAccessibleContext()))->setAccessibleDescription(this->lookInLabelText);
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
	$set(this, filePane, $new($FilePane, $$new($SynthFileChooserUIImpl$SynthFileChooserUIAccessor, this)));
	fc->addPropertyChangeListener(this->filePane);
	$var($JPopupMenu, contextMenu, $nc(this->filePane)->getComponentPopupMenu());
	if (contextMenu != nullptr) {
		contextMenu->insert($(getChangeToParentDirectoryAction()), 0);
		$init($File);
		if ($File::separatorChar == u'/') {
			contextMenu->insert($(getGoHomeAction()), 1);
		}
	}
	$var($FileSystemView, fsv, fc->getFileSystemView());
	$var($JButton, upFolderButton, $new($JButton, $(getChangeToParentDirectoryAction())));
	upFolderButton->setText(nullptr);
	upFolderButton->setIcon(this->upFolderIcon);
	upFolderButton->setToolTipText(this->upFolderToolTipText);
	$nc($(upFolderButton->getAccessibleContext()))->setAccessibleName(this->upFolderAccessibleName);
	upFolderButton->setAlignmentX($JComponent::LEFT_ALIGNMENT);
	upFolderButton->setAlignmentY($JComponent::CENTER_ALIGNMENT);
	upFolderButton->setMargin(SynthFileChooserUIImpl::shrinkwrap);
	topButtonPanel->add(static_cast<$Component*>(upFolderButton));
	topButtonPanel->add($($Box::createRigidArea(SynthFileChooserUIImpl::hstrut5)));
	$var($File, homeDir, $nc(fsv)->getHomeDirectory());
	$var($String, toolTipText, this->homeFolderToolTipText);
	$var($JButton, b, $new($JButton, this->homeFolderIcon));
	b->setToolTipText(toolTipText);
	$nc($(b->getAccessibleContext()))->setAccessibleName(this->homeFolderAccessibleName);
	b->setAlignmentX($JComponent::LEFT_ALIGNMENT);
	b->setAlignmentY($JComponent::CENTER_ALIGNMENT);
	b->setMargin(SynthFileChooserUIImpl::shrinkwrap);
	b->addActionListener($(getGoHomeAction()));
	topButtonPanel->add(static_cast<$Component*>(b));
	topButtonPanel->add($($Box::createRigidArea(SynthFileChooserUIImpl::hstrut5)));
	if (!this->readOnly) {
		$assign(b, $new($JButton, $($nc(this->filePane)->getNewFolderAction())));
		b->setText(nullptr);
		b->setIcon(this->newFolderIcon);
		b->setToolTipText(this->newFolderToolTipText);
		$nc($(b->getAccessibleContext()))->setAccessibleName(this->newFolderAccessibleName);
		b->setAlignmentX($JComponent::LEFT_ALIGNMENT);
		b->setAlignmentY($JComponent::CENTER_ALIGNMENT);
		b->setMargin(SynthFileChooserUIImpl::shrinkwrap);
		topButtonPanel->add(static_cast<$Component*>(b));
		topButtonPanel->add($($Box::createRigidArea(SynthFileChooserUIImpl::hstrut5)));
	}
	$var($ButtonGroup, viewButtonGroup, $new($ButtonGroup));
	$set(this, listViewButton, $new($JToggleButton, this->listViewIcon));
	$nc(this->listViewButton)->setToolTipText(this->listViewButtonToolTipText);
	$nc($($nc(this->listViewButton)->getAccessibleContext()))->setAccessibleName(this->listViewButtonAccessibleName);
	$nc(this->listViewButton)->setSelected(true);
	$nc(this->listViewButton)->setAlignmentX($JComponent::LEFT_ALIGNMENT);
	$nc(this->listViewButton)->setAlignmentY($JComponent::CENTER_ALIGNMENT);
	$nc(this->listViewButton)->setMargin(SynthFileChooserUIImpl::shrinkwrap);
	$nc(this->listViewButton)->addActionListener($($nc(this->filePane)->getViewTypeAction($FilePane::VIEWTYPE_LIST)));
	topButtonPanel->add(static_cast<$Component*>(this->listViewButton));
	viewButtonGroup->add(this->listViewButton);
	$set(this, detailsViewButton, $new($JToggleButton, this->detailsViewIcon));
	$nc(this->detailsViewButton)->setToolTipText(this->detailsViewButtonToolTipText);
	$nc($($nc(this->detailsViewButton)->getAccessibleContext()))->setAccessibleName(this->detailsViewButtonAccessibleName);
	$nc(this->detailsViewButton)->setAlignmentX($JComponent::LEFT_ALIGNMENT);
	$nc(this->detailsViewButton)->setAlignmentY($JComponent::CENTER_ALIGNMENT);
	$nc(this->detailsViewButton)->setMargin(SynthFileChooserUIImpl::shrinkwrap);
	$nc(this->detailsViewButton)->addActionListener($($nc(this->filePane)->getViewTypeAction($FilePane::VIEWTYPE_DETAILS)));
	topButtonPanel->add(static_cast<$Component*>(this->detailsViewButton));
	viewButtonGroup->add(this->detailsViewButton);
	$nc(this->filePane)->addPropertyChangeListener($$new($SynthFileChooserUIImpl$2, this));
	fc->add($(static_cast<$Component*>(getAccessoryPanel())), $of($BorderLayout::AFTER_LINE_ENDS));
	$var($JComponent, accessory, fc->getAccessory());
	if (accessory != nullptr) {
		$nc($(getAccessoryPanel()))->add(static_cast<$Component*>(accessory));
	}
	$nc(this->filePane)->setPreferredSize(SynthFileChooserUIImpl::LIST_PREF_SIZE);
	fc->add(static_cast<$Component*>(this->filePane), $of($BorderLayout::CENTER));
	$set(this, bottomPanel, $new($JPanel));
	$nc(this->bottomPanel)->setLayout($$new($BoxLayout, this->bottomPanel, $BoxLayout::Y_AXIS));
	fc->add(static_cast<$Component*>(this->bottomPanel), $of($BorderLayout::SOUTH));
	$var($JPanel, fileNamePanel, $new($JPanel));
	fileNamePanel->setLayout($$new($BoxLayout, fileNamePanel, $BoxLayout::LINE_AXIS));
	$nc(this->bottomPanel)->add(static_cast<$Component*>(fileNamePanel));
	$nc(this->bottomPanel)->add($($Box::createRigidArea($$new($Dimension, 1, 5))));
	$set(this, fileNameLabel, $new($SynthFileChooserUIImpl$AlignedLabel, this));
	populateFileNameLabel();
	fileNamePanel->add(static_cast<$Component*>(this->fileNameLabel));
	$set(this, fileNameTextField, $new($SynthFileChooserUIImpl$3, this, 35));
	fileNamePanel->add(static_cast<$Component*>(this->fileNameTextField));
	$nc(this->fileNameLabel)->setLabelFor(this->fileNameTextField);
	$nc(this->fileNameTextField)->addFocusListener($$new($SynthFileChooserUIImpl$4, this));
	if (fc->isMultiSelectionEnabled()) {
		setFileName($(fileNameString($(fc->getSelectedFiles()))));
	} else {
		setFileName($(fileNameString($(fc->getSelectedFile()))));
	}
	$var($JPanel, filesOfTypePanel, $new($JPanel));
	filesOfTypePanel->setLayout($$new($BoxLayout, filesOfTypePanel, $BoxLayout::LINE_AXIS));
	$nc(this->bottomPanel)->add(static_cast<$Component*>(filesOfTypePanel));
	$var($SynthFileChooserUIImpl$AlignedLabel, filesOfTypeLabel, $new($SynthFileChooserUIImpl$AlignedLabel, this, this->filesOfTypeLabelText));
	filesOfTypeLabel->setDisplayedMnemonic(this->filesOfTypeLabelMnemonic);
	filesOfTypePanel->add(static_cast<$Component*>(filesOfTypeLabel));
	$set(this, filterComboBoxModel, createFilterComboBoxModel());
	fc->addPropertyChangeListener(this->filterComboBoxModel);
	$set(this, filterComboBox, $new($JComboBox, static_cast<$ComboBoxModel*>(this->filterComboBoxModel)));
	$nc($($nc(this->filterComboBox)->getAccessibleContext()))->setAccessibleDescription(this->filesOfTypeLabelText);
	filesOfTypeLabel->setLabelFor(this->filterComboBox);
	$nc(this->filterComboBox)->setRenderer($(createFilterComboBoxRenderer()));
	filesOfTypePanel->add(static_cast<$Component*>(this->filterComboBox));
	$set(this, buttonPanel, $new($JPanel));
	$nc(this->buttonPanel)->setLayout($$new($SynthFileChooserUIImpl$ButtonAreaLayout));
	$nc(this->buttonPanel)->add($(static_cast<$Component*>(getApproveButton(fc))));
	$nc(this->buttonPanel)->add($(static_cast<$Component*>(getCancelButton(fc))));
	if (fc->getControlButtonsAreShown()) {
		addControlButtons();
	}
	groupLabels($$new($SynthFileChooserUIImpl$AlignedLabelArray, {
		this->fileNameLabel,
		filesOfTypeLabel
	}));
}

void SynthFileChooserUIImpl::installListeners($JFileChooser* fc) {
	$SynthFileChooserUI::installListeners(fc);
	$init($JFileChooser);
	$nc(fc)->addPropertyChangeListener($JFileChooser::FILE_SELECTION_MODE_CHANGED_PROPERTY, this->modeListener);
}

void SynthFileChooserUIImpl::uninstallListeners($JFileChooser* fc) {
	$init($JFileChooser);
	$nc(fc)->removePropertyChangeListener($JFileChooser::FILE_SELECTION_MODE_CHANGED_PROPERTY, this->modeListener);
	$SynthFileChooserUI::uninstallListeners(fc);
}

$String* SynthFileChooserUIImpl::fileNameString($File* file) {
	if (file == nullptr) {
		return nullptr;
	} else {
		$var($JFileChooser, fc, getFileChooser());
		bool var$0 = $nc(fc)->isDirectorySelectionEnabled();
		if (var$0 && !fc->isFileSelectionEnabled()) {
			return $nc(file)->getPath();
		} else {
			return $nc(file)->getName();
		}
	}
}

$String* SynthFileChooserUIImpl::fileNameString($FileArray* files) {
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

void SynthFileChooserUIImpl::uninstallUI($JComponent* c) {
	$nc(c)->removePropertyChangeListener(this->filterComboBoxModel);
	c->removePropertyChangeListener(this->filePane);
	if (this->filePane != nullptr) {
		$nc(this->filePane)->uninstallUI();
		$set(this, filePane, nullptr);
	}
	$SynthFileChooserUI::uninstallUI(c);
}

void SynthFileChooserUIImpl::installStrings($JFileChooser* fc) {
	$SynthFileChooserUI::installStrings(fc);
	$var($Locale, l, $nc(fc)->getLocale());
	this->lookInLabelMnemonic = getMnemonic("FileChooser.lookInLabelMnemonic"_s, l);
	$set(this, lookInLabelText, $UIManager::getString($of("FileChooser.lookInLabelText"_s), l));
	$set(this, saveInLabelText, $UIManager::getString($of("FileChooser.saveInLabelText"_s), l));
	this->fileNameLabelMnemonic = getMnemonic("FileChooser.fileNameLabelMnemonic"_s, l);
	$set(this, fileNameLabelText, $UIManager::getString($of("FileChooser.fileNameLabelText"_s), l));
	this->folderNameLabelMnemonic = getMnemonic("FileChooser.folderNameLabelMnemonic"_s, l);
	$set(this, folderNameLabelText, $UIManager::getString($of("FileChooser.folderNameLabelText"_s), l));
	this->filesOfTypeLabelMnemonic = getMnemonic("FileChooser.filesOfTypeLabelMnemonic"_s, l);
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

int32_t SynthFileChooserUIImpl::getMnemonic($String* key, $Locale* l) {
	return $SwingUtilities2::getUIDefaultsInt($of(key), l);
}

$String* SynthFileChooserUIImpl::getFileName() {
	if (this->fileNameTextField != nullptr) {
		return $nc(this->fileNameTextField)->getText();
	} else {
		return nullptr;
	}
}

void SynthFileChooserUIImpl::setFileName($String* fileName) {
	if (this->fileNameTextField != nullptr) {
		$nc(this->fileNameTextField)->setText(fileName);
	}
}

void SynthFileChooserUIImpl::rescanCurrentDirectory($JFileChooser* fc) {
	$nc(this->filePane)->rescanCurrentDirectory();
}

void SynthFileChooserUIImpl::doSelectedFileChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$SynthFileChooserUI::doSelectedFileChanged(e);
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

void SynthFileChooserUIImpl::doSelectedFilesChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$SynthFileChooserUI::doSelectedFilesChanged(e);
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

void SynthFileChooserUIImpl::doDirectoryChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$SynthFileChooserUI::doDirectoryChanged(e);
	$var($JFileChooser, fc, getFileChooser());
	$var($FileSystemView, fsv, $nc(fc)->getFileSystemView());
	$var($File, currentDirectory, fc->getCurrentDirectory());
	if (!this->readOnly && currentDirectory != nullptr) {
		$nc($(getNewFolderAction()))->setEnabled($nc(this->filePane)->canWrite(currentDirectory));
	}
	if (currentDirectory != nullptr) {
		$var($JComponent, cb, getDirectoryComboBox());
		if ($instanceOf($JComboBox, cb)) {
			$var($ComboBoxModel, model, $nc(($cast($JComboBox, cb)))->getModel());
			if ($instanceOf($SynthFileChooserUIImpl$DirectoryComboBoxModel, model)) {
				$nc(($cast($SynthFileChooserUIImpl$DirectoryComboBoxModel, model)))->addItem(currentDirectory);
			}
		}
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

void SynthFileChooserUIImpl::doFileSelectionModeChanged($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$SynthFileChooserUI::doFileSelectionModeChanged(e);
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

void SynthFileChooserUIImpl::doAccessoryChanged($PropertyChangeEvent* e) {
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

void SynthFileChooserUIImpl::doControlButtonsChanged($PropertyChangeEvent* e) {
	$SynthFileChooserUI::doControlButtonsChanged(e);
	if ($nc($(getFileChooser()))->getControlButtonsAreShown()) {
		addControlButtons();
	} else {
		removeControlButtons();
	}
}

void SynthFileChooserUIImpl::addControlButtons() {
	if (this->bottomPanel != nullptr) {
		$nc(this->bottomPanel)->add(static_cast<$Component*>(this->buttonPanel));
	}
}

void SynthFileChooserUIImpl::removeControlButtons() {
	if (this->bottomPanel != nullptr) {
		$nc(this->bottomPanel)->remove(static_cast<$Component*>(this->buttonPanel));
	}
}

$ActionMap* SynthFileChooserUIImpl::createActionMap() {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, map, $new($ActionMapUIResource));
	$FilePane::addActionsToMap(map, $($nc(this->filePane)->getActions()));
	map->put("fileNameCompletion"_s, $(getFileNameCompletionAction()));
	return map;
}

$JComponent* SynthFileChooserUIImpl::getDirectoryComboBox() {
	return this->directoryComboBox;
}

$Action* SynthFileChooserUIImpl::getDirectoryComboBoxAction() {
	return this->directoryComboBoxAction;
}

$SynthFileChooserUIImpl$DirectoryComboBoxRenderer* SynthFileChooserUIImpl::createDirectoryComboBoxRenderer($JFileChooser* fc) {
	return $new($SynthFileChooserUIImpl$DirectoryComboBoxRenderer, this, $($nc(this->directoryComboBox)->getRenderer()));
}

$SynthFileChooserUIImpl$DirectoryComboBoxModel* SynthFileChooserUIImpl::createDirectoryComboBoxModel($JFileChooser* fc) {
	return $new($SynthFileChooserUIImpl$DirectoryComboBoxModel, this);
}

$SynthFileChooserUIImpl$FilterComboBoxRenderer* SynthFileChooserUIImpl::createFilterComboBoxRenderer() {
	return $new($SynthFileChooserUIImpl$FilterComboBoxRenderer, this, $($nc(this->filterComboBox)->getRenderer()));
}

$SynthFileChooserUIImpl$FilterComboBoxModel* SynthFileChooserUIImpl::createFilterComboBoxModel() {
	return $new($SynthFileChooserUIImpl$FilterComboBoxModel, this);
}

void SynthFileChooserUIImpl::groupLabels($SynthFileChooserUIImpl$AlignedLabelArray* group) {
	$init(SynthFileChooserUIImpl);
	for (int32_t i = 0; i < $nc(group)->length; ++i) {
		$set($nc(group->get(i)), group, group);
	}
}

void clinit$SynthFileChooserUIImpl($Class* class$) {
	$assignStatic(SynthFileChooserUIImpl::hstrut5, $new($Dimension, 5, 1));
	$assignStatic(SynthFileChooserUIImpl::shrinkwrap, $new($Insets, 0, 0, 0, 0));
	$assignStatic(SynthFileChooserUIImpl::LIST_PREF_SIZE, $new($Dimension, 405, 135));
}

SynthFileChooserUIImpl::SynthFileChooserUIImpl() {
}

$Class* SynthFileChooserUIImpl::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUIImpl, name, initialize, &_SynthFileChooserUIImpl_ClassInfo_, clinit$SynthFileChooserUIImpl, allocate$SynthFileChooserUIImpl);
	return class$;
}

$Class* SynthFileChooserUIImpl::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun