#include <MultiUIDefaultsNPECheck$1.h>

#include <MultiUIDefaultsNPECheck.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $MultiUIDefaultsNPECheck = ::MultiUIDefaultsNPECheck;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;

$MethodInfo _MultiUIDefaultsNPECheck$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MultiUIDefaultsNPECheck$1::*)()>(&MultiUIDefaultsNPECheck$1::init$))},
	{"getDefaults", "()Ljavax/swing/UIDefaults;", nullptr, $PUBLIC},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC},
	{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MultiUIDefaultsNPECheck$1_EnclosingMethodInfo_ = {
	"MultiUIDefaultsNPECheck",
	"Test",
	"()V"
};

$InnerClassInfo _MultiUIDefaultsNPECheck$1_InnerClassesInfo_[] = {
	{"MultiUIDefaultsNPECheck$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MultiUIDefaultsNPECheck$1_ClassInfo_ = {
	$ACC_SUPER,
	"MultiUIDefaultsNPECheck$1",
	"javax.swing.LookAndFeel",
	nullptr,
	nullptr,
	_MultiUIDefaultsNPECheck$1_MethodInfo_,
	nullptr,
	&_MultiUIDefaultsNPECheck$1_EnclosingMethodInfo_,
	_MultiUIDefaultsNPECheck$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"MultiUIDefaultsNPECheck"
};

$Object* allocate$MultiUIDefaultsNPECheck$1($Class* clazz) {
	return $of($alloc(MultiUIDefaultsNPECheck$1));
}

void MultiUIDefaultsNPECheck$1::init$() {
	$LookAndFeel::init$();
}

$String* MultiUIDefaultsNPECheck$1::getName() {
	return nullptr;
}

$String* MultiUIDefaultsNPECheck$1::getID() {
	return nullptr;
}

$String* MultiUIDefaultsNPECheck$1::getDescription() {
	return nullptr;
}

bool MultiUIDefaultsNPECheck$1::isNativeLookAndFeel() {
	return false;
}

bool MultiUIDefaultsNPECheck$1::isSupportedLookAndFeel() {
	return true;
}

$UIDefaults* MultiUIDefaultsNPECheck$1::getDefaults() {
	return nullptr;
}

MultiUIDefaultsNPECheck$1::MultiUIDefaultsNPECheck$1() {
}

$Class* MultiUIDefaultsNPECheck$1::load$($String* name, bool initialize) {
	$loadClass(MultiUIDefaultsNPECheck$1, name, initialize, &_MultiUIDefaultsNPECheck$1_ClassInfo_, allocate$MultiUIDefaultsNPECheck$1);
	return class$;
}

$Class* MultiUIDefaultsNPECheck$1::class$ = nullptr;