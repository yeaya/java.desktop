#include <javax/swing/plaf/metal/MetalIconFactory$MenuItemArrowIcon.h>

#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalIconFactory = ::javax::swing::plaf::metal::MetalIconFactory;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalIconFactory$MenuItemArrowIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalIconFactory$MenuItemArrowIcon::*)()>(&MetalIconFactory$MenuItemArrowIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$MenuItemArrowIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$MenuItemArrowIcon", "javax.swing.plaf.metal.MetalIconFactory", "MenuItemArrowIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$MenuItemArrowIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$MenuItemArrowIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_MetalIconFactory$MenuItemArrowIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$MenuItemArrowIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$MenuItemArrowIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$MenuItemArrowIcon));
}

int32_t MetalIconFactory$MenuItemArrowIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$MenuItemArrowIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$MenuItemArrowIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$MenuItemArrowIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$MenuItemArrowIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$MenuItemArrowIcon::init$() {
}

void MetalIconFactory$MenuItemArrowIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
}

int32_t MetalIconFactory$MenuItemArrowIcon::getIconWidth() {
	$init($MetalIconFactory);
	return $nc($MetalIconFactory::menuArrowIconSize)->width;
}

int32_t MetalIconFactory$MenuItemArrowIcon::getIconHeight() {
	$init($MetalIconFactory);
	return $nc($MetalIconFactory::menuArrowIconSize)->height;
}

MetalIconFactory$MenuItemArrowIcon::MetalIconFactory$MenuItemArrowIcon() {
}

$Class* MetalIconFactory$MenuItemArrowIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$MenuItemArrowIcon, name, initialize, &_MetalIconFactory$MenuItemArrowIcon_ClassInfo_, allocate$MetalIconFactory$MenuItemArrowIcon);
	return class$;
}

$Class* MetalIconFactory$MenuItemArrowIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax