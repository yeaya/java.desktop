#include <com/apple/laf/AquaIcon$CachingScalingIcon.h>

#include <com/apple/laf/AquaIcon.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Image.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/image/ImageObserver.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

#undef KEY_RENDERING
#undef VALUE_RENDER_QUALITY

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Image = ::java::awt::Image;
using $RenderingHints = ::java::awt::RenderingHints;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaIcon$CachingScalingIcon_FieldInfo_[] = {
	{"width", "I", nullptr, 0, $field(AquaIcon$CachingScalingIcon, width)},
	{"height", "I", nullptr, 0, $field(AquaIcon$CachingScalingIcon, height)},
	{"image", "Ljava/awt/Image;", nullptr, 0, $field(AquaIcon$CachingScalingIcon, image)},
	{}
};

$MethodInfo _AquaIcon$CachingScalingIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(AquaIcon$CachingScalingIcon::*)(int32_t,int32_t)>(&AquaIcon$CachingScalingIcon::init$))},
	{"createImage", "()Ljava/awt/Image;", nullptr, $ABSTRACT},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"getImage", "()Ljava/awt/Image;", nullptr, 0},
	{"hasIconRef", "()Z", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"setSize", "(II)V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaIcon$CachingScalingIcon_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaIcon$CachingScalingIcon", "com.apple.laf.AquaIcon", "CachingScalingIcon", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaIcon$CachingScalingIcon_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaIcon$CachingScalingIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource",
	_AquaIcon$CachingScalingIcon_FieldInfo_,
	_AquaIcon$CachingScalingIcon_MethodInfo_,
	nullptr,
	nullptr,
	_AquaIcon$CachingScalingIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaIcon"
};

$Object* allocate$AquaIcon$CachingScalingIcon($Class* clazz) {
	return $of($alloc(AquaIcon$CachingScalingIcon));
}

int32_t AquaIcon$CachingScalingIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool AquaIcon$CachingScalingIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* AquaIcon$CachingScalingIcon::clone() {
	 return this->$Icon::clone();
}

$String* AquaIcon$CachingScalingIcon::toString() {
	 return this->$Icon::toString();
}

void AquaIcon$CachingScalingIcon::finalize() {
	this->$Icon::finalize();
}

void AquaIcon$CachingScalingIcon::init$(int32_t width, int32_t height) {
	this->width = width;
	this->height = height;
}

void AquaIcon$CachingScalingIcon::setSize(int32_t width, int32_t height) {
	this->width = width;
	this->height = height;
	$set(this, image, nullptr);
}

$Image* AquaIcon$CachingScalingIcon::getImage() {
	if (this->image != nullptr) {
		return this->image;
	}
	if (!$GraphicsEnvironment::isHeadless()) {
		$set(this, image, createImage());
	}
	return this->image;
}

bool AquaIcon$CachingScalingIcon::hasIconRef() {
	return getImage() != nullptr;
}

void AquaIcon$CachingScalingIcon::paintIcon($Component* c, $Graphics* g$renamed, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, g$renamed);
	$assign(g, $nc(g)->create());
	if ($instanceOf($Graphics2D, g)) {
		$init($RenderingHints);
		$nc(($cast($Graphics2D, g)))->setRenderingHint($RenderingHints::KEY_RENDERING, $RenderingHints::VALUE_RENDER_QUALITY);
	}
	$var($Image, myImage, getImage());
	if (myImage != nullptr) {
		$var($Image, var$0, myImage);
		int32_t var$1 = x;
		int32_t var$2 = y;
		int32_t var$3 = getIconWidth();
		g->drawImage(var$0, var$1, var$2, var$3, getIconHeight(), nullptr);
	}
	g->dispose();
}

int32_t AquaIcon$CachingScalingIcon::getIconWidth() {
	return this->width;
}

int32_t AquaIcon$CachingScalingIcon::getIconHeight() {
	return this->height;
}

AquaIcon$CachingScalingIcon::AquaIcon$CachingScalingIcon() {
}

$Class* AquaIcon$CachingScalingIcon::load$($String* name, bool initialize) {
	$loadClass(AquaIcon$CachingScalingIcon, name, initialize, &_AquaIcon$CachingScalingIcon_ClassInfo_, allocate$AquaIcon$CachingScalingIcon);
	return class$;
}

$Class* AquaIcon$CachingScalingIcon::class$ = nullptr;

		} // laf
	} // apple
} // com