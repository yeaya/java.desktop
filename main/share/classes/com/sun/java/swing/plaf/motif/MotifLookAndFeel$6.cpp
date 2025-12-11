#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel$6.h>

#include <com/sun/java/swing/plaf/motif/MotifLookAndFeel.h>
#include <java/awt/Color.h>
#include <java/lang/Math.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <jcpp.h>

using $MotifLookAndFeel = ::com::sun::java::swing::plaf::motif::MotifLookAndFeel;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifLookAndFeel$6_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(MotifLookAndFeel$6, this$0)},
	{}
};

$MethodInfo _MotifLookAndFeel$6_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifLookAndFeel;)V", nullptr, 0, $method(static_cast<void(MotifLookAndFeel$6::*)($MotifLookAndFeel*)>(&MotifLookAndFeel$6::init$))},
	{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MotifLookAndFeel$6_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel",
	"initComponentDefaults",
	"(Ljavax/swing/UIDefaults;)V"
};

$InnerClassInfo _MotifLookAndFeel$6_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifLookAndFeel$6", nullptr, nullptr, 0},
	{"javax.swing.UIDefaults$LazyValue", "javax.swing.UIDefaults", "LazyValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _MotifLookAndFeel$6_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel$6",
	"java.lang.Object",
	"javax.swing.UIDefaults$LazyValue",
	_MotifLookAndFeel$6_FieldInfo_,
	_MotifLookAndFeel$6_MethodInfo_,
	nullptr,
	&_MotifLookAndFeel$6_EnclosingMethodInfo_,
	_MotifLookAndFeel$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifLookAndFeel"
};

$Object* allocate$MotifLookAndFeel$6($Class* clazz) {
	return $of($alloc(MotifLookAndFeel$6));
}

void MotifLookAndFeel$6::init$($MotifLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

$Object* MotifLookAndFeel$6::createValue($UIDefaults* table) {
	$var($Color, c, $nc(table)->getColor("control"_s));
	int32_t var$0 = $Math::max($cast(int32_t, ($nc(c)->getRed() * 0.85)), 0);
	int32_t var$1 = $Math::max($cast(int32_t, ($nc(c)->getGreen() * 0.85)), 0);
	return $of($new($ColorUIResource, var$0, var$1, $Math::max($cast(int32_t, ($nc(c)->getBlue() * 0.85)), 0)));
}

MotifLookAndFeel$6::MotifLookAndFeel$6() {
}

$Class* MotifLookAndFeel$6::load$($String* name, bool initialize) {
	$loadClass(MotifLookAndFeel$6, name, initialize, &_MotifLookAndFeel$6_ClassInfo_, allocate$MotifLookAndFeel$6);
	return class$;
}

$Class* MotifLookAndFeel$6::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com