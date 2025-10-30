#include <javax/swing/plaf/basic/BasicIconFactory$MenuArrowIcon.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Polygon.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/basic/BasicIconFactory.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Polygon = ::java::awt::Polygon;
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

$MethodInfo _BasicIconFactory$MenuArrowIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicIconFactory$MenuArrowIcon::*)()>(&BasicIconFactory$MenuArrowIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicIconFactory$MenuArrowIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicIconFactory$MenuArrowIcon", "javax.swing.plaf.basic.BasicIconFactory", "MenuArrowIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicIconFactory$MenuArrowIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicIconFactory$MenuArrowIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_BasicIconFactory$MenuArrowIcon_MethodInfo_,
	nullptr,
	nullptr,
	_BasicIconFactory$MenuArrowIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicIconFactory"
};

$Object* allocate$BasicIconFactory$MenuArrowIcon($Class* clazz) {
	return $of($alloc(BasicIconFactory$MenuArrowIcon));
}

int32_t BasicIconFactory$MenuArrowIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool BasicIconFactory$MenuArrowIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* BasicIconFactory$MenuArrowIcon::clone() {
	 return this->$Icon::clone();
}

$String* BasicIconFactory$MenuArrowIcon::toString() {
	 return this->$Icon::toString();
}

void BasicIconFactory$MenuArrowIcon::finalize() {
	this->$Icon::finalize();
}

void BasicIconFactory$MenuArrowIcon::init$() {
}

void BasicIconFactory$MenuArrowIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($Polygon, p, $new($Polygon));
	p->addPoint(x, y);
	int32_t var$0 = x + getIconWidth();
	p->addPoint(var$0, y + getIconHeight() / 2);
	p->addPoint(x, y + getIconHeight());
	$nc(g)->fillPolygon(p);
}

int32_t BasicIconFactory$MenuArrowIcon::getIconWidth() {
	return 4;
}

int32_t BasicIconFactory$MenuArrowIcon::getIconHeight() {
	return 8;
}

BasicIconFactory$MenuArrowIcon::BasicIconFactory$MenuArrowIcon() {
}

$Class* BasicIconFactory$MenuArrowIcon::load$($String* name, bool initialize) {
	$loadClass(BasicIconFactory$MenuArrowIcon, name, initialize, &_BasicIconFactory$MenuArrowIcon_ClassInfo_, allocate$BasicIconFactory$MenuArrowIcon);
	return class$;
}

$Class* BasicIconFactory$MenuArrowIcon::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax