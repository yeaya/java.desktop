#include <sun/awt/AWTAccessor$KeyEventAccessor.h>

#include <java/awt/Component.h>
#include <java/awt/event/KeyEvent.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$KeyEventAccessor_MethodInfo_[] = {
	{"getOriginalSource", "(Ljava/awt/event/KeyEvent;)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{"isProxyActive", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"setExtendedKeyCode", "(Ljava/awt/event/KeyEvent;J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setPrimaryLevelUnicode", "(Ljava/awt/event/KeyEvent;J)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setRawCode", "(Ljava/awt/event/KeyEvent;J)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$KeyEventAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$KeyEventAccessor", "sun.awt.AWTAccessor", "KeyEventAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$KeyEventAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$KeyEventAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$KeyEventAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$KeyEventAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$KeyEventAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$KeyEventAccessor));
}

$Class* AWTAccessor$KeyEventAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$KeyEventAccessor, name, initialize, &_AWTAccessor$KeyEventAccessor_ClassInfo_, allocate$AWTAccessor$KeyEventAccessor);
	return class$;
}

$Class* AWTAccessor$KeyEventAccessor::class$ = nullptr;

	} // awt
} // sun