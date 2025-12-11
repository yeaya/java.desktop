#include <com/apple/laf/AquaLookAndFeel$2.h>

#include <apple/laf/JRSUIControl.h>
#include <com/apple/laf/AquaLookAndFeel.h>
#include <jcpp.h>

using $JRSUIControl = ::apple::laf::JRSUIControl;
using $AquaLookAndFeel = ::com::apple::laf::AquaLookAndFeel;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaLookAndFeel$2_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaLookAndFeel$2, this$0)},
	{}
};

$MethodInfo _AquaLookAndFeel$2_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaLookAndFeel;)V", nullptr, 0, $method(static_cast<void(AquaLookAndFeel$2::*)($AquaLookAndFeel*)>(&AquaLookAndFeel$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaLookAndFeel$2_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaLookAndFeel",
	"initialize",
	"()V"
};

$InnerClassInfo _AquaLookAndFeel$2_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaLookAndFeel$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaLookAndFeel$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaLookAndFeel$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AquaLookAndFeel$2_FieldInfo_,
	_AquaLookAndFeel$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_AquaLookAndFeel$2_EnclosingMethodInfo_,
	_AquaLookAndFeel$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaLookAndFeel"
};

$Object* allocate$AquaLookAndFeel$2($Class* clazz) {
	return $of($alloc(AquaLookAndFeel$2));
}

void AquaLookAndFeel$2::init$($AquaLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* AquaLookAndFeel$2::run() {
	$JRSUIControl::initJRSUI();
	return $of(nullptr);
}

AquaLookAndFeel$2::AquaLookAndFeel$2() {
}

$Class* AquaLookAndFeel$2::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$2, name, initialize, &_AquaLookAndFeel$2_ClassInfo_, allocate$AquaLookAndFeel$2);
	return class$;
}

$Class* AquaLookAndFeel$2::class$ = nullptr;

		} // laf
	} // apple
} // com