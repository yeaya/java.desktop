#include <javax/swing/text/PlainView$2.h>

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
#include <javax/swing/text/PlainView$FPMethodArgs.h>
#include <javax/swing/text/PlainView.h>
#include <jcpp.h>

#undef GNNC
#undef GNNII
#undef IGNN
#undef IIGNN

using $PlainView$FPMethodArgsArray = $Array<::javax::swing::text::PlainView$FPMethodArgs>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $PlainView = ::javax::swing::text::PlainView;
using $PlainView$FPMethodArgs = ::javax::swing::text::PlainView$FPMethodArgs;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _PlainView$2_FieldInfo_[] = {
	{"$SwitchMap$javax$swing$text$PlainView$FPMethodArgs", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PlainView$2, $SwitchMap$javax$swing$text$PlainView$FPMethodArgs)},
	{}
};

$EnclosingMethodInfo _PlainView$2_EnclosingMethodInfo_ = {
	"javax.swing.text.PlainView",
	nullptr,
	nullptr
};

$InnerClassInfo _PlainView$2_InnerClassesInfo_[] = {
	{"javax.swing.text.PlainView$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _PlainView$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.swing.text.PlainView$2",
	"java.lang.Object",
	nullptr,
	_PlainView$2_FieldInfo_,
	nullptr,
	nullptr,
	&_PlainView$2_EnclosingMethodInfo_,
	_PlainView$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.PlainView"
};

$Object* allocate$PlainView$2($Class* clazz) {
	return $of($alloc(PlainView$2));
}

$ints* PlainView$2::$SwitchMap$javax$swing$text$PlainView$FPMethodArgs = nullptr;

void clinit$PlainView$2($Class* class$) {
	$assignStatic(PlainView$2::$SwitchMap$javax$swing$text$PlainView$FPMethodArgs, $new($ints, $($PlainView$FPMethodArgs::values())->length));
	{
		try {
			$nc(PlainView$2::$SwitchMap$javax$swing$text$PlainView$FPMethodArgs)->set($PlainView$FPMethodArgs::IGNN->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(PlainView$2::$SwitchMap$javax$swing$text$PlainView$FPMethodArgs)->set($PlainView$FPMethodArgs::IIGNN->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(PlainView$2::$SwitchMap$javax$swing$text$PlainView$FPMethodArgs)->set($PlainView$FPMethodArgs::GNNII->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(PlainView$2::$SwitchMap$javax$swing$text$PlainView$FPMethodArgs)->set($PlainView$FPMethodArgs::GNNC->ordinal(), 4);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

PlainView$2::PlainView$2() {
}

$Class* PlainView$2::load$($String* name, bool initialize) {
	$loadClass(PlainView$2, name, initialize, &_PlainView$2_ClassInfo_, clinit$PlainView$2, allocate$PlainView$2);
	return class$;
}

$Class* PlainView$2::class$ = nullptr;

		} // text
	} // swing
} // javax