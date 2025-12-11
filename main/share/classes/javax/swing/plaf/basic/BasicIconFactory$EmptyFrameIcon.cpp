#include <javax/swing/plaf/basic/BasicIconFactory$EmptyFrameIcon.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/basic/BasicIconFactory.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicIconFactory$EmptyFrameIcon_FieldInfo_[] = {
	{"height", "I", nullptr, 0, $field(BasicIconFactory$EmptyFrameIcon, height)},
	{"width", "I", nullptr, 0, $field(BasicIconFactory$EmptyFrameIcon, width)},
	{}
};

$MethodInfo _BasicIconFactory$EmptyFrameIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicIconFactory$EmptyFrameIcon::*)()>(&BasicIconFactory$EmptyFrameIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicIconFactory$EmptyFrameIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicIconFactory$EmptyFrameIcon", "javax.swing.plaf.basic.BasicIconFactory", "EmptyFrameIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicIconFactory$EmptyFrameIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicIconFactory$EmptyFrameIcon",
	"java.lang.Object",
	"javax.swing.Icon,java.io.Serializable",
	_BasicIconFactory$EmptyFrameIcon_FieldInfo_,
	_BasicIconFactory$EmptyFrameIcon_MethodInfo_,
	nullptr,
	nullptr,
	_BasicIconFactory$EmptyFrameIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicIconFactory"
};

$Object* allocate$BasicIconFactory$EmptyFrameIcon($Class* clazz) {
	return $of($alloc(BasicIconFactory$EmptyFrameIcon));
}

int32_t BasicIconFactory$EmptyFrameIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool BasicIconFactory$EmptyFrameIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* BasicIconFactory$EmptyFrameIcon::clone() {
	 return this->$Icon::clone();
}

$String* BasicIconFactory$EmptyFrameIcon::toString() {
	 return this->$Icon::toString();
}

void BasicIconFactory$EmptyFrameIcon::finalize() {
	this->$Icon::finalize();
}

void BasicIconFactory$EmptyFrameIcon::init$() {
	this->height = 16;
	this->width = 14;
}

void BasicIconFactory$EmptyFrameIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
}

int32_t BasicIconFactory$EmptyFrameIcon::getIconWidth() {
	return this->width;
}

int32_t BasicIconFactory$EmptyFrameIcon::getIconHeight() {
	return this->height;
}

BasicIconFactory$EmptyFrameIcon::BasicIconFactory$EmptyFrameIcon() {
}

$Class* BasicIconFactory$EmptyFrameIcon::load$($String* name, bool initialize) {
	$loadClass(BasicIconFactory$EmptyFrameIcon, name, initialize, &_BasicIconFactory$EmptyFrameIcon_ClassInfo_, allocate$BasicIconFactory$EmptyFrameIcon);
	return class$;
}

$Class* BasicIconFactory$EmptyFrameIcon::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax