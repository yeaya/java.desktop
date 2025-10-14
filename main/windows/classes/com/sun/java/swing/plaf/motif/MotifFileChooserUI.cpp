#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI.h>

#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$1.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$10.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$2.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$3.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$4.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$5.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$6.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$7.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$8.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$9.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$DirectoryCellRenderer.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$FileCellRenderer.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$FilterComboBoxModel.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$FilterComboBoxRenderer.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$MotifDirectoryListModel.h>
#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$MotifFileListModel.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/Action.h>
#include <javax/swing/Box.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FileChooserUI.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef CENTER
#undef CENTER_ALIGNMENT
#undef DIRECTORIES_ONLY
#undef LEFT_ALIGNMENT
#undef LINE_AXIS
#undef MAX_SIZE
#undef MAX_VALUE
#undef MIN_HEIGHT
#undef MIN_WIDTH
#undef MULTIPLE_INTERVAL_SELECTION
#undef NORTH
#undef PAGE_AXIS
#undef PREF_ACC_SIZE
#undef PREF_SIZE
#undef SINGLE_SELECTION
#undef SOUTH
#undef TOP_ALIGNMENT
#undef WITH_ACCELERATOR_PREF_SIZE
#undef ZERO_ACC_SIZE

using $FileArray = $Array<::java::io::File>;
using $MotifFileChooserUI$1 = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$1;
using $MotifFileChooserUI$10 = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$10;
using $MotifFileChooserUI$2 = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$2;
using $MotifFileChooserUI$3 = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$3;
using $MotifFileChooserUI$4 = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$4;
using $MotifFileChooserUI$5 = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$5;
using $MotifFileChooserUI$6 = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$6;
using $MotifFileChooserUI$7 = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$7;
using $MotifFileChooserUI$8 = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$8;
using $MotifFileChooserUI$9 = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$9;
using $MotifFileChooserUI$DirectoryCellRenderer = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$DirectoryCellRenderer;
using $MotifFileChooserUI$FileCellRenderer = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$FileCellRenderer;
using $MotifFileChooserUI$FilterComboBoxModel = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$FilterComboBoxModel;
using $MotifFileChooserUI$FilterComboBoxRenderer = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$FilterComboBoxRenderer;
using $MotifFileChooserUI$MotifDirectoryListModel = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$MotifDirectoryListModel;
using $MotifFileChooserUI$MotifFileListModel = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI$MotifFileListModel;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionListener = ::java::awt::event::ActionListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Locale = ::java::util::Locale;
using $AbstractButton = ::javax::swing::AbstractButton;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $Action = ::javax::swing::Action;
using $Box = ::javax::swing::Box;
using $BoxLayout = ::javax::swing::BoxLayout;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $JPanel = ::javax::swing::JPanel;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JSeparator = ::javax::swing::JSeparator;
using $JTextField = ::javax::swing::JTextField;
using $JViewport = ::javax::swing::JViewport;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $UIManager = ::javax::swing::UIManager;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $FileChooserUI = ::javax::swing::plaf::FileChooserUI;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifFileChooserUI_FieldInfo_[] = {
	{"filterComboBoxModel", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI$FilterComboBoxModel;", nullptr, $PRIVATE, $field(MotifFileChooserUI, filterComboBoxModel)},
	{"directoryList", "Ljavax/swing/JList;", "Ljavax/swing/JList<Ljava/io/File;>;", $PROTECTED, $field(MotifFileChooserUI, directoryList)},
	{"fileList", "Ljavax/swing/JList;", "Ljavax/swing/JList<Ljava/io/File;>;", $PROTECTED, $field(MotifFileChooserUI, fileList)},
	{"pathField", "Ljavax/swing/JTextField;", nullptr, $PROTECTED, $field(MotifFileChooserUI, pathField)},
	{"filterComboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljavax/swing/filechooser/FileFilter;>;", $PROTECTED, $field(MotifFileChooserUI, filterComboBox)},
	{"filenameTextField", "Ljavax/swing/JTextField;", nullptr, $PROTECTED, $field(MotifFileChooserUI, filenameTextField)},
	{"hstrut10", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifFileChooserUI, hstrut10)},
	{"vstrut10", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifFileChooserUI, vstrut10)},
	{"insets", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifFileChooserUI, insets)},
	{"prefListSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticField(MotifFileChooserUI, prefListSize)},
	{"WITH_ACCELERATOR_PREF_SIZE", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticField(MotifFileChooserUI, WITH_ACCELERATOR_PREF_SIZE)},
	{"PREF_SIZE", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticField(MotifFileChooserUI, PREF_SIZE)},
	{"MIN_WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MotifFileChooserUI, MIN_WIDTH)},
	{"MIN_HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MotifFileChooserUI, MIN_HEIGHT)},
	{"PREF_ACC_SIZE", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticField(MotifFileChooserUI, PREF_ACC_SIZE)},
	{"ZERO_ACC_SIZE", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticField(MotifFileChooserUI, ZERO_ACC_SIZE)},
	{"MAX_SIZE", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticField(MotifFileChooserUI, MAX_SIZE)},
	{"buttonMargin", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifFileChooserUI, buttonMargin)},
	{"bottomPanel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(MotifFileChooserUI, bottomPanel)},
	{"approveButton", "Ljavax/swing/JButton;", nullptr, $PROTECTED, $field(MotifFileChooserUI, approveButton)},
	{"enterFolderNameLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MotifFileChooserUI, enterFolderNameLabelText)},
	{"enterFolderNameLabelMnemonic", "I", nullptr, $PRIVATE, $field(MotifFileChooserUI, enterFolderNameLabelMnemonic)},
	{"enterFileNameLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MotifFileChooserUI, enterFileNameLabelText)},
	{"enterFileNameLabelMnemonic", "I", nullptr, $PRIVATE, $field(MotifFileChooserUI, enterFileNameLabelMnemonic)},
	{"filesLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MotifFileChooserUI, filesLabelText)},
	{"filesLabelMnemonic", "I", nullptr, $PRIVATE, $field(MotifFileChooserUI, filesLabelMnemonic)},
	{"foldersLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MotifFileChooserUI, foldersLabelText)},
	{"foldersLabelMnemonic", "I", nullptr, $PRIVATE, $field(MotifFileChooserUI, foldersLabelMnemonic)},
	{"pathLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MotifFileChooserUI, pathLabelText)},
	{"pathLabelMnemonic", "I", nullptr, $PRIVATE, $field(MotifFileChooserUI, pathLabelMnemonic)},
	{"filterLabelText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MotifFileChooserUI, filterLabelText)},
	{"filterLabelMnemonic", "I", nullptr, $PRIVATE, $field(MotifFileChooserUI, filterLabelMnemonic)},
	{"fileNameLabel", "Ljavax/swing/JLabel;", nullptr, $PRIVATE, $field(MotifFileChooserUI, fileNameLabel)},
	{}
};

$MethodInfo _MotifFileChooserUI_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifFileChooserUI::*)($JFileChooser*)>(&MotifFileChooserUI::init$))},
	{"align", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"createDirectoryList", "()Ljavax/swing/JScrollPane;", nullptr, $PROTECTED},
	{"createFilesList", "()Ljavax/swing/JScrollPane;", nullptr, $PROTECTED},
	{"createFilterComboBoxModel", "()Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI$FilterComboBoxModel;", nullptr, $PROTECTED},
	{"createFilterComboBoxRenderer", "()Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI$FilterComboBoxRenderer;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "(Ljavax/swing/JFileChooser;)Ljava/beans/PropertyChangeListener;", nullptr, $PUBLIC},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifFileChooserUI::createUI))},
	{"doControlButtonsChanged", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(MotifFileChooserUI::*)($PropertyChangeEvent*)>(&MotifFileChooserUI::doControlButtonsChanged))},
	{"ensureFileIsVisible", "(Ljavax/swing/JFileChooser;Ljava/io/File;)V", nullptr, $PUBLIC},
	{"fileNameString", "(Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(MotifFileChooserUI::*)($File*)>(&MotifFileChooserUI::fileNameString))},
	{"fileNameString", "([Ljava/io/File;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(MotifFileChooserUI::*)($FileArray*)>(&MotifFileChooserUI::fileNameString))},
	{"getApproveButton", "(Ljavax/swing/JFileChooser;)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"getBottomPanel", "()Ljavax/swing/JPanel;", nullptr, $PROTECTED},
	{"getDirectoryName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFileName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMnemonic", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/Integer;", nullptr, $PRIVATE, $method(static_cast<$Integer*(MotifFileChooserUI::*)($String*,$Locale*)>(&MotifFileChooserUI::getMnemonic))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installComponents", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"installIcons", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installStrings", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"populateFileNameLabel", "()V", nullptr, $PRIVATE, $method(static_cast<void(MotifFileChooserUI::*)()>(&MotifFileChooserUI::populateFileNameLabel))},
	{"rescanCurrentDirectory", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"setDirectoryName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setFileName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"uninstallComponents", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC},
	{"uninstallIcons", "(Ljavax/swing/JFileChooser;)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifFileChooserUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$FilterComboBoxModel", "com.sun.java.swing.plaf.motif.MotifFileChooserUI", "FilterComboBoxModel", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$FilterComboBoxRenderer", "com.sun.java.swing.plaf.motif.MotifFileChooserUI", "FilterComboBoxRenderer", $PUBLIC},
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$MotifFileListModel", "com.sun.java.swing.plaf.motif.MotifFileChooserUI", "MotifFileListModel", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$MotifDirectoryListModel", "com.sun.java.swing.plaf.motif.MotifFileChooserUI", "MotifDirectoryListModel", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$DirectoryCellRenderer", "com.sun.java.swing.plaf.motif.MotifFileChooserUI", "DirectoryCellRenderer", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$FileCellRenderer", "com.sun.java.swing.plaf.motif.MotifFileChooserUI", "FileCellRenderer", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$10", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$9", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$8", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$7", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$6", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$5", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$4", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$3", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$2", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifFileChooserUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI",
	"javax.swing.plaf.basic.BasicFileChooserUI",
	nullptr,
	_MotifFileChooserUI_FieldInfo_,
	_MotifFileChooserUI_MethodInfo_,
	nullptr,
	nullptr,
	_MotifFileChooserUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI$FilterComboBoxModel,com.sun.java.swing.plaf.motif.MotifFileChooserUI$FilterComboBoxRenderer,com.sun.java.swing.plaf.motif.MotifFileChooserUI$MotifFileListModel,com.sun.java.swing.plaf.motif.MotifFileChooserUI$MotifDirectoryListModel,com.sun.java.swing.plaf.motif.MotifFileChooserUI$DirectoryCellRenderer,com.sun.java.swing.plaf.motif.MotifFileChooserUI$FileCellRenderer,com.sun.java.swing.plaf.motif.MotifFileChooserUI$10,com.sun.java.swing.plaf.motif.MotifFileChooserUI$9,com.sun.java.swing.plaf.motif.MotifFileChooserUI$8,com.sun.java.swing.plaf.motif.MotifFileChooserUI$7,com.sun.java.swing.plaf.motif.MotifFileChooserUI$6,com.sun.java.swing.plaf.motif.MotifFileChooserUI$5,com.sun.java.swing.plaf.motif.MotifFileChooserUI$4,com.sun.java.swing.plaf.motif.MotifFileChooserUI$3,com.sun.java.swing.plaf.motif.MotifFileChooserUI$2,com.sun.java.swing.plaf.motif.MotifFileChooserUI$1"
};

$Object* allocate$MotifFileChooserUI($Class* clazz) {
	return $of($alloc(MotifFileChooserUI));
}

$Dimension* MotifFileChooserUI::hstrut10 = nullptr;
$Dimension* MotifFileChooserUI::vstrut10 = nullptr;
$Insets* MotifFileChooserUI::insets = nullptr;
$Dimension* MotifFileChooserUI::prefListSize = nullptr;
$Dimension* MotifFileChooserUI::WITH_ACCELERATOR_PREF_SIZE = nullptr;
$Dimension* MotifFileChooserUI::PREF_SIZE = nullptr;
$Dimension* MotifFileChooserUI::PREF_ACC_SIZE = nullptr;
$Dimension* MotifFileChooserUI::ZERO_ACC_SIZE = nullptr;
$Dimension* MotifFileChooserUI::MAX_SIZE = nullptr;
$Insets* MotifFileChooserUI::buttonMargin = nullptr;

void MotifFileChooserUI::populateFileNameLabel() {
	if ($nc($(getFileChooser()))->getFileSelectionMode() == $JFileChooser::DIRECTORIES_ONLY) {
		$nc(this->fileNameLabel)->setText(this->enterFolderNameLabelText);
		$nc(this->fileNameLabel)->setDisplayedMnemonic(this->enterFolderNameLabelMnemonic);
	} else {
		$nc(this->fileNameLabel)->setText(this->enterFileNameLabelText);
		$nc(this->fileNameLabel)->setDisplayedMnemonic(this->enterFileNameLabelMnemonic);
	}
}

$String* MotifFileChooserUI::fileNameString($File* file) {
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

$String* MotifFileChooserUI::fileNameString($FileArray* files) {
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

void MotifFileChooserUI::init$($JFileChooser* filechooser) {
	$BasicFileChooserUI::init$(filechooser);
	$set(this, directoryList, nullptr);
	$set(this, fileList, nullptr);
	$set(this, pathField, nullptr);
	$set(this, filterComboBox, nullptr);
	$set(this, filenameTextField, nullptr);
	$set(this, enterFolderNameLabelText, nullptr);
	this->enterFolderNameLabelMnemonic = 0;
	$set(this, enterFileNameLabelText, nullptr);
	this->enterFileNameLabelMnemonic = 0;
	$set(this, filesLabelText, nullptr);
	this->filesLabelMnemonic = 0;
	$set(this, foldersLabelText, nullptr);
	this->foldersLabelMnemonic = 0;
	$set(this, pathLabelText, nullptr);
	this->pathLabelMnemonic = 0;
	$set(this, filterLabelText, nullptr);
	this->filterLabelMnemonic = 0;
}

$String* MotifFileChooserUI::getFileName() {
	if (this->filenameTextField != nullptr) {
		return $nc(this->filenameTextField)->getText();
	} else {
		return nullptr;
	}
}

void MotifFileChooserUI::setFileName($String* filename) {
	if (this->filenameTextField != nullptr) {
		$nc(this->filenameTextField)->setText(filename);
	}
}

$String* MotifFileChooserUI::getDirectoryName() {
	return $nc(this->pathField)->getText();
}

void MotifFileChooserUI::setDirectoryName($String* dirname) {
	$nc(this->pathField)->setText(dirname);
}

void MotifFileChooserUI::ensureFileIsVisible($JFileChooser* fc, $File* f) {
}

void MotifFileChooserUI::rescanCurrentDirectory($JFileChooser* fc) {
	$nc($(getModel()))->validateFileCache();
}

$PropertyChangeListener* MotifFileChooserUI::createPropertyChangeListener($JFileChooser* fc) {
	return $new($MotifFileChooserUI$1, this);
}

$ComponentUI* MotifFileChooserUI::createUI($JComponent* c) {
	$init(MotifFileChooserUI);
	return $new(MotifFileChooserUI, $cast($JFileChooser, c));
}

void MotifFileChooserUI::installUI($JComponent* c) {
	$BasicFileChooserUI::installUI(c);
}

void MotifFileChooserUI::uninstallUI($JComponent* c) {
	$nc(c)->removePropertyChangeListener(this->filterComboBoxModel);
	$nc(this->approveButton)->removeActionListener($(getApproveSelectionAction()));
	$nc(this->filenameTextField)->removeActionListener($(getApproveSelectionAction()));
	$BasicFileChooserUI::uninstallUI(c);
}

void MotifFileChooserUI::installComponents($JFileChooser* fc) {
	$nc(fc)->setLayout($$new($BorderLayout, 10, 10));
	$init($JComponent);
	fc->setAlignmentX($JComponent::CENTER_ALIGNMENT);
	$var($JPanel, interior, $new($MotifFileChooserUI$2, this));
	interior->setInheritsPopupMenu(true);
	align(interior);
	interior->setLayout($$new($BoxLayout, interior, $BoxLayout::PAGE_AXIS));
	$init($BorderLayout);
	fc->add(static_cast<$Component*>(interior), $of($BorderLayout::CENTER));
	$var($JLabel, l, $new($JLabel, this->pathLabelText));
	l->setDisplayedMnemonic(this->pathLabelMnemonic);
	align(l);
	interior->add(static_cast<$Component*>(l));
	$var($File, currentDirectory, fc->getCurrentDirectory());
	$var($String, curDirName, nullptr);
	if (currentDirectory != nullptr) {
		$assign(curDirName, currentDirectory->getPath());
	}
	$var($JTextField, tmp1, $new($MotifFileChooserUI$3, this, curDirName, 35));
	$set(this, pathField, tmp1);
	$nc(this->pathField)->setInheritsPopupMenu(true);
	l->setLabelFor(this->pathField);
	align(this->pathField);
	$nc(this->pathField)->addActionListener($(getUpdateAction()));
	interior->add(static_cast<$Component*>(this->pathField));
	interior->add($($Box::createRigidArea(MotifFileChooserUI::vstrut10)));
	$var($JPanel, centerPanel, $new($JPanel));
	centerPanel->setLayout($$new($BoxLayout, centerPanel, $BoxLayout::LINE_AXIS));
	align(centerPanel);
	$var($JPanel, leftPanel, $new($JPanel));
	leftPanel->setLayout($$new($BoxLayout, leftPanel, $BoxLayout::PAGE_AXIS));
	align(leftPanel);
	$assign(l, $new($JLabel, this->filterLabelText));
	l->setDisplayedMnemonic(this->filterLabelMnemonic);
	align(l);
	leftPanel->add(static_cast<$Component*>(l));
	$var($JComboBox, tmp2, $new($MotifFileChooserUI$4, this));
	$set(this, filterComboBox, tmp2);
	$nc(this->filterComboBox)->setInheritsPopupMenu(true);
	l->setLabelFor(this->filterComboBox);
	$set(this, filterComboBoxModel, createFilterComboBoxModel());
	$nc(this->filterComboBox)->setModel(this->filterComboBoxModel);
	$nc(this->filterComboBox)->setRenderer($(createFilterComboBoxRenderer()));
	fc->addPropertyChangeListener(this->filterComboBoxModel);
	align(this->filterComboBox);
	leftPanel->add(static_cast<$Component*>(this->filterComboBox));
	$assign(l, $new($JLabel, this->foldersLabelText));
	l->setDisplayedMnemonic(this->foldersLabelMnemonic);
	align(l);
	leftPanel->add(static_cast<$Component*>(l));
	$var($JScrollPane, sp, createDirectoryList());
	$nc($($nc(sp)->getVerticalScrollBar()))->setFocusable(false);
	$nc($(sp->getHorizontalScrollBar()))->setFocusable(false);
	sp->setInheritsPopupMenu(true);
	l->setLabelFor($($nc($(sp->getViewport()))->getView()));
	leftPanel->add(static_cast<$Component*>(sp));
	leftPanel->setInheritsPopupMenu(true);
	$var($JPanel, rightPanel, $new($JPanel));
	align(rightPanel);
	rightPanel->setLayout($$new($BoxLayout, rightPanel, $BoxLayout::PAGE_AXIS));
	rightPanel->setInheritsPopupMenu(true);
	$assign(l, $new($JLabel, this->filesLabelText));
	l->setDisplayedMnemonic(this->filesLabelMnemonic);
	align(l);
	rightPanel->add(static_cast<$Component*>(l));
	$assign(sp, createFilesList());
	l->setLabelFor($($nc($(sp->getViewport()))->getView()));
	rightPanel->add(static_cast<$Component*>(sp));
	sp->setInheritsPopupMenu(true);
	centerPanel->add(static_cast<$Component*>(leftPanel));
	centerPanel->add($($Box::createRigidArea(MotifFileChooserUI::hstrut10)));
	centerPanel->add(static_cast<$Component*>(rightPanel));
	centerPanel->setInheritsPopupMenu(true);
	$var($JComponent, accessoryPanel, getAccessoryPanel());
	$var($JComponent, accessory, fc->getAccessory());
	if (accessoryPanel != nullptr) {
		if (accessory == nullptr) {
			accessoryPanel->setPreferredSize(MotifFileChooserUI::ZERO_ACC_SIZE);
			accessoryPanel->setMaximumSize(MotifFileChooserUI::ZERO_ACC_SIZE);
		} else {
			$nc($(getAccessoryPanel()))->add(static_cast<$Component*>(accessory), $of($BorderLayout::CENTER));
			accessoryPanel->setPreferredSize(MotifFileChooserUI::PREF_ACC_SIZE);
			accessoryPanel->setMaximumSize(MotifFileChooserUI::MAX_SIZE);
		}
		align(accessoryPanel);
		centerPanel->add(static_cast<$Component*>(accessoryPanel));
		accessoryPanel->setInheritsPopupMenu(true);
	}
	interior->add(static_cast<$Component*>(centerPanel));
	interior->add($($Box::createRigidArea(MotifFileChooserUI::vstrut10)));
	$set(this, fileNameLabel, $new($JLabel));
	populateFileNameLabel();
	align(this->fileNameLabel);
	interior->add(static_cast<$Component*>(this->fileNameLabel));
	$var($JTextField, tmp3, $new($MotifFileChooserUI$5, this, 35));
	$set(this, filenameTextField, tmp3);
	$nc(this->filenameTextField)->setInheritsPopupMenu(true);
	$nc(this->fileNameLabel)->setLabelFor(this->filenameTextField);
	$nc(this->filenameTextField)->addActionListener($(getApproveSelectionAction()));
	align(this->filenameTextField);
	$nc(this->filenameTextField)->setAlignmentX($JComponent::LEFT_ALIGNMENT);
	interior->add(static_cast<$Component*>(this->filenameTextField));
	$set(this, bottomPanel, getBottomPanel());
	$nc(this->bottomPanel)->add(static_cast<$Component*>($$new($JSeparator)), $of($BorderLayout::NORTH));
	$var($JPanel, buttonPanel, $new($JPanel));
	align(buttonPanel);
	buttonPanel->setLayout($$new($BoxLayout, buttonPanel, $BoxLayout::LINE_AXIS));
	buttonPanel->add($($Box::createGlue()));
	$var($JButton, tmp4, $new($MotifFileChooserUI$6, this, $(getApproveButtonText(fc))));
	$set(this, approveButton, tmp4);
	$nc(this->approveButton)->setMnemonic(getApproveButtonMnemonic(fc));
	$nc(this->approveButton)->setToolTipText($(getApproveButtonToolTipText(fc)));
	$nc(this->approveButton)->setInheritsPopupMenu(true);
	align(this->approveButton);
	$nc(this->approveButton)->setMargin(MotifFileChooserUI::buttonMargin);
	$nc(this->approveButton)->addActionListener($(getApproveSelectionAction()));
	buttonPanel->add(static_cast<$Component*>(this->approveButton));
	buttonPanel->add($($Box::createGlue()));
	$var($JButton, updateButton, $new($MotifFileChooserUI$7, this, this->updateButtonText));
	updateButton->setMnemonic(this->updateButtonMnemonic);
	updateButton->setToolTipText(this->updateButtonToolTipText);
	updateButton->setInheritsPopupMenu(true);
	align(updateButton);
	updateButton->setMargin(MotifFileChooserUI::buttonMargin);
	updateButton->addActionListener($(getUpdateAction()));
	buttonPanel->add(static_cast<$Component*>(updateButton));
	buttonPanel->add($($Box::createGlue()));
	$var($JButton, cancelButton, $new($MotifFileChooserUI$8, this, this->cancelButtonText));
	cancelButton->setMnemonic(this->cancelButtonMnemonic);
	cancelButton->setToolTipText(this->cancelButtonToolTipText);
	cancelButton->setInheritsPopupMenu(true);
	align(cancelButton);
	cancelButton->setMargin(MotifFileChooserUI::buttonMargin);
	cancelButton->addActionListener($(getCancelSelectionAction()));
	buttonPanel->add(static_cast<$Component*>(cancelButton));
	buttonPanel->add($($Box::createGlue()));
	$var($JButton, helpButton, $new($MotifFileChooserUI$9, this, this->helpButtonText));
	helpButton->setMnemonic(this->helpButtonMnemonic);
	helpButton->setToolTipText(this->helpButtonToolTipText);
	align(helpButton);
	helpButton->setMargin(MotifFileChooserUI::buttonMargin);
	helpButton->setEnabled(false);
	helpButton->setInheritsPopupMenu(true);
	buttonPanel->add(static_cast<$Component*>(helpButton));
	buttonPanel->add($($Box::createGlue()));
	buttonPanel->setInheritsPopupMenu(true);
	$nc(this->bottomPanel)->add(static_cast<$Component*>(buttonPanel), $of($BorderLayout::SOUTH));
	$nc(this->bottomPanel)->setInheritsPopupMenu(true);
	if (fc->getControlButtonsAreShown()) {
		fc->add(static_cast<$Component*>(this->bottomPanel), $of($BorderLayout::SOUTH));
	}
}

$JPanel* MotifFileChooserUI::getBottomPanel() {
	if (this->bottomPanel == nullptr) {
		$set(this, bottomPanel, $new($JPanel, static_cast<$LayoutManager*>($$new($BorderLayout, 0, 4))));
	}
	return this->bottomPanel;
}

void MotifFileChooserUI::doControlButtonsChanged($PropertyChangeEvent* e) {
	if ($nc($(getFileChooser()))->getControlButtonsAreShown()) {
		$init($BorderLayout);
		$nc($(getFileChooser()))->add(static_cast<$Component*>(this->bottomPanel), $of($BorderLayout::SOUTH));
	} else {
		$nc($(getFileChooser()))->remove($(static_cast<$Component*>(getBottomPanel())));
	}
}

void MotifFileChooserUI::uninstallComponents($JFileChooser* fc) {
	$nc(fc)->removeAll();
	$set(this, bottomPanel, nullptr);
	if (this->filterComboBoxModel != nullptr) {
		fc->removePropertyChangeListener(this->filterComboBoxModel);
	}
}

void MotifFileChooserUI::installStrings($JFileChooser* fc) {
	$BasicFileChooserUI::installStrings(fc);
	$var($Locale, l, $nc(fc)->getLocale());
	$set(this, enterFolderNameLabelText, $UIManager::getString($of("FileChooser.enterFolderNameLabelText"_s), l));
	this->enterFolderNameLabelMnemonic = $nc($(getMnemonic("FileChooser.enterFolderNameLabelMnemonic"_s, l)))->intValue();
	$set(this, enterFileNameLabelText, $UIManager::getString($of("FileChooser.enterFileNameLabelText"_s), l));
	this->enterFileNameLabelMnemonic = $nc($(getMnemonic("FileChooser.enterFileNameLabelMnemonic"_s, l)))->intValue();
	$set(this, filesLabelText, $UIManager::getString($of("FileChooser.filesLabelText"_s), l));
	this->filesLabelMnemonic = $nc($(getMnemonic("FileChooser.filesLabelMnemonic"_s, l)))->intValue();
	$set(this, foldersLabelText, $UIManager::getString($of("FileChooser.foldersLabelText"_s), l));
	this->foldersLabelMnemonic = $nc($(getMnemonic("FileChooser.foldersLabelMnemonic"_s, l)))->intValue();
	$set(this, pathLabelText, $UIManager::getString($of("FileChooser.pathLabelText"_s), l));
	this->pathLabelMnemonic = $nc($(getMnemonic("FileChooser.pathLabelMnemonic"_s, l)))->intValue();
	$set(this, filterLabelText, $UIManager::getString($of("FileChooser.filterLabelText"_s), l));
	this->filterLabelMnemonic = $nc($(getMnemonic("FileChooser.filterLabelMnemonic"_s, l)))->intValue();
}

$Integer* MotifFileChooserUI::getMnemonic($String* key, $Locale* l) {
	return $Integer::valueOf($SwingUtilities2::getUIDefaultsInt($of(key), l));
}

void MotifFileChooserUI::installIcons($JFileChooser* fc) {
}

void MotifFileChooserUI::uninstallIcons($JFileChooser* fc) {
}

$JScrollPane* MotifFileChooserUI::createFilesList() {
	$set(this, fileList, $new($JList));
	if ($nc($(getFileChooser()))->isMultiSelectionEnabled()) {
		$nc(this->fileList)->setSelectionMode($ListSelectionModel::MULTIPLE_INTERVAL_SELECTION);
	} else {
		$nc(this->fileList)->setSelectionMode($ListSelectionModel::SINGLE_SELECTION);
	}
	$nc(this->fileList)->setModel($$new($MotifFileChooserUI$MotifFileListModel, this));
	$nc($($nc(this->fileList)->getSelectionModel()))->removeSelectionInterval(0, 0);
	$nc(this->fileList)->setCellRenderer($$new($MotifFileChooserUI$FileCellRenderer, this));
	$nc(this->fileList)->addListSelectionListener($(createListSelectionListener($(getFileChooser()))));
	$nc(this->fileList)->addMouseListener($(createDoubleClickListener($(getFileChooser()), this->fileList)));
	$nc(this->fileList)->addMouseListener($$new($MotifFileChooserUI$10, this));
	align(this->fileList);
	$var($JScrollPane, scrollpane, $new($JScrollPane, this->fileList));
	scrollpane->setPreferredSize(MotifFileChooserUI::prefListSize);
	scrollpane->setMaximumSize(MotifFileChooserUI::MAX_SIZE);
	align(scrollpane);
	$nc(this->fileList)->setInheritsPopupMenu(true);
	scrollpane->setInheritsPopupMenu(true);
	return scrollpane;
}

$JScrollPane* MotifFileChooserUI::createDirectoryList() {
	$set(this, directoryList, $new($JList));
	align(this->directoryList);
	$nc(this->directoryList)->setCellRenderer($$new($MotifFileChooserUI$DirectoryCellRenderer, this));
	$nc(this->directoryList)->setModel($$new($MotifFileChooserUI$MotifDirectoryListModel, this));
	$nc($($nc(this->directoryList)->getSelectionModel()))->removeSelectionInterval(0, 0);
	$nc(this->directoryList)->addMouseListener($(createDoubleClickListener($(getFileChooser()), this->directoryList)));
	$nc(this->directoryList)->addListSelectionListener($(createListSelectionListener($(getFileChooser()))));
	$nc(this->directoryList)->setInheritsPopupMenu(true);
	$var($JScrollPane, scrollpane, $new($JScrollPane, this->directoryList));
	scrollpane->setMaximumSize(MotifFileChooserUI::MAX_SIZE);
	scrollpane->setPreferredSize(MotifFileChooserUI::prefListSize);
	scrollpane->setInheritsPopupMenu(true);
	align(scrollpane);
	return scrollpane;
}

$Dimension* MotifFileChooserUI::getPreferredSize($JComponent* c) {
	$var($Dimension, prefSize, ($nc($(getFileChooser()))->getAccessory() != nullptr) ? MotifFileChooserUI::WITH_ACCELERATOR_PREF_SIZE : MotifFileChooserUI::PREF_SIZE);
	$var($Dimension, d, $nc($($nc(c)->getLayout()))->preferredLayoutSize(c));
	if (d != nullptr) {
		return $new($Dimension, d->width < $nc(prefSize)->width ? $nc(prefSize)->width : d->width, d->height < prefSize->height ? prefSize->height : d->height);
	} else {
		return prefSize;
	}
}

$Dimension* MotifFileChooserUI::getMinimumSize($JComponent* x) {
	return $new($Dimension, MotifFileChooserUI::MIN_WIDTH, MotifFileChooserUI::MIN_HEIGHT);
}

$Dimension* MotifFileChooserUI::getMaximumSize($JComponent* x) {
	return $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

void MotifFileChooserUI::align($JComponent* c) {
	$init($JComponent);
	$nc(c)->setAlignmentX($JComponent::LEFT_ALIGNMENT);
	c->setAlignmentY($JComponent::TOP_ALIGNMENT);
}

$MotifFileChooserUI$FilterComboBoxModel* MotifFileChooserUI::createFilterComboBoxModel() {
	return $new($MotifFileChooserUI$FilterComboBoxModel, this);
}

$MotifFileChooserUI$FilterComboBoxRenderer* MotifFileChooserUI::createFilterComboBoxRenderer() {
	return $new($MotifFileChooserUI$FilterComboBoxRenderer, this);
}

$JButton* MotifFileChooserUI::getApproveButton($JFileChooser* fc) {
	return this->approveButton;
}

void clinit$MotifFileChooserUI($Class* class$) {
	$assignStatic(MotifFileChooserUI::hstrut10, $new($Dimension, 10, 1));
	$assignStatic(MotifFileChooserUI::vstrut10, $new($Dimension, 1, 10));
	$assignStatic(MotifFileChooserUI::insets, $new($Insets, 10, 10, 10, 10));
	$assignStatic(MotifFileChooserUI::prefListSize, $new($Dimension, 75, 150));
	$assignStatic(MotifFileChooserUI::WITH_ACCELERATOR_PREF_SIZE, $new($Dimension, 650, 450));
	$assignStatic(MotifFileChooserUI::PREF_SIZE, $new($Dimension, 350, 450));
	$assignStatic(MotifFileChooserUI::PREF_ACC_SIZE, $new($Dimension, 10, 10));
	$assignStatic(MotifFileChooserUI::ZERO_ACC_SIZE, $new($Dimension, 1, 1));
	$assignStatic(MotifFileChooserUI::MAX_SIZE, $new($Dimension, $Short::MAX_VALUE, $Short::MAX_VALUE));
	$assignStatic(MotifFileChooserUI::buttonMargin, $new($Insets, 3, 3, 3, 3));
}

MotifFileChooserUI::MotifFileChooserUI() {
}

$Class* MotifFileChooserUI::load$($String* name, bool initialize) {
	$loadClass(MotifFileChooserUI, name, initialize, &_MotifFileChooserUI_ClassInfo_, clinit$MotifFileChooserUI, allocate$MotifFileChooserUI);
	return class$;
}

$Class* MotifFileChooserUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com