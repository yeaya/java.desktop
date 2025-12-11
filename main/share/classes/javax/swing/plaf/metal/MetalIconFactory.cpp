#include <javax/swing/plaf/metal/MetalIconFactory.h>

#include <java/awt/Dimension.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$CheckBoxIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$CheckBoxMenuItemIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$FileChooserDetailViewIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$FileChooserHomeFolderIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$FileChooserListViewIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$FileChooserNewFolderIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$FileChooserUpFolderIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$FileIcon16.h>
#include <javax/swing/plaf/metal/MetalIconFactory$FolderIcon16.h>
#include <javax/swing/plaf/metal/MetalIconFactory$HorizontalSliderThumbIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$InternalFrameAltMaximizeIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$InternalFrameCloseIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$InternalFrameDefaultMenuIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$InternalFrameMaximizeIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$InternalFrameMinimizeIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$MenuArrowIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$MenuItemArrowIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$OceanHorizontalSliderThumbIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$OceanVerticalSliderThumbIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$RadioButtonIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$RadioButtonMenuItemIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$TreeComputerIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$TreeControlIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$TreeFloppyDriveIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$TreeFolderIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$TreeHardDriveIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$TreeLeafIcon.h>
#include <javax/swing/plaf/metal/MetalIconFactory$VerticalSliderThumbIcon.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef DARK
#undef LIGHT

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $MetalIconFactory$CheckBoxIcon = ::javax::swing::plaf::metal::MetalIconFactory$CheckBoxIcon;
using $MetalIconFactory$CheckBoxMenuItemIcon = ::javax::swing::plaf::metal::MetalIconFactory$CheckBoxMenuItemIcon;
using $MetalIconFactory$FileChooserDetailViewIcon = ::javax::swing::plaf::metal::MetalIconFactory$FileChooserDetailViewIcon;
using $MetalIconFactory$FileChooserHomeFolderIcon = ::javax::swing::plaf::metal::MetalIconFactory$FileChooserHomeFolderIcon;
using $MetalIconFactory$FileChooserListViewIcon = ::javax::swing::plaf::metal::MetalIconFactory$FileChooserListViewIcon;
using $MetalIconFactory$FileChooserNewFolderIcon = ::javax::swing::plaf::metal::MetalIconFactory$FileChooserNewFolderIcon;
using $MetalIconFactory$FileChooserUpFolderIcon = ::javax::swing::plaf::metal::MetalIconFactory$FileChooserUpFolderIcon;
using $MetalIconFactory$FileIcon16 = ::javax::swing::plaf::metal::MetalIconFactory$FileIcon16;
using $MetalIconFactory$FolderIcon16 = ::javax::swing::plaf::metal::MetalIconFactory$FolderIcon16;
using $MetalIconFactory$HorizontalSliderThumbIcon = ::javax::swing::plaf::metal::MetalIconFactory$HorizontalSliderThumbIcon;
using $MetalIconFactory$InternalFrameAltMaximizeIcon = ::javax::swing::plaf::metal::MetalIconFactory$InternalFrameAltMaximizeIcon;
using $MetalIconFactory$InternalFrameCloseIcon = ::javax::swing::plaf::metal::MetalIconFactory$InternalFrameCloseIcon;
using $MetalIconFactory$InternalFrameDefaultMenuIcon = ::javax::swing::plaf::metal::MetalIconFactory$InternalFrameDefaultMenuIcon;
using $MetalIconFactory$InternalFrameMaximizeIcon = ::javax::swing::plaf::metal::MetalIconFactory$InternalFrameMaximizeIcon;
using $MetalIconFactory$InternalFrameMinimizeIcon = ::javax::swing::plaf::metal::MetalIconFactory$InternalFrameMinimizeIcon;
using $MetalIconFactory$MenuArrowIcon = ::javax::swing::plaf::metal::MetalIconFactory$MenuArrowIcon;
using $MetalIconFactory$MenuItemArrowIcon = ::javax::swing::plaf::metal::MetalIconFactory$MenuItemArrowIcon;
using $MetalIconFactory$OceanHorizontalSliderThumbIcon = ::javax::swing::plaf::metal::MetalIconFactory$OceanHorizontalSliderThumbIcon;
using $MetalIconFactory$OceanVerticalSliderThumbIcon = ::javax::swing::plaf::metal::MetalIconFactory$OceanVerticalSliderThumbIcon;
using $MetalIconFactory$RadioButtonIcon = ::javax::swing::plaf::metal::MetalIconFactory$RadioButtonIcon;
using $MetalIconFactory$RadioButtonMenuItemIcon = ::javax::swing::plaf::metal::MetalIconFactory$RadioButtonMenuItemIcon;
using $MetalIconFactory$TreeComputerIcon = ::javax::swing::plaf::metal::MetalIconFactory$TreeComputerIcon;
using $MetalIconFactory$TreeControlIcon = ::javax::swing::plaf::metal::MetalIconFactory$TreeControlIcon;
using $MetalIconFactory$TreeFloppyDriveIcon = ::javax::swing::plaf::metal::MetalIconFactory$TreeFloppyDriveIcon;
using $MetalIconFactory$TreeFolderIcon = ::javax::swing::plaf::metal::MetalIconFactory$TreeFolderIcon;
using $MetalIconFactory$TreeHardDriveIcon = ::javax::swing::plaf::metal::MetalIconFactory$TreeHardDriveIcon;
using $MetalIconFactory$TreeLeafIcon = ::javax::swing::plaf::metal::MetalIconFactory$TreeLeafIcon;
using $MetalIconFactory$VerticalSliderThumbIcon = ::javax::swing::plaf::metal::MetalIconFactory$VerticalSliderThumbIcon;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalIconFactory_FieldInfo_[] = {
	{"fileChooserDetailViewIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, fileChooserDetailViewIcon)},
	{"fileChooserHomeFolderIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, fileChooserHomeFolderIcon)},
	{"fileChooserListViewIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, fileChooserListViewIcon)},
	{"fileChooserNewFolderIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, fileChooserNewFolderIcon)},
	{"fileChooserUpFolderIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, fileChooserUpFolderIcon)},
	{"internalFrameAltMaximizeIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, internalFrameAltMaximizeIcon)},
	{"internalFrameCloseIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, internalFrameCloseIcon)},
	{"internalFrameDefaultMenuIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, internalFrameDefaultMenuIcon)},
	{"internalFrameMaximizeIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, internalFrameMaximizeIcon)},
	{"internalFrameMinimizeIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, internalFrameMinimizeIcon)},
	{"radioButtonIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, radioButtonIcon)},
	{"treeComputerIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, treeComputerIcon)},
	{"treeFloppyDriveIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, treeFloppyDriveIcon)},
	{"treeHardDriveIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, treeHardDriveIcon)},
	{"menuArrowIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, menuArrowIcon)},
	{"menuItemArrowIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, menuItemArrowIcon)},
	{"checkBoxMenuItemIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, checkBoxMenuItemIcon)},
	{"radioButtonMenuItemIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, radioButtonMenuItemIcon)},
	{"checkBoxIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, checkBoxIcon)},
	{"oceanHorizontalSliderThumb", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, oceanHorizontalSliderThumb)},
	{"oceanVerticalSliderThumb", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MetalIconFactory, oceanVerticalSliderThumb)},
	{"DARK", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MetalIconFactory, DARK)},
	{"LIGHT", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MetalIconFactory, LIGHT)},
	{"folderIcon16Size", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalIconFactory, folderIcon16Size)},
	{"fileIcon16Size", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalIconFactory, fileIcon16Size)},
	{"treeControlSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalIconFactory, treeControlSize)},
	{"menuArrowIconSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalIconFactory, menuArrowIconSize)},
	{"menuCheckIconSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalIconFactory, menuCheckIconSize)},
	{"xOff", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MetalIconFactory, xOff)},
	{}
};

$MethodInfo _MetalIconFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalIconFactory::*)()>(&MetalIconFactory::init$))},
	{"getCheckBoxIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getCheckBoxIcon))},
	{"getCheckBoxMenuItemIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getCheckBoxMenuItemIcon))},
	{"getFileChooserDetailViewIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getFileChooserDetailViewIcon))},
	{"getFileChooserHomeFolderIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getFileChooserHomeFolderIcon))},
	{"getFileChooserListViewIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getFileChooserListViewIcon))},
	{"getFileChooserNewFolderIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getFileChooserNewFolderIcon))},
	{"getFileChooserUpFolderIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getFileChooserUpFolderIcon))},
	{"getHorizontalSliderThumbIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getHorizontalSliderThumbIcon))},
	{"getInternalFrameAltMaximizeIcon", "(I)Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)(int32_t)>(&MetalIconFactory::getInternalFrameAltMaximizeIcon))},
	{"getInternalFrameCloseIcon", "(I)Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)(int32_t)>(&MetalIconFactory::getInternalFrameCloseIcon))},
	{"getInternalFrameDefaultMenuIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getInternalFrameDefaultMenuIcon))},
	{"getInternalFrameMaximizeIcon", "(I)Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)(int32_t)>(&MetalIconFactory::getInternalFrameMaximizeIcon))},
	{"getInternalFrameMinimizeIcon", "(I)Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)(int32_t)>(&MetalIconFactory::getInternalFrameMinimizeIcon))},
	{"getMenuArrowIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getMenuArrowIcon))},
	{"getMenuItemArrowIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getMenuItemArrowIcon))},
	{"getMenuItemCheckIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getMenuItemCheckIcon))},
	{"getRadioButtonIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getRadioButtonIcon))},
	{"getRadioButtonMenuItemIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getRadioButtonMenuItemIcon))},
	{"getTreeComputerIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getTreeComputerIcon))},
	{"getTreeControlIcon", "(Z)Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)(bool)>(&MetalIconFactory::getTreeControlIcon))},
	{"getTreeFloppyDriveIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getTreeFloppyDriveIcon))},
	{"getTreeFolderIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getTreeFolderIcon))},
	{"getTreeHardDriveIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getTreeHardDriveIcon))},
	{"getTreeLeafIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getTreeLeafIcon))},
	{"getVerticalSliderThumbIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MetalIconFactory::getVerticalSliderThumbIcon))},
	{}
};

$InnerClassInfo _MetalIconFactory_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$OceanHorizontalSliderThumbIcon", "javax.swing.plaf.metal.MetalIconFactory", "OceanHorizontalSliderThumbIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$OceanVerticalSliderThumbIcon", "javax.swing.plaf.metal.MetalIconFactory", "OceanVerticalSliderThumbIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$HorizontalSliderThumbIcon", "javax.swing.plaf.metal.MetalIconFactory", "HorizontalSliderThumbIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$VerticalSliderThumbIcon", "javax.swing.plaf.metal.MetalIconFactory", "VerticalSliderThumbIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$RadioButtonMenuItemIcon", "javax.swing.plaf.metal.MetalIconFactory", "RadioButtonMenuItemIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$CheckBoxMenuItemIcon", "javax.swing.plaf.metal.MetalIconFactory", "CheckBoxMenuItemIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$MenuItemArrowIcon", "javax.swing.plaf.metal.MetalIconFactory", "MenuItemArrowIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$MenuArrowIcon", "javax.swing.plaf.metal.MetalIconFactory", "MenuArrowIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$TreeControlIcon", "javax.swing.plaf.metal.MetalIconFactory", "TreeControlIcon", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$TreeLeafIcon", "javax.swing.plaf.metal.MetalIconFactory", "TreeLeafIcon", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$FileIcon16", "javax.swing.plaf.metal.MetalIconFactory", "FileIcon16", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$TreeFolderIcon", "javax.swing.plaf.metal.MetalIconFactory", "TreeFolderIcon", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$FolderIcon16", "javax.swing.plaf.metal.MetalIconFactory", "FolderIcon16", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$ImageCacher", "javax.swing.plaf.metal.MetalIconFactory", "ImageCacher", $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$TreeFloppyDriveIcon", "javax.swing.plaf.metal.MetalIconFactory", "TreeFloppyDriveIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$TreeHardDriveIcon", "javax.swing.plaf.metal.MetalIconFactory", "TreeHardDriveIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$TreeComputerIcon", "javax.swing.plaf.metal.MetalIconFactory", "TreeComputerIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$RadioButtonIcon", "javax.swing.plaf.metal.MetalIconFactory", "RadioButtonIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$CheckBoxIcon", "javax.swing.plaf.metal.MetalIconFactory", "CheckBoxIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$InternalFrameMinimizeIcon", "javax.swing.plaf.metal.MetalIconFactory", "InternalFrameMinimizeIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$InternalFrameMaximizeIcon", "javax.swing.plaf.metal.MetalIconFactory", "InternalFrameMaximizeIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$InternalFrameDefaultMenuIcon", "javax.swing.plaf.metal.MetalIconFactory", "InternalFrameDefaultMenuIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$InternalFrameAltMaximizeIcon", "javax.swing.plaf.metal.MetalIconFactory", "InternalFrameAltMaximizeIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$InternalFrameCloseIcon", "javax.swing.plaf.metal.MetalIconFactory", "InternalFrameCloseIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$PaletteCloseIcon", "javax.swing.plaf.metal.MetalIconFactory", "PaletteCloseIcon", $PUBLIC | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$FileChooserUpFolderIcon", "javax.swing.plaf.metal.MetalIconFactory", "FileChooserUpFolderIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$FileChooserNewFolderIcon", "javax.swing.plaf.metal.MetalIconFactory", "FileChooserNewFolderIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$FileChooserListViewIcon", "javax.swing.plaf.metal.MetalIconFactory", "FileChooserListViewIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$FileChooserHomeFolderIcon", "javax.swing.plaf.metal.MetalIconFactory", "FileChooserHomeFolderIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalIconFactory$FileChooserDetailViewIcon", "javax.swing.plaf.metal.MetalIconFactory", "FileChooserDetailViewIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory",
	"java.lang.Object",
	"java.io.Serializable",
	_MetalIconFactory_FieldInfo_,
	_MetalIconFactory_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory$OceanHorizontalSliderThumbIcon,javax.swing.plaf.metal.MetalIconFactory$OceanVerticalSliderThumbIcon,javax.swing.plaf.metal.MetalIconFactory$HorizontalSliderThumbIcon,javax.swing.plaf.metal.MetalIconFactory$VerticalSliderThumbIcon,javax.swing.plaf.metal.MetalIconFactory$RadioButtonMenuItemIcon,javax.swing.plaf.metal.MetalIconFactory$CheckBoxMenuItemIcon,javax.swing.plaf.metal.MetalIconFactory$MenuItemArrowIcon,javax.swing.plaf.metal.MetalIconFactory$MenuArrowIcon,javax.swing.plaf.metal.MetalIconFactory$TreeControlIcon,javax.swing.plaf.metal.MetalIconFactory$TreeLeafIcon,javax.swing.plaf.metal.MetalIconFactory$FileIcon16,javax.swing.plaf.metal.MetalIconFactory$TreeFolderIcon,javax.swing.plaf.metal.MetalIconFactory$FolderIcon16,javax.swing.plaf.metal.MetalIconFactory$ImageCacher,javax.swing.plaf.metal.MetalIconFactory$ImageCacher$ImageGcPair,javax.swing.plaf.metal.MetalIconFactory$TreeFloppyDriveIcon,javax.swing.plaf.metal.MetalIconFactory$TreeHardDriveIcon,javax.swing.plaf.metal.MetalIconFactory$TreeComputerIcon,javax.swing.plaf.metal.MetalIconFactory$RadioButtonIcon,javax.swing.plaf.metal.MetalIconFactory$CheckBoxIcon,javax.swing.plaf.metal.MetalIconFactory$InternalFrameMinimizeIcon,javax.swing.plaf.metal.MetalIconFactory$InternalFrameMaximizeIcon,javax.swing.plaf.metal.MetalIconFactory$InternalFrameDefaultMenuIcon,javax.swing.plaf.metal.MetalIconFactory$InternalFrameAltMaximizeIcon,javax.swing.plaf.metal.MetalIconFactory$InternalFrameCloseIcon,javax.swing.plaf.metal.MetalIconFactory$PaletteCloseIcon,javax.swing.plaf.metal.MetalIconFactory$FileChooserUpFolderIcon,javax.swing.plaf.metal.MetalIconFactory$FileChooserNewFolderIcon,javax.swing.plaf.metal.MetalIconFactory$FileChooserListViewIcon,javax.swing.plaf.metal.MetalIconFactory$FileChooserHomeFolderIcon,javax.swing.plaf.metal.MetalIconFactory$FileChooserDetailViewIcon"
};

$Object* allocate$MetalIconFactory($Class* clazz) {
	return $of($alloc(MetalIconFactory));
}

$Icon* MetalIconFactory::fileChooserDetailViewIcon = nullptr;
$Icon* MetalIconFactory::fileChooserHomeFolderIcon = nullptr;
$Icon* MetalIconFactory::fileChooserListViewIcon = nullptr;
$Icon* MetalIconFactory::fileChooserNewFolderIcon = nullptr;
$Icon* MetalIconFactory::fileChooserUpFolderIcon = nullptr;
$Icon* MetalIconFactory::internalFrameAltMaximizeIcon = nullptr;
$Icon* MetalIconFactory::internalFrameCloseIcon = nullptr;
$Icon* MetalIconFactory::internalFrameDefaultMenuIcon = nullptr;
$Icon* MetalIconFactory::internalFrameMaximizeIcon = nullptr;
$Icon* MetalIconFactory::internalFrameMinimizeIcon = nullptr;
$Icon* MetalIconFactory::radioButtonIcon = nullptr;
$Icon* MetalIconFactory::treeComputerIcon = nullptr;
$Icon* MetalIconFactory::treeFloppyDriveIcon = nullptr;
$Icon* MetalIconFactory::treeHardDriveIcon = nullptr;
$Icon* MetalIconFactory::menuArrowIcon = nullptr;
$Icon* MetalIconFactory::menuItemArrowIcon = nullptr;
$Icon* MetalIconFactory::checkBoxMenuItemIcon = nullptr;
$Icon* MetalIconFactory::radioButtonMenuItemIcon = nullptr;
$Icon* MetalIconFactory::checkBoxIcon = nullptr;
$Icon* MetalIconFactory::oceanHorizontalSliderThumb = nullptr;
$Icon* MetalIconFactory::oceanVerticalSliderThumb = nullptr;
$Dimension* MetalIconFactory::folderIcon16Size = nullptr;
$Dimension* MetalIconFactory::fileIcon16Size = nullptr;
$Dimension* MetalIconFactory::treeControlSize = nullptr;
$Dimension* MetalIconFactory::menuArrowIconSize = nullptr;
$Dimension* MetalIconFactory::menuCheckIconSize = nullptr;

void MetalIconFactory::init$() {
}

$Icon* MetalIconFactory::getFileChooserDetailViewIcon() {
	$init(MetalIconFactory);
	if (MetalIconFactory::fileChooserDetailViewIcon == nullptr) {
		$assignStatic(MetalIconFactory::fileChooserDetailViewIcon, $new($MetalIconFactory$FileChooserDetailViewIcon));
	}
	return MetalIconFactory::fileChooserDetailViewIcon;
}

$Icon* MetalIconFactory::getFileChooserHomeFolderIcon() {
	$init(MetalIconFactory);
	if (MetalIconFactory::fileChooserHomeFolderIcon == nullptr) {
		$assignStatic(MetalIconFactory::fileChooserHomeFolderIcon, $new($MetalIconFactory$FileChooserHomeFolderIcon));
	}
	return MetalIconFactory::fileChooserHomeFolderIcon;
}

$Icon* MetalIconFactory::getFileChooserListViewIcon() {
	$init(MetalIconFactory);
	if (MetalIconFactory::fileChooserListViewIcon == nullptr) {
		$assignStatic(MetalIconFactory::fileChooserListViewIcon, $new($MetalIconFactory$FileChooserListViewIcon));
	}
	return MetalIconFactory::fileChooserListViewIcon;
}

$Icon* MetalIconFactory::getFileChooserNewFolderIcon() {
	$init(MetalIconFactory);
	if (MetalIconFactory::fileChooserNewFolderIcon == nullptr) {
		$assignStatic(MetalIconFactory::fileChooserNewFolderIcon, $new($MetalIconFactory$FileChooserNewFolderIcon));
	}
	return MetalIconFactory::fileChooserNewFolderIcon;
}

$Icon* MetalIconFactory::getFileChooserUpFolderIcon() {
	$init(MetalIconFactory);
	if (MetalIconFactory::fileChooserUpFolderIcon == nullptr) {
		$assignStatic(MetalIconFactory::fileChooserUpFolderIcon, $new($MetalIconFactory$FileChooserUpFolderIcon));
	}
	return MetalIconFactory::fileChooserUpFolderIcon;
}

$Icon* MetalIconFactory::getInternalFrameAltMaximizeIcon(int32_t size) {
	$init(MetalIconFactory);
	return $new($MetalIconFactory$InternalFrameAltMaximizeIcon, size);
}

$Icon* MetalIconFactory::getInternalFrameCloseIcon(int32_t size) {
	$init(MetalIconFactory);
	return $new($MetalIconFactory$InternalFrameCloseIcon, size);
}

$Icon* MetalIconFactory::getInternalFrameDefaultMenuIcon() {
	$init(MetalIconFactory);
	if (MetalIconFactory::internalFrameDefaultMenuIcon == nullptr) {
		$assignStatic(MetalIconFactory::internalFrameDefaultMenuIcon, $new($MetalIconFactory$InternalFrameDefaultMenuIcon));
	}
	return MetalIconFactory::internalFrameDefaultMenuIcon;
}

$Icon* MetalIconFactory::getInternalFrameMaximizeIcon(int32_t size) {
	$init(MetalIconFactory);
	return $new($MetalIconFactory$InternalFrameMaximizeIcon, size);
}

$Icon* MetalIconFactory::getInternalFrameMinimizeIcon(int32_t size) {
	$init(MetalIconFactory);
	return $new($MetalIconFactory$InternalFrameMinimizeIcon, size);
}

$Icon* MetalIconFactory::getRadioButtonIcon() {
	$init(MetalIconFactory);
	if (MetalIconFactory::radioButtonIcon == nullptr) {
		$assignStatic(MetalIconFactory::radioButtonIcon, $new($MetalIconFactory$RadioButtonIcon));
	}
	return MetalIconFactory::radioButtonIcon;
}

$Icon* MetalIconFactory::getCheckBoxIcon() {
	$init(MetalIconFactory);
	if (MetalIconFactory::checkBoxIcon == nullptr) {
		$assignStatic(MetalIconFactory::checkBoxIcon, $new($MetalIconFactory$CheckBoxIcon));
	}
	return MetalIconFactory::checkBoxIcon;
}

$Icon* MetalIconFactory::getTreeComputerIcon() {
	$init(MetalIconFactory);
	if (MetalIconFactory::treeComputerIcon == nullptr) {
		$assignStatic(MetalIconFactory::treeComputerIcon, $new($MetalIconFactory$TreeComputerIcon));
	}
	return MetalIconFactory::treeComputerIcon;
}

$Icon* MetalIconFactory::getTreeFloppyDriveIcon() {
	$init(MetalIconFactory);
	if (MetalIconFactory::treeFloppyDriveIcon == nullptr) {
		$assignStatic(MetalIconFactory::treeFloppyDriveIcon, $new($MetalIconFactory$TreeFloppyDriveIcon));
	}
	return MetalIconFactory::treeFloppyDriveIcon;
}

$Icon* MetalIconFactory::getTreeFolderIcon() {
	$init(MetalIconFactory);
	return $new($MetalIconFactory$TreeFolderIcon);
}

$Icon* MetalIconFactory::getTreeHardDriveIcon() {
	$init(MetalIconFactory);
	if (MetalIconFactory::treeHardDriveIcon == nullptr) {
		$assignStatic(MetalIconFactory::treeHardDriveIcon, $new($MetalIconFactory$TreeHardDriveIcon));
	}
	return MetalIconFactory::treeHardDriveIcon;
}

$Icon* MetalIconFactory::getTreeLeafIcon() {
	$init(MetalIconFactory);
	return $new($MetalIconFactory$TreeLeafIcon);
}

$Icon* MetalIconFactory::getTreeControlIcon(bool isCollapsed) {
	$init(MetalIconFactory);
	return $new($MetalIconFactory$TreeControlIcon, isCollapsed);
}

$Icon* MetalIconFactory::getMenuArrowIcon() {
	$init(MetalIconFactory);
	if (MetalIconFactory::menuArrowIcon == nullptr) {
		$assignStatic(MetalIconFactory::menuArrowIcon, $new($MetalIconFactory$MenuArrowIcon));
	}
	return MetalIconFactory::menuArrowIcon;
}

$Icon* MetalIconFactory::getMenuItemCheckIcon() {
	$init(MetalIconFactory);
	return nullptr;
}

$Icon* MetalIconFactory::getMenuItemArrowIcon() {
	$init(MetalIconFactory);
	if (MetalIconFactory::menuItemArrowIcon == nullptr) {
		$assignStatic(MetalIconFactory::menuItemArrowIcon, $new($MetalIconFactory$MenuItemArrowIcon));
	}
	return MetalIconFactory::menuItemArrowIcon;
}

$Icon* MetalIconFactory::getCheckBoxMenuItemIcon() {
	$init(MetalIconFactory);
	if (MetalIconFactory::checkBoxMenuItemIcon == nullptr) {
		$assignStatic(MetalIconFactory::checkBoxMenuItemIcon, $new($MetalIconFactory$CheckBoxMenuItemIcon));
	}
	return MetalIconFactory::checkBoxMenuItemIcon;
}

$Icon* MetalIconFactory::getRadioButtonMenuItemIcon() {
	$init(MetalIconFactory);
	if (MetalIconFactory::radioButtonMenuItemIcon == nullptr) {
		$assignStatic(MetalIconFactory::radioButtonMenuItemIcon, $new($MetalIconFactory$RadioButtonMenuItemIcon));
	}
	return MetalIconFactory::radioButtonMenuItemIcon;
}

$Icon* MetalIconFactory::getHorizontalSliderThumbIcon() {
	$init(MetalIconFactory);
	if ($MetalLookAndFeel::usingOcean()) {
		if (MetalIconFactory::oceanHorizontalSliderThumb == nullptr) {
			$assignStatic(MetalIconFactory::oceanHorizontalSliderThumb, $new($MetalIconFactory$OceanHorizontalSliderThumbIcon));
		}
		return MetalIconFactory::oceanHorizontalSliderThumb;
	}
	return $new($MetalIconFactory$HorizontalSliderThumbIcon);
}

$Icon* MetalIconFactory::getVerticalSliderThumbIcon() {
	$init(MetalIconFactory);
	if ($MetalLookAndFeel::usingOcean()) {
		if (MetalIconFactory::oceanVerticalSliderThumb == nullptr) {
			$assignStatic(MetalIconFactory::oceanVerticalSliderThumb, $new($MetalIconFactory$OceanVerticalSliderThumbIcon));
		}
		return MetalIconFactory::oceanVerticalSliderThumb;
	}
	return $new($MetalIconFactory$VerticalSliderThumbIcon);
}

void clinit$MetalIconFactory($Class* class$) {
	$assignStatic(MetalIconFactory::folderIcon16Size, $new($Dimension, 16, 16));
	$assignStatic(MetalIconFactory::fileIcon16Size, $new($Dimension, 16, 16));
	$assignStatic(MetalIconFactory::treeControlSize, $new($Dimension, 18, 18));
	$assignStatic(MetalIconFactory::menuArrowIconSize, $new($Dimension, 4, 8));
	$assignStatic(MetalIconFactory::menuCheckIconSize, $new($Dimension, 10, 10));
}

MetalIconFactory::MetalIconFactory() {
}

$Class* MetalIconFactory::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory, name, initialize, &_MetalIconFactory_ClassInfo_, clinit$MetalIconFactory, allocate$MetalIconFactory);
	return class$;
}

$Class* MetalIconFactory::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax