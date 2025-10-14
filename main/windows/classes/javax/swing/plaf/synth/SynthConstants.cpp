#include <javax/swing/plaf/synth/SynthConstants.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef DEFAULT
#undef DISABLED
#undef ENABLED
#undef FOCUSED
#undef MOUSE_OVER
#undef PRESSED
#undef SELECTED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthConstants_FieldInfo_[] = {
	{"ENABLED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SynthConstants, ENABLED)},
	{"MOUSE_OVER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SynthConstants, MOUSE_OVER)},
	{"PRESSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SynthConstants, PRESSED)},
	{"DISABLED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SynthConstants, DISABLED)},
	{"FOCUSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SynthConstants, FOCUSED)},
	{"SELECTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SynthConstants, SELECTED)},
	{"DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SynthConstants, DEFAULT)},
	{}
};

$ClassInfo _SynthConstants_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.plaf.synth.SynthConstants",
	nullptr,
	nullptr,
	_SynthConstants_FieldInfo_
};

$Object* allocate$SynthConstants($Class* clazz) {
	return $of($alloc(SynthConstants));
}

$Class* SynthConstants::load$($String* name, bool initialize) {
	$loadClass(SynthConstants, name, initialize, &_SynthConstants_ClassInfo_, allocate$SynthConstants);
	return class$;
}

$Class* SynthConstants::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax