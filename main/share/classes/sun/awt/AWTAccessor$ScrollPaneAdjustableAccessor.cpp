#include <sun/awt/AWTAccessor$ScrollPaneAdjustableAccessor.h>

#include <java/awt/ScrollPaneAdjustable.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $ScrollPaneAdjustable = ::java::awt::ScrollPaneAdjustable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$ScrollPaneAdjustableAccessor_MethodInfo_[] = {
	{"setTypedValue", "(Ljava/awt/ScrollPaneAdjustable;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$ScrollPaneAdjustableAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$ScrollPaneAdjustableAccessor", "sun.awt.AWTAccessor", "ScrollPaneAdjustableAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$ScrollPaneAdjustableAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$ScrollPaneAdjustableAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$ScrollPaneAdjustableAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$ScrollPaneAdjustableAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$ScrollPaneAdjustableAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$ScrollPaneAdjustableAccessor));
}

$Class* AWTAccessor$ScrollPaneAdjustableAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$ScrollPaneAdjustableAccessor, name, initialize, &_AWTAccessor$ScrollPaneAdjustableAccessor_ClassInfo_, allocate$AWTAccessor$ScrollPaneAdjustableAccessor);
	return class$;
}

$Class* AWTAccessor$ScrollPaneAdjustableAccessor::class$ = nullptr;

	} // awt
} // sun