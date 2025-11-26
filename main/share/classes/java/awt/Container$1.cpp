#include <java/awt/Container$1.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor$ContainerAccessor = ::sun::awt::AWTAccessor$ContainerAccessor;

namespace java {
	namespace awt {

$MethodInfo _Container$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Container$1::*)()>(&Container$1::init$))},
	{"findComponentAt", "(Ljava/awt/Container;IIZ)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"startLWModal", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"stopLWModal", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"validateUnconditionally", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Container$1_EnclosingMethodInfo_ = {
	"java.awt.Container",
	nullptr,
	nullptr
};

$InnerClassInfo _Container$1_InnerClassesInfo_[] = {
	{"java.awt.Container$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$ContainerAccessor", "sun.awt.AWTAccessor", "ContainerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Container$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Container$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$ContainerAccessor",
	nullptr,
	_Container$1_MethodInfo_,
	nullptr,
	&_Container$1_EnclosingMethodInfo_,
	_Container$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Container"
};

$Object* allocate$Container$1($Class* clazz) {
	return $of($alloc(Container$1));
}

void Container$1::init$() {
}

void Container$1::validateUnconditionally($Container* cont) {
	$nc(cont)->validateUnconditionally();
}

$Component* Container$1::findComponentAt($Container* cont, int32_t x, int32_t y, bool ignoreEnabled) {
	return $nc(cont)->findComponentAt(x, y, ignoreEnabled);
}

void Container$1::startLWModal($Container* cont) {
	$nc(cont)->startLWModal();
}

void Container$1::stopLWModal($Container* cont) {
	$nc(cont)->stopLWModal();
}

Container$1::Container$1() {
}

$Class* Container$1::load$($String* name, bool initialize) {
	$loadClass(Container$1, name, initialize, &_Container$1_ClassInfo_, allocate$Container$1);
	return class$;
}

$Class* Container$1::class$ = nullptr;

	} // awt
} // java