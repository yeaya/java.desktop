#include <sun/awt/AWTAccessor$DefaultKeyboardFocusManagerAccessor.h>

#include <java/awt/DefaultKeyboardFocusManager.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $DefaultKeyboardFocusManager = ::java::awt::DefaultKeyboardFocusManager;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$DefaultKeyboardFocusManagerAccessor_MethodInfo_[] = {
	{"consumeNextKeyTyped", "(Ljava/awt/DefaultKeyboardFocusManager;Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$DefaultKeyboardFocusManagerAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$DefaultKeyboardFocusManagerAccessor", "sun.awt.AWTAccessor", "DefaultKeyboardFocusManagerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$DefaultKeyboardFocusManagerAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$DefaultKeyboardFocusManagerAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$DefaultKeyboardFocusManagerAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$DefaultKeyboardFocusManagerAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$DefaultKeyboardFocusManagerAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$DefaultKeyboardFocusManagerAccessor));
}

$Class* AWTAccessor$DefaultKeyboardFocusManagerAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$DefaultKeyboardFocusManagerAccessor, name, initialize, &_AWTAccessor$DefaultKeyboardFocusManagerAccessor_ClassInfo_, allocate$AWTAccessor$DefaultKeyboardFocusManagerAccessor);
	return class$;
}

$Class* AWTAccessor$DefaultKeyboardFocusManagerAccessor::class$ = nullptr;

	} // awt
} // sun