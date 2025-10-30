#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel$2.h>

#include <com/sun/java/swing/plaf/motif/MotifIconFactory.h>
#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $MotifIconFactory = ::com::sun::java::swing::plaf::motif::MotifIconFactory;
using $MotifLookAndFeel = ::com::sun::java::swing::plaf::motif::MotifLookAndFeel;
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

$FieldInfo _MotifLookAndFeel$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(MotifLookAndFeel$2, this$0)},
	{}
};

$MethodInfo _MotifLookAndFeel$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifLookAndFeel;)V", nullptr, 0, $method(static_cast<void(MotifLookAndFeel$2::*)($MotifLookAndFeel*)>(&MotifLookAndFeel$2::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifLookAndFeel$2_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel",
	"initComponentDefaults",
	"(Ljavax/swing/UIDefaults;)V"
};

$InnerClassInfo _MotifLookAndFeel$2_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifLookAndFeel$2", nullptr, nullptr, 0},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MotifLookAndFeel$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel$2",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	_MotifLookAndFeel$2_FieldInfo_,
	_MotifLookAndFeel$2_MethodInfo_,
	nullptr,
	&_MotifLookAndFeel$2_EnclosingMethodInfo_,
	_MotifLookAndFeel$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel"
};

$Object* allocate$MotifLookAndFeel$2($Class* clazz) {
	return $of($alloc(MotifLookAndFeel$2));
}

void MotifLookAndFeel$2::init$($MotifLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* MotifLookAndFeel$2::createValue($UIDefaults* table) {
	return $of($MotifIconFactory::getMenuItemArrowIcon());
}

MotifLookAndFeel$2::MotifLookAndFeel$2() {
}

$Class* MotifLookAndFeel$2::load$($String* name, bool initialize) {
	$loadClass(MotifLookAndFeel$2, name, initialize, &_MotifLookAndFeel$2_ClassInfo_, allocate$MotifLookAndFeel$2);
	return class$;
}

$Class* MotifLookAndFeel$2::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com