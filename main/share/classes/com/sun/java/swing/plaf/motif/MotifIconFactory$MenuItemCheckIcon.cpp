#include <com/sun/java/swing/plaf/motif/MotifIconFactory$MenuItemCheckIcon.h>

#include <com/sun/java/swing/plaf/motif/MotifIconFactory.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifIconFactory$MenuItemCheckIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MotifIconFactory$MenuItemCheckIcon::*)()>(&MotifIconFactory$MenuItemCheckIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifIconFactory$MenuItemCheckIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifIconFactory$MenuItemCheckIcon", "com.sun.java.swing.plaf.motif.MotifIconFactory", "MenuItemCheckIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MotifIconFactory$MenuItemCheckIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifIconFactory$MenuItemCheckIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_MotifIconFactory$MenuItemCheckIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MotifIconFactory$MenuItemCheckIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifIconFactory"
};

$Object* allocate$MotifIconFactory$MenuItemCheckIcon($Class* clazz) {
	return $of($alloc(MotifIconFactory$MenuItemCheckIcon));
}

int32_t MotifIconFactory$MenuItemCheckIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MotifIconFactory$MenuItemCheckIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MotifIconFactory$MenuItemCheckIcon::clone() {
	 return this->$Icon::clone();
}

$String* MotifIconFactory$MenuItemCheckIcon::toString() {
	 return this->$Icon::toString();
}

void MotifIconFactory$MenuItemCheckIcon::finalize() {
	this->$Icon::finalize();
}

void MotifIconFactory$MenuItemCheckIcon::init$() {
}

void MotifIconFactory$MenuItemCheckIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
}

int32_t MotifIconFactory$MenuItemCheckIcon::getIconWidth() {
	return 0;
}

int32_t MotifIconFactory$MenuItemCheckIcon::getIconHeight() {
	return 0;
}

MotifIconFactory$MenuItemCheckIcon::MotifIconFactory$MenuItemCheckIcon() {
}

$Class* MotifIconFactory$MenuItemCheckIcon::load$($String* name, bool initialize) {
	$loadClass(MotifIconFactory$MenuItemCheckIcon, name, initialize, &_MotifIconFactory$MenuItemCheckIcon_ClassInfo_, allocate$MotifIconFactory$MenuItemCheckIcon);
	return class$;
}

$Class* MotifIconFactory$MenuItemCheckIcon::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com