#include <com/apple/laf/AquaLookAndFeel$1.h>

#include <com/apple/laf/AquaLookAndFeel.h>
#include <jcpp.h>

using $AquaLookAndFeel = ::com::apple::laf::AquaLookAndFeel;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaLookAndFeel$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaLookAndFeel$1, this$0)},
	{}
};

$MethodInfo _AquaLookAndFeel$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaLookAndFeel;)V", nullptr, 0, $method(static_cast<void(AquaLookAndFeel$1::*)($AquaLookAndFeel*)>(&AquaLookAndFeel$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaLookAndFeel$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaLookAndFeel",
	"initialize",
	"()V"
};

$InnerClassInfo _AquaLookAndFeel$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaLookAndFeel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaLookAndFeel$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaLookAndFeel$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AquaLookAndFeel$1_FieldInfo_,
	_AquaLookAndFeel$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_AquaLookAndFeel$1_EnclosingMethodInfo_,
	_AquaLookAndFeel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaLookAndFeel"
};

$Object* allocate$AquaLookAndFeel$1($Class* clazz) {
	return $of($alloc(AquaLookAndFeel$1));
}

void AquaLookAndFeel$1::init$($AquaLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* AquaLookAndFeel$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("osxui"_s);
	return $of(nullptr);
}

AquaLookAndFeel$1::AquaLookAndFeel$1() {
}

$Class* AquaLookAndFeel$1::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$1, name, initialize, &_AquaLookAndFeel$1_ClassInfo_, allocate$AquaLookAndFeel$1);
	return class$;
}

$Class* AquaLookAndFeel$1::class$ = nullptr;

		} // laf
	} // apple
} // com