#include <com/apple/laf/AquaIcon$FileIcon.h>

#include <com/apple/laf/AquaIcon$CachingScalingIcon.h>
#include <com/apple/laf/AquaIcon.h>
#include <java/awt/Image.h>
#include <java/io/File.h>
#include <sun/lwawt/macosx/CImage.h>
#include <jcpp.h>

using $AquaIcon$CachingScalingIcon = ::com::apple::laf::AquaIcon$CachingScalingIcon;
using $Image = ::java::awt::Image;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CImage = ::sun::lwawt::macosx::CImage;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaIcon$FileIcon_FieldInfo_[] = {
	{"file", "Ljava/io/File;", nullptr, $FINAL, $field(AquaIcon$FileIcon, file)},
	{}
};

$MethodInfo _AquaIcon$FileIcon_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;II)V", nullptr, $PUBLIC, $method(static_cast<void(AquaIcon$FileIcon::*)($File*,int32_t,int32_t)>(&AquaIcon$FileIcon::init$))},
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaIcon$FileIcon::*)($File*)>(&AquaIcon$FileIcon::init$))},
	{"createImage", "()Ljava/awt/Image;", nullptr, 0},
	{}
};

$InnerClassInfo _AquaIcon$FileIcon_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaIcon$FileIcon", "com.apple.laf.AquaIcon", "FileIcon", $STATIC},
	{"com.apple.laf.AquaIcon$CachingScalingIcon", "com.apple.laf.AquaIcon", "CachingScalingIcon", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaIcon$FileIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaIcon$FileIcon",
	"com.apple.laf.AquaIcon$CachingScalingIcon",
	nullptr,
	_AquaIcon$FileIcon_FieldInfo_,
	_AquaIcon$FileIcon_MethodInfo_,
	nullptr,
	nullptr,
	_AquaIcon$FileIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaIcon"
};

$Object* allocate$AquaIcon$FileIcon($Class* clazz) {
	return $of($alloc(AquaIcon$FileIcon));
}

void AquaIcon$FileIcon::init$($File* file, int32_t width, int32_t height) {
	$AquaIcon$CachingScalingIcon::init$(width, height);
	$set(this, file, file);
}

void AquaIcon$FileIcon::init$($File* file) {
	AquaIcon$FileIcon::init$(file, 16, 16);
}

$Image* AquaIcon$FileIcon::createImage() {
	$var($String, var$0, $nc(this->file)->getAbsolutePath());
	int32_t var$1 = getIconWidth();
	return $CImage::createImageOfFile(var$0, var$1, getIconHeight());
}

AquaIcon$FileIcon::AquaIcon$FileIcon() {
}

$Class* AquaIcon$FileIcon::load$($String* name, bool initialize) {
	$loadClass(AquaIcon$FileIcon, name, initialize, &_AquaIcon$FileIcon_ClassInfo_, allocate$AquaIcon$FileIcon);
	return class$;
}

$Class* AquaIcon$FileIcon::class$ = nullptr;

		} // laf
	} // apple
} // com