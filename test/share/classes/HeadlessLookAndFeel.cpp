#include <HeadlessLookAndFeel.h>

#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

$MethodInfo _HeadlessLookAndFeel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessLookAndFeel::*)()>(&HeadlessLookAndFeel::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessLookAndFeel::main))},
	{}
};

$ClassInfo _HeadlessLookAndFeel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessLookAndFeel",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessLookAndFeel_MethodInfo_
};

$Object* allocate$HeadlessLookAndFeel($Class* clazz) {
	return $of($alloc(HeadlessLookAndFeel));
}

void HeadlessLookAndFeel::init$() {
}

void HeadlessLookAndFeel::main($StringArray* args) {
	$new($MetalLookAndFeel);
}

HeadlessLookAndFeel::HeadlessLookAndFeel() {
}

$Class* HeadlessLookAndFeel::load$($String* name, bool initialize) {
	$loadClass(HeadlessLookAndFeel, name, initialize, &_HeadlessLookAndFeel_ClassInfo_, allocate$HeadlessLookAndFeel);
	return class$;
}

$Class* HeadlessLookAndFeel::class$ = nullptr;