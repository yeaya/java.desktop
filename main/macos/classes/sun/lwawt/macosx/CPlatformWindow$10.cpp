#include <sun/lwawt/macosx/CPlatformWindow$10.h>

#include <com/apple/laf/ClientPropertyApplicator$Property.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <java/io/File.h>
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
using $File = ::java::io::File;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CFRetainedResource$CFNativeAction = ::sun::lwawt::macosx::CFRetainedResource$CFNativeAction;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace sun {
	namespace lwawt {
		namespace macosx {

class CPlatformWindow$10$$Lambda$lambda$applyProperty$0 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$10$$Lambda$lambda$applyProperty$0, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$() {
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow$10::lambda$applyProperty$0(ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$10$$Lambda$lambda$applyProperty$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CPlatformWindow$10$$Lambda$lambda$applyProperty$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$10$$Lambda$lambda$applyProperty$0::*)()>(&CPlatformWindow$10$$Lambda$lambda$applyProperty$0::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$10$$Lambda$lambda$applyProperty$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$10$$Lambda$lambda$applyProperty$0",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	nullptr,
	methodInfos
};
$Class* CPlatformWindow$10$$Lambda$lambda$applyProperty$0::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$10$$Lambda$lambda$applyProperty$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$10$$Lambda$lambda$applyProperty$0::class$ = nullptr;

class CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1 : public $CFRetainedResource$CFNativeAction {
	$class(CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1, $NO_CLASS_INIT, $CFRetainedResource$CFNativeAction)
public:
	void init$($String* filename) {
		$set(this, filename, filename);
	}
	virtual void run(int64_t ptr) override {
		CPlatformWindow$10::lambda$applyProperty$1(filename, ptr);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1>());
	}
	$String* filename = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1::fieldInfos[2] = {
	{"filename", "Ljava/lang/String;", nullptr, $PUBLIC, $field(CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1, filename)},
	{}
};
$MethodInfo CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1::*)($String*)>(&CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1::init$))},
	{"run", "(J)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.lwawt.macosx.CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1",
	"java.lang.Object",
	"sun.lwawt.macosx.CFRetainedResource$CFNativeAction",
	fieldInfos,
	methodInfos
};
$Class* CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1::load$($String* name, bool initialize) {
	$loadClass(CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1::class$ = nullptr;

$MethodInfo _CPlatformWindow$10_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(CPlatformWindow$10::*)($String*)>(&CPlatformWindow$10::init$))},
	{"applyProperty", "(Lsun/lwawt/macosx/CPlatformWindow;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"applyProperty", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"lambda$applyProperty$0", "(J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t)>(&CPlatformWindow$10::lambda$applyProperty$0))},
	{"lambda$applyProperty$1", "(Ljava/lang/String;J)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,int64_t)>(&CPlatformWindow$10::lambda$applyProperty$1))},
	{}
};

$EnclosingMethodInfo _CPlatformWindow$10_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CPlatformWindow",
	nullptr,
	nullptr
};

$InnerClassInfo _CPlatformWindow$10_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPlatformWindow$10", nullptr, nullptr, 0},
	{"com.apple.laf.ClientPropertyApplicator$Property", "com.apple.laf.ClientPropertyApplicator", "Property", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _CPlatformWindow$10_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CPlatformWindow$10",
	"com.apple.laf.ClientPropertyApplicator$Property",
	nullptr,
	nullptr,
	_CPlatformWindow$10_MethodInfo_,
	"Lcom/apple/laf/ClientPropertyApplicator$Property<Lsun/lwawt/macosx/CPlatformWindow;>;",
	&_CPlatformWindow$10_EnclosingMethodInfo_,
	_CPlatformWindow$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPlatformWindow"
};

$Object* allocate$CPlatformWindow$10($Class* clazz) {
	return $of($alloc(CPlatformWindow$10));
}

void CPlatformWindow$10::init$($String* name) {
	$ClientPropertyApplicator$Property::init$(name);
}

void CPlatformWindow$10::applyProperty($CPlatformWindow* c, Object$* value) {
	$useLocalCurrentObjectStackCache();
	if (value == nullptr || !($instanceOf($File, value))) {
		$nc(c)->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$10$$Lambda$lambda$applyProperty$0)));
		return;
	}
	$var($String, filename, $nc(($cast($File, value)))->getAbsolutePath());
	$nc(c)->execute(static_cast<$CFRetainedResource$CFNativeAction*>($$new(CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1, filename)));
}

void CPlatformWindow$10::applyProperty(Object$* c, Object$* value) {
	this->applyProperty($cast($CPlatformWindow, c), value);
}

void CPlatformWindow$10::lambda$applyProperty$1($String* filename, int64_t ptr) {
	$init(CPlatformWindow$10);
	$CPlatformWindow::nativeSetNSWindowRepresentedFilename(ptr, filename);
}

void CPlatformWindow$10::lambda$applyProperty$0(int64_t ptr) {
	$init(CPlatformWindow$10);
	$CPlatformWindow::nativeSetNSWindowRepresentedFilename(ptr, nullptr);
}

CPlatformWindow$10::CPlatformWindow$10() {
}

$Class* CPlatformWindow$10::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CPlatformWindow$10$$Lambda$lambda$applyProperty$0::classInfo$.name)) {
			return CPlatformWindow$10$$Lambda$lambda$applyProperty$0::load$(name, initialize);
		}
		if (name->equals(CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1::classInfo$.name)) {
			return CPlatformWindow$10$$Lambda$lambda$applyProperty$1$1::load$(name, initialize);
		}
	}
	$loadClass(CPlatformWindow$10, name, initialize, &_CPlatformWindow$10_ClassInfo_, allocate$CPlatformWindow$10);
	return class$;
}

$Class* CPlatformWindow$10::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun