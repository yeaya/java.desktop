#include <SilenceOfDeprecatedMenuBar$DeprecatedFrame$1.h>

#include <SilenceOfDeprecatedMenuBar$DeprecatedFrame.h>
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
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JRootPane.h>
#include <jcpp.h>

using $SilenceOfDeprecatedMenuBar$DeprecatedFrame = ::SilenceOfDeprecatedMenuBar$DeprecatedFrame;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JRootPane = ::javax::swing::JRootPane;

$FieldInfo _SilenceOfDeprecatedMenuBar$DeprecatedFrame$1_FieldInfo_[] = {
	{"this$0", "LSilenceOfDeprecatedMenuBar$DeprecatedFrame;", nullptr, $FINAL | $SYNTHETIC, $field(SilenceOfDeprecatedMenuBar$DeprecatedFrame$1, this$0)},
	{}
};

$MethodInfo _SilenceOfDeprecatedMenuBar$DeprecatedFrame$1_MethodInfo_[] = {
	{"<init>", "(LSilenceOfDeprecatedMenuBar$DeprecatedFrame;)V", nullptr, 0, $method(static_cast<void(SilenceOfDeprecatedMenuBar$DeprecatedFrame$1::*)($SilenceOfDeprecatedMenuBar$DeprecatedFrame*)>(&SilenceOfDeprecatedMenuBar$DeprecatedFrame$1::init$))},
	{"getMenuBar", "()Ljavax/swing/JMenuBar;", nullptr, $PUBLIC},
	{"setMenuBar", "(Ljavax/swing/JMenuBar;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SilenceOfDeprecatedMenuBar$DeprecatedFrame$1_EnclosingMethodInfo_ = {
	"SilenceOfDeprecatedMenuBar$DeprecatedFrame",
	"createRootPane",
	"()Ljavax/swing/JRootPane;"
};

$InnerClassInfo _SilenceOfDeprecatedMenuBar$DeprecatedFrame$1_InnerClassesInfo_[] = {
	{"SilenceOfDeprecatedMenuBar$DeprecatedFrame", "SilenceOfDeprecatedMenuBar", "DeprecatedFrame", $PRIVATE | $STATIC},
	{"SilenceOfDeprecatedMenuBar$DeprecatedFrame$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SilenceOfDeprecatedMenuBar$DeprecatedFrame$1_ClassInfo_ = {
	$ACC_SUPER,
	"SilenceOfDeprecatedMenuBar$DeprecatedFrame$1",
	"javax.swing.JRootPane",
	nullptr,
	_SilenceOfDeprecatedMenuBar$DeprecatedFrame$1_FieldInfo_,
	_SilenceOfDeprecatedMenuBar$DeprecatedFrame$1_MethodInfo_,
	nullptr,
	&_SilenceOfDeprecatedMenuBar$DeprecatedFrame$1_EnclosingMethodInfo_,
	_SilenceOfDeprecatedMenuBar$DeprecatedFrame$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SilenceOfDeprecatedMenuBar"
};

$Object* allocate$SilenceOfDeprecatedMenuBar$DeprecatedFrame$1($Class* clazz) {
	return $of($alloc(SilenceOfDeprecatedMenuBar$DeprecatedFrame$1));
}

void SilenceOfDeprecatedMenuBar$DeprecatedFrame$1::init$($SilenceOfDeprecatedMenuBar$DeprecatedFrame* this$0) {
	$set(this, this$0, this$0);
	$JRootPane::init$();
}

$JMenuBar* SilenceOfDeprecatedMenuBar$DeprecatedFrame$1::getMenuBar() {
	$throwNew($RuntimeException, "Should not be here"_s);
	$shouldNotReachHere();
}

void SilenceOfDeprecatedMenuBar$DeprecatedFrame$1::setMenuBar($JMenuBar* menu) {
	$throwNew($RuntimeException, "Should not be here"_s);
}

SilenceOfDeprecatedMenuBar$DeprecatedFrame$1::SilenceOfDeprecatedMenuBar$DeprecatedFrame$1() {
}

$Class* SilenceOfDeprecatedMenuBar$DeprecatedFrame$1::load$($String* name, bool initialize) {
	$loadClass(SilenceOfDeprecatedMenuBar$DeprecatedFrame$1, name, initialize, &_SilenceOfDeprecatedMenuBar$DeprecatedFrame$1_ClassInfo_, allocate$SilenceOfDeprecatedMenuBar$DeprecatedFrame$1);
	return class$;
}

$Class* SilenceOfDeprecatedMenuBar$DeprecatedFrame$1::class$ = nullptr;