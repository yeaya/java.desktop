#include <javax/swing/plaf/basic/BasicIconFactory$RadioButtonIcon.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
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

$MethodInfo _BasicIconFactory$RadioButtonIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicIconFactory$RadioButtonIcon::*)()>(&BasicIconFactory$RadioButtonIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicIconFactory$RadioButtonIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicIconFactory$RadioButtonIcon", "javax.swing.plaf.basic.BasicIconFactory", "RadioButtonIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicIconFactory$RadioButtonIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicIconFactory$RadioButtonIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_BasicIconFactory$RadioButtonIcon_MethodInfo_,
	nullptr,
	nullptr,
	_BasicIconFactory$RadioButtonIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicIconFactory"
};

$Object* allocate$BasicIconFactory$RadioButtonIcon($Class* clazz) {
	return $of($alloc(BasicIconFactory$RadioButtonIcon));
}

int32_t BasicIconFactory$RadioButtonIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool BasicIconFactory$RadioButtonIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* BasicIconFactory$RadioButtonIcon::clone() {
	 return this->$Icon::clone();
}

$String* BasicIconFactory$RadioButtonIcon::toString() {
	 return this->$Icon::toString();
}

void BasicIconFactory$RadioButtonIcon::finalize() {
	this->$Icon::finalize();
}

void BasicIconFactory$RadioButtonIcon::init$() {
}

void BasicIconFactory$RadioButtonIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
}

int32_t BasicIconFactory$RadioButtonIcon::getIconWidth() {
	return 13;
}

int32_t BasicIconFactory$RadioButtonIcon::getIconHeight() {
	return 13;
}

BasicIconFactory$RadioButtonIcon::BasicIconFactory$RadioButtonIcon() {
}

$Class* BasicIconFactory$RadioButtonIcon::load$($String* name, bool initialize) {
	$loadClass(BasicIconFactory$RadioButtonIcon, name, initialize, &_BasicIconFactory$RadioButtonIcon_ClassInfo_, allocate$BasicIconFactory$RadioButtonIcon);
	return class$;
}

$Class* BasicIconFactory$RadioButtonIcon::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax