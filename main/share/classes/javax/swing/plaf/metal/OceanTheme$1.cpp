#include <javax/swing/plaf/metal/OceanTheme$1.h>

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

$FieldInfo _OceanTheme$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/OceanTheme;", nullptr, $FINAL | $SYNTHETIC, $field(OceanTheme$1, this$0)},
	{}
};

$MethodInfo _OceanTheme$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/OceanTheme;)V", nullptr, 0, $method(static_cast<void(OceanTheme$1::*)($OceanTheme*)>(&OceanTheme$1::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _OceanTheme$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.metal.OceanTheme",
	"addCustomEntriesToTable",
	"(Ljavax/swing/UIDefaults;)V"
};

$InnerClassInfo _OceanTheme$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.OceanTheme$1", nullptr, nullptr, 0},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _OceanTheme$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.OceanTheme$1",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	_OceanTheme$1_FieldInfo_,
	_OceanTheme$1_MethodInfo_,
	nullptr,
	&_OceanTheme$1_EnclosingMethodInfo_,
	_OceanTheme$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.OceanTheme"
};

$Object* allocate$OceanTheme$1($Class* clazz) {
	return $of($alloc(OceanTheme$1));
}

void OceanTheme$1::init$($OceanTheme* this$0) {
	$set(this, this$0, this$0);
}

$Object* OceanTheme$1::createValue($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$var($Icon, var$0, this->this$0->getHastenedIcon("icons/ocean/close.gif"_s, table));
	return $of($new($OceanTheme$IFIcon, var$0, $(this->this$0->getHastenedIcon("icons/ocean/close-pressed.gif"_s, table))));
}

OceanTheme$1::OceanTheme$1() {
}

$Class* OceanTheme$1::load$($String* name, bool initialize) {
	$loadClass(OceanTheme$1, name, initialize, &_OceanTheme$1_ClassInfo_, allocate$OceanTheme$1);
	return class$;
}

$Class* OceanTheme$1::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax