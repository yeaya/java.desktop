#include <java/awt/KeyEventPostProcessor.h>

#include <java/awt/event/KeyEvent.h>
#include <jcpp.h>

using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$CompoundAttribute _KeyEventPostProcessor_Annotations_[] = {
	{"Ljava/lang/FunctionalInterface;", nullptr},
	{}
};

$MethodInfo _KeyEventPostProcessor_MethodInfo_[] = {
	{"postProcessKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _KeyEventPostProcessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.KeyEventPostProcessor",
	nullptr,
	nullptr,
	nullptr,
	_KeyEventPostProcessor_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_KeyEventPostProcessor_Annotations_
};

$Object* allocate$KeyEventPostProcessor($Class* clazz) {
	return $of($alloc(KeyEventPostProcessor));
}

$Class* KeyEventPostProcessor::load$($String* name, bool initialize) {
	$loadClass(KeyEventPostProcessor, name, initialize, &_KeyEventPostProcessor_ClassInfo_, allocate$KeyEventPostProcessor);
	return class$;
}

$Class* KeyEventPostProcessor::class$ = nullptr;

	} // awt
} // java