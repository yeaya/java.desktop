#include <javax/swing/plaf/IconUIResource.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace javax {
	namespace swing {
		namespace plaf {

$FieldInfo _IconUIResource_FieldInfo_[] = {
	{"delegate", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(IconUIResource, delegate)},
	{}
};

$MethodInfo _IconUIResource_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(IconUIResource::*)($Icon*)>(&IconUIResource::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IconUIResource_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.IconUIResource",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	_IconUIResource_FieldInfo_,
	_IconUIResource_MethodInfo_
};

$Object* allocate$IconUIResource($Class* clazz) {
	return $of($alloc(IconUIResource));
}

int32_t IconUIResource::hashCode() {
	 return this->$Icon::hashCode();
}

bool IconUIResource::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* IconUIResource::clone() {
	 return this->$Icon::clone();
}

$String* IconUIResource::toString() {
	 return this->$Icon::toString();
}

void IconUIResource::finalize() {
	this->$Icon::finalize();
}

void IconUIResource::init$($Icon* delegate) {
	if (delegate == nullptr) {
		$throwNew($IllegalArgumentException, "null delegate icon argument"_s);
	}
	$set(this, delegate, delegate);
}

void IconUIResource::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$nc(this->delegate)->paintIcon(c, g, x, y);
}

int32_t IconUIResource::getIconWidth() {
	return $nc(this->delegate)->getIconWidth();
}

int32_t IconUIResource::getIconHeight() {
	return $nc(this->delegate)->getIconHeight();
}

IconUIResource::IconUIResource() {
}

$Class* IconUIResource::load$($String* name, bool initialize) {
	$loadClass(IconUIResource, name, initialize, &_IconUIResource_ClassInfo_, allocate$IconUIResource);
	return class$;
}

$Class* IconUIResource::class$ = nullptr;

		} // plaf
	} // swing
} // javax