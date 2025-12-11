#include <sun/font/CFontManager$1.h>

#include <sun/font/CFontManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CFontManager = ::sun::font::CFontManager;

namespace sun {
	namespace font {

$FieldInfo _CFontManager$1_FieldInfo_[] = {
	{"this$0", "Lsun/font/CFontManager;", nullptr, $FINAL | $SYNTHETIC, $field(CFontManager$1, this$0)},
	{}
};

$MethodInfo _CFontManager$1_MethodInfo_[] = {
	{"<init>", "(Lsun/font/CFontManager;)V", nullptr, 0, $method(static_cast<void(CFontManager$1::*)($CFontManager*)>(&CFontManager$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CFontManager$1_EnclosingMethodInfo_ = {
	"sun.font.CFontManager",
	"loadFonts",
	"()V"
};

$InnerClassInfo _CFontManager$1_InnerClassesInfo_[] = {
	{"sun.font.CFontManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CFontManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.font.CFontManager$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_CFontManager$1_FieldInfo_,
	_CFontManager$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_CFontManager$1_EnclosingMethodInfo_,
	_CFontManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.font.CFontManager"
};

$Object* allocate$CFontManager$1($Class* clazz) {
	return $of($alloc(CFontManager$1));
}

void CFontManager$1::init$($CFontManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* CFontManager$1::run() {
	if (!this->this$0->loadedAllFonts) {
		this->this$0->loadNativeFonts();
		this->this$0->registerItalicDerived();
		this->this$0->loadedAllFonts = true;
	}
	return $of(nullptr);
}

CFontManager$1::CFontManager$1() {
}

$Class* CFontManager$1::load$($String* name, bool initialize) {
	$loadClass(CFontManager$1, name, initialize, &_CFontManager$1_ClassInfo_, allocate$CFontManager$1);
	return class$;
}

$Class* CFontManager$1::class$ = nullptr;

	} // font
} // sun