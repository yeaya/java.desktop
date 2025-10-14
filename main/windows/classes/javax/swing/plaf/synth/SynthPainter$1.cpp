#include <javax/swing/plaf/synth/SynthPainter$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthPainter$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SynthPainter$1::*)()>(&SynthPainter$1::init$))},
	{}
};

$EnclosingMethodInfo _SynthPainter$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.synth.SynthPainter",
	nullptr,
	nullptr
};

$InnerClassInfo _SynthPainter$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthPainter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthPainter$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthPainter$1",
	"javax.swing.plaf.synth.SynthPainter",
	nullptr,
	nullptr,
	_SynthPainter$1_MethodInfo_,
	nullptr,
	&_SynthPainter$1_EnclosingMethodInfo_,
	_SynthPainter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthPainter"
};

$Object* allocate$SynthPainter$1($Class* clazz) {
	return $of($alloc(SynthPainter$1));
}

void SynthPainter$1::init$() {
	$SynthPainter::init$();
}

SynthPainter$1::SynthPainter$1() {
}

$Class* SynthPainter$1::load$($String* name, bool initialize) {
	$loadClass(SynthPainter$1, name, initialize, &_SynthPainter$1_ClassInfo_, allocate$SynthPainter$1);
	return class$;
}

$Class* SynthPainter$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax