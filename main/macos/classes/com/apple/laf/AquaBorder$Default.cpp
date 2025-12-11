#include <com/apple/laf/AquaBorder$Default.h>

#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <jcpp.h>

using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $AquaUtilControlSize$SizeVariant = ::com::apple::laf::AquaUtilControlSize$SizeVariant;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaBorder$Default_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaBorder$Default::*)()>(&AquaBorder$Default::init$))},
	{}
};

$InnerClassInfo _AquaBorder$Default_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaBorder$Default", "com.apple.laf.AquaBorder", "Default", $STATIC},
	{}
};

$ClassInfo _AquaBorder$Default_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaBorder$Default",
	"com.apple.laf.AquaBorder",
	nullptr,
	nullptr,
	_AquaBorder$Default_MethodInfo_,
	nullptr,
	nullptr,
	_AquaBorder$Default_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaBorder"
};

$Object* allocate$AquaBorder$Default($Class* clazz) {
	return $of($alloc(AquaBorder$Default));
}

void AquaBorder$Default::init$() {
	$useLocalCurrentObjectStackCache();
	$AquaBorder::init$($$new($AquaUtilControlSize$SizeDescriptor, $$new($AquaUtilControlSize$SizeVariant)));
}

AquaBorder$Default::AquaBorder$Default() {
}

$Class* AquaBorder$Default::load$($String* name, bool initialize) {
	$loadClass(AquaBorder$Default, name, initialize, &_AquaBorder$Default_ClassInfo_, allocate$AquaBorder$Default);
	return class$;
}

$Class* AquaBorder$Default::class$ = nullptr;

		} // laf
	} // apple
} // com