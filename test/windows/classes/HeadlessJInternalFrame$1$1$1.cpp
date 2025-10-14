#include <HeadlessJInternalFrame$1$1$1.h>

#include <HeadlessJInternalFrame$1$1.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$PropertyChangeHandler.h>
#include <jcpp.h>

using $HeadlessJInternalFrame$1$1 = ::HeadlessJInternalFrame$1$1;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameTitlePane$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$PropertyChangeHandler;

$FieldInfo _HeadlessJInternalFrame$1$1$1_FieldInfo_[] = {
	{"this$1", "LHeadlessJInternalFrame$1$1;", nullptr, $FINAL | $SYNTHETIC, $field(HeadlessJInternalFrame$1$1$1, this$1)},
	{"countUI", "I", nullptr, 0, $field(HeadlessJInternalFrame$1$1$1, countUI)},
	{}
};

$MethodInfo _HeadlessJInternalFrame$1$1$1_MethodInfo_[] = {
	{"<init>", "(LHeadlessJInternalFrame$1$1;)V", nullptr, 0, $method(static_cast<void(HeadlessJInternalFrame$1$1$1::*)($HeadlessJInternalFrame$1$1*)>(&HeadlessJInternalFrame$1$1$1::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _HeadlessJInternalFrame$1$1$1_EnclosingMethodInfo_ = {
	"HeadlessJInternalFrame$1$1",
	"createPropertyChangeListener",
	"()Ljava/beans/PropertyChangeListener;"
};

$InnerClassInfo _HeadlessJInternalFrame$1$1$1_InnerClassesInfo_[] = {
	{"HeadlessJInternalFrame$1", nullptr, nullptr, 0},
	{"HeadlessJInternalFrame$1$1", nullptr, nullptr, 0},
	{"HeadlessJInternalFrame$1$1$1", nullptr, nullptr, 0},
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _HeadlessJInternalFrame$1$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJInternalFrame$1$1$1",
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$PropertyChangeHandler",
	nullptr,
	_HeadlessJInternalFrame$1$1$1_FieldInfo_,
	_HeadlessJInternalFrame$1$1$1_MethodInfo_,
	nullptr,
	&_HeadlessJInternalFrame$1$1$1_EnclosingMethodInfo_,
	_HeadlessJInternalFrame$1$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJInternalFrame"
};

$Object* allocate$HeadlessJInternalFrame$1$1$1($Class* clazz) {
	return $of($alloc(HeadlessJInternalFrame$1$1$1));
}

void HeadlessJInternalFrame$1$1$1::init$($HeadlessJInternalFrame$1$1* this$1) {
	$set(this, this$1, this$1);
	$BasicInternalFrameTitlePane$PropertyChangeHandler::init$(this$1);
	this->countUI = 0;
}

void HeadlessJInternalFrame$1$1$1::propertyChange($PropertyChangeEvent* evt) {
	if ($nc($($nc(evt)->getPropertyName()))->equals("UI"_s)) {
		++this->countUI;
	} else if (this->countUI > 1) {
		$throwNew($RuntimeException, "Test failed. Listener not removed!"_s);
	}
}

HeadlessJInternalFrame$1$1$1::HeadlessJInternalFrame$1$1$1() {
}

$Class* HeadlessJInternalFrame$1$1$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJInternalFrame$1$1$1, name, initialize, &_HeadlessJInternalFrame$1$1$1_ClassInfo_, allocate$HeadlessJInternalFrame$1$1$1);
	return class$;
}

$Class* HeadlessJInternalFrame$1$1$1::class$ = nullptr;