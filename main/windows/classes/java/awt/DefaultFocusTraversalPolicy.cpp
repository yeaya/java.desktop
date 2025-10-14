#include <java/awt/DefaultFocusTraversalPolicy.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/ContainerOrderFocusTraversalPolicy.h>
#include <java/awt/Window.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ContainerOrderFocusTraversalPolicy = ::java::awt::ContainerOrderFocusTraversalPolicy;
using $Window = ::java::awt::Window;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _DefaultFocusTraversalPolicy_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DefaultFocusTraversalPolicy, serialVersionUID)},
	{}
};

$MethodInfo _DefaultFocusTraversalPolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultFocusTraversalPolicy::*)()>(&DefaultFocusTraversalPolicy::init$))},
	{"accept", "(Ljava/awt/Component;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _DefaultFocusTraversalPolicy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.DefaultFocusTraversalPolicy",
	"java.awt.ContainerOrderFocusTraversalPolicy",
	nullptr,
	_DefaultFocusTraversalPolicy_FieldInfo_,
	_DefaultFocusTraversalPolicy_MethodInfo_
};

$Object* allocate$DefaultFocusTraversalPolicy($Class* clazz) {
	return $of($alloc(DefaultFocusTraversalPolicy));
}

void DefaultFocusTraversalPolicy::init$() {
	$ContainerOrderFocusTraversalPolicy::init$();
}

bool DefaultFocusTraversalPolicy::accept($Component* aComponent) {
	bool var$1 = $nc(aComponent)->isVisible();
	bool var$0 = var$1 && aComponent->isDisplayable();
	if (!(var$0 && aComponent->isEnabled())) {
		return false;
	}
	if (!($instanceOf($Window, aComponent))) {
		{
			$var($Container, enableTest, $nc(aComponent)->getParent());
			for (; enableTest != nullptr; $assign(enableTest, $nc(enableTest)->getParent())) {
				bool var$2 = enableTest->isEnabled();
				if (!(var$2 || enableTest->isLightweight())) {
					return false;
				}
				if ($instanceOf($Window, enableTest)) {
					break;
				}
			}
		}
	}
	bool focusable = $nc(aComponent)->isFocusable();
	if (aComponent->isFocusTraversableOverridden()) {
		return focusable;
	}
	$var($ComponentPeer, peer, aComponent->peer);
	return (peer != nullptr && peer->isFocusable());
}

DefaultFocusTraversalPolicy::DefaultFocusTraversalPolicy() {
}

$Class* DefaultFocusTraversalPolicy::load$($String* name, bool initialize) {
	$loadClass(DefaultFocusTraversalPolicy, name, initialize, &_DefaultFocusTraversalPolicy_ClassInfo_, allocate$DefaultFocusTraversalPolicy);
	return class$;
}

$Class* DefaultFocusTraversalPolicy::class$ = nullptr;

	} // awt
} // java