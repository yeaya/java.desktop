#include <javax/swing/plaf/nimbus/NimbusLookAndFeel$2.h>

#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/nimbus/TableScrollPaneCorner.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $TableScrollPaneCorner = ::javax::swing::plaf::nimbus::TableScrollPaneCorner;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusLookAndFeel$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(NimbusLookAndFeel$2, this$0)},
	{}
};

$MethodInfo _NimbusLookAndFeel$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;)V", nullptr, 0, $method(static_cast<void(NimbusLookAndFeel$2::*)($NimbusLookAndFeel*)>(&NimbusLookAndFeel$2::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NimbusLookAndFeel$2_EnclosingMethodInfo_ = {
	"javax.swing.plaf.nimbus.NimbusLookAndFeel",
	"getDefaults",
	"()Ljavax/swing/UIDefaults;"
};

$InnerClassInfo _NimbusLookAndFeel$2_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusLookAndFeel$2", nullptr, nullptr, 0},
	{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _NimbusLookAndFeel$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusLookAndFeel$2",
	"java.lang.Object",
	"javax.swing.UIDefaults$ActiveValue",
	_NimbusLookAndFeel$2_FieldInfo_,
	_NimbusLookAndFeel$2_MethodInfo_,
	nullptr,
	&_NimbusLookAndFeel$2_EnclosingMethodInfo_,
	_NimbusLookAndFeel$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusLookAndFeel"
};

$Object* allocate$NimbusLookAndFeel$2($Class* clazz) {
	return $of($alloc(NimbusLookAndFeel$2));
}

void NimbusLookAndFeel$2::init$($NimbusLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* NimbusLookAndFeel$2::createValue($UIDefaults* table) {
	return $of($new($TableScrollPaneCorner));
}

NimbusLookAndFeel$2::NimbusLookAndFeel$2() {
}

$Class* NimbusLookAndFeel$2::load$($String* name, bool initialize) {
	$loadClass(NimbusLookAndFeel$2, name, initialize, &_NimbusLookAndFeel$2_ClassInfo_, allocate$NimbusLookAndFeel$2);
	return class$;
}

$Class* NimbusLookAndFeel$2::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax