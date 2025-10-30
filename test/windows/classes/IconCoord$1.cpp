#include <IconCoord$1.h>

#include <IconCoord.h>
#include <jcpp.h>

using $IconCoord = ::IconCoord;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$MethodInfo _IconCoord$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IconCoord$1::*)()>(&IconCoord$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _IconCoord$1_EnclosingMethodInfo_ = {
	"IconCoord",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _IconCoord$1_InnerClassesInfo_[] = {
	{"IconCoord$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IconCoord$1_ClassInfo_ = {
	$ACC_SUPER,
	"IconCoord$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_IconCoord$1_MethodInfo_,
	nullptr,
	&_IconCoord$1_EnclosingMethodInfo_,
	_IconCoord$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"IconCoord"
};

$Object* allocate$IconCoord$1($Class* clazz) {
	return $of($alloc(IconCoord$1));
}

void IconCoord$1::init$() {
}

void IconCoord$1::run() {
	$$new($IconCoord)->createAndShowGUI();
}

IconCoord$1::IconCoord$1() {
}

$Class* IconCoord$1::load$($String* name, bool initialize) {
	$loadClass(IconCoord$1, name, initialize, &_IconCoord$1_ClassInfo_, allocate$IconCoord$1);
	return class$;
}

$Class* IconCoord$1::class$ = nullptr;