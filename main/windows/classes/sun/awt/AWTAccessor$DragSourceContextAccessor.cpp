#include <sun/awt/AWTAccessor$DragSourceContextAccessor.h>

#include <java/awt/dnd/DragSourceContext.h>
#include <java/awt/dnd/peer/DragSourceContextPeer.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $DragSourceContext = ::java::awt::dnd::DragSourceContext;
using $DragSourceContextPeer = ::java::awt::dnd::peer::DragSourceContextPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$DragSourceContextAccessor_MethodInfo_[] = {
	{"getPeer", "(Ljava/awt/dnd/DragSourceContext;)Ljava/awt/dnd/peer/DragSourceContextPeer;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$DragSourceContextAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$DragSourceContextAccessor", "sun.awt.AWTAccessor", "DragSourceContextAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$DragSourceContextAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$DragSourceContextAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$DragSourceContextAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$DragSourceContextAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$DragSourceContextAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$DragSourceContextAccessor));
}

$Class* AWTAccessor$DragSourceContextAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$DragSourceContextAccessor, name, initialize, &_AWTAccessor$DragSourceContextAccessor_ClassInfo_, allocate$AWTAccessor$DragSourceContextAccessor);
	return class$;
}

$Class* AWTAccessor$DragSourceContextAccessor::class$ = nullptr;

	} // awt
} // sun