#include <javax/swing/plaf/metal/OceanTheme$5.h>

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
using $OceanTheme = ::javax::swing::plaf::metal::OceanTheme;
using $OceanTheme$IFIcon = ::javax::swing::plaf::metal::OceanTheme$IFIcon;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _OceanTheme$5_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/OceanTheme;", nullptr, $FINAL | $SYNTHETIC, $field(OceanTheme$5, this$0)},
	{}
};

$MethodInfo _OceanTheme$5_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/OceanTheme;)V", nullptr, 0, $method(static_cast<void(OceanTheme$5::*)($OceanTheme*)>(&OceanTheme$5::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _OceanTheme$5_EnclosingMethodInfo_ = {
	"javax.swing.plaf.metal.OceanTheme",
	"addCustomEntriesToTable",
	"(Ljavax/swing/UIDefaults;)V"
};

$InnerClassInfo _OceanTheme$5_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.OceanTheme$5", nullptr, nullptr, 0},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _OceanTheme$5_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.OceanTheme$5",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	_OceanTheme$5_FieldInfo_,
	_OceanTheme$5_MethodInfo_,
	nullptr,
	&_OceanTheme$5_EnclosingMethodInfo_,
	_OceanTheme$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.OceanTheme"
};

$Object* allocate$OceanTheme$5($Class* clazz) {
	return $of($alloc(OceanTheme$5));
}

void OceanTheme$5::init$($OceanTheme* this$0) {
	$set(this, this$0, this$0);
}

$Object* OceanTheme$5::createValue($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$var($Icon, var$0, this->this$0->getHastenedIcon("icons/ocean/paletteClose.gif"_s, table));
	return $of($new($OceanTheme$IFIcon, var$0, $(this->this$0->getHastenedIcon("icons/ocean/paletteClose-pressed.gif"_s, table))));
}

OceanTheme$5::OceanTheme$5() {
}

$Class* OceanTheme$5::load$($String* name, bool initialize) {
	$loadClass(OceanTheme$5, name, initialize, &_OceanTheme$5_ClassInfo_, allocate$OceanTheme$5);
	return class$;
}

$Class* OceanTheme$5::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax