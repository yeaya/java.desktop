#include <bug7199708$ComponentAction.h>

#include <bug7199708.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $bug7199708 = ::bug7199708;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _bug7199708$ComponentAction_MethodInfo_[] = {
	{"accept", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"perform", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _bug7199708$ComponentAction_InnerClassesInfo_[] = {
	{"bug7199708$ComponentAction", "bug7199708", "ComponentAction", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _bug7199708$ComponentAction_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"bug7199708$ComponentAction",
	nullptr,
	nullptr,
	nullptr,
	_bug7199708$ComponentAction_MethodInfo_,
	nullptr,
	nullptr,
	_bug7199708$ComponentAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7199708"
};

$Object* allocate$bug7199708$ComponentAction($Class* clazz) {
	return $of($alloc(bug7199708$ComponentAction));
}

$Class* bug7199708$ComponentAction::load$($String* name, bool initialize) {
	$loadClass(bug7199708$ComponentAction, name, initialize, &_bug7199708$ComponentAction_ClassInfo_, allocate$bug7199708$ComponentAction);
	return class$;
}

$Class* bug7199708$ComponentAction::class$ = nullptr;