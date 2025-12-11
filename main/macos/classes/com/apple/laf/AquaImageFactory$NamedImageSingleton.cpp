#include <com/apple/laf/AquaImageFactory$NamedImageSingleton.h>

#include <com/apple/laf/AquaImageFactory.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Image.h>
#include <jcpp.h>

using $AquaImageFactory = ::com::apple::laf::AquaImageFactory;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaImageFactory$NamedImageSingleton_FieldInfo_[] = {
	{"namedImage", "Ljava/lang/String;", nullptr, $FINAL, $field(AquaImageFactory$NamedImageSingleton, namedImage)},
	{}
};

$MethodInfo _AquaImageFactory$NamedImageSingleton_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(AquaImageFactory$NamedImageSingleton::*)($String*)>(&AquaImageFactory$NamedImageSingleton::init$))},
	{"getInstance", "()Ljava/awt/Image;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaImageFactory$NamedImageSingleton_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaImageFactory$NamedImageSingleton", "com.apple.laf.AquaImageFactory", "NamedImageSingleton", $STATIC},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaImageFactory$NamedImageSingleton_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaImageFactory$NamedImageSingleton",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	_AquaImageFactory$NamedImageSingleton_FieldInfo_,
	_AquaImageFactory$NamedImageSingleton_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/awt/Image;>;",
	nullptr,
	_AquaImageFactory$NamedImageSingleton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaImageFactory"
};

$Object* allocate$AquaImageFactory$NamedImageSingleton($Class* clazz) {
	return $of($alloc(AquaImageFactory$NamedImageSingleton));
}

void AquaImageFactory$NamedImageSingleton::init$($String* namedImage) {
	$AquaUtils$RecyclableSingleton::init$();
	$set(this, namedImage, namedImage);
}

$Object* AquaImageFactory$NamedImageSingleton::getInstance() {
	return $of($AquaImageFactory::getNSIcon(this->namedImage));
}

AquaImageFactory$NamedImageSingleton::AquaImageFactory$NamedImageSingleton() {
}

$Class* AquaImageFactory$NamedImageSingleton::load$($String* name, bool initialize) {
	$loadClass(AquaImageFactory$NamedImageSingleton, name, initialize, &_AquaImageFactory$NamedImageSingleton_ClassInfo_, allocate$AquaImageFactory$NamedImageSingleton);
	return class$;
}

$Class* AquaImageFactory$NamedImageSingleton::class$ = nullptr;

		} // laf
	} // apple
} // com