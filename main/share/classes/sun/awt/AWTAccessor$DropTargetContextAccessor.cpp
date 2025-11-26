#include <sun/awt/AWTAccessor$DropTargetContextAccessor.h>

#include <java/awt/dnd/DropTargetContext.h>
#include <java/awt/dnd/peer/DropTargetContextPeer.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $DropTargetContext = ::java::awt::dnd::DropTargetContext;
using $DropTargetContextPeer = ::java::awt::dnd::peer::DropTargetContextPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$DropTargetContextAccessor_MethodInfo_[] = {
	{"reset", "(Ljava/awt/dnd/DropTargetContext;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setDropTargetContextPeer", "(Ljava/awt/dnd/DropTargetContext;Ljava/awt/dnd/peer/DropTargetContextPeer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$DropTargetContextAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$DropTargetContextAccessor", "sun.awt.AWTAccessor", "DropTargetContextAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$DropTargetContextAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$DropTargetContextAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$DropTargetContextAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$DropTargetContextAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$DropTargetContextAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$DropTargetContextAccessor));
}

$Class* AWTAccessor$DropTargetContextAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$DropTargetContextAccessor, name, initialize, &_AWTAccessor$DropTargetContextAccessor_ClassInfo_, allocate$AWTAccessor$DropTargetContextAccessor);
	return class$;
}

$Class* AWTAccessor$DropTargetContextAccessor::class$ = nullptr;

	} // awt
} // sun