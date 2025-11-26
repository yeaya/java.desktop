#include <com/sun/java/swing/plaf/gtk/GTKIconFactory$MenuArrowIcon.h>

#include <com/sun/java/swing/plaf/gtk/GTKConstants$ArrowType.h>
#include <com/sun/java/swing/plaf/gtk/GTKIconFactory$DelegatingIcon.h>
#include <com/sun/java/swing/plaf/gtk/GTKIconFactory.h>
#include <com/sun/java/swing/plaf/gtk/GTKPainter.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Graphics.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <jcpp.h>

#undef INSTANCE
#undef LEFT
#undef PARAM_TYPES
#undef RIGHT
#undef TYPE

using $GTKConstants$ArrowType = ::com::sun::java::swing::plaf::gtk::GTKConstants$ArrowType;
using $GTKIconFactory = ::com::sun::java::swing::plaf::gtk::GTKIconFactory;
using $GTKIconFactory$DelegatingIcon = ::com::sun::java::swing::plaf::gtk::GTKIconFactory$DelegatingIcon;
using $GTKPainter = ::com::sun::java::swing::plaf::gtk::GTKPainter;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $JComponent = ::javax::swing::JComponent;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKIconFactory$MenuArrowIcon_FieldInfo_[] = {
	{"PARAM_TYPES", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(GTKIconFactory$MenuArrowIcon, PARAM_TYPES)},
	{}
};

$MethodInfo _GTKIconFactory$MenuArrowIcon_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(GTKIconFactory$MenuArrowIcon::*)()>(&GTKIconFactory$MenuArrowIcon::init$))},
	{"getMethodParamTypes", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PROTECTED},
	{"paintIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKIconFactory$MenuArrowIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKIconFactory$MenuArrowIcon", "com.sun.java.swing.plaf.gtk.GTKIconFactory", "MenuArrowIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.gtk.GTKIconFactory$DelegatingIcon", "com.sun.java.swing.plaf.gtk.GTKIconFactory", "DelegatingIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _GTKIconFactory$MenuArrowIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKIconFactory$MenuArrowIcon",
	"com.sun.java.swing.plaf.gtk.GTKIconFactory$DelegatingIcon",
	nullptr,
	_GTKIconFactory$MenuArrowIcon_FieldInfo_,
	_GTKIconFactory$MenuArrowIcon_MethodInfo_,
	nullptr,
	nullptr,
	_GTKIconFactory$MenuArrowIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKIconFactory"
};

$Object* allocate$GTKIconFactory$MenuArrowIcon($Class* clazz) {
	return $of($alloc(GTKIconFactory$MenuArrowIcon));
}

$ClassArray* GTKIconFactory$MenuArrowIcon::PARAM_TYPES = nullptr;

void GTKIconFactory$MenuArrowIcon::init$() {
	$GTKIconFactory$DelegatingIcon::init$("paintMenuArrowIcon"_s);
}

$ClassArray* GTKIconFactory$MenuArrowIcon::getMethodParamTypes() {
	return GTKIconFactory$MenuArrowIcon::PARAM_TYPES;
}

void GTKIconFactory$MenuArrowIcon::paintIcon($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	if (context != nullptr) {
		$init($GTKConstants$ArrowType);
		$GTKConstants$ArrowType* arrowDir = $GTKConstants$ArrowType::RIGHT;
		if (!$nc($($nc($(context->getComponent()))->getComponentOrientation()))->isLeftToRight()) {
			arrowDir = $GTKConstants$ArrowType::LEFT;
		}
		$init($GTKPainter);
		$nc($GTKPainter::INSTANCE)->paintIcon(context, g, $(getMethod()), x, y, w, h, arrowDir);
	}
}

void clinit$GTKIconFactory$MenuArrowIcon($Class* class$) {
	$load($SynthContext);
	$load($Graphics);
	$init($Integer);
	$load($GTKConstants$ArrowType);
	$assignStatic(GTKIconFactory$MenuArrowIcon::PARAM_TYPES, $new($ClassArray, {
		$SynthContext::class$,
		$Graphics::class$,
		$Integer::TYPE,
		$Integer::TYPE,
		$Integer::TYPE,
		$Integer::TYPE,
		$Integer::TYPE,
		$GTKConstants$ArrowType::class$
	}));
}

GTKIconFactory$MenuArrowIcon::GTKIconFactory$MenuArrowIcon() {
}

$Class* GTKIconFactory$MenuArrowIcon::load$($String* name, bool initialize) {
	$loadClass(GTKIconFactory$MenuArrowIcon, name, initialize, &_GTKIconFactory$MenuArrowIcon_ClassInfo_, clinit$GTKIconFactory$MenuArrowIcon, allocate$GTKIconFactory$MenuArrowIcon);
	return class$;
}

$Class* GTKIconFactory$MenuArrowIcon::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com