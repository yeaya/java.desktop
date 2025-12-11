#include <SilenceOfDeprecatedMenuBar$DeprecatedFrame.h>

#include <SilenceOfDeprecatedMenuBar$DeprecatedFrame$1.h>
#include <SilenceOfDeprecatedMenuBar.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JRootPane.h>
#include <jcpp.h>

using $SilenceOfDeprecatedMenuBar$DeprecatedFrame$1 = ::SilenceOfDeprecatedMenuBar$DeprecatedFrame$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JRootPane = ::javax::swing::JRootPane;

$MethodInfo _SilenceOfDeprecatedMenuBar$DeprecatedFrame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SilenceOfDeprecatedMenuBar$DeprecatedFrame::*)()>(&SilenceOfDeprecatedMenuBar$DeprecatedFrame::init$))},
	{"createRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _SilenceOfDeprecatedMenuBar$DeprecatedFrame_InnerClassesInfo_[] = {
	{"SilenceOfDeprecatedMenuBar$DeprecatedFrame", "SilenceOfDeprecatedMenuBar", "DeprecatedFrame", $PRIVATE | $STATIC},
	{"SilenceOfDeprecatedMenuBar$DeprecatedFrame$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SilenceOfDeprecatedMenuBar$DeprecatedFrame_ClassInfo_ = {
	$ACC_SUPER,
	"SilenceOfDeprecatedMenuBar$DeprecatedFrame",
	"javax.swing.JFrame",
	nullptr,
	nullptr,
	_SilenceOfDeprecatedMenuBar$DeprecatedFrame_MethodInfo_,
	nullptr,
	nullptr,
	_SilenceOfDeprecatedMenuBar$DeprecatedFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SilenceOfDeprecatedMenuBar"
};

$Object* allocate$SilenceOfDeprecatedMenuBar$DeprecatedFrame($Class* clazz) {
	return $of($alloc(SilenceOfDeprecatedMenuBar$DeprecatedFrame));
}

void SilenceOfDeprecatedMenuBar$DeprecatedFrame::init$() {
	$JFrame::init$();
}

$JRootPane* SilenceOfDeprecatedMenuBar$DeprecatedFrame::createRootPane() {
	return $new($SilenceOfDeprecatedMenuBar$DeprecatedFrame$1, this);
}

SilenceOfDeprecatedMenuBar$DeprecatedFrame::SilenceOfDeprecatedMenuBar$DeprecatedFrame() {
}

$Class* SilenceOfDeprecatedMenuBar$DeprecatedFrame::load$($String* name, bool initialize) {
	$loadClass(SilenceOfDeprecatedMenuBar$DeprecatedFrame, name, initialize, &_SilenceOfDeprecatedMenuBar$DeprecatedFrame_ClassInfo_, allocate$SilenceOfDeprecatedMenuBar$DeprecatedFrame);
	return class$;
}

$Class* SilenceOfDeprecatedMenuBar$DeprecatedFrame::class$ = nullptr;