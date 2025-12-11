#include <com/apple/laf/AquaImageFactory$SystemColorProxy.h>

#include <com/apple/laf/AquaImageFactory.h>
#include <java/awt/Color.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaImageFactory$SystemColorProxy_FieldInfo_[] = {
	{"color", "Ljava/awt/Color;", nullptr, $FINAL, $field(AquaImageFactory$SystemColorProxy, color)},
	{}
};

$MethodInfo _AquaImageFactory$SystemColorProxy_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaImageFactory$SystemColorProxy::*)($Color*)>(&AquaImageFactory$SystemColorProxy::init$))},
	{"getRGB", "()I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaImageFactory$SystemColorProxy_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaImageFactory$SystemColorProxy", "com.apple.laf.AquaImageFactory", "SystemColorProxy", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _AquaImageFactory$SystemColorProxy_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaImageFactory$SystemColorProxy",
	"java.awt.Color",
	"javax.swing.plaf.UIResource",
	_AquaImageFactory$SystemColorProxy_FieldInfo_,
	_AquaImageFactory$SystemColorProxy_MethodInfo_,
	nullptr,
	nullptr,
	_AquaImageFactory$SystemColorProxy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaImageFactory"
};

$Object* allocate$AquaImageFactory$SystemColorProxy($Class* clazz) {
	return $of($alloc(AquaImageFactory$SystemColorProxy));
}

int32_t AquaImageFactory$SystemColorProxy::hashCode() {
	 return this->$Color::hashCode();
}

bool AquaImageFactory$SystemColorProxy::equals(Object$* obj) {
	 return this->$Color::equals(obj);
}

$String* AquaImageFactory$SystemColorProxy::toString() {
	 return this->$Color::toString();
}

$Object* AquaImageFactory$SystemColorProxy::clone() {
	 return this->$Color::clone();
}

void AquaImageFactory$SystemColorProxy::finalize() {
	this->$Color::finalize();
}

void AquaImageFactory$SystemColorProxy::init$($Color* color) {
	$Color::init$($nc(color)->getRGB());
	$set(this, color, color);
}

int32_t AquaImageFactory$SystemColorProxy::getRGB() {
	return $nc(this->color)->getRGB();
}

AquaImageFactory$SystemColorProxy::AquaImageFactory$SystemColorProxy() {
}

$Class* AquaImageFactory$SystemColorProxy::load$($String* name, bool initialize) {
	$loadClass(AquaImageFactory$SystemColorProxy, name, initialize, &_AquaImageFactory$SystemColorProxy_ClassInfo_, allocate$AquaImageFactory$SystemColorProxy);
	return class$;
}

$Class* AquaImageFactory$SystemColorProxy::class$ = nullptr;

		} // laf
	} // apple
} // com