#include <com/sun/java/swing/plaf/motif/MotifTreeUI$MotifCollapsedIcon.h>

#include <com/sun/java/swing/plaf/motif/MotifTreeUI$MotifExpandedIcon.h>
#include <com/sun/java/swing/plaf/motif/MotifTreeUI.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $MotifTreeUI = ::com::sun::java::swing::plaf::motif::MotifTreeUI;
using $MotifTreeUI$MotifExpandedIcon = ::com::sun::java::swing::plaf::motif::MotifTreeUI$MotifExpandedIcon;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifTreeUI$MotifCollapsedIcon_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifTreeUI$MotifCollapsedIcon::*)()>(&MotifTreeUI$MotifCollapsedIcon::init$))},
	{"createCollapsedIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MotifTreeUI$MotifCollapsedIcon::createCollapsedIcon))},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifTreeUI$MotifCollapsedIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifTreeUI$MotifCollapsedIcon", "com.sun.java.swing.plaf.motif.MotifTreeUI", "MotifCollapsedIcon", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.motif.MotifTreeUI$MotifExpandedIcon", "com.sun.java.swing.plaf.motif.MotifTreeUI", "MotifExpandedIcon", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MotifTreeUI$MotifCollapsedIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifTreeUI$MotifCollapsedIcon",
	"com.sun.java.swing.plaf.motif.MotifTreeUI$MotifExpandedIcon",
	nullptr,
	nullptr,
	_MotifTreeUI$MotifCollapsedIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MotifTreeUI$MotifCollapsedIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifTreeUI"
};

$Object* allocate$MotifTreeUI$MotifCollapsedIcon($Class* clazz) {
	return $of($alloc(MotifTreeUI$MotifCollapsedIcon));
}

void MotifTreeUI$MotifCollapsedIcon::init$() {
	$MotifTreeUI$MotifExpandedIcon::init$();
}

$Icon* MotifTreeUI$MotifCollapsedIcon::createCollapsedIcon() {
	$init(MotifTreeUI$MotifCollapsedIcon);
	return $new(MotifTreeUI$MotifCollapsedIcon);
}

void MotifTreeUI$MotifCollapsedIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$MotifTreeUI$MotifExpandedIcon::paintIcon(c, g, x, y);
	$nc(g)->drawLine(x + 7 - 1, y + 3, x + 7 - 1, y + (14 - 4));
	g->drawLine(x + 7, y + 3, x + 7, y + (14 - 4));
}

MotifTreeUI$MotifCollapsedIcon::MotifTreeUI$MotifCollapsedIcon() {
}

$Class* MotifTreeUI$MotifCollapsedIcon::load$($String* name, bool initialize) {
	$loadClass(MotifTreeUI$MotifCollapsedIcon, name, initialize, &_MotifTreeUI$MotifCollapsedIcon_ClassInfo_, allocate$MotifTreeUI$MotifCollapsedIcon);
	return class$;
}

$Class* MotifTreeUI$MotifCollapsedIcon::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com