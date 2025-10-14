#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel$3.h>

#include <com/sun/java/swing/plaf/motif/MotifIconFactory.h>
#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel.h>
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

$FieldInfo _MotifLookAndFeel$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(MotifLookAndFeel$3, this$0)},
	{}
};

$MethodInfo _MotifLookAndFeel$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifLookAndFeel;)V", nullptr, 0, $method(static_cast<void(MotifLookAndFeel$3::*)($MotifLookAndFeel*)>(&MotifLookAndFeel$3::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifLookAndFeel$3_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel",
	"initComponentDefaults",
	"(Ljavax/swing/UIDefaults;)V"
};

$InnerClassInfo _MotifLookAndFeel$3_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifLookAndFeel$3", nullptr, nullptr, 0},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MotifLookAndFeel$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel$3",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	_MotifLookAndFeel$3_FieldInfo_,
	_MotifLookAndFeel$3_MethodInfo_,
	nullptr,
	&_MotifLookAndFeel$3_EnclosingMethodInfo_,
	_MotifLookAndFeel$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel"
};

$Object* allocate$MotifLookAndFeel$3($Class* clazz) {
	return $of($alloc(MotifLookAndFeel$3));
}

void MotifLookAndFeel$3::init$($MotifLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* MotifLookAndFeel$3::createValue($UIDefaults* table) {
	return $of($MotifIconFactory::getMenuArrowIcon());
}

MotifLookAndFeel$3::MotifLookAndFeel$3() {
}

$Class* MotifLookAndFeel$3::load$($String* name, bool initialize) {
	$loadClass(MotifLookAndFeel$3, name, initialize, &_MotifLookAndFeel$3_ClassInfo_, allocate$MotifLookAndFeel$3);
	return class$;
}

$Class* MotifLookAndFeel$3::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com