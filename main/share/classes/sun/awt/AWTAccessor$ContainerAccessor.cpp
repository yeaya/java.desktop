#include <sun/awt/AWTAccessor$ContainerAccessor.h>

#include <java/awt/Container.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$ContainerAccessor_MethodInfo_[] = {
	{"findComponentAt", "(Ljava/awt/Container;IIZ)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{"startLWModal", "(Ljava/awt/Container;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"stopLWModal", "(Ljava/awt/Container;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"validateUnconditionally", "(Ljava/awt/Container;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$ContainerAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$ContainerAccessor", "sun.awt.AWTAccessor", "ContainerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$ContainerAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$ContainerAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$ContainerAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$ContainerAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$ContainerAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$ContainerAccessor));
}

$Class* AWTAccessor$ContainerAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$ContainerAccessor, name, initialize, &_AWTAccessor$ContainerAccessor_ClassInfo_, allocate$AWTAccessor$ContainerAccessor);
	return class$;
}

$Class* AWTAccessor$ContainerAccessor::class$ = nullptr;

	} // awt
} // sun