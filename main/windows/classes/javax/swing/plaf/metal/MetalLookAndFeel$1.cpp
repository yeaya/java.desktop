#include <javax/swing/plaf/metal/MetalLookAndFeel$1.h>

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
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <javax/swing/LayoutStyle.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef INDENT
#undef RELATED
#undef UNRELATED

using $LayoutStyle$ComponentPlacementArray = $Array<::javax::swing::LayoutStyle$ComponentPlacement>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $LayoutStyle = ::javax::swing::LayoutStyle;
using $LayoutStyle$ComponentPlacement = ::javax::swing::LayoutStyle$ComponentPlacement;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalLookAndFeel$1_FieldInfo_[] = {
	{"$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MetalLookAndFeel$1, $SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)},
	{}
};

$EnclosingMethodInfo _MetalLookAndFeel$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.metal.MetalLookAndFeel",
	nullptr,
	nullptr
};

$InnerClassInfo _MetalLookAndFeel$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalLookAndFeel$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _MetalLookAndFeel$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"javax.swing.plaf.metal.MetalLookAndFeel$1",
	"java.lang.Object",
	nullptr,
	_MetalLookAndFeel$1_FieldInfo_,
	nullptr,
	nullptr,
	&_MetalLookAndFeel$1_EnclosingMethodInfo_,
	_MetalLookAndFeel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalLookAndFeel"
};

$Object* allocate$MetalLookAndFeel$1($Class* clazz) {
	return $of($alloc(MetalLookAndFeel$1));
}

$ints* MetalLookAndFeel$1::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement = nullptr;

void clinit$MetalLookAndFeel$1($Class* class$) {
	$assignStatic(MetalLookAndFeel$1::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement, $new($ints, $($LayoutStyle$ComponentPlacement::values())->length));
	{
		try {
			$nc(MetalLookAndFeel$1::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)->set($LayoutStyle$ComponentPlacement::INDENT->ordinal(), 1);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(MetalLookAndFeel$1::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)->set($LayoutStyle$ComponentPlacement::RELATED->ordinal(), 2);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
		try {
			$nc(MetalLookAndFeel$1::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)->set($LayoutStyle$ComponentPlacement::UNRELATED->ordinal(), 3);
		} catch ($NoSuchFieldError&) {
			$catch();
		}
	}
}

MetalLookAndFeel$1::MetalLookAndFeel$1() {
}

$Class* MetalLookAndFeel$1::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$1, name, initialize, &_MetalLookAndFeel$1_ClassInfo_, clinit$MetalLookAndFeel$1, allocate$MetalLookAndFeel$1);
	return class$;
}

$Class* MetalLookAndFeel$1::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax