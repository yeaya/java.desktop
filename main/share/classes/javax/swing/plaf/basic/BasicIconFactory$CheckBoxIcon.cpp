#include <javax/swing/plaf/basic/BasicIconFactory$CheckBoxIcon.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/basic/BasicIconFactory.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $BasicIconFactory = ::javax::swing::plaf::basic::BasicIconFactory;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicIconFactory$CheckBoxIcon_FieldInfo_[] = {
	{"csize", "I", nullptr, $STATIC | $FINAL, $constField(BasicIconFactory$CheckBoxIcon, csize)},
	{}
};

$MethodInfo _BasicIconFactory$CheckBoxIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicIconFactory$CheckBoxIcon::*)()>(&BasicIconFactory$CheckBoxIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicIconFactory$CheckBoxIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicIconFactory$CheckBoxIcon", "javax.swing.plaf.basic.BasicIconFactory", "CheckBoxIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicIconFactory$CheckBoxIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicIconFactory$CheckBoxIcon",
	"java.lang.Object",
	"javax.swing.Icon,java.io.Serializable",
	_BasicIconFactory$CheckBoxIcon_FieldInfo_,
	_BasicIconFactory$CheckBoxIcon_MethodInfo_,
	nullptr,
	nullptr,
	_BasicIconFactory$CheckBoxIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicIconFactory"
};

$Object* allocate$BasicIconFactory$CheckBoxIcon($Class* clazz) {
	return $of($alloc(BasicIconFactory$CheckBoxIcon));
}

int32_t BasicIconFactory$CheckBoxIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool BasicIconFactory$CheckBoxIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* BasicIconFactory$CheckBoxIcon::clone() {
	 return this->$Icon::clone();
}

$String* BasicIconFactory$CheckBoxIcon::toString() {
	 return this->$Icon::toString();
}

void BasicIconFactory$CheckBoxIcon::finalize() {
	this->$Icon::finalize();
}

void BasicIconFactory$CheckBoxIcon::init$() {
}

void BasicIconFactory$CheckBoxIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
}

int32_t BasicIconFactory$CheckBoxIcon::getIconWidth() {
	return BasicIconFactory$CheckBoxIcon::csize;
}

int32_t BasicIconFactory$CheckBoxIcon::getIconHeight() {
	return BasicIconFactory$CheckBoxIcon::csize;
}

BasicIconFactory$CheckBoxIcon::BasicIconFactory$CheckBoxIcon() {
}

$Class* BasicIconFactory$CheckBoxIcon::load$($String* name, bool initialize) {
	$loadClass(BasicIconFactory$CheckBoxIcon, name, initialize, &_BasicIconFactory$CheckBoxIcon_ClassInfo_, allocate$BasicIconFactory$CheckBoxIcon);
	return class$;
}

$Class* BasicIconFactory$CheckBoxIcon::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax