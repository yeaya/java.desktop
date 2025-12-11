#include <com/apple/laf/AquaLookAndFeel$3.h>

#include <com/apple/laf/AquaLookAndFeel.h>
#include <javax/swing/DefaultListCellRenderer$UIResource.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $AquaLookAndFeel = ::com::apple::laf::AquaLookAndFeel;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListCellRenderer$UIResource = ::javax::swing::DefaultListCellRenderer$UIResource;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaLookAndFeel$3_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaLookAndFeel$3, this$0)},
	{}
};

$MethodInfo _AquaLookAndFeel$3_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaLookAndFeel;)V", nullptr, 0, $method(static_cast<void(AquaLookAndFeel$3::*)($AquaLookAndFeel*)>(&AquaLookAndFeel$3::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaLookAndFeel$3_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaLookAndFeel",
	"initComponentDefaults",
	"(Ljavax/swing/UIDefaults;)V"
};

$InnerClassInfo _AquaLookAndFeel$3_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaLookAndFeel$3", nullptr, nullptr, 0},
	{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaLookAndFeel$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaLookAndFeel$3",
	"java.lang.Object",
	"javax.swing.UIDefaults$ActiveValue",
	_AquaLookAndFeel$3_FieldInfo_,
	_AquaLookAndFeel$3_MethodInfo_,
	nullptr,
	&_AquaLookAndFeel$3_EnclosingMethodInfo_,
	_AquaLookAndFeel$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaLookAndFeel"
};

$Object* allocate$AquaLookAndFeel$3($Class* clazz) {
	return $of($alloc(AquaLookAndFeel$3));
}

void AquaLookAndFeel$3::init$($AquaLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* AquaLookAndFeel$3::createValue($UIDefaults* defaultsTable) {
	return $of($new($DefaultListCellRenderer$UIResource));
}

AquaLookAndFeel$3::AquaLookAndFeel$3() {
}

$Class* AquaLookAndFeel$3::load$($String* name, bool initialize) {
	$loadClass(AquaLookAndFeel$3, name, initialize, &_AquaLookAndFeel$3_ClassInfo_, allocate$AquaLookAndFeel$3);
	return class$;
}

$Class* AquaLookAndFeel$3::class$ = nullptr;

		} // laf
	} // apple
} // com