#include <java/awt/dnd/DropTargetContext$1.h>

#include <java/awt/dnd/DropTargetContext.h>
#include <java/awt/dnd/peer/DropTargetContextPeer.h>
#include <jcpp.h>

using $DropTargetContext = ::java::awt::dnd::DropTargetContext;
using $DropTargetContextPeer = ::java::awt::dnd::peer::DropTargetContextPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor$DropTargetContextAccessor = ::sun::awt::AWTAccessor$DropTargetContextAccessor;

namespace java {
	namespace awt {
		namespace dnd {

$MethodInfo _DropTargetContext$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DropTargetContext$1::*)()>(&DropTargetContext$1::init$))},
	{"reset", "(Ljava/awt/dnd/DropTargetContext;)V", nullptr, $PUBLIC},
	{"setDropTargetContextPeer", "(Ljava/awt/dnd/DropTargetContext;Ljava/awt/dnd/peer/DropTargetContextPeer;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DropTargetContext$1_EnclosingMethodInfo_ = {
	"java.awt.dnd.DropTargetContext",
	nullptr,
	nullptr
};

$InnerClassInfo _DropTargetContext$1_InnerClassesInfo_[] = {
	{"java.awt.dnd.DropTargetContext$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$DropTargetContextAccessor", "sun.awt.AWTAccessor", "DropTargetContextAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DropTargetContext$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.dnd.DropTargetContext$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$DropTargetContextAccessor",
	nullptr,
	_DropTargetContext$1_MethodInfo_,
	nullptr,
	&_DropTargetContext$1_EnclosingMethodInfo_,
	_DropTargetContext$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.dnd.DropTargetContext"
};

$Object* allocate$DropTargetContext$1($Class* clazz) {
	return $of($alloc(DropTargetContext$1));
}

void DropTargetContext$1::init$() {
}

void DropTargetContext$1::reset($DropTargetContext* dtc) {
	$nc(dtc)->reset();
}

void DropTargetContext$1::setDropTargetContextPeer($DropTargetContext* dtc, $DropTargetContextPeer* dtcp) {
	$nc(dtc)->setDropTargetContextPeer(dtcp);
}

DropTargetContext$1::DropTargetContext$1() {
}

$Class* DropTargetContext$1::load$($String* name, bool initialize) {
	$loadClass(DropTargetContext$1, name, initialize, &_DropTargetContext$1_ClassInfo_, allocate$DropTargetContext$1);
	return class$;
}

$Class* DropTargetContext$1::class$ = nullptr;

		} // dnd
	} // awt
} // java