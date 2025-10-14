#include <javax/swing/plaf/basic/BasicIconFactory$MenuItemArrowIcon.h>

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

$MethodInfo _BasicIconFactory$MenuItemArrowIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicIconFactory$MenuItemArrowIcon::*)()>(&BasicIconFactory$MenuItemArrowIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicIconFactory$MenuItemArrowIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicIconFactory$MenuItemArrowIcon", "javax.swing.plaf.basic.BasicIconFactory", "MenuItemArrowIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicIconFactory$MenuItemArrowIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicIconFactory$MenuItemArrowIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_BasicIconFactory$MenuItemArrowIcon_MethodInfo_,
	nullptr,
	nullptr,
	_BasicIconFactory$MenuItemArrowIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicIconFactory"
};

$Object* allocate$BasicIconFactory$MenuItemArrowIcon($Class* clazz) {
	return $of($alloc(BasicIconFactory$MenuItemArrowIcon));
}

int32_t BasicIconFactory$MenuItemArrowIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool BasicIconFactory$MenuItemArrowIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* BasicIconFactory$MenuItemArrowIcon::clone() {
	 return this->$Icon::clone();
}

$String* BasicIconFactory$MenuItemArrowIcon::toString() {
	 return this->$Icon::toString();
}

void BasicIconFactory$MenuItemArrowIcon::finalize() {
	this->$Icon::finalize();
}

void BasicIconFactory$MenuItemArrowIcon::init$() {
}

void BasicIconFactory$MenuItemArrowIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
}

int32_t BasicIconFactory$MenuItemArrowIcon::getIconWidth() {
	return 4;
}

int32_t BasicIconFactory$MenuItemArrowIcon::getIconHeight() {
	return 8;
}

BasicIconFactory$MenuItemArrowIcon::BasicIconFactory$MenuItemArrowIcon() {
}

$Class* BasicIconFactory$MenuItemArrowIcon::load$($String* name, bool initialize) {
	$loadClass(BasicIconFactory$MenuItemArrowIcon, name, initialize, &_BasicIconFactory$MenuItemArrowIcon_ClassInfo_, allocate$BasicIconFactory$MenuItemArrowIcon);
	return class$;
}

$Class* BasicIconFactory$MenuItemArrowIcon::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax