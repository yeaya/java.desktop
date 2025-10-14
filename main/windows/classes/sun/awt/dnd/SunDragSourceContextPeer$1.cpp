#include <sun/awt/dnd/SunDragSourceContextPeer$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/dnd/SunDragSourceContextPeer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SunDragSourceContextPeer = ::sun::awt::dnd::SunDragSourceContextPeer;

namespace sun {
	namespace awt {
		namespace dnd {

$FieldInfo _SunDragSourceContextPeer$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/dnd/SunDragSourceContextPeer;", nullptr, $FINAL | $SYNTHETIC, $field(SunDragSourceContextPeer$1, this$0)},
	{}
};

$MethodInfo _SunDragSourceContextPeer$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/dnd/SunDragSourceContextPeer;)V", nullptr, 0, $method(static_cast<void(SunDragSourceContextPeer$1::*)($SunDragSourceContextPeer*)>(&SunDragSourceContextPeer$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SunDragSourceContextPeer$1_EnclosingMethodInfo_ = {
	"sun.awt.dnd.SunDragSourceContextPeer",
	"startDrag",
	"(Ljava/awt/dnd/DragSourceContext;Ljava/awt/Cursor;Ljava/awt/Image;Ljava/awt/Point;)V"
};

$InnerClassInfo _SunDragSourceContextPeer$1_InnerClassesInfo_[] = {
	{"sun.awt.dnd.SunDragSourceContextPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SunDragSourceContextPeer$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.dnd.SunDragSourceContextPeer$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_SunDragSourceContextPeer$1_FieldInfo_,
	_SunDragSourceContextPeer$1_MethodInfo_,
	nullptr,
	&_SunDragSourceContextPeer$1_EnclosingMethodInfo_,
	_SunDragSourceContextPeer$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.dnd.SunDragSourceContextPeer"
};

$Object* allocate$SunDragSourceContextPeer$1($Class* clazz) {
	return $of($alloc(SunDragSourceContextPeer$1));
}

void SunDragSourceContextPeer$1::init$($SunDragSourceContextPeer* this$0) {
	$set(this, this$0, this$0);
}

void SunDragSourceContextPeer$1::run() {
	$init($SunDragSourceContextPeer);
	$SunDragSourceContextPeer::discardingMouseEvents = false;
}

SunDragSourceContextPeer$1::SunDragSourceContextPeer$1() {
}

$Class* SunDragSourceContextPeer$1::load$($String* name, bool initialize) {
	$loadClass(SunDragSourceContextPeer$1, name, initialize, &_SunDragSourceContextPeer$1_ClassInfo_, allocate$SunDragSourceContextPeer$1);
	return class$;
}

$Class* SunDragSourceContextPeer$1::class$ = nullptr;

		} // dnd
	} // awt
} // sun