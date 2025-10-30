#include <javax/swing/plaf/basic/BasicLookAndFeel$2.h>

#include <javax/swing/DefaultListCellRenderer$UIResource.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListCellRenderer$UIResource = ::javax::swing::DefaultListCellRenderer$UIResource;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$ActiveValue = ::javax::swing::UIDefaults$ActiveValue;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicLookAndFeel$2_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(BasicLookAndFeel$2, this$0)},
	{}
};

$MethodInfo _BasicLookAndFeel$2_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicLookAndFeel;)V", nullptr, 0, $method(static_cast<void(BasicLookAndFeel$2::*)($BasicLookAndFeel*)>(&BasicLookAndFeel$2::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicLookAndFeel$2_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicLookAndFeel",
	"initComponentDefaults",
	"(Ljavax/swing/UIDefaults;)V"
};

$InnerClassInfo _BasicLookAndFeel$2_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicLookAndFeel$2", nullptr, nullptr, 0},
	{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _BasicLookAndFeel$2_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicLookAndFeel$2",
	"java.lang.Object",
	"javax.swing.UIDefaults$ActiveValue",
	_BasicLookAndFeel$2_FieldInfo_,
	_BasicLookAndFeel$2_MethodInfo_,
	nullptr,
	&_BasicLookAndFeel$2_EnclosingMethodInfo_,
	_BasicLookAndFeel$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicLookAndFeel"
};

$Object* allocate$BasicLookAndFeel$2($Class* clazz) {
	return $of($alloc(BasicLookAndFeel$2));
}

void BasicLookAndFeel$2::init$($BasicLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* BasicLookAndFeel$2::createValue($UIDefaults* table) {
	return $of($new($DefaultListCellRenderer$UIResource));
}

BasicLookAndFeel$2::BasicLookAndFeel$2() {
}

$Class* BasicLookAndFeel$2::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$2, name, initialize, &_BasicLookAndFeel$2_ClassInfo_, allocate$BasicLookAndFeel$2);
	return class$;
}

$Class* BasicLookAndFeel$2::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax