#include <sun/awt/AWTAccessor$SequencedEventAccessor.h>

#include <java/awt/AWTEvent.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$SequencedEventAccessor_MethodInfo_[] = {
	{"create", "(Ljava/awt/AWTEvent;)Ljava/awt/AWTEvent;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNested", "(Ljava/awt/AWTEvent;)Ljava/awt/AWTEvent;", nullptr, $PUBLIC | $ABSTRACT},
	{"isSequencedEvent", "(Ljava/awt/AWTEvent;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$SequencedEventAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$SequencedEventAccessor", "sun.awt.AWTAccessor", "SequencedEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$SequencedEventAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$SequencedEventAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$SequencedEventAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$SequencedEventAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$SequencedEventAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$SequencedEventAccessor));
}

$Class* AWTAccessor$SequencedEventAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$SequencedEventAccessor, name, initialize, &_AWTAccessor$SequencedEventAccessor_ClassInfo_, allocate$AWTAccessor$SequencedEventAccessor);
	return class$;
}

$Class* AWTAccessor$SequencedEventAccessor::class$ = nullptr;

	} // awt
} // sun