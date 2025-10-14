#include <javax/swing/plaf/basic/BasicIconFactory$MenuItemCheckIcon.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/basic/BasicIconFactory.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicIconFactory = ::javax::swing::plaf::basic::BasicIconFactory;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicIconFactory$MenuItemCheckIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicIconFactory$MenuItemCheckIcon::*)()>(&BasicIconFactory$MenuItemCheckIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicIconFactory$MenuItemCheckIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicIconFactory$MenuItemCheckIcon", "javax.swing.plaf.basic.BasicIconFactory", "MenuItemCheckIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicIconFactory$MenuItemCheckIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicIconFactory$MenuItemCheckIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_BasicIconFactory$MenuItemCheckIcon_MethodInfo_,
	nullptr,
	nullptr,
	_BasicIconFactory$MenuItemCheckIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicIconFactory"
};

$Object* allocate$BasicIconFactory$MenuItemCheckIcon($Class* clazz) {
	return $of($alloc(BasicIconFactory$MenuItemCheckIcon));
}

int32_t BasicIconFactory$MenuItemCheckIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool BasicIconFactory$MenuItemCheckIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* BasicIconFactory$MenuItemCheckIcon::clone() {
	 return this->$Icon::clone();
}

$String* BasicIconFactory$MenuItemCheckIcon::toString() {
	 return this->$Icon::toString();
}

void BasicIconFactory$MenuItemCheckIcon::finalize() {
	this->$Icon::finalize();
}

void BasicIconFactory$MenuItemCheckIcon::init$() {
}

void BasicIconFactory$MenuItemCheckIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
}

int32_t BasicIconFactory$MenuItemCheckIcon::getIconWidth() {
	return 9;
}

int32_t BasicIconFactory$MenuItemCheckIcon::getIconHeight() {
	return 9;
}

BasicIconFactory$MenuItemCheckIcon::BasicIconFactory$MenuItemCheckIcon() {
}

$Class* BasicIconFactory$MenuItemCheckIcon::load$($String* name, bool initialize) {
	$loadClass(BasicIconFactory$MenuItemCheckIcon, name, initialize, &_BasicIconFactory$MenuItemCheckIcon_ClassInfo_, allocate$BasicIconFactory$MenuItemCheckIcon);
	return class$;
}

$Class* BasicIconFactory$MenuItemCheckIcon::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax