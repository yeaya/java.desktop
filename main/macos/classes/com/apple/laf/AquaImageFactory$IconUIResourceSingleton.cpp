#include <com/apple/laf/AquaImageFactory$IconUIResourceSingleton.h>

#include <com/apple/laf/AquaImageFactory$NamedImageSingleton.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Image.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/plaf/IconUIResource.h>
#include <jcpp.h>

using $AquaImageFactory$NamedImageSingleton = ::com::apple::laf::AquaImageFactory$NamedImageSingleton;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $IconUIResource = ::javax::swing::plaf::IconUIResource;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaImageFactory$IconUIResourceSingleton_FieldInfo_[] = {
	{"holder", "Lcom/apple/laf/AquaImageFactory$NamedImageSingleton;", nullptr, $FINAL, $field(AquaImageFactory$IconUIResourceSingleton, holder)},
	{}
};

$MethodInfo _AquaImageFactory$IconUIResourceSingleton_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaImageFactory$NamedImageSingleton;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaImageFactory$IconUIResourceSingleton::*)($AquaImageFactory$NamedImageSingleton*)>(&AquaImageFactory$IconUIResourceSingleton::init$))},
	{"getInstance", "()Ljavax/swing/plaf/IconUIResource;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaImageFactory$IconUIResourceSingleton_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaImageFactory$IconUIResourceSingleton", "com.apple.laf.AquaImageFactory", "IconUIResourceSingleton", $STATIC},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaImageFactory$IconUIResourceSingleton_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaImageFactory$IconUIResourceSingleton",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	_AquaImageFactory$IconUIResourceSingleton_FieldInfo_,
	_AquaImageFactory$IconUIResourceSingleton_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/plaf/IconUIResource;>;",
	nullptr,
	_AquaImageFactory$IconUIResourceSingleton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaImageFactory"
};

$Object* allocate$AquaImageFactory$IconUIResourceSingleton($Class* clazz) {
	return $of($alloc(AquaImageFactory$IconUIResourceSingleton));
}

void AquaImageFactory$IconUIResourceSingleton::init$($AquaImageFactory$NamedImageSingleton* holder) {
	$AquaUtils$RecyclableSingleton::init$();
	$set(this, holder, holder);
}

$Object* AquaImageFactory$IconUIResourceSingleton::getInstance() {
	$useLocalCurrentObjectStackCache();
	return $of($new($IconUIResource, $$new($ImageIcon, $cast($Image, $($nc(this->holder)->get())))));
}

AquaImageFactory$IconUIResourceSingleton::AquaImageFactory$IconUIResourceSingleton() {
}

$Class* AquaImageFactory$IconUIResourceSingleton::load$($String* name, bool initialize) {
	$loadClass(AquaImageFactory$IconUIResourceSingleton, name, initialize, &_AquaImageFactory$IconUIResourceSingleton_ClassInfo_, allocate$AquaImageFactory$IconUIResourceSingleton);
	return class$;
}

$Class* AquaImageFactory$IconUIResourceSingleton::class$ = nullptr;

		} // laf
	} // apple
} // com