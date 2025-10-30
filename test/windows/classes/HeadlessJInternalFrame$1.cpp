#include <HeadlessJInternalFrame$1.h>

#include <HeadlessJInternalFrame$1$1.h>
#include <HeadlessJInternalFrame.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <jcpp.h>

using $HeadlessJInternalFrame = ::HeadlessJInternalFrame;
using $HeadlessJInternalFrame$1$1 = ::HeadlessJInternalFrame$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;

$MethodInfo _HeadlessJInternalFrame$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JInternalFrame;)V", nullptr, 0, $method(static_cast<void(HeadlessJInternalFrame$1::*)($JInternalFrame*)>(&HeadlessJInternalFrame$1::init$))},
	{"createNorthPane", "(Ljavax/swing/JInternalFrame;)Ljavax/swing/JComponent;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _HeadlessJInternalFrame$1_EnclosingMethodInfo_ = {
	"HeadlessJInternalFrame",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _HeadlessJInternalFrame$1_InnerClassesInfo_[] = {
	{"HeadlessJInternalFrame$1", nullptr, nullptr, 0},
	{"HeadlessJInternalFrame$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _HeadlessJInternalFrame$1_ClassInfo_ = {
	$ACC_SUPER,
	"HeadlessJInternalFrame$1",
	"javax.swing.plaf.basic.BasicInternalFrameUI",
	nullptr,
	nullptr,
	_HeadlessJInternalFrame$1_MethodInfo_,
	nullptr,
	&_HeadlessJInternalFrame$1_EnclosingMethodInfo_,
	_HeadlessJInternalFrame$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"HeadlessJInternalFrame"
};

$Object* allocate$HeadlessJInternalFrame$1($Class* clazz) {
	return $of($alloc(HeadlessJInternalFrame$1));
}

void HeadlessJInternalFrame$1::init$($JInternalFrame* arg0) {
	$BasicInternalFrameUI::init$(arg0);
}

$JComponent* HeadlessJInternalFrame$1::createNorthPane($JInternalFrame* w) {
	$set(this, titlePane, $new($HeadlessJInternalFrame$1$1, this, w));
	return this->titlePane;
}

HeadlessJInternalFrame$1::HeadlessJInternalFrame$1() {
}

$Class* HeadlessJInternalFrame$1::load$($String* name, bool initialize) {
	$loadClass(HeadlessJInternalFrame$1, name, initialize, &_HeadlessJInternalFrame$1_ClassInfo_, allocate$HeadlessJInternalFrame$1);
	return class$;
}

$Class* HeadlessJInternalFrame$1::class$ = nullptr;