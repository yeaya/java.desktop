#include <javax/swing/plaf/basic/BasicFileChooserUI.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/File.h>
#include <java/io/FileNotFoundException.h>
#include <java/util/Locale.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/Icon.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/filechooser/FileSystemView.h>
#include <javax/swing/filechooser/FileView.h>
#include <javax/swing/plaf/ActionMapUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FileChooserUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$1.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$AcceptAllFileFilter.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$ApproveSelectionAction.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$BasicFileView.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$CancelSelectionAction.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$ChangeToParentDirectoryAction.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$FileTransferHandler.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$GlobFilter.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$GoHomeAction.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$Handler.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$NewFolderAction.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$UpdateAction.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/FilePane.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef ACTION_APPROVE_SELECTION
#undef ACTION_CANCEL
#undef ACTION_CHANGE_TO_PARENT_DIRECTORY
#undef ACTION_REFRESH
#undef FALSE
#undef FILES_AND_DIRECTORIES
#undef OPEN_DIALOG
#undef SAVE_DIALOG
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT

using $BorderLayout = ::java::awt::BorderLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $File = ::java::io::File;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $AbstractAction = ::javax::swing::AbstractAction;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $InputMap = ::javax::swing::InputMap;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JList = ::javax::swing::JList;
using $JPanel = ::javax::swing::JPanel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TransferHandler = ::javax::swing::TransferHandler;
using $UIManager = ::javax::swing::UIManager;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $FileFilter = ::javax::swing::filechooser::FileFilter;
using $FileSystemView = ::javax::swing::filechooser::FileSystemView;
using $FileView = ::javax::swing::filechooser::FileView;
using $ActionMapUIResource = ::javax::swing::plaf::ActionMapUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $FileChooserUI = ::javax::swing::plaf::FileChooserUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $BasicFileChooserUI$1 = ::javax::swing::plaf::basic::BasicFileChooserUI$1;
using $BasicFileChooserUI$AcceptAllFileFilter = ::javax::swing::plaf::basic::BasicFileChooserUI$AcceptAllFileFilter;
using $BasicFileChooserUI$ApproveSelectionAction = ::javax::swing::plaf::basic::BasicFileChooserUI$ApproveSelectionAction;
using $BasicFileChooserUI$BasicFileView = ::javax::swing::plaf::basic::BasicFileChooserUI$BasicFileView;
using $BasicFileChooserUI$CancelSelectionAction = ::javax::swing::plaf::basic::BasicFileChooserUI$CancelSelectionAction;
using $BasicFileChooserUI$ChangeToParentDirectoryAction = ::javax::swing::plaf::basic::BasicFileChooserUI$ChangeToParentDirectoryAction;
using $BasicFileChooserUI$FileTransferHandler = ::javax::swing::plaf::basic::BasicFileChooserUI$FileTransferHandler;
using $BasicFileChooserUI$GoHomeAction = ::javax::swing::plaf::basic::BasicFileChooserUI$GoHomeAction;
using $BasicFileChooserUI$Handler = ::javax::swing::plaf::basic::BasicFileChooserUI$Handler;
using $BasicFileChooserUI$NewFolderAction = ::javax::swing::plaf::basic::BasicFileChooserUI$NewFolderAction;
using $BasicFileChooserUI$UpdateAction = ::javax::swing::plaf::basic::BasicFileChooserUI$UpdateAction;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $FilePane = ::sun::swing::FilePane;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicFileChooserUI_FieldInfo_[] = {
	{"directoryIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicFileChooserUI, directoryIcon)},
	{"fileIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicFileChooserUI, fileIcon)},
	{"computerIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicFileChooserUI, computerIcon)},
	{"hardDriveIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicFileChooserUI, hardDriveIcon)},
	{"floppyDriveIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicFileChooserUI, floppyDriveIcon)},
	{"newFolderIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicFileChooserUI, newFolderIcon)},
	{"upFolderIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicFileChooserUI, upFolderIcon)},
	{"homeFolderIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicFileChooserUI, homeFolderIcon)},
	{"listViewIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicFileChooserUI, listViewIcon)},
	{"detailsViewIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicFileChooserUI, detailsViewIcon)},
	{"viewMenuIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(BasicFileChooserUI, viewMenuIcon)},
	{"saveButtonMnemonic", "I", nullptr, $PROTECTED, $field(BasicFileChooserUI, saveButtonMnemonic)},
	{"openButtonMnemonic", "I", nullptr, $PROTECTED, $field(BasicFileChooserUI, openButtonMnemonic)},
	{"cancelButtonMnemonic", "I", nullptr, $PROTECTED, $field(BasicFileChooserUI, cancelButtonMnemonic)},
	{"updateButtonMnemonic", "I", nullptr, $PROTECTED, $field(BasicFileChooserUI, updateButtonMnemonic)},
	{"helpButtonMnemonic", "I", nullptr, $PROTECTED, $field(BasicFileChooserUI, helpButtonMnemonic)},
	{"directoryOpenButtonMnemonic", "I", nullptr, $PROTECTED, $field(BasicFileChooserUI, directoryOpenButtonMnemonic)},
	{"saveButtonText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicFileChooserUI, saveButtonText)},
	{"openButtonText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicFileChooserUI, openButtonText)},
	{"cancelButtonText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicFileChooserUI, cancelButtonText)},
	{"updateButtonText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicFileChooserUI, updateButtonText)},
	{"helpButtonText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicFileChooserUI, helpButtonText)},
	{"directoryOpenButtonText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicFileChooserUI, directoryOpenButtonText)},
	{"openDialogTitleText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicFileChooserUI, openDialogTitleText)},
	{"saveDialogTitleText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicFileChooserUI, saveDialogTitleText)},
	{"saveButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicFileChooserUI, saveButtonToolTipText)},
	{"openButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicFileChooserUI, openButtonToolTipText)},
	{"cancelButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicFileChooserUI, cancelButtonToolTipText)},
	{"updateButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicFileChooserUI, updateButtonToolTipText)},
	{"helpButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicFileChooserUI, helpButtonToolTipText)},
	{"directoryOpenButtonToolTipText", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicFileChooserUI, directoryOpenButtonToolTipText)},
	{"approveSelectionAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(BasicFileChooserUI, approveSelectionAction)},
	{"cancelSelectionAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(BasicFileChooserUI, cancelSelectionAction)},
	{"updateAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(BasicFileChooserUI, updateAction)},
	{"newFolderAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(BasicFileChooserUI, newFolderAction)},
	{"goHomeAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(BasicFileChooserUI, goHomeAction)},
	{"changeToParentDirectoryAction", "Ljavax/swing/Action;", nullptr, $PRIVATE, $field(BasicFileChooserUI, changeToParentDirectoryAction)},
	{"newFolderErrorSeparator", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicFileChooserUI, newFolderErrorSeparator)},
	{"newFolderErrorText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicFileChooserUI, newFolderErrorText)},
	{"newFolderParentDoesntExistTitleText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicFileChooserUI, newFolderParentDoesntExistTitleText)},
	{"newFolderParentDoesntExistText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicFileChooserUI, newFolderParentDoesntExistText)},
	{"fileDescriptionText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicFileChooserUI, fileDescriptionText)},
	{"directoryDescriptionText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicFileChooserUI, directoryDescriptionText)},
	{"filechooser", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE, $field(BasicFileChooserUI, filechooser)},
	{"directorySelected", "Z", nullptr, $PRIVATE, $field(BasicFileChooserUI, directorySelected)},
	{"directory", "Ljava/io/File;", nullptr, $PRIVATE, $field(BasicFileChooserUI, directory)},
	{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(BasicFileChooserUI, propertyChangeListener)},
	{"acceptAllFileFilter", "Ljavax/swing/plaf/basic/BasicFileChooserUI$AcceptAllFileFilter;", nullptr, $PRIVATE, $field(BasicFileChooserUI, acceptAllFileFilter)},
	{"actualFileFilter", "Ljavax/swing/filechooser/FileFilter;", nullptr, $PRIVATE, $field(BasicFileChooserUI, actualFileFilter)},
	{"globFilter", "Ljavax/swing/plaf/basic/BasicFileChooserUI$GlobFilter;", nullptr, $PRIVATE, $field(BasicFileChooserUI, globFilter)},
	{"model", "Ljavax/swing/plaf/basic/BasicDirectoryModel;", nullptr, $PRIVATE, $field(BasicFileChooserUI, model)},
	{"fileView", "Ljavax/swing/plaf/basic/BasicFileChooserUI$BasicFileView;", nullptr, $PRIVATE, $field(BasicFileChooserUI, fileView)},
	{"usesSingleFilePane", "Z", nullptr, $PRIVATE, $field(BasicFileChooserUI, usesSingleFilePane)},
	{"readOnly", "Z", nullptr, $PRIVATE, $field(BasicFileChooserUI, readOnly)},
	{"accessoryPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(BasicFileChooserUI, accessoryPanel)},
	{"handler", "Ljavax/swing/plaf/basic/BasicFileChooserUI$Handler;", nullptr, $PRIVATE, $field(BasicFileChooserUI, handler)},
	{"defaultTransferHandler", "Ljavax/swing/TransferHandler;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicFileChooserUI, defaultTransferHandler)},
	{}
};

$MethodInfo _BasicFileChooserUI_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicFileChooserUI::*)($JFileChooser*)>(&BasicFileChooserUI::init$))},
	{"changeDirectory", "(Ljava/io/File;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicFileChooserUI::*)($File*)>(&BasicFileChooserUI::changeDirectory))},
	{"clearIconCache", "()V", nullptr, $PUBLIC},
	{"createActionMap", "()Ljavax/swing/ActionMap;", nullptr, 0},
	{"createDoubleClickListener", "(Ljavax/swing/JFileChooser;Ljavax/swing/JList;)Ljava/awt/event/MouseListener;", "(Ljavax/swing/JFileChooser;Ljavax/swing/JList<*>;)Ljava/awt/event/MouseListener;", $PROTECTED},
	{"createListSelectionListener", "(Ljavax/swing/JFileChooser;)Ljavax/swing/event/ListSelectionListener;", nullptr, $PUBLIC},
	{"createModel", "()V", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "(Ljavax/swing/JFileChooser;)Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicFileChooserUI::createUI))},
	{"ensureFileIsVisible", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, $PUBLIC},
	{"getAcceptAllFileFilter", "(Ljavax/swing/JFileChooser;)Ljavax/swing/filechooser/FileFilter;", nullptr, $PUBLIC},
	{"getAccessoryPanel", "()Ljavax/swing/JPanel;", nullptr, $PUBLIC},
	{"getActionMap", "()Ljavax/swing/ActionMap;", nullptr, 0},
	{"getApproveButton", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"getApproveButtonMnemonic", "(Ljavax/swing/JFileChooser;)I", nullptr, $PUBLIC},
	{"getApproveButtonText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getApproveButtonToolTipText", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getApproveSelectionAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getCancelSelectionAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getChangeToParentDirectoryAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getDefaultButton", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JButton;", nullptr, $PUBLIC},
	{"getDialogTitle", "(Ljavax/swing/JFileChooser;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDirectory", "()Ljava/io/File;", nullptr, $PROTECTED},
	{"getDirectoryName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileChooser", "()Ljavax/swing/JFileChooser;", nullptr, $PUBLIC},
	{"getFileName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileView", "(Ljavax/swing/JFileChooser;)Ljavax/swing/filechooser/FileView;", nullptr, $PUBLIC},
	{"getGoHomeAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicFileChooserUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicFileChooserUI$Handler*(BasicFileChooserUI::*)()>(&BasicFileChooserUI::getHandler))},
	{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0},
	{"getMnemonic", "(Ljava/lang/String;Ljava/util/Locale;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicFileChooserUI::*)($String*,$Locale*)>(&BasicFileChooserUI::getMnemonic))},
	{"getModel", "()Ljavax/swing/plaf/basic/BasicDirectoryModel;", nullptr, $PUBLIC},
	{"getNewFolderAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"getUpdateAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC},
	{"installComponents", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"installDefaults", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installIcons", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installStrings", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isDirectorySelected", "()Z", nullptr, $PROTECTED},
	{"isGlobPattern", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&BasicFileChooserUI::isGlobPattern))},
	{"rescanCurrentDirectory", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"resetGlobFilter", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicFileChooserUI::*)()>(&BasicFileChooserUI::resetGlobFilter))},
	{"setDirectory", "(Ljava/io/File;)V", nullptr, $PROTECTED},
	{"setDirectoryName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setDirectorySelected", "(Z)V", nullptr, $PROTECTED},
	{"setFileName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"uninstallComponents", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"uninstallIcons", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"uninstallStrings", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicFileChooserUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicFileChooserUI$FileTransferHandler", "javax.swing.plaf.basic.BasicFileChooserUI", "FileTransferHandler", $STATIC},
	{"javax.swing.plaf.basic.BasicFileChooserUI$BasicFileView", "javax.swing.plaf.basic.BasicFileChooserUI", "BasicFileView", $PROTECTED},
	{"javax.swing.plaf.basic.BasicFileChooserUI$AcceptAllFileFilter", "javax.swing.plaf.basic.BasicFileChooserUI", "AcceptAllFileFilter", $PROTECTED},
	{"javax.swing.plaf.basic.BasicFileChooserUI$UpdateAction", "javax.swing.plaf.basic.BasicFileChooserUI", "UpdateAction", $PROTECTED},
	{"javax.swing.plaf.basic.BasicFileChooserUI$CancelSelectionAction", "javax.swing.plaf.basic.BasicFileChooserUI", "CancelSelectionAction", $PROTECTED},
	{"javax.swing.plaf.basic.BasicFileChooserUI$GlobFilter", "javax.swing.plaf.basic.BasicFileChooserUI", "GlobFilter", 0},
	{"javax.swing.plaf.basic.BasicFileChooserUI$ApproveSelectionAction", "javax.swing.plaf.basic.BasicFileChooserUI", "ApproveSelectionAction", $PROTECTED},
	{"javax.swing.plaf.basic.BasicFileChooserUI$ChangeToParentDirectoryAction", "javax.swing.plaf.basic.BasicFileChooserUI", "ChangeToParentDirectoryAction", $PROTECTED},
	{"javax.swing.plaf.basic.BasicFileChooserUI$GoHomeAction", "javax.swing.plaf.basic.BasicFileChooserUI", "GoHomeAction", $PROTECTED},
	{"javax.swing.plaf.basic.BasicFileChooserUI$NewFolderAction", "javax.swing.plaf.basic.BasicFileChooserUI", "NewFolderAction", $PROTECTED},
	{"javax.swing.plaf.basic.BasicFileChooserUI$SelectionListener", "javax.swing.plaf.basic.BasicFileChooserUI", "SelectionListener", $PROTECTED},
	{"javax.swing.plaf.basic.BasicFileChooserUI$DoubleClickListener", "javax.swing.plaf.basic.BasicFileChooserUI", "DoubleClickListener", $PROTECTED},
	{"javax.swing.plaf.basic.BasicFileChooserUI$Handler", "javax.swing.plaf.basic.BasicFileChooserUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicFileChooserUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicFileChooserUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicFileChooserUI",
	"javax.swing.plaf.FileChooserUI",
	nullptr,
	_BasicFileChooserUI_FieldInfo_,
	_BasicFileChooserUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicFileChooserUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicFileChooserUI$FileTransferHandler,javax.swing.plaf.basic.BasicFileChooserUI$FileTransferHandler$FileTransferable,javax.swing.plaf.basic.BasicFileChooserUI$BasicFileView,javax.swing.plaf.basic.BasicFileChooserUI$AcceptAllFileFilter,javax.swing.plaf.basic.BasicFileChooserUI$UpdateAction,javax.swing.plaf.basic.BasicFileChooserUI$CancelSelectionAction,javax.swing.plaf.basic.BasicFileChooserUI$GlobFilter,javax.swing.plaf.basic.BasicFileChooserUI$ApproveSelectionAction,javax.swing.plaf.basic.BasicFileChooserUI$ChangeToParentDirectoryAction,javax.swing.plaf.basic.BasicFileChooserUI$GoHomeAction,javax.swing.plaf.basic.BasicFileChooserUI$NewFolderAction,javax.swing.plaf.basic.BasicFileChooserUI$SelectionListener,javax.swing.plaf.basic.BasicFileChooserUI$DoubleClickListener,javax.swing.plaf.basic.BasicFileChooserUI$Handler,javax.swing.plaf.basic.BasicFileChooserUI$1"
};

$Object* allocate$BasicFileChooserUI($Class* clazz) {
	return $of($alloc(BasicFileChooserUI));
}

$TransferHandler* BasicFileChooserUI::defaultTransferHandler = nullptr;

$ComponentUI* BasicFileChooserUI::createUI($JComponent* c) {
	$init(BasicFileChooserUI);
	return $new(BasicFileChooserUI, $cast($JFileChooser, c));
}

void BasicFileChooserUI::init$($JFileChooser* b) {
	$FileChooserUI::init$();
	$set(this, directoryIcon, nullptr);
	$set(this, fileIcon, nullptr);
	$set(this, computerIcon, nullptr);
	$set(this, hardDriveIcon, nullptr);
	$set(this, floppyDriveIcon, nullptr);
	$set(this, newFolderIcon, nullptr);
	$set(this, upFolderIcon, nullptr);
	$set(this, homeFolderIcon, nullptr);
	$set(this, listViewIcon, nullptr);
	$set(this, detailsViewIcon, nullptr);
	$set(this, viewMenuIcon, nullptr);
	this->saveButtonMnemonic = 0;
	this->openButtonMnemonic = 0;
	this->cancelButtonMnemonic = 0;
	this->updateButtonMnemonic = 0;
	this->helpButtonMnemonic = 0;
	this->directoryOpenButtonMnemonic = 0;
	$set(this, saveButtonText, nullptr);
	$set(this, openButtonText, nullptr);
	$set(this, cancelButtonText, nullptr);
	$set(this, updateButtonText, nullptr);
	$set(this, helpButtonText, nullptr);
	$set(this, directoryOpenButtonText, nullptr);
	$set(this, openDialogTitleText, nullptr);
	$set(this, saveDialogTitleText, nullptr);
	$set(this, saveButtonToolTipText, nullptr);
	$set(this, openButtonToolTipText, nullptr);
	$set(this, cancelButtonToolTipText, nullptr);
	$set(this, updateButtonToolTipText, nullptr);
	$set(this, helpButtonToolTipText, nullptr);
	$set(this, directoryOpenButtonToolTipText, nullptr);
	$set(this, approveSelectionAction, $new($BasicFileChooserUI$ApproveSelectionAction, this));
	$set(this, cancelSelectionAction, $new($BasicFileChooserUI$CancelSelectionAction, this));
	$set(this, updateAction, $new($BasicFileChooserUI$UpdateAction, this));
	$set(this, goHomeAction, $new($BasicFileChooserUI$GoHomeAction, this));
	$set(this, changeToParentDirectoryAction, $new($BasicFileChooserUI$ChangeToParentDirectoryAction, this));
	$set(this, newFolderErrorSeparator, nullptr);
	$set(this, newFolderErrorText, nullptr);
	$set(this, newFolderParentDoesntExistTitleText, nullptr);
	$set(this, newFolderParentDoesntExistText, nullptr);
	$set(this, fileDescriptionText, nullptr);
	$set(this, directoryDescriptionText, nullptr);
	$set(this, filechooser, nullptr);
	this->directorySelected = false;
	$set(this, directory, nullptr);
	$set(this, propertyChangeListener, nullptr);
	$set(this, acceptAllFileFilter, $new($BasicFileChooserUI$AcceptAllFileFilter, this));
	$set(this, actualFileFilter, nullptr);
	$set(this, globFilter, nullptr);
	$set(this, model, nullptr);
	$set(this, fileView, $new($BasicFileChooserUI$BasicFileView, this));
	$set(this, accessoryPanel, nullptr);
}

void BasicFileChooserUI::installUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$set(this, accessoryPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout))));
	$set(this, filechooser, $cast($JFileChooser, c));
	createModel();
	clearIconCache();
	installDefaults(this->filechooser);
	installComponents(this->filechooser);
	installListeners(this->filechooser);
	$nc(this->filechooser)->applyComponentOrientation($($nc(this->filechooser)->getComponentOrientation()));
}

void BasicFileChooserUI::uninstallUI($JComponent* c) {
	uninstallListeners(this->filechooser);
	uninstallComponents(this->filechooser);
	uninstallDefaults(this->filechooser);
	if (this->accessoryPanel != nullptr) {
		$nc(this->accessoryPanel)->removeAll();
	}
	$set(this, accessoryPanel, nullptr);
	$nc($(getFileChooser()))->removeAll();
	$set(this, handler, nullptr);
}

void BasicFileChooserUI::installComponents($JFileChooser* fc) {
}

void BasicFileChooserUI::uninstallComponents($JFileChooser* fc) {
}

void BasicFileChooserUI::installListeners($JFileChooser* fc) {
	$useLocalCurrentObjectStackCache();
	$set(this, propertyChangeListener, createPropertyChangeListener(fc));
	if (this->propertyChangeListener != nullptr) {
		$nc(fc)->addPropertyChangeListener(this->propertyChangeListener);
	}
	$nc(fc)->addPropertyChangeListener($(getModel()));
	$var($InputMap, inputMap, getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$SwingUtilities::replaceUIInputMap(fc, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, inputMap);
	$var($ActionMap, actionMap, getActionMap());
	$SwingUtilities::replaceUIActionMap(fc, actionMap);
}

$InputMap* BasicFileChooserUI::getInputMap(int32_t condition) {
	if (condition == $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT) {
		return $cast($InputMap, $DefaultLookup::get($(getFileChooser()), this, "FileChooser.ancestorInputMap"_s));
	}
	return nullptr;
}

$ActionMap* BasicFileChooserUI::getActionMap() {
	return createActionMap();
}

$ActionMap* BasicFileChooserUI::createActionMap() {
	$useLocalCurrentObjectStackCache();
	$var($ActionMap, map, $new($ActionMapUIResource));
	$init($FilePane);
	$var($Action, refreshAction, $new($BasicFileChooserUI$1, this, $FilePane::ACTION_REFRESH));
	map->put($FilePane::ACTION_APPROVE_SELECTION, $(getApproveSelectionAction()));
	map->put($FilePane::ACTION_CANCEL, $(getCancelSelectionAction()));
	map->put($FilePane::ACTION_REFRESH, refreshAction);
	map->put($FilePane::ACTION_CHANGE_TO_PARENT_DIRECTORY, $(getChangeToParentDirectoryAction()));
	return map;
}

void BasicFileChooserUI::uninstallListeners($JFileChooser* fc) {
	if (this->propertyChangeListener != nullptr) {
		$nc(fc)->removePropertyChangeListener(this->propertyChangeListener);
	}
	$nc(fc)->removePropertyChangeListener($(getModel()));
	$SwingUtilities::replaceUIInputMap(fc, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, nullptr);
	$SwingUtilities::replaceUIActionMap(fc, nullptr);
}

void BasicFileChooserUI::installDefaults($JFileChooser* fc) {
	installIcons(fc);
	installStrings(fc);
	this->usesSingleFilePane = $UIManager::getBoolean("FileChooser.usesSingleFilePane"_s);
	this->readOnly = $UIManager::getBoolean("FileChooser.readOnly"_s);
	$var($TransferHandler, th, $nc(fc)->getTransferHandler());
	if (th == nullptr || $instanceOf($UIResource, th)) {
		fc->setTransferHandler(BasicFileChooserUI::defaultTransferHandler);
	}
	$init($Boolean);
	$LookAndFeel::installProperty(fc, "opaque"_s, $Boolean::FALSE);
}

void BasicFileChooserUI::installIcons($JFileChooser* fc) {
	$set(this, directoryIcon, $UIManager::getIcon("FileView.directoryIcon"_s));
	$set(this, fileIcon, $UIManager::getIcon("FileView.fileIcon"_s));
	$set(this, computerIcon, $UIManager::getIcon("FileView.computerIcon"_s));
	$set(this, hardDriveIcon, $UIManager::getIcon("FileView.hardDriveIcon"_s));
	$set(this, floppyDriveIcon, $UIManager::getIcon("FileView.floppyDriveIcon"_s));
	$set(this, newFolderIcon, $UIManager::getIcon("FileChooser.newFolderIcon"_s));
	$set(this, upFolderIcon, $UIManager::getIcon("FileChooser.upFolderIcon"_s));
	$set(this, homeFolderIcon, $UIManager::getIcon("FileChooser.homeFolderIcon"_s));
	$set(this, detailsViewIcon, $UIManager::getIcon("FileChooser.detailsViewIcon"_s));
	$set(this, listViewIcon, $UIManager::getIcon("FileChooser.listViewIcon"_s));
	$set(this, viewMenuIcon, $UIManager::getIcon("FileChooser.viewMenuIcon"_s));
}

void BasicFileChooserUI::installStrings($JFileChooser* fc) {
	$var($Locale, l, $nc(fc)->getLocale());
	$set(this, newFolderErrorText, $UIManager::getString($of("FileChooser.newFolderErrorText"_s), l));
	$set(this, newFolderErrorSeparator, $UIManager::getString($of("FileChooser.newFolderErrorSeparator"_s), l));
	$set(this, newFolderParentDoesntExistTitleText, $UIManager::getString($of("FileChooser.newFolderParentDoesntExistTitleText"_s), l));
	$set(this, newFolderParentDoesntExistText, $UIManager::getString($of("FileChooser.newFolderParentDoesntExistText"_s), l));
	$set(this, fileDescriptionText, $UIManager::getString($of("FileChooser.fileDescriptionText"_s), l));
	$set(this, directoryDescriptionText, $UIManager::getString($of("FileChooser.directoryDescriptionText"_s), l));
	$set(this, saveButtonText, $UIManager::getString($of("FileChooser.saveButtonText"_s), l));
	$set(this, openButtonText, $UIManager::getString($of("FileChooser.openButtonText"_s), l));
	$set(this, saveDialogTitleText, $UIManager::getString($of("FileChooser.saveDialogTitleText"_s), l));
	$set(this, openDialogTitleText, $UIManager::getString($of("FileChooser.openDialogTitleText"_s), l));
	$set(this, cancelButtonText, $UIManager::getString($of("FileChooser.cancelButtonText"_s), l));
	$set(this, updateButtonText, $UIManager::getString($of("FileChooser.updateButtonText"_s), l));
	$set(this, helpButtonText, $UIManager::getString($of("FileChooser.helpButtonText"_s), l));
	$set(this, directoryOpenButtonText, $UIManager::getString($of("FileChooser.directoryOpenButtonText"_s), l));
	this->saveButtonMnemonic = getMnemonic("FileChooser.saveButtonMnemonic"_s, l);
	this->openButtonMnemonic = getMnemonic("FileChooser.openButtonMnemonic"_s, l);
	this->cancelButtonMnemonic = getMnemonic("FileChooser.cancelButtonMnemonic"_s, l);
	this->updateButtonMnemonic = getMnemonic("FileChooser.updateButtonMnemonic"_s, l);
	this->helpButtonMnemonic = getMnemonic("FileChooser.helpButtonMnemonic"_s, l);
	this->directoryOpenButtonMnemonic = getMnemonic("FileChooser.directoryOpenButtonMnemonic"_s, l);
	$set(this, saveButtonToolTipText, $UIManager::getString($of("FileChooser.saveButtonToolTipText"_s), l));
	$set(this, openButtonToolTipText, $UIManager::getString($of("FileChooser.openButtonToolTipText"_s), l));
	$set(this, cancelButtonToolTipText, $UIManager::getString($of("FileChooser.cancelButtonToolTipText"_s), l));
	$set(this, updateButtonToolTipText, $UIManager::getString($of("FileChooser.updateButtonToolTipText"_s), l));
	$set(this, helpButtonToolTipText, $UIManager::getString($of("FileChooser.helpButtonToolTipText"_s), l));
	$set(this, directoryOpenButtonToolTipText, $UIManager::getString($of("FileChooser.directoryOpenButtonToolTipText"_s), l));
}

void BasicFileChooserUI::uninstallDefaults($JFileChooser* fc) {
	uninstallIcons(fc);
	uninstallStrings(fc);
	if ($instanceOf($UIResource, $($nc(fc)->getTransferHandler()))) {
		fc->setTransferHandler(nullptr);
	}
}

void BasicFileChooserUI::uninstallIcons($JFileChooser* fc) {
	$set(this, directoryIcon, nullptr);
	$set(this, fileIcon, nullptr);
	$set(this, computerIcon, nullptr);
	$set(this, hardDriveIcon, nullptr);
	$set(this, floppyDriveIcon, nullptr);
	$set(this, newFolderIcon, nullptr);
	$set(this, upFolderIcon, nullptr);
	$set(this, homeFolderIcon, nullptr);
	$set(this, detailsViewIcon, nullptr);
	$set(this, listViewIcon, nullptr);
	$set(this, viewMenuIcon, nullptr);
}

void BasicFileChooserUI::uninstallStrings($JFileChooser* fc) {
	$set(this, saveButtonText, nullptr);
	$set(this, openButtonText, nullptr);
	$set(this, cancelButtonText, nullptr);
	$set(this, updateButtonText, nullptr);
	$set(this, helpButtonText, nullptr);
	$set(this, directoryOpenButtonText, nullptr);
	$set(this, saveButtonToolTipText, nullptr);
	$set(this, openButtonToolTipText, nullptr);
	$set(this, cancelButtonToolTipText, nullptr);
	$set(this, updateButtonToolTipText, nullptr);
	$set(this, helpButtonToolTipText, nullptr);
	$set(this, directoryOpenButtonToolTipText, nullptr);
}

void BasicFileChooserUI::createModel() {
	if (this->model != nullptr) {
		$nc(this->model)->invalidateFileCache();
	}
	$set(this, model, $new($BasicDirectoryModel, $(getFileChooser())));
}

$BasicDirectoryModel* BasicFileChooserUI::getModel() {
	return this->model;
}

$PropertyChangeListener* BasicFileChooserUI::createPropertyChangeListener($JFileChooser* fc) {
	return nullptr;
}

$String* BasicFileChooserUI::getFileName() {
	return nullptr;
}

$String* BasicFileChooserUI::getDirectoryName() {
	return nullptr;
}

void BasicFileChooserUI::setFileName($String* filename) {
}

void BasicFileChooserUI::setDirectoryName($String* dirname) {
}

void BasicFileChooserUI::rescanCurrentDirectory($JFileChooser* fc) {
}

void BasicFileChooserUI::ensureFileIsVisible($JFileChooser* fc, $File* f) {
}

$JFileChooser* BasicFileChooserUI::getFileChooser() {
	return this->filechooser;
}

$JPanel* BasicFileChooserUI::getAccessoryPanel() {
	return this->accessoryPanel;
}

$JButton* BasicFileChooserUI::getApproveButton($JFileChooser* fc) {
	return nullptr;
}

$JButton* BasicFileChooserUI::getDefaultButton($JFileChooser* fc) {
	return getApproveButton(fc);
}

$String* BasicFileChooserUI::getApproveButtonToolTipText($JFileChooser* fc) {
	$var($String, tooltipText, $nc(fc)->getApproveButtonToolTipText());
	if (tooltipText != nullptr) {
		return tooltipText;
	}
	if (fc->getDialogType() == $JFileChooser::OPEN_DIALOG) {
		return this->openButtonToolTipText;
	} else if (fc->getDialogType() == $JFileChooser::SAVE_DIALOG) {
		return this->saveButtonToolTipText;
	}
	return nullptr;
}

void BasicFileChooserUI::clearIconCache() {
	$nc(this->fileView)->clearIconCache();
}

$BasicFileChooserUI$Handler* BasicFileChooserUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicFileChooserUI$Handler, this));
	}
	return this->handler;
}

$MouseListener* BasicFileChooserUI::createDoubleClickListener($JFileChooser* fc, $JList* list) {
	return $new($BasicFileChooserUI$Handler, this, list);
}

$ListSelectionListener* BasicFileChooserUI::createListSelectionListener($JFileChooser* fc) {
	return getHandler();
}

bool BasicFileChooserUI::isDirectorySelected() {
	return this->directorySelected;
}

void BasicFileChooserUI::setDirectorySelected(bool b) {
	this->directorySelected = b;
}

$File* BasicFileChooserUI::getDirectory() {
	return this->directory;
}

void BasicFileChooserUI::setDirectory($File* f) {
	$set(this, directory, f);
}

int32_t BasicFileChooserUI::getMnemonic($String* key, $Locale* l) {
	return $SwingUtilities2::getUIDefaultsInt($of(key), l);
}

$FileFilter* BasicFileChooserUI::getAcceptAllFileFilter($JFileChooser* fc) {
	return this->acceptAllFileFilter;
}

$FileView* BasicFileChooserUI::getFileView($JFileChooser* fc) {
	return this->fileView;
}

$String* BasicFileChooserUI::getDialogTitle($JFileChooser* fc) {
	$var($String, dialogTitle, $nc(fc)->getDialogTitle());
	if (dialogTitle != nullptr) {
		return dialogTitle;
	} else if (fc->getDialogType() == $JFileChooser::OPEN_DIALOG) {
		return this->openDialogTitleText;
	} else if (fc->getDialogType() == $JFileChooser::SAVE_DIALOG) {
		return this->saveDialogTitleText;
	} else {
		return getApproveButtonText(fc);
	}
}

int32_t BasicFileChooserUI::getApproveButtonMnemonic($JFileChooser* fc) {
	int32_t mnemonic = $nc(fc)->getApproveButtonMnemonic();
	if (mnemonic > 0) {
		return mnemonic;
	} else if (fc->getDialogType() == $JFileChooser::OPEN_DIALOG) {
		return this->openButtonMnemonic;
	} else if (fc->getDialogType() == $JFileChooser::SAVE_DIALOG) {
		return this->saveButtonMnemonic;
	} else {
		return mnemonic;
	}
}

$String* BasicFileChooserUI::getApproveButtonText($JFileChooser* fc) {
	$var($String, buttonText, $nc(fc)->getApproveButtonText());
	if (buttonText != nullptr) {
		return buttonText;
	} else if (fc->getDialogType() == $JFileChooser::OPEN_DIALOG) {
		return this->openButtonText;
	} else if (fc->getDialogType() == $JFileChooser::SAVE_DIALOG) {
		return this->saveButtonText;
	} else {
		return nullptr;
	}
}

$Action* BasicFileChooserUI::getNewFolderAction() {
	if (this->newFolderAction == nullptr) {
		$set(this, newFolderAction, $new($BasicFileChooserUI$NewFolderAction, this));
		if (this->readOnly) {
			$nc(this->newFolderAction)->setEnabled(false);
		}
	}
	return this->newFolderAction;
}

$Action* BasicFileChooserUI::getGoHomeAction() {
	return this->goHomeAction;
}

$Action* BasicFileChooserUI::getChangeToParentDirectoryAction() {
	return this->changeToParentDirectoryAction;
}

$Action* BasicFileChooserUI::getApproveSelectionAction() {
	return this->approveSelectionAction;
}

$Action* BasicFileChooserUI::getCancelSelectionAction() {
	return this->cancelSelectionAction;
}

$Action* BasicFileChooserUI::getUpdateAction() {
	return this->updateAction;
}

void BasicFileChooserUI::resetGlobFilter() {
	$useLocalCurrentObjectStackCache();
	if (this->actualFileFilter != nullptr) {
		$var($JFileChooser, chooser, getFileChooser());
		$var($FileFilter, currentFilter, $nc(chooser)->getFileFilter());
		if (currentFilter != nullptr && $of(currentFilter)->equals(this->globFilter)) {
			chooser->setFileFilter(this->actualFileFilter);
			chooser->removeChoosableFileFilter(this->globFilter);
		}
		$set(this, actualFileFilter, nullptr);
	}
}

bool BasicFileChooserUI::isGlobPattern($String* filename) {
	$init(BasicFileChooserUI);
	$init($File);
	bool var$1 = $File::separatorChar == u'\\';
	if (var$1) {
		bool var$2 = $nc(filename)->indexOf((int32_t)u'*') >= 0;
		var$1 = (var$2 || $nc(filename)->indexOf((int32_t)u'?') >= 0);
	}
	bool var$0 = (var$1);
	if (!var$0) {
		bool var$3 = $File::separatorChar == u'/';
		if (var$3) {
			bool var$5 = $nc(filename)->indexOf((int32_t)u'*') >= 0;
			bool var$4 = var$5 || $nc(filename)->indexOf((int32_t)u'?') >= 0;
			var$3 = (var$4 || $nc(filename)->indexOf((int32_t)u'[') >= 0);
		}
		var$0 = (var$3);
	}
	return (var$0);
}

void BasicFileChooserUI::changeDirectory($File* dir$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($File, dir, dir$renamed);
	$var($JFileChooser, fc, getFileChooser());
	if (dir != nullptr && $FilePane::usesShellFolder(fc)) {
		try {
			$var($ShellFolder, shellFolder, $ShellFolder::getShellFolder(dir));
			if ($nc(shellFolder)->isLink()) {
				$var($File, linkedTo, shellFolder->getLinkLocation());
				if (linkedTo != nullptr) {
					if ($nc(fc)->isTraversable(linkedTo)) {
						$assign(dir, linkedTo);
					} else {
						return;
					}
				} else {
					$assign(dir, shellFolder);
				}
			}
		} catch ($FileNotFoundException& ex) {
			return;
		}
	}
	$nc(fc)->setCurrentDirectory(dir);
	bool var$0 = fc->getFileSelectionMode() == $JFileChooser::FILES_AND_DIRECTORIES;
	if (var$0 && $nc($(fc->getFileSystemView()))->isFileSystem(dir)) {
		setFileName($($nc(dir)->getAbsolutePath()));
	}
}

void clinit$BasicFileChooserUI($Class* class$) {
	$assignStatic(BasicFileChooserUI::defaultTransferHandler, $new($BasicFileChooserUI$FileTransferHandler));
}

BasicFileChooserUI::BasicFileChooserUI() {
}

$Class* BasicFileChooserUI::load$($String* name, bool initialize) {
	$loadClass(BasicFileChooserUI, name, initialize, &_BasicFileChooserUI_ClassInfo_, clinit$BasicFileChooserUI, allocate$BasicFileChooserUI);
	return class$;
}

$Class* BasicFileChooserUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax