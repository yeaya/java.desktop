#include <javax/swing/InternalFrameFocusTraversalPolicy.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;

namespace javax {
	namespace swing {

$MethodInfo _InternalFrameFocusTraversalPolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(InternalFrameFocusTraversalPolicy::*)()>(&InternalFrameFocusTraversalPolicy::init$))},
	{"getInitialComponent", "(Ljavax/swing/JInternalFrame;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InternalFrameFocusTraversalPolicy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.InternalFrameFocusTraversalPolicy",
	"java.awt.FocusTraversalPolicy",
	nullptr,
	nullptr,
	_InternalFrameFocusTraversalPolicy_MethodInfo_
};

$Object* allocate$InternalFrameFocusTraversalPolicy($Class* clazz) {
	return $of($alloc(InternalFrameFocusTraversalPolicy));
}

void InternalFrameFocusTraversalPolicy::init$() {
	$FocusTraversalPolicy::init$();
}

$Component* InternalFrameFocusTraversalPolicy::getInitialComponent($JInternalFrame* frame) {
	return getDefaultComponent(frame);
}

InternalFrameFocusTraversalPolicy::InternalFrameFocusTraversalPolicy() {
}

$Class* InternalFrameFocusTraversalPolicy::load$($String* name, bool initialize) {
	$loadClass(InternalFrameFocusTraversalPolicy, name, initialize, &_InternalFrameFocusTraversalPolicy_ClassInfo_, allocate$InternalFrameFocusTraversalPolicy);
	return class$;
}

$Class* InternalFrameFocusTraversalPolicy::class$ = nullptr;

	} // swing
} // javax