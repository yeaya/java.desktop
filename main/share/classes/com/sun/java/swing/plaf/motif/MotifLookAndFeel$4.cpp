#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel$4.h>

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

$FieldInfo _MotifLookAndFeel$4_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(MotifLookAndFeel$4, this$0)},
	{}
};

$MethodInfo _MotifLookAndFeel$4_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifLookAndFeel;)V", nullptr, 0, $method(static_cast<void(MotifLookAndFeel$4::*)($MotifLookAndFeel*)>(&MotifLookAndFeel$4::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifLookAndFeel$4_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel",
	"initComponentDefaults",
	"(Ljavax/swing/UIDefaults;)V"
};

$InnerClassInfo _MotifLookAndFeel$4_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifLookAndFeel$4", nullptr, nullptr, 0},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MotifLookAndFeel$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel$4",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	_MotifLookAndFeel$4_FieldInfo_,
	_MotifLookAndFeel$4_MethodInfo_,
	nullptr,
	&_MotifLookAndFeel$4_EnclosingMethodInfo_,
	_MotifLookAndFeel$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel"
};

$Object* allocate$MotifLookAndFeel$4($Class* clazz) {
	return $of($alloc(MotifLookAndFeel$4));
}

void MotifLookAndFeel$4::init$($MotifLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* MotifLookAndFeel$4::createValue($UIDefaults* table) {
	return $of($MotifIconFactory::getCheckBoxIcon());
}

MotifLookAndFeel$4::MotifLookAndFeel$4() {
}

$Class* MotifLookAndFeel$4::load$($String* name, bool initialize) {
	$loadClass(MotifLookAndFeel$4, name, initialize, &_MotifLookAndFeel$4_ClassInfo_, allocate$MotifLookAndFeel$4);
	return class$;
}

$Class* MotifLookAndFeel$4::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com