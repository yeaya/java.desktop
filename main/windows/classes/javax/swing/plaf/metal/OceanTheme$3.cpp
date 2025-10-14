#include <javax/swing/plaf/metal/OceanTheme$3.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/metal/OceanTheme$IFIcon.h>
#include <javax/swing/plaf/metal/OceanTheme.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;
using $OceanTheme = ::javax::swing::plaf::metal::OceanTheme;
using $OceanTheme$IFIcon = ::javax::swing::plaf::metal::OceanTheme$IFIcon;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _OceanTheme$3_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/OceanTheme;", nullptr, $FINAL | $SYNTHETIC, $field(OceanTheme$3, this$0)},
	{}
};

$MethodInfo _OceanTheme$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/OceanTheme;)V", nullptr, 0, $method(static_cast<void(OceanTheme$3::*)($OceanTheme*)>(&OceanTheme$3::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _OceanTheme$3_EnclosingMethodInfo_ = {
	"javax.swing.plaf.metal.OceanTheme",
	"addCustomEntriesToTable",
	"(Ljavax/swing/UIDefaults;)V"
};

$InnerClassInfo _OceanTheme$3_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.OceanTheme$3", nullptr, nullptr, 0},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _OceanTheme$3_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.OceanTheme$3",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	_OceanTheme$3_FieldInfo_,
	_OceanTheme$3_MethodInfo_,
	nullptr,
	&_OceanTheme$3_EnclosingMethodInfo_,
	_OceanTheme$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.OceanTheme"
};

$Object* allocate$OceanTheme$3($Class* clazz) {
	return $of($alloc(OceanTheme$3));
}

void OceanTheme$3::init$($OceanTheme* this$0) {
	$set(this, this$0, this$0);
}

$Object* OceanTheme$3::createValue($UIDefaults* table) {
	$var($Icon, var$0, this->this$0->getHastenedIcon("icons/ocean/minimize.gif"_s, table));
	return $of($new($OceanTheme$IFIcon, var$0, $(this->this$0->getHastenedIcon("icons/ocean/minimize-pressed.gif"_s, table))));
}

OceanTheme$3::OceanTheme$3() {
}

$Class* OceanTheme$3::load$($String* name, bool initialize) {
	$loadClass(OceanTheme$3, name, initialize, &_OceanTheme$3_ClassInfo_, allocate$OceanTheme$3);
	return class$;
}

$Class* OceanTheme$3::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax