#include <sun/lwawt/macosx/CPlatformWindow$9.h>

#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/lwawt/macosx/CFRetainedResource$CFNativeAction.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

using $ClientPropertyApplicator$Property = ::com::apple::laf::ClientPropertyApplicator$Property;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPlatformWindow$9$$Lambda$lambda$applyProperty$0 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$9$$Lambda$lambda$applyProperty$0, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow$9::lambda$applyProperty$0(ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$9$$Lambda$lambda$applyProperty$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$9$$Lambda$lambda$applyProperty$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$9$$Lambda$lambda$applyProperty$0::*)()>(&CPlatformWindow$9$$Lambda$lambda$applyProperty$0::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$9$$Lambda$lambda$applyProperty$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$9$$Lambda$lambda$applyProperty$0",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$9$$Lambda$lambda$applyProperty$0::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$9$$Lambda$lambda$applyProperty$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$9$$Lambda$lambda$applyProperty$0::class$ = nullptr;

$MethodInfo _CPlatformWindow$9_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(CPlatformWindow$9::*)($String*)>(&CPlatformWindow$9::init$))},
	{"applyProperty", "(Lsun/lwawt/macosx/CPlatformWindow;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"lambda$applyProperty$0", "(J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t)>(&CPlatformWindow$9::lambda$applyProperty$0))},
	{}
};

$EnclosingMethodInfo _CPlatformWindow$9_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CPlatformWindow",
	nullptr,
	nullptr
};

$InnerClassInfo _CPlatformWindow$9_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPlatformWindow$9", nullptr, nullptr, 0},
	{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CPlatformWindow$9_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CPlatformWindow$9",
	"com.apple.laf.ClientPropertyApplicator$Property",
	nullptr,
	nullptr,
	_CPlatformWindow$9_MethodInfo_,
	"Lcom/apple/laf/ClientPropertyApplicator$Property<Lsun/lwawt/macosx/CPlatformWindow;>;",
	&_CPlatformWindow$9_EnclosingMethodInfo_,
	_CPlatformWindow$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPlatformWindow"
};

$Object* allocate$CPlatformWindow$9($Class* clazz) {
	return $of($alloc(CPlatformWindow$9));
}

void CPlatformWindow$9::init$($String* name) {
	$ClientPropertyApplicator$Property::init$(name);
}

void CPlatformWindow$9::applyProperty($CPlatformWindow* c, Object$* value) {
	$nc(c)->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$9$$Lambda$lambda$applyProperty$0)));
}

void CPlatformWindow$9::applyProperty(Object$* c, Object$* value) {
	this->applyProperty($cast($CPlatformWindow, c), value);
}

void CPlatformWindow$9::lambda$applyProperty$0(int64_t ptr) {
	$init(CPlatformWindow$9);
	$CPlatformWindow::nativeRevalidateNSWindowShadow(ptr);
}

CPlatformWindow$9::CPlatformWindow$9() {
}

$Class* CPlatformWindow$9::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CPlatformWindow$9$$Lambda$lambda$applyProperty$0::classInfo$.name)) {
			return CPlatformWindow$9$$Lambda$lambda$applyProperty$0::load$(name, initialize);
		}
	}
	$loadClass(CPlatformWindow$9, name, initialize, &_CPlatformWindow$9_ClassInfo_, allocate$CPlatformWindow$9);
	return class$;
}

$Class* CPlatformWindow$9::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun