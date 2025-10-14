#include <java/awt/FocusTraversalPolicy.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _FocusTraversalPolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(FocusTraversalPolicy::*)()>(&FocusTraversalPolicy::init$))},
	{"getComponentAfter", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{"getComponentBefore", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFirstComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{"getInitialComponent", "(Ljava/awt/Window;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getLastComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _FocusTraversalPolicy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.FocusTraversalPolicy",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FocusTraversalPolicy_MethodInfo_
};

$Object* allocate$FocusTraversalPolicy($Class* clazz) {
	return $of($alloc(FocusTraversalPolicy));
}

void FocusTraversalPolicy::init$() {
}

$Component* FocusTraversalPolicy::getInitialComponent($Window* window) {
	if (window == nullptr) {
		$throwNew($IllegalArgumentException, "window cannot be equal to null."_s);
	}
	$var($Component, def, getDefaultComponent(window));
	if (def == nullptr && $nc(window)->isFocusableWindow()) {
		$assign(def, window);
	}
	return def;
}

FocusTraversalPolicy::FocusTraversalPolicy() {
}

$Class* FocusTraversalPolicy::load$($String* name, bool initialize) {
	$loadClass(FocusTraversalPolicy, name, initialize, &_FocusTraversalPolicy_ClassInfo_, allocate$FocusTraversalPolicy);
	return class$;
}

$Class* FocusTraversalPolicy::class$ = nullptr;

	} // awt
} // java