#include <javax/swing/Icon.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _Icon_MethodInfo_[] = {
	{"getIconHeight", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getIconWidth", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Icon_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.Icon",
	nullptr,
	nullptr,
	nullptr,
	_Icon_MethodInfo_
};

$Object* allocate$Icon($Class* clazz) {
	return $of($alloc(Icon));
}

$Class* Icon::load$($String* name, bool initialize) {
	$loadClass(Icon, name, initialize, &_Icon_ClassInfo_, allocate$Icon);
	return class$;
}

$Class* Icon::class$ = nullptr;

	} // swing
} // javax