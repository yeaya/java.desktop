#include <javax/swing/Renderer.h>

#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _Renderer_MethodInfo_[] = {
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{"setValue", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Renderer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.Renderer",
	nullptr,
	nullptr,
	nullptr,
	_Renderer_MethodInfo_
};

$Object* allocate$Renderer($Class* clazz) {
	return $of($alloc(Renderer));
}

$Class* Renderer::load$($String* name, bool initialize) {
	$loadClass(Renderer, name, initialize, &_Renderer_ClassInfo_, allocate$Renderer);
	return class$;
}

$Class* Renderer::class$ = nullptr;

	} // swing
} // javax