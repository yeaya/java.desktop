#include <javax/swing/plaf/synth/SynthTableHeaderUI$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/NoSuchFieldError.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SortOrder.h>
#include <javax/swing/plaf/synth/SynthTableHeaderUI.h>
#include <jcpp.h>

#undef ASCENDING
#undef DESCENDING
#undef UNSORTED

using $SortOrderArray = $Array<::javax::swing::SortOrder>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $SortOrder = ::javax::swing::SortOrder;
using $SynthTableHeaderUI = ::javax::swing::plaf::synth::SynthTableHeaderUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthTableHeaderUI$1_FieldInfo_[] = {
	{"$SwitchMap$javax$swing$SortOrder", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SynthTableHeaderUI$1, $SwitchMap$javax$swing$SortOrder)},
	{}
};

$EnclosingMethodInfo _SynthTableHeaderUI$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.synth.SynthTableHeaderUI",
	nullptr,
	nullptr
};

$InnerClassInfo _SynthTableHeaderUI$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthTableHeaderUI$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _SynthTableHeaderUI$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.swing.plaf.synth.SynthTableHeaderUI$1",
	"java.lang.Object",
	nullptr,
	_SynthTableHeaderUI$1_FieldInfo_,
	nullptr,
	nullptr,
	&_SynthTableHeaderUI$1_EnclosingMethodInfo_,
	_SynthTableHeaderUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthTableHeaderUI"
};

$Object* allocate$SynthTableHeaderUI$1($Class* clazz) {
	return $of($alloc(SynthTableHeaderUI$1));
}

$ints* SynthTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder = nullptr;

void clinit$SynthTableHeaderUI$1($Class* class$) {
	$assignStatic(SynthTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder, $new($ints, $($SortOrder::values())->length));
	{
		try {
			$nc(SynthTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder)->set($SortOrder::ASCENDING->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SynthTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder)->set($SortOrder::DESCENDING->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(SynthTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder)->set($SortOrder::UNSORTED->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

SynthTableHeaderUI$1::SynthTableHeaderUI$1() {
}

$Class* SynthTableHeaderUI$1::load$($String* name, bool initialize) {
	$loadClass(SynthTableHeaderUI$1, name, initialize, &_SynthTableHeaderUI$1_ClassInfo_, clinit$SynthTableHeaderUI$1, allocate$SynthTableHeaderUI$1);
	return class$;
}

$Class* SynthTableHeaderUI$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax