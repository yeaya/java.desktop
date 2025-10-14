#include <HeadlessJInternalFrame$1$1.h>

#include <HeadlessJInternalFrame$1$1$1.h>
#include <HeadlessJInternalFrame$1.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$PropertyChangeHandler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

using $HeadlessJInternalFrame$1 = ::HeadlessJInternalFrame$1;
using $HeadlessJInternalFrame$1$1$1 = ::HeadlessJInternalFrame$1$1$1;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameTitlePane$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$PropertyChangeHandler;

$FieldInfo _HeadlessJInternalFrame$1$1_FieldInfo_[] = {
	{"this$0", "LHeadlessJInternalFrame$1;", nullptr, $FINAL | $SYNTHETIC, $field(HeadlessJInternalFrame$1$1, this$0)},
	{}
};

$MethodInfo _HeadlessJInternalFrame$1$1_MethodInfo_[] = {
	{"<init>", "(LHeadlessJInternalFrame$1;Ljavax/swing/JInternalFrame;)V", nullptr, 0, $method(static_cast<void(HeadlessJInternalFrame$1$1::*)($HeadlessJInternalFrame$1*,$JInternalFrame*)>(&HeadlessJInternalFrame$1$1::init$))},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _HeadlessJInternalFrame$1$1_EnclosingMethodInfo_ = {
	"HeadlessJInternalFrame$1",
	"createNorthPane",
	"(Ljavax/swing/JInternalFrame;)Ljavax/swing/JComponent;"
};

$InnerClassInfo _HeadlessJInternalFrame$1$1_InnerClassesInfo_[] = {
	{"HeadlessJInternalFrame$1", nullptr, nullptr, 0},
	{"HeadlessJInternalFrame$1$1", nullptr, nullptr, 0},
	{"HeadlessJInternalFrame$1$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJInternalFrame$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJInternalFrame$1$1",
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane",
	nullptr,
	_HeadlessJInternalFrame$1$1_FieldInfo_,
	_HeadlessJInternalFrame$1$1_MethodInfo_,
	nullptr,
	&_HeadlessJInternalFrame$1$1_EnclosingMethodInfo_,
	_HeadlessJInternalFrame$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJInternalFrame"
};

$Object* allocate$HeadlessJInternalFrame$1$1($Class* clazz) {
	return $of($alloc(HeadlessJInternalFrame$1$1));
}

void HeadlessJInternalFrame$1$1::init$($HeadlessJInternalFrame$1* this$0, $JInternalFrame* arg0) {
	$set(this, this$0, this$0);
	$BasicInternalFrameTitlePane::init$(arg0);
}

$PropertyChangeListener* HeadlessJInternalFrame$1$1::createPropertyChangeListener() {
	return $new($HeadlessJInternalFrame$1$1$1, this);
}

HeadlessJInternalFrame$1$1::HeadlessJInternalFrame$1$1() {
}

$Class* HeadlessJInternalFrame$1$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJInternalFrame$1$1, name, initialize, &_HeadlessJInternalFrame$1$1_ClassInfo_, allocate$HeadlessJInternalFrame$1$1);
	return class$;
}

$Class* HeadlessJInternalFrame$1$1::class$ = nullptr;