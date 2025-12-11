#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel$10.h>

#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel.h>
#include <com/sun/java/swing/plaf/motif/MotifTreeCellRenderer.h>
#include <javax/swing/Icon.h>
#include <javax/swing/UIDefaults.h>
#include <jcpp.h>

using $MotifLookAndFeel = ::com::sun::java::swing::plaf::motif::MotifLookAndFeel;
using $MotifTreeCellRenderer = ::com::sun::java::swing::plaf::motif::MotifTreeCellRenderer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifLookAndFeel$10_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(MotifLookAndFeel$10, this$0)},
	{}
};

$MethodInfo _MotifLookAndFeel$10_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifLookAndFeel;)V", nullptr, 0, $method(static_cast<void(MotifLookAndFeel$10::*)($MotifLookAndFeel*)>(&MotifLookAndFeel$10::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifLookAndFeel$10_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel",
	"initComponentDefaults",
	"(Ljavax/swing/UIDefaults;)V"
};

$InnerClassInfo _MotifLookAndFeel$10_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifLookAndFeel$10", nullptr, nullptr, 0},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MotifLookAndFeel$10_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel$10",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	_MotifLookAndFeel$10_FieldInfo_,
	_MotifLookAndFeel$10_MethodInfo_,
	nullptr,
	&_MotifLookAndFeel$10_EnclosingMethodInfo_,
	_MotifLookAndFeel$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel"
};

$Object* allocate$MotifLookAndFeel$10($Class* clazz) {
	return $of($alloc(MotifLookAndFeel$10));
}

void MotifLookAndFeel$10::init$($MotifLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* MotifLookAndFeel$10::createValue($UIDefaults* table) {
	return $of($MotifTreeCellRenderer::loadLeafIcon());
}

MotifLookAndFeel$10::MotifLookAndFeel$10() {
}

$Class* MotifLookAndFeel$10::load$($String* name, bool initialize) {
	$loadClass(MotifLookAndFeel$10, name, initialize, &_MotifLookAndFeel$10_ClassInfo_, allocate$MotifLookAndFeel$10);
	return class$;
}

$Class* MotifLookAndFeel$10::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com