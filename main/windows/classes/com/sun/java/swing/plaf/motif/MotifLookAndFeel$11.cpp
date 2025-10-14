#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel$11.h>

#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel.h>
#include <com/sun/java/swing/plaf/motif/MotifTreeUI$MotifExpandedIcon.h>
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
#include <jcpp.h>

using $MotifLookAndFeel = ::com::sun::java::swing::plaf::motif::MotifLookAndFeel;
using $MotifTreeUI$MotifExpandedIcon = ::com::sun::java::swing::plaf::motif::MotifTreeUI$MotifExpandedIcon;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIDefaults$LazyValue = ::javax::swing::UIDefaults$LazyValue;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifLookAndFeel$11_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(MotifLookAndFeel$11, this$0)},
	{}
};

$MethodInfo _MotifLookAndFeel$11_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifLookAndFeel;)V", nullptr, 0, $method(static_cast<void(MotifLookAndFeel$11::*)($MotifLookAndFeel*)>(&MotifLookAndFeel$11::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifLookAndFeel$11_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel",
	"initComponentDefaults",
	"(Ljavax/swing/UIDefaults;)V"
};

$InnerClassInfo _MotifLookAndFeel$11_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifLookAndFeel$11", nullptr, nullptr, 0},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MotifLookAndFeel$11_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel$11",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	_MotifLookAndFeel$11_FieldInfo_,
	_MotifLookAndFeel$11_MethodInfo_,
	nullptr,
	&_MotifLookAndFeel$11_EnclosingMethodInfo_,
	_MotifLookAndFeel$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel"
};

$Object* allocate$MotifLookAndFeel$11($Class* clazz) {
	return $of($alloc(MotifLookAndFeel$11));
}

void MotifLookAndFeel$11::init$($MotifLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* MotifLookAndFeel$11::createValue($UIDefaults* table) {
	return $of($MotifTreeUI$MotifExpandedIcon::createExpandedIcon());
}

MotifLookAndFeel$11::MotifLookAndFeel$11() {
}

$Class* MotifLookAndFeel$11::load$($String* name, bool initialize) {
	$loadClass(MotifLookAndFeel$11, name, initialize, &_MotifLookAndFeel$11_ClassInfo_, allocate$MotifLookAndFeel$11);
	return class$;
}

$Class* MotifLookAndFeel$11::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com