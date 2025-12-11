#include <com/apple/laf/AquaIcon$SystemIcon.h>

#include <com/apple/laf/AquaIcon$CachingScalingIcon.h>
#include <com/apple/laf/AquaIcon$SystemIconSingleton.h>
#include <com/apple/laf/AquaIcon$SystemIconUIResourceSingleton.h>
#include <com/apple/laf/AquaIcon.h>
#include <java/awt/Image.h>
#include <javax/swing/plaf/IconUIResource.h>
#include <sun/lwawt/macosx/CImage.h>
#include <jcpp.h>

using $AquaIcon$CachingScalingIcon = ::com::apple::laf::AquaIcon$CachingScalingIcon;
using $AquaIcon$SystemIconSingleton = ::com::apple::laf::AquaIcon$SystemIconSingleton;
using $AquaIcon$SystemIconUIResourceSingleton = ::com::apple::laf::AquaIcon$SystemIconUIResourceSingleton;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IconUIResource = ::javax::swing::plaf::IconUIResource;
using $CImage = ::sun::lwawt::macosx::CImage;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaIcon$SystemIcon_FieldInfo_[] = {
	{"folderIcon", "Lcom/apple/laf/AquaIcon$SystemIconUIResourceSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaIcon$SystemIcon, folderIcon)},
	{"openFolderIcon", "Lcom/apple/laf/AquaIcon$SystemIconUIResourceSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaIcon$SystemIcon, openFolderIcon)},
	{"desktopIcon", "Lcom/apple/laf/AquaIcon$SystemIconUIResourceSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaIcon$SystemIcon, desktopIcon)},
	{"computerIcon", "Lcom/apple/laf/AquaIcon$SystemIconUIResourceSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaIcon$SystemIcon, computerIcon)},
	{"documentIcon", "Lcom/apple/laf/AquaIcon$SystemIconUIResourceSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaIcon$SystemIcon, documentIcon)},
	{"hardDriveIcon", "Lcom/apple/laf/AquaIcon$SystemIconUIResourceSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaIcon$SystemIcon, hardDriveIcon)},
	{"floppyIcon", "Lcom/apple/laf/AquaIcon$SystemIconUIResourceSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaIcon$SystemIcon, floppyIcon)},
	{"caut", "Lcom/apple/laf/AquaIcon$SystemIconSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaIcon$SystemIcon, caut)},
	{"stop", "Lcom/apple/laf/AquaIcon$SystemIconSingleton;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaIcon$SystemIcon, stop)},
	{"selector", "Ljava/lang/String;", nullptr, $FINAL, $field(AquaIcon$SystemIcon, selector)},
	{}
};

$MethodInfo _AquaIcon$SystemIcon_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;II)V", nullptr, $PUBLIC, $method(static_cast<void(AquaIcon$SystemIcon::*)($String*,int32_t,int32_t)>(&AquaIcon$SystemIcon::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaIcon$SystemIcon::*)($String*)>(&AquaIcon$SystemIcon::init$))},
	{"createImage", "()Ljava/awt/Image;", nullptr, 0},
	{"getCautionIcon", "()Lcom/apple/laf/AquaIcon$SystemIcon;", nullptr, $STATIC, $method(static_cast<AquaIcon$SystemIcon*(*)()>(&AquaIcon$SystemIcon::getCautionIcon))},
	{"getComputerIconUIResource", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $STATIC, $method(static_cast<$IconUIResource*(*)()>(&AquaIcon$SystemIcon::getComputerIconUIResource))},
	{"getDesktopIconUIResource", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $STATIC, $method(static_cast<$IconUIResource*(*)()>(&AquaIcon$SystemIcon::getDesktopIconUIResource))},
	{"getDocumentIconUIResource", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $STATIC, $method(static_cast<$IconUIResource*(*)()>(&AquaIcon$SystemIcon::getDocumentIconUIResource))},
	{"getFloppyIconUIResource", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $STATIC, $method(static_cast<$IconUIResource*(*)()>(&AquaIcon$SystemIcon::getFloppyIconUIResource))},
	{"getFolderIconUIResource", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $STATIC, $method(static_cast<$IconUIResource*(*)()>(&AquaIcon$SystemIcon::getFolderIconUIResource))},
	{"getHardDriveIconUIResource", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $STATIC, $method(static_cast<$IconUIResource*(*)()>(&AquaIcon$SystemIcon::getHardDriveIconUIResource))},
	{"getOpenFolderIconUIResource", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $STATIC, $method(static_cast<$IconUIResource*(*)()>(&AquaIcon$SystemIcon::getOpenFolderIconUIResource))},
	{"getStopIcon", "()Lcom/apple/laf/AquaIcon$SystemIcon;", nullptr, $STATIC, $method(static_cast<AquaIcon$SystemIcon*(*)()>(&AquaIcon$SystemIcon::getStopIcon))},
	{}
};

$InnerClassInfo _AquaIcon$SystemIcon_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaIcon$SystemIcon", "com.apple.laf.AquaIcon", "SystemIcon", $STATIC},
	{"com.apple.laf.AquaIcon$CachingScalingIcon", "com.apple.laf.AquaIcon", "CachingScalingIcon", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaIcon$SystemIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaIcon$SystemIcon",
	"com.apple.laf.AquaIcon$CachingScalingIcon",
	nullptr,
	_AquaIcon$SystemIcon_FieldInfo_,
	_AquaIcon$SystemIcon_MethodInfo_,
	nullptr,
	nullptr,
	_AquaIcon$SystemIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaIcon"
};

$Object* allocate$AquaIcon$SystemIcon($Class* clazz) {
	return $of($alloc(AquaIcon$SystemIcon));
}

$AquaIcon$SystemIconUIResourceSingleton* AquaIcon$SystemIcon::folderIcon = nullptr;
$AquaIcon$SystemIconUIResourceSingleton* AquaIcon$SystemIcon::openFolderIcon = nullptr;
$AquaIcon$SystemIconUIResourceSingleton* AquaIcon$SystemIcon::desktopIcon = nullptr;
$AquaIcon$SystemIconUIResourceSingleton* AquaIcon$SystemIcon::computerIcon = nullptr;
$AquaIcon$SystemIconUIResourceSingleton* AquaIcon$SystemIcon::documentIcon = nullptr;
$AquaIcon$SystemIconUIResourceSingleton* AquaIcon$SystemIcon::hardDriveIcon = nullptr;
$AquaIcon$SystemIconUIResourceSingleton* AquaIcon$SystemIcon::floppyIcon = nullptr;
$AquaIcon$SystemIconSingleton* AquaIcon$SystemIcon::caut = nullptr;
$AquaIcon$SystemIconSingleton* AquaIcon$SystemIcon::stop = nullptr;

$IconUIResource* AquaIcon$SystemIcon::getFolderIconUIResource() {
	$init(AquaIcon$SystemIcon);
	return $cast($IconUIResource, $nc(AquaIcon$SystemIcon::folderIcon)->get());
}

$IconUIResource* AquaIcon$SystemIcon::getOpenFolderIconUIResource() {
	$init(AquaIcon$SystemIcon);
	return $cast($IconUIResource, $nc(AquaIcon$SystemIcon::openFolderIcon)->get());
}

$IconUIResource* AquaIcon$SystemIcon::getDesktopIconUIResource() {
	$init(AquaIcon$SystemIcon);
	return $cast($IconUIResource, $nc(AquaIcon$SystemIcon::desktopIcon)->get());
}

$IconUIResource* AquaIcon$SystemIcon::getComputerIconUIResource() {
	$init(AquaIcon$SystemIcon);
	return $cast($IconUIResource, $nc(AquaIcon$SystemIcon::computerIcon)->get());
}

$IconUIResource* AquaIcon$SystemIcon::getDocumentIconUIResource() {
	$init(AquaIcon$SystemIcon);
	return $cast($IconUIResource, $nc(AquaIcon$SystemIcon::documentIcon)->get());
}

$IconUIResource* AquaIcon$SystemIcon::getHardDriveIconUIResource() {
	$init(AquaIcon$SystemIcon);
	return $cast($IconUIResource, $nc(AquaIcon$SystemIcon::hardDriveIcon)->get());
}

$IconUIResource* AquaIcon$SystemIcon::getFloppyIconUIResource() {
	$init(AquaIcon$SystemIcon);
	return $cast($IconUIResource, $nc(AquaIcon$SystemIcon::floppyIcon)->get());
}

AquaIcon$SystemIcon* AquaIcon$SystemIcon::getCautionIcon() {
	$init(AquaIcon$SystemIcon);
	return $cast(AquaIcon$SystemIcon, $nc(AquaIcon$SystemIcon::caut)->get());
}

AquaIcon$SystemIcon* AquaIcon$SystemIcon::getStopIcon() {
	$init(AquaIcon$SystemIcon);
	return $cast(AquaIcon$SystemIcon, $nc(AquaIcon$SystemIcon::stop)->get());
}

void AquaIcon$SystemIcon::init$($String* iconSelector, int32_t width, int32_t height) {
	$AquaIcon$CachingScalingIcon::init$(width, height);
	$set(this, selector, iconSelector);
}

void AquaIcon$SystemIcon::init$($String* iconSelector) {
	AquaIcon$SystemIcon::init$(iconSelector, 16, 16);
}

$Image* AquaIcon$SystemIcon::createImage() {
	$var($String, var$0, this->selector);
	int32_t var$1 = getIconWidth();
	return $CImage::createSystemImageFromSelector(var$0, var$1, getIconHeight());
}

void clinit$AquaIcon$SystemIcon($Class* class$) {
	$assignStatic(AquaIcon$SystemIcon::folderIcon, $new($AquaIcon$SystemIconUIResourceSingleton, "fldr"_s));
	$assignStatic(AquaIcon$SystemIcon::openFolderIcon, $new($AquaIcon$SystemIconUIResourceSingleton, "ofld"_s));
	$assignStatic(AquaIcon$SystemIcon::desktopIcon, $new($AquaIcon$SystemIconUIResourceSingleton, "desk"_s));
	$assignStatic(AquaIcon$SystemIcon::computerIcon, $new($AquaIcon$SystemIconUIResourceSingleton, "FNDR"_s));
	$assignStatic(AquaIcon$SystemIcon::documentIcon, $new($AquaIcon$SystemIconUIResourceSingleton, "docu"_s));
	$assignStatic(AquaIcon$SystemIcon::hardDriveIcon, $new($AquaIcon$SystemIconUIResourceSingleton, "hdsk"_s));
	$assignStatic(AquaIcon$SystemIcon::floppyIcon, $new($AquaIcon$SystemIconUIResourceSingleton, "flpy"_s));
	$assignStatic(AquaIcon$SystemIcon::caut, $new($AquaIcon$SystemIconSingleton, "caut"_s));
	$assignStatic(AquaIcon$SystemIcon::stop, $new($AquaIcon$SystemIconSingleton, "stop"_s));
}

AquaIcon$SystemIcon::AquaIcon$SystemIcon() {
}

$Class* AquaIcon$SystemIcon::load$($String* name, bool initialize) {
	$loadClass(AquaIcon$SystemIcon, name, initialize, &_AquaIcon$SystemIcon_ClassInfo_, clinit$AquaIcon$SystemIcon, allocate$AquaIcon$SystemIcon);
	return class$;
}

$Class* AquaIcon$SystemIcon::class$ = nullptr;

		} // laf
	} // apple
} // com