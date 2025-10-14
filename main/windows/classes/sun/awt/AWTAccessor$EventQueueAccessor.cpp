#include <sun/awt/AWTAccessor$EventQueueAccessor.h>

#include <java/awt/EventQueue.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/FwDispatcher.h>
#include <jcpp.h>

using $EventQueue = ::java::awt::EventQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $FwDispatcher = ::sun::awt::FwDispatcher;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$EventQueueAccessor_MethodInfo_[] = {
	{"getDispatchThread", "(Ljava/awt/EventQueue;)Ljava/lang/Thread;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMostRecentEventTime", "(Ljava/awt/EventQueue;)J", nullptr, $PUBLIC | $ABSTRACT},
	{"invokeAndWait", "(Ljava/lang/Object;Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.lang.InterruptedException,java.lang.reflect.InvocationTargetException"},
	{"isDispatchThreadImpl", "(Ljava/awt/EventQueue;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"noEvents", "(Ljava/awt/EventQueue;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeSourceEvents", "(Ljava/awt/EventQueue;Ljava/lang/Object;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setFwDispatcher", "(Ljava/awt/EventQueue;Lsun/awt/FwDispatcher;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"wakeup", "(Ljava/awt/EventQueue;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$EventQueueAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$EventQueueAccessor", "sun.awt.AWTAccessor", "EventQueueAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$EventQueueAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$EventQueueAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$EventQueueAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$EventQueueAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$EventQueueAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$EventQueueAccessor));
}

$Class* AWTAccessor$EventQueueAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$EventQueueAccessor, name, initialize, &_AWTAccessor$EventQueueAccessor_ClassInfo_, allocate$AWTAccessor$EventQueueAccessor);
	return class$;
}

$Class* AWTAccessor$EventQueueAccessor::class$ = nullptr;

	} // awt
} // sun