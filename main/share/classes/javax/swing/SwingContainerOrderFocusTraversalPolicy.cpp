#include <javax/swing/SwingContainerOrderFocusTraversalPolicy.h>

#include <java/awt/Component.h>
#include <java/awt/ContainerOrderFocusTraversalPolicy.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ContainerOrderFocusTraversalPolicy = ::java::awt::ContainerOrderFocusTraversalPolicy;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _SwingContainerOrderFocusTraversalPolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SwingContainerOrderFocusTraversalPolicy::*)()>(&SwingContainerOrderFocusTraversalPolicy::init$))},
	{"accept", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SwingContainerOrderFocusTraversalPolicy_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.SwingContainerOrderFocusTraversalPolicy",
	"java.awt.ContainerOrderFocusTraversalPolicy",
	nullptr,
	nullptr,
	_SwingContainerOrderFocusTraversalPolicy_MethodInfo_
};

$Object* allocate$SwingContainerOrderFocusTraversalPolicy($Class* clazz) {
	return $of($alloc(SwingContainerOrderFocusTraversalPolicy));
}

void SwingContainerOrderFocusTraversalPolicy::init$() {
	$ContainerOrderFocusTraversalPolicy::init$();
}

bool SwingContainerOrderFocusTraversalPolicy::accept($Component* aComponent) {
	return $ContainerOrderFocusTraversalPolicy::accept(aComponent);
}

SwingContainerOrderFocusTraversalPolicy::SwingContainerOrderFocusTraversalPolicy() {
}

$Class* SwingContainerOrderFocusTraversalPolicy::load$($String* name, bool initialize) {
	$loadClass(SwingContainerOrderFocusTraversalPolicy, name, initialize, &_SwingContainerOrderFocusTraversalPolicy_ClassInfo_, allocate$SwingContainerOrderFocusTraversalPolicy);
	return class$;
}

$Class* SwingContainerOrderFocusTraversalPolicy::class$ = nullptr;

	} // swing
} // javax