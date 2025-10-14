#include <javax/swing/plaf/multi/MultiUIDefaults.h>

#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace multi {

$MethodInfo _MultiUIDefaults_MethodInfo_[] = {
	{"<init>", "(IF)V", nullptr, 0, $method(static_cast<void(MultiUIDefaults::*)(int32_t,float)>(&MultiUIDefaults::init$))},
	{"getUIError", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _MultiUIDefaults_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.multi.MultiUIDefaults",
	"javax.swing.UIDefaults",
	nullptr,
	nullptr,
	_MultiUIDefaults_MethodInfo_
};

$Object* allocate$MultiUIDefaults($Class* clazz) {
	return $of($alloc(MultiUIDefaults));
}

void MultiUIDefaults::init$(int32_t initialCapacity, float loadFactor) {
	$UIDefaults::init$(initialCapacity, loadFactor);
}

void MultiUIDefaults::getUIError($String* msg) {
	$init($System);
	$nc($System::err)->println($$str({"Multiplexing LAF:  "_s, msg}));
}

MultiUIDefaults::MultiUIDefaults() {
}

$Class* MultiUIDefaults::load$($String* name, bool initialize) {
	$loadClass(MultiUIDefaults, name, initialize, &_MultiUIDefaults_ClassInfo_, allocate$MultiUIDefaults);
	return class$;
}

$Class* MultiUIDefaults::class$ = nullptr;

			} // multi
		} // plaf
	} // swing
} // javax