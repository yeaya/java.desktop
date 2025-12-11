#include <com/apple/laf/AquaImageFactory$InvertableImageIcon.h>

#include <com/apple/laf/AquaImageFactory.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/plaf/IconUIResource.h>
#include <jcpp.h>

using $AquaUtils = ::com::apple::laf::AquaUtils;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
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

$FieldInfo _AquaImageFactory$InvertableImageIcon_FieldInfo_[] = {
	{"invertedImage", "Ljavax/swing/Icon;", nullptr, 0, $field(AquaImageFactory$InvertableImageIcon, invertedImage)},
	{}
};

$MethodInfo _AquaImageFactory$InvertableImageIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getIconHeight", "()I", nullptr, $PUBLIC},
	{"*getIconWidth", "()I", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Image;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaImageFactory$InvertableImageIcon::*)($Image*)>(&AquaImageFactory$InvertableImageIcon::init$))},
	{"getInvertedIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"*paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaImageFactory$InvertableImageIcon_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaImageFactory$InvertableImageIcon", "com.apple.laf.AquaImageFactory", "InvertableImageIcon", $STATIC},
	{"com.apple.laf.AquaIcon$InvertableIcon", "com.apple.laf.AquaIcon", "InvertableIcon", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaImageFactory$InvertableImageIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaImageFactory$InvertableImageIcon",
	"javax.swing.ImageIcon",
	"com.apple.laf.AquaIcon$InvertableIcon,javax.swing.plaf.UIResource",
	_AquaImageFactory$InvertableImageIcon_FieldInfo_,
	_AquaImageFactory$InvertableImageIcon_MethodInfo_,
	nullptr,
	nullptr,
	_AquaImageFactory$InvertableImageIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaImageFactory"
};

$Object* allocate$AquaImageFactory$InvertableImageIcon($Class* clazz) {
	return $of($alloc(AquaImageFactory$InvertableImageIcon));
}

void AquaImageFactory$InvertableImageIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	this->$ImageIcon::paintIcon(c, g, x, y);
}

int32_t AquaImageFactory$InvertableImageIcon::getIconWidth() {
	 return this->$ImageIcon::getIconWidth();
}

int32_t AquaImageFactory$InvertableImageIcon::getIconHeight() {
	 return this->$ImageIcon::getIconHeight();
}

$String* AquaImageFactory$InvertableImageIcon::toString() {
	 return this->$ImageIcon::toString();
}

int32_t AquaImageFactory$InvertableImageIcon::hashCode() {
	 return this->$ImageIcon::hashCode();
}

bool AquaImageFactory$InvertableImageIcon::equals(Object$* arg0) {
	 return this->$ImageIcon::equals(arg0);
}

$Object* AquaImageFactory$InvertableImageIcon::clone() {
	 return this->$ImageIcon::clone();
}

void AquaImageFactory$InvertableImageIcon::finalize() {
	this->$ImageIcon::finalize();
}

void AquaImageFactory$InvertableImageIcon::init$($Image* image) {
	$ImageIcon::init$(image);
}

$Icon* AquaImageFactory$InvertableImageIcon::getInvertedIcon() {
	$useLocalCurrentObjectStackCache();
	if (this->invertedImage != nullptr) {
		return this->invertedImage;
	}
	return $set(this, invertedImage, $new($IconUIResource, $$new($ImageIcon, $($AquaUtils::generateLightenedImage($(getImage()), 100)))));
}

AquaImageFactory$InvertableImageIcon::AquaImageFactory$InvertableImageIcon() {
}

$Class* AquaImageFactory$InvertableImageIcon::load$($String* name, bool initialize) {
	$loadClass(AquaImageFactory$InvertableImageIcon, name, initialize, &_AquaImageFactory$InvertableImageIcon_ClassInfo_, allocate$AquaImageFactory$InvertableImageIcon);
	return class$;
}

$Class* AquaImageFactory$InvertableImageIcon::class$ = nullptr;

		} // laf
	} // apple
} // com