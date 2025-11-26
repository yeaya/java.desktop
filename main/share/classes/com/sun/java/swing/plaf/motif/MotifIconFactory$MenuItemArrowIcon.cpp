#include <com/sun/java/swing/plaf/motif/MotifIconFactory$MenuItemArrowIcon.h>

#include <com/sun/java/swing/plaf/motif/MotifIconFactory.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $MotifIconFactory = ::com::sun::java::swing::plaf::motif::MotifIconFactory;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifIconFactory$MenuItemArrowIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MotifIconFactory$MenuItemArrowIcon::*)()>(&MotifIconFactory$MenuItemArrowIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifIconFactory$MenuItemArrowIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifIconFactory$MenuItemArrowIcon", "com.sun.java.swing.plaf.motif.MotifIconFactory", "MenuItemArrowIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MotifIconFactory$MenuItemArrowIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifIconFactory$MenuItemArrowIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_MotifIconFactory$MenuItemArrowIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MotifIconFactory$MenuItemArrowIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifIconFactory"
};

$Object* allocate$MotifIconFactory$MenuItemArrowIcon($Class* clazz) {
	return $of($alloc(MotifIconFactory$MenuItemArrowIcon));
}

int32_t MotifIconFactory$MenuItemArrowIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MotifIconFactory$MenuItemArrowIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MotifIconFactory$MenuItemArrowIcon::clone() {
	 return this->$Icon::clone();
}

$String* MotifIconFactory$MenuItemArrowIcon::toString() {
	 return this->$Icon::toString();
}

void MotifIconFactory$MenuItemArrowIcon::finalize() {
	this->$Icon::finalize();
}

void MotifIconFactory$MenuItemArrowIcon::init$() {
}

void MotifIconFactory$MenuItemArrowIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
}

int32_t MotifIconFactory$MenuItemArrowIcon::getIconWidth() {
	return 0;
}

int32_t MotifIconFactory$MenuItemArrowIcon::getIconHeight() {
	return 0;
}

MotifIconFactory$MenuItemArrowIcon::MotifIconFactory$MenuItemArrowIcon() {
}

$Class* MotifIconFactory$MenuItemArrowIcon::load$($String* name, bool initialize) {
	$loadClass(MotifIconFactory$MenuItemArrowIcon, name, initialize, &_MotifIconFactory$MenuItemArrowIcon_ClassInfo_, allocate$MotifIconFactory$MenuItemArrowIcon);
	return class$;
}

$Class* MotifIconFactory$MenuItemArrowIcon::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com